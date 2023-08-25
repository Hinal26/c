#include<stdio.h>
#include<conio.h>

main()

{
     int a,temp,r,s=0;
     clrscr();

     printf("Enter Value A : ");
     scanf("%d",&a);

     temp = a;

     while(a!=0)
     {
	r = a%10;
	s = s*10+r;
	a = a/10;

     }
     if(temp==s)
     {
     printf("Number is Palindrom");
     }
     else
     {
     ("Number is Palindrom");
     }

     getch();
}