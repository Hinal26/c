#include<stdio.h>
#include<conio.h>

main()
{
   int n,f,l;
   clrscr();

   printf("Enter Number : ");
   scanf("%d",&n);

   l = n%10;

   while(n>=10)
   {
      n= n/10;

   }
   f = n;
   printf("Sum = %d",l+f);
   getch();

}