#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Que{
    public:
        stack<int> st1;
        stack<int> st2;

        void enqueue(int x){
            st1.push(x);
        }

        int dequeue(){
            if(st1.empty() and st2.empty()){
                cout<<"Queue is empty"<<endl;
                exit(0);
            }
            if(st2.empty()){
                while(!st1.empty()){
                    st2.push(st1.top());
                    st1.pop();
                }
            }
               int topval = st2.top();
               st2.pop();
               return topval;
        }

        bool empty(){
            if(st1.empty() && st2.empty()){
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

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    cout<<q.empty()<<endl;    


    return 0;
}