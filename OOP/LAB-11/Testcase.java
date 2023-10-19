/*Write a menu driven program to create thread using runnable interface and inheriting 
thread class.[ Hint : Make use of Extends and Implements keywords]*/
import java.util.Scanner;
class Newthread implements Runnable
{
public void run()
{
for(int i=65;i<=90;++i)
{
System.out.println((char)i);
}
}
}
class Newthread1 extends Thread
{
public void run()
{
for(int j=97;j<=122;++j)
{
System.out.println((char)j);
}
}
}

public class Testcase
{
public static void main(String args[])
{
int m;
Scanner sc=new Scanner(System.in);
System.out.println("Choose the method of creating thread:\n1)Extending thread class\n2)Implementing Runnable interface");
m=sc.nextInt();
Newthread1 t1=new Newthread1();
Newthread t=new Newthread();
Thread k=new Thread(t);
if(m==1)
{
t1.start();
}
else
{
k.start();
}

}
}

