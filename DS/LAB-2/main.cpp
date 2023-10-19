#include <iostream>

using namespace std;

int main()
{
    char str1[30],str2[30],str[60];
    int i,j,k=1,pos,len1=0,len2=0,len3=0,len4=0;
    cout<<"Enter String1: ";
    cin.getline(str1,30);
    cout<<"Enter String2: ";
    cin.getline(str2,30);
    for(i=0;str1[i];i++)
    {
        len1++;
    }
    cout<<"length of string1 is: "<<len1;
    for(i=0;str2[i];i++)
    {
        len2++;
    }
    cout<<"\nlength of string2 is: "<<len2;
    for (i = 0; str1[i] != '\0'; i++);
    j = 0;


    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    cout << "\nThe concatenated string is: " << str1;
    for(i=0;str1[i];i++)
    {
        len3++;
    }
    cout<<"\nlength of concatenated string is: "<<len3;
     while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            k =1;
            break;
        }
        i++;
    }
    if(k==0)
        cout<<"\nStrings are Equal";
    else
        cout<<"\nStrings are not Equal";
   cout<<"\nEnter substring to be inserted: ";
   cin.getline(str,60);
   for(i=0;str[i];i++)
    {
        len4++;
    }
    cout<<"length of substring is: "<<len4;
   cout<<"\nEnter position to be inserted";
   cin>>pos;
   for(i=len3;i>=pos;i--)
   {
       str1[i+len4]=str1[i];
   }
   for(i=0;i<len4;i++)
   {
       str1[i]=str[pos+i];
   }
   str1[len3+len4]='\0';
   cout<<"\nFinal string after insertion is:"<<str1;
    return 0;
}
