#include <stdio.h>
int sumofnat(int);
int main()
{
    int res,n;
    printf("Enter n: ");
    scanf("%d",&n);

    res=sumofnat(n);
    printf("%d\n",res);
    return 0;

}

int sumofnat(int n)
{
    if (n==0)
    return 0;

    return (n+sumofnat(n-1));
}