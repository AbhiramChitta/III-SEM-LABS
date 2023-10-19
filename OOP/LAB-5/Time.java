class Time1{
int h,m,s;
Time1()
{
h=0;
m=0;
s=0;
}
Time1(int x)
{
h=10;
m=10;
s=10;
}
void display()
{
System.out.println(h+":"+m+":"+s);
}
}
class Time{
public static void main(String args[]){
Time1 t=new Time1(5);
t.display();
}
}

