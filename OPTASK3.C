#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,a;
    clrscr();

    printf("Enter value of X :");
    scanf("%d",&x);
    printf("Enter valur of Y :");
    scanf("%d",&y);

    a = (x*x*x)+((3*x*y)*(x+y))+(y*y*y);
    printf("Ans :%d",a);
    getch();

}