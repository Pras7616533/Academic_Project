#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to determine precedence of operators
int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/' || op == '%')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

// Function to check if the character is an operator
bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^';
}

// Function to convert infix to postfix
string infixToPostfix(const string& infix) {
    stack<char> st;
    string postfix = "";

    for (char ch : infix) {
        // If the character is an operand, add it to the postfix string
        if (isalnum(ch)) {
            postfix += ch;
            cout << postfix << endl;
        }
        // If the character is '(', push it onto the stack
        else if (ch == '(') {
            st.push(ch);
        }
        // If the character is ')', pop and output from the stack until '(' is encountered
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                cout << postfix << endl;
                st.pop();
            }
            st.pop(); // Remove '(' from the stack
        }
        // If the character is an operator
        else if (isOperator(ch)) {
            while (!st.empty() && precedence(st.top()) >= precedence(ch) && (ch != '^')) {
                postfix += st.top();
                cout << postfix << endl;
                st.pop();
            }
            st.push(ch);
        }
    }

    // Pop all the remaining operators from the stack
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "The postfix expression is: " << postfix << endl;

    return 0;
}
