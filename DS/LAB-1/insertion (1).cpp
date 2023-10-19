#include<iostream>
using namespace std;
int main(){
    int a[10],i,j,temp,small,n,pos,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"The modified/sorted array is"<<endl;
    for(i=1;i<n;i++)
        {
        key=a[i];
           j=i-1;
            while(a[j]>key&&j>=0)
                {
                            a[j+1]=a[j];
                            j=j-1;
                }
                a[j+1]=key;
        }
    for(i=0;i<n;i++)   cout<<a[i]<<endl;

        return 0;
}
