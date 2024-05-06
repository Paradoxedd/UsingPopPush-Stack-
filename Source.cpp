#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private:
    vector<int> stack;

public:
    void push(int item) 
    {
        stack.push_back(item);
    }

    int pop()
    {
        if (!is_empty())
        {
            int top_item = stack.back();

            stack.pop_back();

            return top_item;
        }
        else 
        {
            throw out_of_range("pop from empty stack");
        }
    }

    int top()
    {
        
        if (!is_empty()) 
        {
            return stack.back();
        }
        else
        {
            throw out_of_range("top from empty stack");
        }
    }

    bool is_empty()
    {
        return stack.empty();
    }
};

int main()
{
    
    Stack my_stack;

    my_stack.push(7);
    my_stack.push(69);
    my_stack.push(420);

    cout << "top element of the stack: " << my_stack.top() << endl;

    cout << "popped element: " << my_stack.pop() << endl;

    cout << "top element of the stack after pop: " << my_stack.top() << endl;

    return 0;
}
