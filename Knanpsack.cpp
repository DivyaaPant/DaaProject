#include <bits/stdc++.h>
using namespace std;
struct Item {
    int vl, wt;
    Item(int vl, int wt)
    {
       this->vl=vl;
       this->wt=wt;
    }
};
bool com(struct Item x, struct Item y)
{
    double a = (double)x.vl / (double)x.wt;
    double b = (double)y.vl / (double)y.wt;
    return a > b;
}
double frKnapsack(int W, struct Item arr[], int n)
{
    int curWt = 0;
    double final = 0.0;
    for (int i = 0; i < n; i++) {
        if (curWt + arr[i].wt <= W) {
            curWt += arr[i].wt;
            final += arr[i].vl;
        }
        else {
            int remain = W - curWt;
            final += arr[i].vl
                          * ((double)remain
                             / (double)arr[i].wt);
            break;
        }
    }
    return final;
}
int main()
{
    int W = 50;
    Item arr[] = { { 50, 20 }, { 80, 10 }, { 100, 60 } };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum value we can obtain = "
         << frKnapsack(W, arr, n);
    return 0;
}
