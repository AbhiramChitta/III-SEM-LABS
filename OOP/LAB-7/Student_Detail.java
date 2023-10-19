import java.util.Scanner;
class Student_Detail1{
String name[]=new String[100];
int id[]=new int[100];
String college_name[]=new String[100];
 void input(int i){
System.out.println("Enter name:");
Scanner sc= new Scanner(System.in);
name[i]=sc.next();
System.out.println("Enter id:");
id[i]=sc.nextInt();
System.out.println("Enter college name:");
college_name[i]=sc.next();
}
void display_details(int i){
System.out.println("Name: "+name[i]);
System.out.println("Id: "+id[i]);
System.out.println("college name:"+college_name[i]);
}
}
class Student_Detail{
public static void main(String arg[])
{
Student_Detail1 s= new Student_Detail1();
for(int x=0;x<3;x++)
s.input(x);
for(int x=0;x<3;x++)
s.display_details(x);
}
}