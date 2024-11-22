#include <stack>

template <typename T>
class Queue {
    std::stack<T> stack1; // 1st stack
    std::stack<T> stack2; // 2nd stack

public:
    bool is_empty() const {
        return stack1.empty() && stack2.empty(); 
    }

    void enqueue(const T& item) { 
        stack1.push(item); 
    }

    T dequeue() {  
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        T result = stack2.top();
        stack2.pop();
        return result;
    }
};
