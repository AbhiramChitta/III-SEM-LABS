import java.util.Scanner;
class Conversion{
public static void main(String args[]){
int a,e,f;
double b;
char c;
byte d,g;
Scanner s= new Scanner(System.in);
System.out.println("Enter an integer: ");
a=s.nextInt();
System.out.println("Enter an decimal no.: ");
b=s.nextDouble();
System.out.println("Enter an Character: ");
c=s.next().charAt(0);
d=(byte)a;
e=(int)c;
g=(byte)b;
f=(int)b;
System.out.println(" "+d);
System.out.println(" "+e);
System.out.println(" "+g);
System.out.println(" "+f);
}
}
