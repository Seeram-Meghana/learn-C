#include<stdio.h>
void swap(int,int);
void main()
{
    int a=30, b=45;
    printf("before swapping %d %d", a,b);
    swap(a,b);
    printf("after swapping %d %d", a,b);
}
void swap(int p,int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}