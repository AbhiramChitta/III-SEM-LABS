import java.util.Scanner;
class PalinEven{
public static void main(String args[])
{
int n,i,rem,sum,temp,count=1;
int a[]=new int[20],b[]=new int[20];
Scanner sc= new Scanner(System.in);
System.out.println("Enter no. of numbers:");
n=sc.nextInt();
System.out.println("Enter numbers:");
for(i=0;i<n;i++)
{
a[i]=sc.nextInt();
}
for(i=0;i<n;i++)
{
sum=0;
if(a[i]%2==0)
{
temp=n;
while(temp>0)
{
rem=temp%10;
sum=sum*10+rem;
temp=temp/10;
}
if(sum==n)
count=1;
else
count++;
if(count==1)
System.out.println(a[i]);
i++;
}


}
}
}
