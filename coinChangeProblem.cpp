#include<bits/stdc++.h>
using namespace std;

int coinchangeproblem(int coin[], int sum, int n){
    if(n == 0){
        return 0;
    }

    if(sum == 0){
        return 1;
    }

    if(coin[n - 1] > sum){
        return coinchangeproblem(coin, sum, n - 1);
    }

    if(coin[n - 1] <= sum){
        return (coinchangeproblem(coin, sum - coin[n - 1], n) + coinchangeproblem(coin, sum, n - 1));
    }
}

int main(){
    int coin[] = {1, 2, 3};
    int sum = 4;
    int n = 3;

    int result = coinchangeproblem(coin, sum, n);
    cout<<result<<endl;
    return 0;
}