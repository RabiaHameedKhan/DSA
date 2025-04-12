#include <iostream>
using namespace std;

// STACK: LIFO

#define SIZE 100 // size of stack

class Stack {
public:
    int array[SIZE]; // array to store stack elements
    int top;

    Stack() { // constructor
        top = -1; // initially empty stack
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if stack is full
    bool isFull() {
        return top == SIZE - 1; // because array starts from index 0
    }

    // Push operation to add elements to stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Elements can't be pushed." << endl;
        } else {
            array[++top] = value;
            cout << value << " pushed into stack!" << endl;
        }
    }

    // Pop operation to remove and return the top element
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop." << endl;
        } else {
            cout << array[top--] << " popped from stack." << endl;
        }
    }

    // Peek operation to see top element without removing
    void peek() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to peek." << endl;
        } else {
            cout << "Top element is: " << array[top] << endl;
        }
    }

    // Display all elements from top to bottom
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty. Nothing to display." << endl;
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(50);
    s.push(60);

    s.display();

    s.pop();
    s.peek();

    s.display();

    return 0;
}
