#include<iostream>
using namespace std;
class Time{
int hour,min,sec;
public:
void read()
{
    cout<<"Enter hour";
    cin>>hour;
    cout<<"Enter minutes";
    cin>>min;
    cout<<"Enter seconds";
    cin>>sec;
}
void display()
{
    cout<<hour<<":"<<min<<":"<<sec<<endl;
}
Time add(Time t2)
{
    Time t3;
    t3.sec=sec+t2.sec;
    t3.min=min+t2.min+t3.sec/60;
    t3.sec=t3.sec%60;
    t3.hour=hour+t2.hour+t3.min/60;
    t3.min=t3.min%60;
    return t3;
}
long timetosec()
{
    long secs=hour*60*60+min*60+sec;
    return secs;
}
void sectotime(long secs)
{
    hour=secs/3600;
    secs=secs%3600;
    min=secs/60;
    sec=secs;
}
Time sub(Time t2)
{
    Time t3;
    long diff;
    long t1secs=timetosec();
    long t2secs=t2.timetosec();
    cout<<"t1secs ="<<t1secs<<endl;
    cout<<"t2secs ="<<t2secs<<endl;
    if(t1secs>t2secs)
    {
        diff=t1secs-t2secs;
    }
    else
    {
        diff=t2secs-t1secs;
    }
    t3.sectotime(diff);
    return t3;
}
};
int main()
{
    Time t1,t2;
    t1.read();
    t2.read();
    t1.display();
    t2.display();
    Time t3=t1.add(t2);
    t3.display();
    Time t4=t1.sub(t2);
    t4.display();
    return 0;
}
