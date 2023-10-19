class Rectangle
{
  public static void main(String arr[])
  {
   int length,breadth;
   length=Integer.parseInt(arr[0]);
   breadth=Integer.parseInt(arr[1]);
   int area=length*breadth;
   int circumference=2 *(length + breadth);
   System.out.println("length="+length);
   System.out.println("breadth="+breadth);
   System.out.println("area="+area);
   System.out.println("circumference="+circumference);
  }
}