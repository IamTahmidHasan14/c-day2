#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your Mark: ");
    scanf("%d",&mark);
    if(mark>=80 && mark<=100)
        printf("You got A+");
    else if(mark>=75)
        printf("You got A");
    else if(mark>=70)
        printf("You got A-");
    else if(mark>=65)
        printf("You got B+");
    else if(mark>=60)
        printf("You got B");
    else if(mark>=55)
        printf("You got B-");
    else if(mark>=50)
        printf("You got C+");
    else if(mark>=45)
        printf("You got C");
    else if(mark>=40)
        printf("You got D");
    else if(mark>=0)
        printf("Fail");
    else
        printf("Invalid Mark");

    return 0;
}
