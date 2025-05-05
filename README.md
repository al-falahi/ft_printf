# ft_printf

A simplified reimplementation of the C standard `printf` function.

## ✅ Features

This version of `ft_printf` supports the following format specifiers:

| Specifier | Description                  |
|-----------|------------------------------|
| `%c`      | Character                    |
| `%s`      | String                       |
| `%d`, `%i`| Signed decimal integer       |
| `%u`      | Unsigned decimal integer     |
| `%x`      | Hexadecimal (lowercase)      |
| `%X`      | Hexadecimal (uppercase)      |
| `%p`      | Pointer address              |
| `%%`      | Literal percent sign         |

## 🛠️ Build

To compile the library and test program:

```bash
make        # builds libftprintf.a
make test   # builds and runs main.c with the library
