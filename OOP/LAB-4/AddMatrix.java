import java.util.Scanner;
class AddMatrix{
public static void main(String args[]){
int a[][]=new int[10][10],b[][]=new int[10][10],c[][]=new int[10][10];
int i,j,n1,m1,n2,m2,f=1,sum=0;
Scanner sc=new Scanner(System.in);
System.out.println("Enter dimensions of matrix1: ");
m1=sc.nextInt();
n1=sc.nextInt();
System.out.println("Enter elements of matrix1: ");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
a[i][j]=sc.nextInt();
}
}
System.out.println("matrix1 is: ");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
System.out.print(a[i][j]+" ");
}
System.out.println();
}

System.out.println("Enter elements of matrix2: ");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
b[i][j]=sc.nextInt();
}
}
System.out.println("matrix2 is: ");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
System.out.print(b[i][j]+" ");
}
System.out.println();
}
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
System.out.println("Resultant matrix after sum of matrix1 and matrix2 is: ");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
System.out.print(c[i][j]+" ");
}
System.out.println();
}
}
}
