#include<stdio.h>
#include<conio.h>

main()

{
    int i;
    int fact = 1;
    clrscr();

    printf("Enter Number : ");
    scanf("%d",&i);

    while(i>0)
    {
       printf("num = %d\n",i);
       fact = fact * i;
       i--;
    }
    printf("\nfact = %d ",fact);

    getch();

}