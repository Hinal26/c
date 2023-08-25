#include<stdio.h>
#include<conio.h>

main()

{
      int marks[10];
      int i,n;
      clrscr();

      printf("Enter Marks Size : ");
      scanf("%d",&n);

      for(i=0 ; i<n ; i++)
      {
		printf("Enter Value : ");
		scanf("%d",&marks[i]);
      }
      for(i=0 ; i<n ; i++)
      {
		printf("Marks = %d\n",marks[i]);
      }
      getch();
}
