# *This project has been created as part of the 42 curriculum by soel-hao*

## Description
The goal of this project is build a foundational C libary from scratch. the let you dive in the low-level mechanisms of standard libc functions, this custom library will serve as the primary toolkit for all the C curriculum assignments.

## Library Details
The library is structured into three main components:

* **Part 1 - Libc Functions:** Direct reimplementations of standard C library functions (such as `strlen`, `memcpy`, and `atoi`) that strictly match their manual page specifications to demonstrate how they operate under the hood.
* **Part 2 - Additional Functions:** Custom utility functions requiring dynamic memory allocation for advanced string manipulation, arrays, and formatting, including `ft_split` and `ft_itoa`.
* **Part 3 - Linked Lists:** A comprehensive suite of functions designed to initialize, iterate, map, and free a custom `t_list` data structure for dynamic data management.

## Instructions
This project includes a `Makefile` that compiles the source files into a static library named `libft.a`. All files are compiled using `cc` with the strict flags `-Wall -Wextra -Werror`.

To compile and manage the library, run the following commands at the root of the repository:

* `make` or `make all`: Compiles the source code and generates the `libft.a`.
* `make clean`: Removes the generated object (`.o`) files, keeping the directory.
* `make fclean`: Removes the object files as well as the compiled `libft.a`.
* `make re`: Forces a full recompilation by executing `fclean` followed by `all`.

## Resources
* **[Linux man pages](https://man7.org/linux/man-pages/):** Used for check the manual of the functions and how it's work.
* **[Makefile](https://makefiletutorial.com/):** Use This tutorial for understanding the Makefile and how it's works.
* **[Youtube C](https://www.youtube.com/@onaecO/):** I Use this channel to understand deeply the concept.
* **AI Usage:** I used DeepSeek to dive deeply into the functions and understand their underlying behavior..
