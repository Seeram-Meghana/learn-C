#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d", &age);
    if (age > 18) {
        printf("you are adult\n");
        printf("you can drive");
    }
    else {
        printf("you are not an adult");
    }
    return 0;
}