import java.util.Scanner;
class Calc{
public static void main (String args[]){
float a,b;
double answer; 
char dummychar,ch;
Scanner s= new Scanner(System.in);
do{
System.out.println("Enter first number: ");
a=s.nextFloat();
System.out.println("Enter operator: ");
dummychar=s.next().charAt(0);
System.out.println("Enter second number: ");
b=s.nextFloat();
switch(dummychar)
{ case '+':
 answer=a+b;
break;
 case '-':
 answer=a-b;
break;
case '*':
 answer=a*b;
break;
case '/':
 answer=a/b;
break;
default:
answer=0;
}
System.out.println("answer: "+answer);
System.out.println("do you want to do another calculation(y or n): ");
ch=s.next().charAt(1);
}while(ch!='n');
return ;
}
}
