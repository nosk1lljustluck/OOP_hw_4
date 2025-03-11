#ifndef MyLinkedList_h
#define MyLinkedList_h

#include <iostream>
using namespace std;
class MyLinkedList {
public:
    int value;
    MyLinkedList* next;
    
    MyLinkedList(int val) : value(val), next(nullptr) {}
    
};

#endif /* MyLinkedList_h */
