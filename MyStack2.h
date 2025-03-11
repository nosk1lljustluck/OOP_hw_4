#ifndef MyStack2_h
#define MyStack2_h

#include <iostream>
#include "MyLinkedList.h"
using namespace std;

class MyStack2 {
private:
    MyLinkedList* head;  // Points to the first node

public:
    // Constructor
    MyStack2() : head(nullptr) {}

    // Check if the stack is empty
    bool isEmpty() {
        return head == nullptr;
    }

    // Push function (Insert at the end)
    void push(int val) {
        MyLinkedList* newNode = new MyLinkedList(val);
        
        if (isEmpty()) {
            head = newNode;  // If stack is empty, set head
        } else {
            MyLinkedList* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;  // Attach new node at the end
        }
    }

    // Pop function (Remove last node)
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop.\n";
            return;
        }

        if (head->next == nullptr) {  // If only one node exists
            delete head;
            head = nullptr;
        } else {
            MyLinkedList* temp = head;
            while (temp->next->next != nullptr) {  // Find second last node
                temp = temp->next;
            }
            delete temp->next;  // Delete last node
            temp->next = nullptr;
        }
    }

    // Peek function (Get the last element)
    int top() {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return -1;
        }

        MyLinkedList* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        return temp->value;
    }

    // Print the stack
    void printReverse(MyLinkedList* node) {
            if (node == nullptr) return;  // Base case
            printReverse(node->next);  // Recursive call
            std::cout << node->value << " ";
        }

        // Wrapper function for printing in reverse
        void printStack() {
            if (isEmpty()) {
                std::cout << "";
                return;
            }
            printReverse(head);
            cout<<endl;
        }
};

#endif /* MyStack2_h */
