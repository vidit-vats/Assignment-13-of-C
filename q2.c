#include <stdio.h>
int sumofodd(int);
int main()
{
    int n,res;
    printf("Enter n: ");
    scanf("%d",&n);

   res=sumofodd(n);
   printf("Sum: %d\n",res);
    return 0;

}

int sumofodd(int n)
{
    int k;
    if (n==0)
    return 0;

    return ((2*n-1)+sumofodd(n-1));
}