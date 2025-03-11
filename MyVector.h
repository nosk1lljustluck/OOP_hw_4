#ifndef MyVector_h
#define MyVector_h

#include <iostream>
using namespace std;
class MyVector{
public:
    int arr[100];
    int size = 0;
    void add(int val){
        arr[size]=val;
        size++;
    }
    int get(int index){
        return arr[index];
    }
    void removeLast(){
        if (size>0)size--;
    }
    int getSize(){
        return size;
    }
};



#endif /* MyVector_h */
