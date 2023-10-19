import java.util.Scanner;
class Employee1{
String EN,City;
double S,hra,da,Total;
void getdata(){
Scanner sc=new Scanner(System.in);
System.out.println("Enter Name: ");
EN=sc.nextLine();
System.out.println("Enter City Name: ");
City=sc.nextLine();
System.out.println("Enter Basic Salary: ");
S=sc.nextInt();
System.out.println("Enter Dearness allowance: ");
da=sc.nextInt();
System.out.println("Enter House Rent: ");
hra=sc.nextInt();
}
double calculate()
{
double Total=S+(S*da)/100+(S*hra)/100;
return (Total);
}
void display(double Total)
{
System.out.println("Name= "+EN);
System.out.println("City= "+City);
System.out.println("Total= "+Total);
}
}
class Employee{
public static void main(String args[]){
Employee1 E=new Employee1();
E.getdata();
double b=E.calculate();

E.display(b);
}
}
