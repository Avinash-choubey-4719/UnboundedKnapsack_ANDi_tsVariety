#include<bits/stdc++.h>
using namespace std;

int unbounded_knapsack(int wt[], int val[], int w, int n){
    if(w == 0 || n == 0){
        return 0;
    }

    if(wt[n - 1] > w){
        return unbounded_knapsack(wt, val, w, n - 1);
    }

    if(wt[n - 1] <= w){
        return max(unbounded_knapsack(wt, val, w, n - 1), val[n - 1] + unbounded_knapsack(wt, val, w - wt[n - 1], n));
    }
}

int main(){
    int wt[] = {1, 2, 3};
    int val[] = {4, 5, 6};
    int w = 12;
    int n = 3;

    int result = unbounded_knapsack(wt, val, w, n);
    cout<<result<<endl;
    return 0;
}