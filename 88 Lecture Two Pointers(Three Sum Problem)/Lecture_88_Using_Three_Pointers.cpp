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

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                    break;
                }
            }
        }
    }    
    cout<<endl;

    return 0;
}