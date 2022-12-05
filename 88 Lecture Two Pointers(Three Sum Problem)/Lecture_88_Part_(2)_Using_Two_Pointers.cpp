/* 
Input: array[12 3 7 1 6 9]
target = 24
output:     12 3 9
            1(found)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int target;
    cout<<"Enter the target: "<<endl;
    cin>>target;

    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool found = false;
    int i=0;
    while(i<n){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[j] + arr[k] == target - arr[i]){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    found = true;
                    break;
                }
            }
        }
    i++;
    }
    cout<<found<<endl;

    return 0;
}