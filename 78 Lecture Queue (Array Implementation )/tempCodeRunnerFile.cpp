#include<iostream>
using namespace std;

class queue{
    int *arr;
    int front;
    int back;

    public:

    queue(){
        arr = new int [100];
        front = -1;
        back = -1;
    }

    void enqueue(int x){
        if(back == 99){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        
        back++;
        arr[back] = x;

        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front==-1 || front > back){
            cout<<"Queue is Empty"<<endl;
            return;
        }

        front++;
    }

    int peek(){
        if(front== -1 || front > back){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }

        return arr[front];
    }

    bool empty(){
        if(front==-1 || front> back){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.empty()<<endl;

    return 0;
}