#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;

    set<char> set;

    int max_len=0;
    int start = -1;         // length pointer = i - start
    vector<int> dict(256, -1);
    int i=0;
    for(i=0; i<s.length(); i++){
        if(dict[s[i]] > start){
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        max_len = max(max_len, i-start);
    }
    for(int j=start+1; j<=i; j++){
        set.insert(s[j]);
    }

    cout<<"The length of longest substring without repeating character is: "<<max_len<<endl;
    for(auto i = set.begin(); i!=set.end(); i++){
        cout<<*i<<" ";
    }

    return 0;
}