import java.util.Scanner;
public class Priority extends Thread  
{    
    public void run()  
    {    
        System.out.println("Thread "+Thread.currentThread().getId()+" is Running") ;    
    }    
    public static void main(String args[])  throws InterruptedException
    {    
Scanner sc=new Scanner(System.in);
Priority t1=new Priority();    
        Priority t2=new Priority();       
 try{
        
        int pri1;
        int pri2;
        System.out.println("Enter priority for thread 1");
        pri1=sc.nextInt();
        System.out.println("Enter priority for thread 2");
        pri2=sc.nextInt();    
        t1.setPriority(pri1);  
        t2.setPriority(pri2);  
        System.out.println("Priority of thread t1 is: " + t1.getPriority());   
        System.out.println("Priority of thread t2 is: " + t2.getPriority());
        t1.start();
        t2.start();  
       }
       catch(Exception e)
       {
       System.out.println(e);
       }
        
    }  
}  