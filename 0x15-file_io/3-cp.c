#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void print_usage_and_exit() {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
}

void print_error_and_exit(const char* message, const char* file_name) {
    dprintf(STDERR_FILENO, "Error: %s %s\n", message, file_name);
    exit(98);
}

void print_write_error_and_exit(const char* file_name) {
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
    exit(99);
}

void print_close_error_and_exit(int fd) {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
    exit(100);
}

int main(int argc, char *argv[]) {
	const char* file_from;
	const char* file_to;
	char buffer[1024];
	int fd_out;
	int fd_in;
	ssize_t bytes_read, bytes_written;
    if (argc != 3) {
        print_usage_and_exit();
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_in = open(file_from, O_RDONLY);
    if (fd_in == -1) {
        print_error_and_exit("Can't read from file", file_from);
    }

    fd_out = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_out == -1) {
        print_error_and_exit("Can't write to file", file_to);
    }

    

    while ((bytes_read = read(fd_in, buffer, sizeof(buffer))) > 0) {
        bytes_written = write(fd_out, buffer, bytes_read);
        if (bytes_written == -1) {
            print_write_error_and_exit(file_to);
        }
    }

    if (bytes_read == -1) {
        print_error_and_exit("Can't read from file", file_from);
    }

    if (close(fd_in) == -1) {
        print_close_error_and_exit(fd_in);
    }

    if (close(fd_out) == -1) {
        print_close_error_and_exit(fd_out);
    }

    return 0;
}
