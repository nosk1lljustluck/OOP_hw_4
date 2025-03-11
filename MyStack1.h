#ifndef MyStack1_h
#define MyStack1_h

#include <iostream>
#include "MyVector.h"
using namespace std;

class MyStack1{
public:
    MyVector data;
    void push(int val){
        data.add(val);
    }
    void pop(){
        data.removeLast();
    }
    int top(){
        return data.get(data.size);
    }
    bool isEmpty(){
        if (data.getSize()>0)return false;
        else return true;
    }
    void printStack(){
        int g = data.getSize();
        for (int i = 0; i < g; i++){
            cout<<data.get(data.size-1)<<" ";
            data.removeLast();
        }
        cout<<endl;
    }
    
    
};

#endif /* MyStack1_h */
