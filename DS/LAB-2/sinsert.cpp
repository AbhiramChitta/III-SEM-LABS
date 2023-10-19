#include<iostream>
    #include<string.h>
    using namespace std;
    int main()
    {
    char a[100],b[50],c[100];
    int i=0,j=0,t=0;
    cout<<"Enter the first string\n";
    cin.get(a,100);
    fflush(stdin);
    cout<<"\nEnter the string to be inserted\n";
    cin.get(b,50);
    fflush(stdin);
    int p,pos;
    cout<<"Enter the position to be inserted\n";
    cin>>p;
    pos=p-1;
    int lena=strlen(a);
    int lenb=strlen(b);
    while(i<=lena)
    {
        c[i]=a[i];
        i++;
    }
    c[i]!='\0';
    int x;
    int total=lena+lenb;
    int k=pos+lenb;
    for(i=pos;i<=total;i++)
    {
        x=c[i];
        if(t<lenb)
        {
         a[i]=b[t];
         t+=1;
        }
        a[k]=x;
        k+=1;
    }
    cout<<a;
    return 0;



   }
