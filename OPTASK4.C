#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,a;
    clrscr();

    printf("Enter value of X :");
    scanf("%d",&x);
    printf("Enter value of Y :");
    scanf("%d",&y);

    a = (x*x*x)-(y*y*y)-((3*x*y)*(x+y));
    printf("Ans :%d",a);
    getch();

}