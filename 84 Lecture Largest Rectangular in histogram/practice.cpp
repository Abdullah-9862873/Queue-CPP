#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(int arr[], int n){
    vector<int> ans;
    stack<int> st;

    for(int i=0; i<n; i++){
        while(!st.empty() && (arr[st.top()] >= arr[i])){
            st.pop();
        }

        int element = (st.empty()) ? -1 : st.top();
        ans.push_back(element);
        st.push(i);
    }
    return ans;
}

vector<int> nextSmaller(int arr[], int n){
    vector<int> ans;
    stack<int> st;

    for(int i=n-1; i>=0; i--){
        while(st.empty() == false && arr[st.top()] >= arr[i]){
            st.pop();
        }
        int element = (st.empty()) ? n : st.top();
        ans.push_back(element);
        st.push(i);
    }
    return ans;
}

void print(vector<int> a){
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {6, 2, 5, 4, 1, 5, 6};
    // print(prevSmaller(arr, 7));
    // print(nextSmaller(arr, 7));

    int res = 0;
    vector<int> ps = prevSmaller(arr, 7);
    vector<int> ns = nextSmaller(arr, 7);

    for(int i=0; i<7; i++){
        int curr_area = (ns[i] - ps[i] - 1)* arr[i];
        res = max(res, curr_area);
    }

    cout<<res<<endl;


    return 0;
}