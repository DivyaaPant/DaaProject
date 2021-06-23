#include <stdio.h>
#include <stdlib.h>
void merge(int ar[], int l, int m, int r)
{
    int i, j, k;
    int p = m - l + 1;
    int q = r - m;
    int L[p], R[q];
    for (i = 0; i < p; i++)
        L[i] = ar[l + i];
    for (j = 0; j < q; j++)
        R[j] = ar[m + 1 + j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < p && j < q) {
        if (L[i] <= R[j]) {
            ar[k] = L[i];
            i++;
        }
        else {
            ar[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < p) {
        ar[k] = L[i];
        i++;
        k++;
    }
    while (j < q) {
        ar[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int ar[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(ar, l, m);
        mergeSort(ar, m + 1, r);
        merge(ar, l, m, r);
    }
}
void print(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int ar[] = { 21, 10, 15, 5, 8, 2 };
    int s = sizeof(ar) / sizeof(ar[0]); 
    printf("Given array is \n");
    print(ar, s);
    mergeSort(ar, 0, s - 1);
    printf("\nSorted array is \n");
    print(ar, s);
    return 0;
}
