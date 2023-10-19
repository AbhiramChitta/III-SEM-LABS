#include<iostream>
using namespace std;
int main(){
    int a[10],i,pos=-1,ele,ul,ll=0,mid,n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    ul=n-1;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element to be searched"<<endl;
    cin>>ele;
    mid=n/2;
    while(ll<ul)
    {
        if(ele==a[mid])
        {
            pos=mid+1;
            break;
        }
        if(ele>a[ll])
            ll=ll+1;
        if(ele<a[ul])
            ul=ul-1;
        mid=(ul+ll)/2;
    };
    if(pos==-1)
        cout<<"The element is not present in the array";
    else
        cout<<"The element is present in "<<pos<<"th position in the array";
    return 0;
}
