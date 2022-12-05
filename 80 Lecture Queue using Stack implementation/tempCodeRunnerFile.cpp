#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Que{
    public:
    stack<int> st;

    void enqueue(int x){
        st.push(x);
    }

    int dequeue(){
        if(st.empty()){
            cout<<"Queue is empty"<<endl;
            exit(0);
        }

        int a = st.top();
        st.pop();
        if(st.empty()){
            return a;
        }

        int item = dequeue();
        st.push(a);
        return item;
    }

    bool empty(){
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Que q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    // cout<<q.dequeue()<<endl;
    // cout<<q.dequeue()<<endl;
    // cout<<q.dequeue()<<endl;
    // cout<<q.dequeue()<<endl;

    // cout<<q.dequeue()<<endl;
    cout<<q.empty()<<endl;


    return 0;
}