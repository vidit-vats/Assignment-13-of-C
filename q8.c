#include <stdlib.h>
#include <stdio.h>
int fib(int);
int main()
{  
    int n,res;
    printf("Enter n: ");
    scanf("%d",&n);

    int i;

    for (i=0;i<=n;i++)
    {
        printf("%d ",fib(i));
    }

   // res=fib(n);
    //printf("Result: %d\n",res);
    
    return 0;
}

int fib(int n)
{
    if (n==1 || n==0)
    return n;

    else 
    return (fib(n-1)+fib(n-2));
}