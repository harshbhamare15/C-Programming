#include<stdio.h>

struct employee
{
     int code; 
     float salary;
     char name[10];
};
int main(){
    struct employee facebook[100]; // an array of structures
// we can access the data using:
facebook[0].code = 100;
facebook[1].code = 101;
struct employee harsh = {100, 71.22, "harry"};
printf("%d %f %s", harsh.code, harsh.salary, harsh.name);
    return 0;
 }