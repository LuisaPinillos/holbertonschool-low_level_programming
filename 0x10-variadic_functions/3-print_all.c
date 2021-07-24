#include "variadic_functions.h"

/**
 * print_all - Function that prints anything.
 * @format: Is a list of types of arguments.
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
    int i = 0;
    char *string;
    va_list arg;

    while (format && format[i])
    {
        va_start(arg, format);

        while (format[i])
        {
            switch (format[i])
            {
                case 'c':
                    printf("%c", va_arg(arg, int));
                    break;
                case 'i':
                    printf("%d", va_arg(arg, int));
                    break;
                case 'f':
                    printf("%f", va_arg(arg, double));
                    break;
                case 's':
                    string = va_arg(arg, char *);
                    if (string == NULL)
                        string = "(nil)";
                    printf("%s", string);
                    break;
            }

            if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
                format[i] == 's') && format[i + 1] != '\0')
                printf(", ");
            i++;
        }
    }
    printf("\n");
    va_end(arg);
}