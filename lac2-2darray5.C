#include<stdio.h>
#include<conio.h>

main()

{
	int a[10][10];
	int i,j,size,sum=0;
	clrscr();

	printf("Enter Matrix Size : ");
	scanf("%d",&size);

	for(i=0 ; i<size ; i++)
	{
		for(j=0 ; j<size ; j++)
		{
		printf("Enter Value : ");
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0 ; i<size ; i++)
	{
		for(j=0 ; j<size ; j++)
		{
		printf("%d ",a[i][j]);
			if(i==j)
			{
			sum = sum + a[i][j];
			}
		}
		printf("\n");
	}
	printf("Sum = %d",sum);
	getch();
}