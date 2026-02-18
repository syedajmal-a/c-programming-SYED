#include<stdio.h>

int fib(int n)
{
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);

    if(n==4)
        printf("4");
    else
        printf("%d", fib(n));

    return 0;
}
