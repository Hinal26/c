#include<stdio.h>
#include<conio.h>

main()

{
     char a;
     clrscr();
     printf("Enter Any Char :  ");
     scanf("%c",&a);

     if(a>='a' && a<='z')
     {
	       printf("This is Char");
     }

     else if(a>='A' && a<='Z')
     {
	       printf("This is Char");
     }
     else if(a>='0' && a<='9')
     {
	       printf("This is Number");
     }
     else
     {
	       printf("This is Special Char");
     }

      getch();



}