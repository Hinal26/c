#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	int i;
	clrscr();

	i = 1;

	      printf("Enter Value of n : ");
	      scanf("%d",&n);
	      printf("Odd Number",n);
	do
	{
		if(i % 2 != 0)
		{
		     printf("\n%d",i);

		}
		i++;
	}
	while(i<=n);

	getch();
}

