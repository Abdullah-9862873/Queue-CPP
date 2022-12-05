#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int k;
    cout<<"Enter the value of k: "<<endl;
    cin>>k;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0, ans=0, zeroCount=0;

    for(int j=0; j<n; j++){
        if(arr[j] == 0){
            zeroCount++;
        }
        while(zeroCount > k){
            if(arr[i] == 0){
                zeroCount--;
            }
            i++;
        }
        ans = max(ans, j-i+1);
    }

    cout<<ans<<endl;


    return 0;
}