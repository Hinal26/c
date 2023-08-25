#include<stdio.h>
#include<conio.h>

main()
{
      int n,i,check=0;
      clrscr();

      printf("Enter Value : ");
      scanf("%d",&n);

      for(i=3 ; i<n ; i++)
      {
	    if(i==0)
	    {
		check = 1;
	    }
      }
      if(check==0)
      {
	  printf("Number is prim");
      }
      else
      {
      printf("Number is not prim");
      }

      getch();


}
