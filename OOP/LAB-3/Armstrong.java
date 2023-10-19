import java.util.Scanner;
class Armstrong{
public static void main(String args[]){
int n,temp,rem,prod=0;
Scanner s= new Scanner(System.in);
System.out.println("Enter a number: ");
n=s.nextInt();
temp=n;

while(temp!=0)
{
rem=temp%10;
prod=prod+rem*rem*rem;
temp/=10;
}
if(n==prod)
{
System.out.println("Armstrong no.");
}
else
{
System.out.println("Not Armstrong no.");
}
}
}