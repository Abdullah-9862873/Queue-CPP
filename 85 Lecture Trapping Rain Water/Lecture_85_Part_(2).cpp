#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int TrappingRainWater(int arr[], int n){
    int res = 0;
    int left_max[n];
    int right_max[n];

    left_max[0] = arr[0];
    for(int i=1; i<n; i++){
        left_max[i] = max(arr[i],left_max[i-1]);
    }

    right_max[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        right_max[i] = max(arr[i], right_max[i+1]);
    }

    for(int i=1; i<n-1; i++){
        res = res + (min(right_max[i], left_max[i])) - arr[i];
    }

    return res;
}

int main(){
    int arr[] = {3, 0, 1, 2, 5};
    cout<<TrappingRainWater(arr, 5)<<endl;

    return 0;
}