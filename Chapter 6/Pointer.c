#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer)
    int k = 67;

    // char i = 'A';
    //char* j = &i;  // j is a pointer pointing to i (j is an character pointer)

    //float i = 5.232;
    //float* j = &i; 

    printf("The address of i %p\n", &i);
    printf("The address of i %p\n", j);
    printf("The address of i %p\n", &k);



printf("The value at adress j is %d\n", *(&i));


    return 0;
 }