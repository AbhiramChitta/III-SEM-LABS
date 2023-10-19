#include<iostream>
using namespace std;
int main(){
    int a[10],i,j,temp,n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"The modified/sorted array is"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            {
              if(a[j]>a[j+1])
              {
                  temp=a[j+1];
                  a[j+1]=a[j];
                  a[j]=temp;
              }
            }
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
