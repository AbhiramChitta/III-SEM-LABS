class Palin
{
  public static void main(String arr[])
  {
   int temp,rem,x,sum=0;
   x=Integer.parseInt(arr[0]);
   temp=x;
   while(x>0)
  {
   rem=x%10;
   sum=sum*10+rem;
   x=x/10;
  }
  if(temp==sum)
 {
  System.out.println("Palindrome");
 }
else
{
 System.out.println("Not palindrome");
}
}
}
   