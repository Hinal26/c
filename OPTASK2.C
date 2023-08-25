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

    a = (x*x)-(2*x*y)+(y*y);
    printf("Ans :%d",a);

    getch();


}