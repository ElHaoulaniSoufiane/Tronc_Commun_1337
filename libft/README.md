*This project has been created as part of the 42 curriculum by soel-hao.*

# Libft

## Description
The `libft` project is the first milestone in the 42 curriculum. Its goal is to create a custom C library that reimplements standard libc functions, along with additional utility functions and linked list operations. This foundational library serves as a robust toolset that will be used across all subsequent C programming projects in the curriculum, requiring a deep understanding of memory management, pointer arithmetic, and algorithmic logic.

## Instructions
To compile and use the library, run the following commands in your terminal.

**Compilation rules:**
* `make` (or `make all`): Compiles the standard mandatory functions and generates the `libft.a` static library.
* `make bonus`: Compiles the library.
* `make clean`: Removes all `.o` (object) files.
* `make fclean`: Removes all `.o` files and the `libft.a` static library.
* `make re`: Performs a full recompilation by running `fclean` followed by `all`.

## Library Details
The library is divided into three main parts:

### 1. Libc Functions
Standard C library functions reimplemented with the `ft_` prefix:
* **Character Checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **Character Conversion:** `ft_toupper`, `ft_tolower`
* **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Memory Operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Conversion:** `ft_atoi`

### 2. Additional Functions
Custom functions for string manipulation and I/O operations:
* **String Utilities:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* **Integer Conversion:** `ft_itoa`
* **File Descriptor I/O:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Functions
Functions to create and manipulate a custom `t_list` singly linked list structure:
* **Node Creation:** `ft_lstnew`
* **List Insertion:** `ft_lstadd_front`, `ft_lstadd_back`
* **List Information:** `ft_lstsize`, `ft_lstlast`
* **Memory Management:** `ft_lstdelone`, `ft_lstclear`
* **Iteration & Mapping:** `ft_lstiter`, `ft_lstmap`

## Resources
* **Manual of Functions:** Unix `man` pages (e.g., `man 3 strlen`, `man 3 malloc`) were used extensively as the primary reference for understanding the standard behavior, parameters, and return values of libc functions.
* **W3Schools:** Used as a supplementary resource for reviewing C syntax, data types, and core programming logic.
* **AI Usage:** AI was used as a learning tool to help understand new programming concepts, dive deeply into complex topics under the hood, and identify potential edge cases during the implementation of the functions.
