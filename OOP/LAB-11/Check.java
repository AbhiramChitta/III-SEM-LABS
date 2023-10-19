/*Demonstrate isAlive() and join() methods in checking status of a thread.*/
class NewThread extends Thread
{
public void run()
{
System.out.println("Thread "+Thread.currentThread().getId()+" is Running");
try
{
Thread.sleep(1000);
}
catch(InterruptedException e)
{
System.out.println(e);
}
System.out.println("Thread " +Thread.currentThread().getId()+" ends");
}
}
public class Check{
public static void main(String args[])throws InterruptedException
{
Thread t1=new Thread(new NewThread());
Thread t2=new Thread(new NewThread());
Thread t3=new Thread(new NewThread());
t1.start();
System.out.println(t1.isAlive());

try{
t1.join();	
}
catch(InterruptedException ie)
{System.out.println(ie);
}
System.out.println(t1.isAlive());

t2.start();
System.out.println(t2.isAlive());
try{
t2.join();	
}
catch(InterruptedException ie)
{System.out.println(ie);
}

System.out.println(t2.isAlive());

t3.start();

System.out.println(t3.isAlive());


}
}
