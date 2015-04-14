#include <stdio.h>
#include <stdlib.h>
int add(int, int);
int main()
{
    int x,y,z;
    printf("Please input values x and y!\n");
    scanf("%d",&x);
    scanf("%d",&y);
    z = add(x,y);
    printf("\n\n Your result is : %d",z);
    return 0;
}
int add(int x,int y)
{
return (x+y);
}
