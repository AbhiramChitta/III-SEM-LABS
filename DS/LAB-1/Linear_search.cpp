#include<iostream>
using namespace std;
int main()
{
    int a[10],i,num,pos;
    cout<<"Enter 10 numbers";
    for(i=0;i<10;i++)
    {
    cin>>a[i];
    }
    cout<<"\nEnter number to be searched ";
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            pos=i+1;
            break;
        }
    }
    cout<<"\nno. is at position "<<pos;
    return 0;
}
