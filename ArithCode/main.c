#include <stdio.h>
#include <stdlib.h>
int add(int, int);
int main()
{
    int x,y;
    printf("Please input values x and y!\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\n\n Your result is : %d",add(x,y));
    return 0;
}
int add(int x,int y)
{
return (x+y);
}
