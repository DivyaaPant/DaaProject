#include <stdio.h>
int search(int arr[], int n, int p)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == p)
            {
			return i;
        }
    
	 return -1;
}
int main(void)
{
    int n, arr[100], p;
    printf("Enter the number of element");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&p);
    int ans = search(arr, n, p);
    if(ans == -1)
        {
		 printf("Element is not present in array");
        }
    else 
    {
	  printf("Element is present at index %d", ans+1);
    }
	return 0;
}
