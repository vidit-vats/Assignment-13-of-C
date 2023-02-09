#include<stdio.h>
int fact(int);
int main()
{
    int no,res;
    printf("Enter a no: ");
    scanf("%d",&no);

    res=fact(no);
    printf("Result: %d\n",res);
    return 0;
}

int fact(int no)
{
    if (no==0)
    return 1;

    return (no*fact(no-1));

}