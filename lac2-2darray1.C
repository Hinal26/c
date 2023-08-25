#include<stdio.h>
#include<conio.h>

main()

{
   int a[10][10];
   int i,j,r,c;
   clrscr();

   printf("Enter Row Size : ");
   scanf("%d",&r);
   printf("Enter Column Size : ");
   scanf("%d",&c);

   for(i=0 ; i<r ; i++)
   {
	for(j=0 ; j<c ; j++)
	{
		printf("Enter Value : ");
		scanf("%d",&a[i][j]);
	}
   }
   for(i=0 ; i<r ; i++)
   {
	for(j=0 ; j<c ; j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
   }
	getch();
}