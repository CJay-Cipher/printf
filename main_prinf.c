#include "main.h"

int main()
{
    const char *format = "Hello, %s!";
    int printed_chars = _printf(format, "world");

    if (printed_chars < 0) {
        printf("An error occurred.\n");
        return 1;
    }

    return 0;
}
