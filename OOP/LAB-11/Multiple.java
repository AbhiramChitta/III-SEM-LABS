/*Write a program to create multiple threads. [ Hint : Multiple instances of thread]*/
class MyThread implements Runnable {
  public void run() {
    int i = 0;

    for (i = 1; i <= 3; i++)
      System.out.println("Thread " + Thread.currentThread().getId() + " is running");
  }
}

public class Multiple {
  public static void main(String[] args) {
    Thread t1 = new Thread(new MyThread());
    Thread t2 = new Thread(new MyThread());
    Thread t3 = new Thread(new MyThread());

    t1.start();
    t2.start();
    t3.start();
  }
}
