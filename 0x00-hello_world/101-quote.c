#include <unistd.h>   /* for write function */
#include <stdlib.h>   /* for EXIT_FAILURE */

int main(void) {
    /* Message to be written to stderr */
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    
    /* Write the quote to stderr using write system call */
    write(STDERR_FILENO, quote, 59);  /* 59 is the length of the string excluding the null terminator */
    
    return EXIT_FAILURE;  /* returning EXIT_FAILURE (which is defined as 1) as per the requirement */
}
