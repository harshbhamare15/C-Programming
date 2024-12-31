#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("Harsh.txt", "r");
    // char c = fgetc(ptr); // used to read character from file 
    // printf("%c",c);
    fputc('c',ptr);
    return 0;
 }