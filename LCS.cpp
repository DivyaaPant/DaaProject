#include<bits/stdc++.h>
int max(int p, int q);
int lcs( char *A, char *B, int a, int b )
{
   if (a == 0 || b == 0)
     return 0;
   if (A[a-1] == B[b-1])
     return 1 + lcs(A, B, a-1, b-1);
   else
     return max(lcs(A, B, a, b-1), lcs(A, B, a-1, b));
}
int max(int p, int q)
{
    return (p > q)? p : q;
}
int main()
{
  char A[] = "ABXASI";
  char B[] = "GZPOAYI";
  int a = strlen(A);
  int b = strlen(B);
  printf("Length of LCS is %d", lcs( A, B, a, b ) );
  return 0;
}
