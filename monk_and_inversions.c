#include <stdio.h>
int func();

int main(){
	int num,i,j;
	int count;
	scanf("%d", &num);      
	
	for(i=0; i<num; i++)
	{
		j = func(count);
		printf("%d\n",j);
	}
	return 0;
	}

	func(count)
	{
		int n,i,j,m,x,k,l;
		scanf("%d\n",&n);
		int arr[n][n];

		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				scanf("%d",&arr[i][j]);
				
			}
		}
         
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				k = arr[i][j];
				for(m=i; m<n; m++)
				{
					for(x=j; x<n; x++)
					{
						l = arr[m][x];
						if(k > l)
						{
							count++;
						}
					}
				}
			}
		}

		return count;
		
	}
