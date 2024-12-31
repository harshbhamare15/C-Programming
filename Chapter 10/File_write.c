#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Harsh.txt", "w");
    int num = 1915;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}