#include<stdio.h>
#include<conio.h>

main()

{
   char a;
   clrscr();
   printf("Enter Day : ");
   scanf("%c",&a);

   switch(a)
   {
       case 'M':
       printf("MONDAY");
       break;
       case 'T':
       printf("TUESDAY");
       break;
       case 'W':
       printf("WEDNESDAY");
       break;
       case 't':
       printf("THURSDAY");
       break;
       case 'F':
       printf("FRIDAY");
       break;
       case 's':
       printf("SATURDAY");
       break;
       case 'S':
       printf("SUNDAY");
       break;
    }

       getch();


}