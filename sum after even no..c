#include<stdio.h>
main()
{
	int i,n,x,s=0;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==0)
		{
			i++;
			for(;i<=n;i++){
			scanf("%d",&x);
			s+=x;
		}
		break;
		}		
		
	}
}