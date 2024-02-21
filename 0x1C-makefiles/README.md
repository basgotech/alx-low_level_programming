
# Makefile Examples

This repository contains several Makefiles for building a program named "school" with different configurations.

## 0-Makefile

- **Executable Name:** school
- **Rules:** all
- **Description:** The `all` rule builds the executable.
- **Variables:** None
- **Usage:**
  ```bash
  make -f 0-Makefile
1-Makefile
Executable Name: school
Rules: all
Description: The all rule builds the executable.
Variables: CC (compiler), SRC (.c files)
Usage:
bash

make -f 1-Makefile
2-Makefile
Executable Name: school
Rules: all
Description: The all rule builds the executable. Only updated source files are recompiled.
Variables: CC (compiler), SRC (.c files), OBJ (.o files), NAME (executable name)
Usage:
bash

make -f 2-Makefile
3-Makefile
Executable Name: school
Rules: all, clean, oclean, fclean, re
Description: The rules perform various cleaning and compilation tasks.
Variables: CC (compiler), SRC (.c files), OBJ (.o files), NAME (executable name), RM (file deletion program)
Usage:
bash

make -f 3-Makefile all
make -f 3-Makefile clean
make -f 3-Makefile oclean
make -f 3-Makefile fclean
make -f 3-Makefile re
4-Makefile
Executable Name: school
Rules: all, clean, fclean, oclean, re
Description: A complete Makefile with additional compiler flags.
Variables: CC (compiler), SRC (.c files), OBJ (.o files), NAME (executable name), RM (file deletion program), CFLAGS (compiler flags)
Usage:
bash

make -f 4-Makefile all
5-island_perimeter.py
Description: Python script to calculate the perimeter of an island in a grid.
Usage:
bash

./5-main.py
100-Makefile
Executable Name: school
Rules: all, clean, fclean, oclean, re
Description: An advanced Makefile with specific constraints on variable usage and cleanup rules.
Variables: CC (compiler), SRC (.c files), OBJ (.o files), NAME (executable name), RM (file deletion program), CFLAGS (compiler flags)
Usage:
bash

make -f 100-Makefile all
Feel free to explore and use the Makefiles based on your requirements.


Please adjust the content as needed and add more details if necessary.




