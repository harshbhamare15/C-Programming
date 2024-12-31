#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("Harsh.txt", "r");

    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);

        if (ch == EOF)
        {
            break;
        }
        // code
    }
    return 0;
}