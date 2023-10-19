class Fact
{
  public static void main(String arr[])
  {
   int n,fact=1,i;
   n=Integer.parseInt(arr[0]);
   for(i=1;i<=n;i++)
   fact=fact*i;
   System.out.println(" "+fact);

}
}