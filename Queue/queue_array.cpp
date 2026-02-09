#include <bits/stdc++.h>
using namespace std;


class queue{
    public:
    int *arr;
    int front;
    int rare;
    int size();

    queue(int size){
        this->size=size;
        arr=new int[size];
        front = -1;
        rare = -1;
    }
    void enqueue(int val){
        if(rare>=size){
            cout<<"Queue Overflow";
            return;
        }
        if(front==-1) front=0;
        arr[++rare]=val;
    }
    int dequeue(){
        if(front>=rare){
            return 0;
        }
        return arr[front++];
    }
    int front(){
        if(front==-1) return -1;
        return arr[front];
    }
    int rare(){
        return arr[rare];
    }

};

int main(){

}