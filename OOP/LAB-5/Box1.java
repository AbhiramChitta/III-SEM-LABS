import java.util.*;
class Box{
int d,w,h;
Box(int a,int b, int c){
d=a;
w=b;
h=c;
}
int volume()
{
return (d*w*h);
}
}
class Box1{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter values of width,breadth and height ");
int a=sc.nextInt();
int d=sc.nextInt();
int c=sc.nextInt();
Box b=new Box(a,d,c);
int vol=b.volume();
System.out.println("The volume is: "+vol);
}
}