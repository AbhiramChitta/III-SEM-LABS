class NumberSign
{
  public static void main(String arr[])
  {
   int a[]=new int[10],i;
for(i=0;i<10;i++)
   {
    a[i]=Integer.parseInt(arr[i]);
    if(a[i]<0)
   {
    System.out.println("Negative number: "+a[i]);
   }
   else if(a[i]>0)
   {
     System.out.println("Positive numbers: "+a[i]);
   }
   else
   {
     System.out.println("Zeroes: "+a[i]);
   }
  }
 }
}
