#include<stdio.h>
#include<conio.h>

main ()
{
   int i=1;
   int n;
   clrscr();

   printf("Enter Number : ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
   printf("Num = %d\n",i);
   }

   getch();

}