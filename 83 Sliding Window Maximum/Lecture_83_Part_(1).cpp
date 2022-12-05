// Sliding window maximum problem
// Time complexity O(nlongn)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int k;
    cout<<"Enter the value of k: "<<endl;
    cin>>k;

    cout<<"Enter the values of array: "<<endl;
    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }

    multiset<int, greater<int>> s;  // Descending order
    vector<int> ans;
    for(int i=0; i<k; i++){
        s.insert(a[i]);
    }

    ans.push_back(*s.begin());

    for(int i=k; i<n; i++){
        s.erase(s.lower_bound(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }

    for(auto i: ans){
        cout<<i<<endl;
    }

    return 0;
}