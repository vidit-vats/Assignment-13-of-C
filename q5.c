#include <stdio.h>
int sumofdig(int);
int main()
{
    int no,res;
    printf("Enter a number: ");
    scanf("%d",&no);

    res=sumofdig(no);
    printf("Sum of digits: %d\n",res);
    return 0;
}

int sumofdig(int no)
{
    int x;
    if (no==0)
    return 0;

    x=no%10;
    return (x+sumofdig(no/10));

}