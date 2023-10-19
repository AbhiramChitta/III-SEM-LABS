import java.util.Scanner;
class Symmetric{
public static void main(String args[]){
int a[][]=new int[10][10];
int i,j,n,m,sum=0,f=1;
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
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if(a[i][j]!=a[j][i]){
f++;
break;
}
}
}
if(f==1)
System.out.println("Matrix is Symmetric");
else 
System.out.println("Matrix is not Symmetric");
}
}