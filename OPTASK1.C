#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,a;
    clrscr();

    printf("Enter value of x :");
    scanf("%d",&x);
    printf("Enter value of y :");
    scanf("%d",&y);

    a = (x*x)+(2*x*y)+(y*y);

    printf("Ans %d",a);
    getch();

}