#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int cmpfunc(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,p;
		unsigned int min=INT_MAX;
		scanf("%d",&n);
		int arr[n];

		for(int i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}

		qsort(arr,n,sizeof(int),cmpfunc);

		for(int j=0; j<n; j++)
		{
			p = (arr[j] ^ arr[j+1]);
			if(p < min)		
			{
				min = p;
			}
			
		}
		printf("%d\n",min);
	}
}
