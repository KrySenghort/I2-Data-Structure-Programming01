//program 01: Display the character where represent ASCII CODE and ASCII CODE where represent for each of character.
#include<stdio.h>
int main()
{	char c ='A';
	int n =c;
	printf("The order in ASCII CODE of this character is %d",n);
	return 0; }
//==> Output: The order in ASCII CODE of this character is 65.*/
//**********************************************************************************************************************************************************
/*{	char c;
    int n =65;
	c=n;	
	printf("%c",c); }
==> Output: A
A is in order 65 in ASCII CODE.*/
//*************************************************************************************************************************************************************
//program 02: Arithmetic Operators, Assignment operator.
/*#include<stdio.h>
#include<string.h>
int main()
{	float salary;
	char gender;
	char name[30];//==> sequence of character or char array
	int age;
	salary=300;
	gender='M';
	//name="SengHort";//error
	age=20;
	printf("Name 	:%s\n",name);
	printf("Gender 	:%c\n",gender);
	printf("Age 	:%d\n",age);
	printf("salary 	:%.2f\n",salary);//put .2 to get just two numbers after footstop.
	int n = 56;
	int result;
	result = n%5;//% mean that as mod(remainder)
	result+=10;//is the assignment operator
	result-=23;
	printf("Remaider is %d\n",result);	
	return 0;  }	*/
//*************************************************************************************************************************************************************
//program 03: Study on Placeholder: get input from user and display the informations
/*#include<stdio.h>
int main()
{	char name[60];
	int year;
	char email[100];
	int age = 2022-year;
	printf("Enter name: ");		scanf("%s",&name);
	printf("Enter year: ");		scanf("%d",&year);
	printf("Enter email: ");	scanf("%s",&email);
	printf("**********************************\n");
	printf("Hello %s\n",name);
	printf("you are %d years old\n",age);
	printf("your email is %s\n",email);
	return 0;	}*/
//*************************************************************************************************************************************************************
//program 04: write a program by using string operators and logical operators.
/*#include<stdio.h>
int main()
{	char title[]="Hello everyone, today please welcome to the sall of the museum in Cambodia";
	char museum[]="the ancient thing in this theatre is so pretty.\t" "data science is so increase in the control flow";
	char theatre[50];
	printf("Enter theatre: ");	scanf("%s",&theatre);
	printf("%s\n",theatre);
	printf("%s\n",title);
	printf("%s\n",museum);
	int i,j,k,l=5;
	printf("Enter num1: ");		scanf("%d",&i);
	printf("Enter num2: ");		scanf("%d",&j);
	printf("Enter num3: ");		scanf("%d",&k);
	if(i<j&&i<k)
		printf("i is the minimum value");
	else if(j<k&&i<k)
		printf("k is the maximum value");
	else if(i<k&&j>k)
		printf("j is the maximum value");
	else
		printf("it is invalid");
	return 0;	} */
//*************************************************************************************************************************************************************
//program 05: Write an algorithm to determine DIV and MOD of two input numbers from a user.
/*#include<stdio.h>
int main()
{	float result,i,j,mod;
	int div;
	//int i,j,mod,div;
	printf("Enter num1: ");		scanf("%f",&i);
	printf("Enter num2: ");		scanf("%f",&j);
	//mod=i%j;
	div=i/j;
	result=i/j;
//	printf("the remainder of division between num1 and num2 is %.2f\n",mod);
	printf("the division between num1 and num2 is %d\n",div);
	printf("the result of divided between num1 and num2 is %.2f",result);
	return 0;	}*/
//*************************************************************************************************************************************************************
//program 06: write an algorithm to calculate the summation of two input of real numbers from a user. then show the result as in integer part and fractional part.
/*#include<stdio.h>
int main()
{	int i,j;
	//float i,j;
	printf("Enter number1: ");		scanf("%d",&i);
	printf("Enter number2: ");		scanf("%d",&j);
	int result1 = i+j;
	//float result2 = i+j;
	printf("the summation is %d\n",result1);
	//printf("the summation is %f\n",result2);
	return 0;	}*/
//*************************************************************************************************************************************************************
//program 07: write an algorithm to check true or false.
/*#include<stdio.h>
#include<string.h>
int main()
{	char a[50];
	char b[30];
	printf("Enter a: ");	scanf("%d",&a);
	printf("Enter b: ");	scanf("%d",&b);
	if(a>b)
		printf("it is ture");
	else 
		printf("it is false");
	return 0;	} */
