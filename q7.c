#include <stdio.h>
int hcf(int,int,int);
int main()
{
    int n1,n2,res,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);

    temp=n1*n2;
    res=hcf(n1,n2,n1*n2);
    printf("HCF: %d\n",res);

    return 0;
}

int hcf(int n1,int n2,int temp)
{
    int res;

    if (n1==0 && n2==0)
    return 0;

    if (n1%temp==0 && n2%temp==0)
    {
        res=temp;
        return res;
    }

    else{
        hcf(n1,n2,temp-1);
    }
}

