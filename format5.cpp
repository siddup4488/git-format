//Hello ---- Git
#include<stdio.h>
main()
{
	int r,sp,p,no,n;
	printf("enter numer of rows:\n");
	scanf("%d",&no);
	n=no;
	for(r=1;r<=no;r++)
	{
		for(sp=1;sp<=n;sp++)
		
		{
			printf(" ");
			
			
		}
		n--;
		for(p=1;p<=r;p++)
		{
			printf("%d ",r);
			
		}
		printf("\n");
	}
}

