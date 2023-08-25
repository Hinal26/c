#include<stdio.h>
#include<conio.h>

main()
{
	int a[10],b[10];
	int i,n,sum=0;
	clrscr();

	printf("Enter Array Size : ");
	scanf("%d",&n);

	for(i=0 ; i<n ; i++)
	{
		printf("Enter Value A : ");
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		printf("Enter Value B : ");
		scanf("%d",&b[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		printf("Marks = %d \n",a[i]);
		sum = sum + a[i];
		sum = sum + b[i];
	}
	printf("\nSum = %d",sum);
	getch();

}