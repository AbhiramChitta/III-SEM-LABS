#include<iostream>
using namespace std;
#define POSTFIXSIZE 100

class Stack
{
    int top,MAX;
    int* a;
    public:
    Stack(int size)
    {
        top=-1;
        MAX=size;
        a= new int [MAX];
    }
    void push(int x)
    {
        if(top>=MAX-1)
            cout<<"Stack Overflow";
        else
            a[++top]=x;
    }
    int pop()
    {
        if(top<0)
        {
            cout<<"Stack underflow";
            return INT_MIN;
        }
        else
        {
            int x=a[top--];
            return x;
        }
    }
    void EvalPostfix(char postfix[])
    {
        int i;
        char ch;
        int val;
        int A, B;
    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {

            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {

            A = pop();
            B = pop();

            switch (ch)
            {
            case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }


            push(val);
        }
    }
    printf(" \n Result of expression evaluation : %d \n", pop());
}
};
int main()
{
     int i;
     Stack s(20);

    char postfix[POSTFIXSIZE];

    printf(" \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");



    for (i = 0; i <= POSTFIXSIZE - 1; i++) {
        scanf("%c", &postfix[i]);

        if (postfix[i] == ')')
        {
            break;
        }
    }

s.EvalPostfix(postfix);

    return 0;
}
