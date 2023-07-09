#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    big=a;
    if (b>a)
        big=b;
    if (c>b)
        big=c;
    printf("%d is Big number.",big);

    return 0;
}
