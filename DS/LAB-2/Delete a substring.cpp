#include<iostream>
#include<stdio.h>
using namespace std;
void deletestring(char s1[],char s2[],char s3[])
{
    int i,j=0,k,flag=0,n=0;
    int len2;
    for(len2=0;s2[len2]!='\0';len2++);
    
        for(i=0;s1[i]!='\0';i++)
        {
            k=i;
            while(s1[i]==s2[j])
            {
            i++;
            j++;
            if(j==len2)
            {
                flag=1;break;
            }
            }
            j=0;
            if(flag==0)
            i=k;
            else
            flag=0;
            
            s3[n++]=s1[i];
        }
        s3[n]='\0';
}
int main()
{
    char s21[100],s31[100],s41[100];
    cout<<"Enter the string"<<endl;
    gets(s21);
    cout<<"Enter the string to delete"<<endl;
    gets(s31);
    deletestring(s21,s31,s41);
    cout<<"The string after deletion is\n"<<s41;
    return 0;
}