#include<iostream>
#include<stdio.h>
using namespace std;
class Student{
    private:
    char name[20];
    int roll;
    char grade;
public:
static void read(Student s[],int n){
    int i;
    for(i=0;i<n;i++)
    {
       fflush(stdin);
        cout<<"Enter the name"<<endl;
        gets(s[i].name);
        cout<<"Enter the roll no."<<endl;
        cin>>s[i].roll;
        cout<<"Enter the grade"<<endl;
        cin>>s[i].grade;
    }
}
static void display(Student s[],int n){
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Name "<<s[i].name<<endl;
        cout<<"Rollno. "<<s[i].roll<<endl;
        cout<<"Grade "<<s[i].grade<<endl;
    }
    cout<<endl;
}
static void sort(Student s[],int n)
{
    int i,j;
    Student temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
          if(s[j].roll>s[j+1].roll)
          {
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
          }
        }
    }
}
};
int main(){
    Student stud[100];
    int n;
    cout<<"Enter the number of students";
    cin>>n;
    Student::read(stud,n);
    Student::sort(stud,n);
    cout<<"The sorted array of students is"<<endl;
    Student::display(stud,n);
    return 0;
}
