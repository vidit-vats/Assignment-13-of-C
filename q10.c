#include <stdio.h>
int power(int,int);
int main()
{
    int p,res,no;
    
    printf("Enter no: ");
    scanf("%d",&no);

    printf("Enter the power to be calculated: ");
    scanf("%d",&p);

    res=power(p,no);
    printf("Result: %d\n",res);

    return 0;
}

int power(int p,int no)
{
    if (p==0)
    return 1;

    return (no*power(p-1,no));

}