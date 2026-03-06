# Libft 

This is the very first milestone of the 42 curriculum: a custom C library that re-implements essential standard functions. It’s the foundation for everything we build here at the campus.

As I progressed through the common core, I updated this library to include other key projects like `ft_printf` and `get_next_line`, making it a versatile toolkit for all my future C programming.

---

## 📦 Overview

This library is a collection of functions that handle string manipulation, memory management, and I/O operations. It is strictly written in **C** and follows the **Norminette** coding standard.

### Included Modules:

* **Libft Core**: Re-implementations of standard `libc` functions (`ft_strlen`, `ft_memset`, `ft_atoi`, etc.) and linked list manipulation.
* **ft_printf**: A custom version of the standard `printf`, supporting conversions like `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
* **get_next_line**: A reliable function that reads a line from a file descriptor, essential for parsing files and handling inputs.

---

## 🛠️ Installation & Usage

To compile the library, clone the repository and run the `Makefile`:

```bash
git clone https://github.com/FabzHub17/libft.git
cd libft
make

```

This will generate the `libft.a` static library file. To use it in your own projects, simply include the header and link the library during compilation.

---

## 📂 Project Structure

* `/lib`: Contains the standard Libft logic and string functions.
* `/printf`: The implementation of the custom printf.
* `/get_next_line`: The implementation of the custom gnl.
* `/includes`: All `.h` header files for the library.

---

## ✨ Final Note

This project was my first deep dive into memory allocation and low-level C programming. It’s a work in progress that I constantly refine as I tackle more complex challenges at **42 Roma Luiss**. 👨‍💻

