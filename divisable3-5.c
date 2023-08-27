#include<stdio.h>

void DIV(int n)
{
	if(n%3 == 0 && n%5 == 0)
	{
		printf("NUMBER IS DUVIDED BY 3 & 5");
	}
	
	else
	{
		printf("NUMBER IS NOT DIVIDED BY 3 & 5");
	}
}
main()
{

 int a;
 
 printf("ENTER NUMBER :- ");
 scanf("%d",&a);
 
 DIV(a);

}
