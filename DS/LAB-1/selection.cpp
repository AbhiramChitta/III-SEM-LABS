#include<iostream>
using namespace std;
int main(){
    int a[10],i,j,temp,small,n,pos;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"The modified/sorted array is"<<endl;
    for(i=0;i<n-1;i++)
    {
         small=a[i];
        for(j=i;j<n;j++)
            {
              if(a[j]<small)
              {
                small=a[j];
                pos=j;

              }
            }
            temp=a[i];
            a[i]=small;
            a[pos]=temp;
    }

    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
