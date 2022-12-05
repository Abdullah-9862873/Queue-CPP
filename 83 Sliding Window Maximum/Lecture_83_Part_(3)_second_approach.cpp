// Sliding maximu problem
//Time compolexity is O(n)

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

    deque<int> q;
    vector<int> a(n);
    vector<int> ans;

    for(auto &i: a){
        cin>>i;
    }

    for(int i=0; i<k; i++){
        while(!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    for(int i=k; i<n; i++){
        if(q.front() == i-k){
            q.pop_front();
        }

        while(!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}