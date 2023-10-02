#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error_and_exit(const char* error_message) {
    fprintf(stderr, "Error: %s\n", error_message);
    exit(98);
}

void print_elf_header_info(const Elf64_Ehdr *header) {
    int i;
    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass:                           %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("Data:                            %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "Unknown data format");
    printf("Version:                         %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                          %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
    printf("ABI Version:                     %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                            %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "Other");
    printf("Entry point address:             0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char* argv[]) {
    const char *elf_filename;
    int fd;
    Elf64_Ehdr header;
    if (argc != 2) {
        print_error_and_exit("Usage: elf_header elf_filename");
    }

    elf_filename = argv[1];
    fd = open(elf_filename, O_RDONLY);
    if (fd == -1) {
        print_error_and_exit("Failed to open the ELF file");
    }

    
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error_and_exit("Failed to read the ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error_and_exit("Not an ELF file");
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}
