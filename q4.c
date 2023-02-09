#include <stdio.h>
int sumint(int);
int main()
{
    int n,res;
    printf("Enter n: ");
    scanf("%d",&n);

    res=sumint(n);
    printf("Sum: %d\n",res);
    return 0;
}

int sumint(int n)
{
    if (n==0)
    return 0;

    return ((n*n)+sumint(n-1));
}