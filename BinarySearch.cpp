#include <stdio.h>
int binSearch(int arr[], int l, int r, int q)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == q)
            return mid;
        if (arr[mid] > q)
            return binSearch(arr, l, mid - 1, q);
        return binSearch(arr, mid + 1, r, q);
    }
    return -1;
}
int main(void)
{
    int n, arr[100], q;
    printf("Enter the number of element");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&q);
    int result = binSearch(arr, 0, n - 1, q);
    if(result == -1) 
	{
	 printf("Element is not present in array");
    }
	else{
	  printf("Element is present at index %d",result);
     }
    return 0;
}
