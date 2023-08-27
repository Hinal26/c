#include<stdio.h>

void cube(int n)
{
	n = n*n*n;
	
	printf("CUBE OF = %d",n);
}
main()
{

 int a;
 
 printf("ENTER NUMBER :- ");
 scanf("%d",&a);
 
 cube(a);

}
