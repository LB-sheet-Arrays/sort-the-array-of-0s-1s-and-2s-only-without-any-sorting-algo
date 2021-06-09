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

//Utkarsh's approach --> Directly print the array.  
int count0=0,count1=0,count2=0;  //Ye bhi 3 variables ki hi space kha raha hai.
for(i=0;i<n;i++)
{
	if(a[i]==0)
	{
		count0++;
	}
	if(a[i]==1)
	{
		count1++;
	}
	if(a[i]==2)
	{
		count2++;
	}
}

if((count0+count1+count2)==n)
{
	printf("\n { ");
	//Modify and print the input array itself to preserve the space.
	for(i=0;i<count0;i++)
	{
		printf(" 0 ");
	}
	for(i=count0;i<(count0+count1);i++)
	{
		printf(" 1 ");
	}
	for(i=count1;i<(count1+count2);i++)
	{
		printf(" 2 ");
	}
	printf(" } ");
}

}
