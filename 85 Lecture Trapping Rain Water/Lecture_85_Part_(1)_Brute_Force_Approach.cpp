#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int res = 0;
    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;
    for(int i=1; i<(n-1); i++){
        int left_max = arr[i];
        for(int j=0; j<i; j++){
            left_max = max(left_max, arr[j]);
        }

        int right_max = arr[i];
        for(int j=i+1; j<n; j++){
            right_max = max(right_max, arr[j]);
        }

        res = res + (min(left_max, right_max)) - arr[i];
    }

    cout<<res<<endl;

    return 0;
}