#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d", &age);
    if (age >= 18) {
        printf("you are adult\n");
    }
    else if (age > 13 && age < 18 )
    {
        printf("teenager");
    }
    else 
    {
        printf("child");
    }
    return 0;
}