//program 01: find the sum of two numbers where get input from users:
#include<stdio.h>
int main(){
	int n1,n2,result;
			printf("Enter n1: ");
		scanf("%d",&n1);
	printf("Enter n2: ");
	scanf("%d",&n2);
	result = n1 + n2;
	int multiply;
	multiply = (n1+n2)*2;
	printf("The result is %d\n",result);
	printf("The multiplication is %d\n",multiply);
	return 0;
}
//********************************************************************************************************************************************************
//program 02: suppose that the tax is 3% and a user is required to input a price. As a result we calculate and display the final price including the tax.
/*#include<stdio.h>
int main()
{
	double tax=0.03;
	double price,total_price;
	printf("Enter price: ");
	scanf("%lf",&price);
	total_price = price + (price*tax);
	printf("The total price is %lf\n",total_price);
	return 0;
}*/
//********************************************************************************************************************************************************
//program 03: Ask a student's information(name, department, birth's year).Then display her/his informations.
/*#include<stdio.h>
int main()
{*/
	/*char name[]="KrySengHort";
	char department[]="Applied Mathematic and Statistic";
	int year=2002;*/
	/*char name[20];
	char department[50];
	int year;
	printf("Enter your name: ");
	scanf("%s",&name);
	printf("Enter your department: ");
	scanf("%s",&department);
	printf("Enter your birth year: ");
	scanf("%d",&year);
	printf("The name of student is %s",name);
	printf("\nI study is department of %s",department);
	printf("\nI was born in %d",year);
	return 0;
}*/
//********************************************************************************************************************************************************
//program 04: Write an algorithm to exchange currency from Riel to Dollars:
/*#include<stdio.h>
int main()
{	int dollar;
	float riel;
	printf("Enter dollar: ");
	scanf("%d",&dollar);
	riel = dollar*4100;
	printf("The transform from %d$ to %friel is %.2f",riel); 
	return 0; }*/
//********************************************************************************************************************************************************
//program 05: Get input from user and then display it
/*#include<stdio.h>
int main()
{	char first_name[40];
	char last_name[40];
	printf("Enter your first name: ");
	scanf("%s",&first_name);
	printf("Enter your last name: ");
	scanf("%s",&last_name);
	printf("your name is %s %s",first_name,last_name);
	return 0;  }*/
//********************************************************************************************************************************************************
//program 06: Calculate square of number then display the result.
/*#include<stdio.h>
#include<math.h>
int main()
{	int i,result;
	printf("Enter number: ");
	scanf("%d",&i);
	result = pow(i,2);
	printf("The square of this number is %d",result);
	return 0;  }*/
//********************************************************************************************************************************************************
//program 07: Get input two number from user then display their summation, substract, and multiplication.
/*#include<stdio.h>
int main()
{	int num1,num2;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	int substraction = num1-num2;
	int summation = num1+num2;
	int multiplication = num1*num2;
	printf("The substraction of these two number is %d\n",substraction);
	printf("The summation of these two number is %d\n",summation);
	printf("The multiplication of  these two number is %d\n",multiplication);
	return 0;  }*/
//********************************************************************************************************************************************************
//program 08: write a program to input height and base of a triangle. Calculate the surface of this triangle and display.
/*#include<stdio.h>
int main()
{	int base, height;
	printf("Enter base: ");		scanf("%d",&base);
	printf("Enter height: ");	scanf("%d",&height);
	int surface = (base*height)/2;
	printf("The surface of this triangle is %d",surface);
	return ;	}*/
//********************************************************************************************************************************************************
//program 09: Write a program to get input from user for sides a,b,c.then calculate the surface of the triangle by using Heron Rule
/*#include<stdio.h>
#include<math.h>
int main()
{	int a,b,c;
	printf("Enter the side a: ");
	scanf("%d",&a);
	printf("Enter the side b: ");
	scanf("%d",&b);
	printf("Enter the side c: ");
	scanf("%d",&c);
	int p = (a+b+c)/2;
	int A = (p-a)*(p-b)*(p-c);
	int surface = sqrt(A);
	printf("The surface of this triangle is %d",surface);
	return 0;	}  */
//********************************************************************************************************************************************************
