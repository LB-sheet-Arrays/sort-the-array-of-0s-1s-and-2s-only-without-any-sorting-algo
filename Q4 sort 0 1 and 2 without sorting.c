#include<stdio.h> 

void printArray(int a[],int n)
{
	int i;
	printf(" { ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf(" } ");
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void main()
{
	int a[100],n,i;
	printf("\nHow many elements do you want in your array? => ");
	scanf("%d",&n);
	printf("\t\nPlz start filling your array one by one.");
	
	//feeding array
	for(i=0;i<n;i++)
	{
		printf("\n\nElement no. %d => ",i+1);
		scanf("%d",&a[i]);
	}

	//Doing by three pointers method bcoz we don't have to use sorting!!
	//This approach is not working and there are extra swaps.
	
/*	int l=0,m=0,h=n-1;
	while(m<=h)
	{
		if(a[m]==0)
		{
			swap(&a[m],&a[l]);
			l++;
			m++;		
		}
		if(a[m]==1)
		{
			m++;	
		}
		if(a[m]==2)
		{
			swap(&a[m],&a[h]);
			h--;	
		}	
	}
	
	//Printing the array!
	printf("\n The sorted array is \n\n");
	printArray(a,n);
*/
}
