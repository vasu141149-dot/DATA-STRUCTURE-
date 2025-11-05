#include<stdio.h>
void QuickSort(int a[],int first,int last)
{
	int i,j,t,pivot;
		pivot=first;
		i=first;
		j=last;
	if(first<last)
	{
		while(i<j)
		{
			while(a[i]<=a[first]&&i<last)
			i++;
			while(a[j]>a[first])
			j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[first];
		a[first]=t;
		QuickSort(a,first,j-1);
		QuickSort(a,j+1,last);
	}
}
int main()
{
	int i,n,arr[50];
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	QuickSort(arr,0,n-1);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
