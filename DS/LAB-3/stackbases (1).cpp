#define MAX_SIZE 15
#include<iostream>
using namespace std;
class base
{
    private:
    int s[15],top,rear,r;
    public:
    void push(int,int);
    int pop();
    void check();
    void display();
    base()
    {
        top=-1;
    };
};
void base::push(int x,int n)
{
    if(top==MAX_SIZE)
        cout<<"The stack is full"<<endl;
    else
    {
        while(x!=0)
        {
            r=x%n;
            s[++top]=r;
            x=x/n;
            cout<<r<<" has been added to the stack"<<endl;
        };
    }

    }
int base::pop()
{
    int x;
    while(top!=-1)
    {
         x=s[top--];
            cout<<x;
    }
}

#include<string.h>

int main()
{
    base b;
    int i,j,k;
    char c[50];
    cout<<"Enter the number and the base"<<endl;
    cin>>i>>j;
    b.push(i,j);
    b.pop();
        return 0;
}
