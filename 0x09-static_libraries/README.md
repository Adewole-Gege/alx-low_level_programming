# 0x09. Static Libraries

## Functions

- **_putchar**: Write a character to stdout.
- **_islower**: Check if a character is lowercase.
- **_isalpha**: Check if a character is an alphabetic character.
- **_abs**: Compute the absolute value of an integer.
- **_isupper**: Check if a character is uppercase.
- **_isdigit**: Check if a character is a digit.
- **_strlen**: Calculate the length of a string.
- **_puts**: Print a string to stdout.
- **_strcpy**: Copy a string to another string.
- **_atoi**: Convert a string to an integer.
- **_strcat**: Concatenate two strings.
- **_strncat**: Concatenate two strings with a limit on the number of characters.
- **_strncpy**: Copy a string with a limit on the number of characters.
- **_strcmp**: Compare two strings.
- **_memset**: Fill a block of memory with a specific value.
- **_memcpy**: Copy a block of memory to another.
- **_strchr**: Locate a character in a string.
- **_strspn**: Get the length of a prefix substring.
- **_strpbrk**: Search a string for any of a set of bytes.
- **_strstr**: Locate a substring in a string.
# Static Library - libmy.a

This is a static library containing implementations for various functions including string manipulation, character checks, and more.

## Functions

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

