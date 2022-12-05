#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);

    for(auto i: dq){
        cout<<i<<endl;
    }
    cout<<"The size of deque funtion is: "<<endl;
    cout<<dq.size()<<endl;

    dq.pop_back();
    dq.pop_front();

    cout<<"Deque function after popping becomes: "<<endl;

    for(auto i: dq){
        cout<<i<<endl;
    }

    return 0;
}