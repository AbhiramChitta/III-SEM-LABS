import java.util.Scanner;
class Principle{
public static void main(String args[]){
int a[][]=new int[10][10];
int i,j,n,m,sum=0;
Scanner sc=new Scanner(System.in);
System.out.println("Enter dimensions of matrix: ");
m=sc.nextInt();
System.out.println("Enter elements of matrix: ");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
a[i][j]=sc.nextInt();
}
}
System.out.println("Matrix is: ");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
System.out.print(a[i][j]+" ");
}
System.out.println();
}
System.out.println("Principle Diagonal Elements are: ");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if((i==j))
{
System.out.println(a[i][j]);
sum=sum+a[i][j];
}
}
}
System.out.println("Sum of Principle Diagonal elements are "+sum);
}
}