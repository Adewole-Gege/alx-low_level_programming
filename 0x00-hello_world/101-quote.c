#include <unistd.h>   /* for write function */
#include <stdlib.h>   /* for EXIT_FAILURE */
/**
* main - Entry point of the program
*
* Description: Writes a specific quote to standard error using the write system call.
*              The quote is from Dora Korpar, dated October 19, 2015.
* Return: EXIT_FAILURE (indicating an unsuccessful termination of the program)
*/
int main(void) {
/* Message to be written to stderr */
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

/* Write the quote to stderr using write system call */
write(STDERR_FILENO, quote, 59);  /* 59 is the length of the string excluding the null terminator */

return EXIT_FAILURE;  /* returning EXIT_FAILURE (which is defined as 1) as per the requirement */
}
