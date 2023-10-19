import java.util.Scanner;
class Counter{
static int count=0;
{
count+=1;
}
public Counter()
    {
    }
public Counter(int n)
    {
    }
public Counter(String s)
    {
    }
public static void main(String args[])
    {
        Counter c1 = new Counter();
        Counter c2 = new Counter(5);
        Counter c3 = new Counter("GFG");
        Counter c4=new Counter();
      System.out.println(Counter.count);
  }
    }