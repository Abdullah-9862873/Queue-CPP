#include<iostream>
#include<bits/stdc++.h>
using  namespace std;



int main(){
    int n;
    cout<<"Enter the sizeof array: "<<endl;
    cin>>n;

    int price[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>price[i];
    }

    stack<pair<int, int>> st;   // Price, span
    
    for(int i=0; i<n; i++){
        int span = 1;
        while(!st.empty() && st.top().first <= price[i]){
            span = span + st.top().second;
            st.pop();
        }

        st.push({price[i], span});
        cout<<span<<" ";
    }

    

    return 0;
}