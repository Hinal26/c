#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,z,a;
    clrscr();

    printf("Enter value of X :");
    scanf("%d",&x);
    printf("Enter value of Y :");
    scanf("%d",&y);
    printf("Enter value of Z :");
    scanf("%d",&z);

    a = (x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
    printf("Ans :%d",a);
    getch();

}