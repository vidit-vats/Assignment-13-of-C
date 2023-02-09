#include <stdio.h>
int count(int);
int main()
{
    int res,no;
    printf("Enter any no: ");
    scanf("%d",&no);

    res=count(no);
    printf("No of digits: %d\n",res);
    return 0;
}

int count(int no)
{
    if (no==0)
    return 0;

    static int c=0;
    c++;

    count(no/10);

    return c;
}