# 0x11. C - printf

##synopsis
A function that produces output according to a format.

## Description
We were tasked with writing our own implementation of the printf function which
produces an output according to the format it is given.

## Example

To allocate a sufficiently large string and print into it (code
       correct for both glibc 2.0 and glibc 2.1):

       #include <stdio.h>
       #include <stdlib.h>
       #include <stdarg.h>

       char *
       make_message(const char *fmt, ...)
       {
           int n = 0;
           size_t size = 0;
           char *p = NULL;
           va_list ap;

           /* Determine required size. */

           va_start(ap, fmt);
           n = vsnprintf(p, size, fmt, ap);
           va_end(ap);

           if (n < 0)
               return NULL;

           size = (size_t) n + 1;      /* One extra byte for '\0' */
           p = malloc(size);
           if (p == NULL)
               return NULL;

           va_start(ap, fmt);
           n = vsnprintf(p, size, fmt, ap);
           va_end(ap);

           if (n < 0) {
               free(p);
               return NULL;
           }

           return p;
       }
