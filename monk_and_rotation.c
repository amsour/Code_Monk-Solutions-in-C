#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	    while(t--)
		{
			int n,k,p;
			scanf("%d",&n);
			scanf("%d",&k);

			int arr[n];
	
			for(int i=0; i<n; i++)
			{
				scanf("%d",&arr[i]);
			}

			k = k%n;

			for(int i=0; i<n; i++)
			{
				p = arr[(i + (n-k)) % n];
				printf("%d ",p);
			}
			printf("\n");
		}
		
}


	
