#include "main.h"

/* Sample placeholder functions */
int _islower(int c) { return c >= 'a' && c <= 'z'; }
int _isalpha(int c) { return (_islower(c) || (c >= 'A' && c <= 'Z')); }
int _isupper(int c) { return (c >= 'A' && c <= 'Z'); }
int _isdigit(int c) { return (c >= '0' && c <= '9'); }
void _puts(char *s) { while (*s) _putchar(*s++); }
char *_strcpy(char *dest, char *src) { char *start = dest; while ((*dest++ = *src++)); return start; }
int _atoi(char *s) { int n = 0, sign = 1; while (*s && (*s < '0' || *s > '9')) { if (*s == '-') sign *= -1; s++; } while (*s && (*s >= '0' && *s <= '9')) n = n * 10 + (*s++ - '0'); return n * sign; }
/* Implement the rest similarly... */

