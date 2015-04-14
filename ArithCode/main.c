#include <stdio.h>
#include <stdlib.h>
int add(int, int);
int mul(int, int);
int main()
{
    int x,y;
    printf("Please input values x and y!\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\n\nAddition result is : %d\nProduct result is : %d",add(x,y),mul(x,y));
    return 0;
}
int add(int x,int y)
{
return (x+y);
}

int mul(int x,int y)
{
return (x*y);
}

