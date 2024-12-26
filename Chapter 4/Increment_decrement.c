#include<stdio.h>

int main(){
    int i = 5;
    printf("The Value of i %d\n", i);

    i = i + 5; //10 
    printf("The Value of i %d\n", i);

    printf("The Value of i %d\n", i++);// 10
    printf("The Value of i %d\n", i);// 11 

    i += 2; // same i = i + 5;
    printf("The Value of i %d\n", i);//13

    // i++ print i first and then increament i (Post Increament Original)
    // ++i increament i first and then print i (post Increament Original)

    return 0;
 }