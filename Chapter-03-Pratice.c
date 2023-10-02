//Using Decision Making
//*********************************************************************************************************************************************
//program 01: consider on if and end condition.
#include<stdio.h>
int main()
{	if(3<2)
	printf("Hello\n");
	printf("Hello 2");
	return 0;}
//==>Output: Hello 2
//==>this case, it will not show any result in the if condition when it is a false condition.
//*********************************************************************************************************************************************
//program 02: ask user to get input.
/*#include<stdio.h>
int main()
{	int a,b;
	printf("Enter a: ");	scanf("%d",&a);
	printf("Enter b: ");	scanf("%d",&b);
	if(a<b)
	{	printf("Hi, ");
		printf("welcome back!\n");	}
		printf("Hello");
	return 0;	}*/
//==>Output: (Hi, welcome back!)<=>(a<b) , Hello
//*********************************************************************************************************************************************
//program 03: consider on integer(a) condition
/*#include<stdio.h>
int main()
{	int a;
	printf("Enter a: ");	scanf("%d",&a);
	if(a<9)
		printf("it is true");
	else
		printf("it is false\n");
		printf("Hello 2\n");
	return 0;	} */
//*********************************************************************************************************************************************
//program 04: consider on integer a and b 
/*#include<stdio.h>
int main()
{	int a , b;
	printf("Enter a: ");	scanf("%d",&a);
	printf("Enter b: ");	scanf("%d",&b);
	if(a<b)
		printf("it is true\n");
	else 
		printf("it is false\n");
		printf("Hello 2\n");
	return 0;	}*/
//*********************************************************************************************************************************************
//program 05: Get two values from a user then check the bigger and the smaller value.
/*#include<stdio.h>
int main()
{	int a,b;
	printf("Enter a: ");	scanf("%d",&a);
	printf("Enter b: ");	scanf("%d",&b);
	if(a>b)
	{	printf("The greater value is: %d\n",a);
		printf("The smaller value is: %d\n",b);	}
	else
	{	printf("The greater value is: %d\n",b);
		printf("The smaller value is: %d\n",a);	}
	return 0;	}*/
//*********************************************************************************************************************************************
//program 06: Get a number from user then check whether it is positive or negative.
/*#include<stdio.h>
int main()
{	int x;
	printf("Enter x: ");	scanf("%d",&x);
	if(x>0)
		printf("x is a positive number");
	else if(x==0)
		printf("x is neutral number");
	else
		printf("x is a negative number");
	return 0;	} */
//*********************************************************************************************************************************************
//program 07: Ask user to get a number and check that it is equal or less or more than 100.
/*#include<stdio.h>
int main()
{	int x;
	printf("Enter x: ");	scanf("%d",&x);
	if(x<100)
		printf("it is less than 100");
	else if(x==100)
		printf("it is equal to 100");
	else 
		printf("it is more than 100");
	return 0;	}*/
//==> in case equal we put (==) not (=). it is relational operator.
//*********************************************************************************************************************************************
//program 08: Get a number from user then check if the number is greater than or equal to 100, greater than 50 but less than 100, the rest condition.
/*#include<stdio.h>
;int main()
{	int a;
	printf("Enter a: ");
	scanf("%d",&a);
	if(a>100)
		printf("it is greater than 100");
	else if(a==100)
		printf("it is equal to 100");
	else if(a>50)
		printf("it is greater than 50 but less than 100");
	else if(a==50)
		printf("it is equal to 50");
	else
		printf("it is less than 50");	
	return 0;	}*/
//*********************************************************************************************************************************************
//program 09: Compare between two algorithm below.
/*#include<stdio.h>
int main()
{	int x;
	printf("Enter x: ");	scanf("%d",&x);*/
	/*if(x>10)
		printf("x>10\n");
	if(x>3&&x<=10)
		printf("3<x<=10\n");
	if(x>0&&x<=7)
		printf("0<x<=7\n");	}*/
//*********************************************************************************************************************************************
/*	if(x>10)
		printf("x>10");	
	else if(x>5)
		printf("5<x<10");
	else if(x>0)
	 	printf("0<x<=5");	
	else
		printf("it is invalid");	
	return 0;	}*/
//====> Note: in case 01: program check all condition because if condition has different function.
//====> Note: in case 02: program check just only one time and choose just only one correct condition to show.
//*********************************************************************************************************************************************
//program 10: Nested Condition
/*#include<stdio.h>
int main()
{	int x;
	printf("Enter x: ");	scanf("%d",&x);
	if(x<0)
		printf("it is a negative number\n");
	else if(x==0)
		printf("it is zero\n");
	else
		printf("it is a positive number\n");
	printf("Quitting the program...\n");
	return 0;	}*/
//*********************************************************************************************************************************************
/*#include<stdio.h>
int main()
{	int a,b;
	printf("Enter a: ");	scanf("%d",&a);
	printf("Enter b: ");	scanf("%d",&b);
	if(a==100)
	{	printf("a is equal to 100");
		if(b>100)
		{	printf("b is greater than 100");	}
		else
		{	printf("b is not greater than 100");	}	}
	else if(a>100)
	{	printf("a is greater than 100");	}
	else if(a<100)
	{	printf("a is smaller than 100");	}		} */
//*********************************************************************************************************************************************
//*Practice and Discussion
//program 11: Let's check the grade of student's score.
/*#include<stdio.h>
int main()
{	int score;
	printf("Enter score: ");	scanf("%d",&score);
	if(score>=90)
		printf("you get grade A");
	else if(score>=80)
		printf("you get grade B");
	else if(score>=70)
		printf("you get grade C");
	else if(score>=60)
		printf("you get grade D");
	else if(score>=50)
		printf("you get grade E");
	else
		printf("you get grade F");
	return 0;	}*/ 
//*********************************************************************************************************************************************
//program 12: write an algorithm to find the biggest number between 5 numbers entered by a user.
/*#include<stdio.h>
int main()
{	int a,b,c,d,e;
	printf("Enter a: ");	scanf("%d",&a);
	printf("Enter b: ");	scanf("%d",&b);
	printf("Enter c: ");	scanf("%d",&c);
	printf("Enter d: ");	scanf("%d",&d);
	printf("Enter e: ");	scanf("%d",&e);
	if(a>b&&a>c&&a>d&&a>e)
		printf("The biggest number is: %d",a);
	else if(b>a&&b>c&&b>d&&b>e)
		printf("The biggest number is: %d",b);
	else if(c>a&&c>b&&c>d&&c>e)
		printf("The biggest number is: %d",c);
	else if(d>a&&d>b&&d>c&&d>e)
		printf("The biggest number is: %d",d);
	else if(e>a&&e>b&&e>d&&e>c)
		printf("The biggest number is: %d",e);
	else
		printf("It is invalid");
	return 0;	}*/
//*********************************************************************************************************************************************
//program 13: ask to get input character from a user and tell if that character is a number, an uppercase letter, or an lowercase letter.
//if not, shower a message "That is not a number nor a letter". 
/*#include<stdio.h>
int main(){	
	char c;
	int n;
	printf("Enter n: ");	scanf("%d",&n);
	c=n;
	if(n>=48&&n<=57)
		printf("it is a number\n");
	else if(n>=65&&n<=90)
	{	printf("it is an uppercase letter\n");
		printf("the order letter of this number is %c\n",c);	}
	else if(n>=97&&n<=122)
	{	printf("it is a lowercase\n");
		printf("the order letter of this number is %c\n",c);	}
	else
		printf("it is not a number or letter\n");
	return 0;	}*/
//*********************************************************************************************************************************************
//program 14: write an algorithm to find the minimum number between 7 numbers which are entered by a user.
/*#include<stdio.h>
int main()
{	int a,b,c,d,e,f,g;
	printf("Enter a,b,c,d,e,f,g: ");	scanf("%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g);
	if(a<b&&a<c&&a<d&&a<e&&a<f&&a<g)
			printf("the minimum value number is %d",a);
	else if(b<a&&b<c&&b<d&&b<e&&b<f&&b<g)
			printf("the minimum value number is %d",b);
	else if(c<a&&c<b&&c<d&&c<e&&c<f&&c<g)
			printf("the minimum value number is %d",b);
	else if(d<a&&d<c&&d<b&&d<e&&d<f&&d<g)
			printf("the minimum value number is %d",d);
	else if(e<a&&e<c&&e<d&&e<b&&e<f&&e<g)
			printf("the minimum value number is %d",e);
	else if(f<a&&f<c&&f<d&&f<e&&f<b&&f<g)
			printf("the minimum value number is %d",f);
	else
			printf("the minimum value number is %d",g);
	return 0;	}*/
//******************************************************************************************************************
/*#include<stdio.h>
int main()
{	int n1,n2,n3,n4,n5,n6,n7;
	int min;
	printf("Enter n1,n2,n3,n4,n5,n6,n7: ");	scanf("%d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7);
	min = n1;
	if(min>n2)	{min=n2;}
	if(min>n3)	{min=n3;}
	if(min>n4)	{min=n4;}
	if(min>n5)	{min=n5;}
	if(min>n6)	{min=n6;}
	printf("the minimum number is %d\n",min);
	return 0;	}*/
//*********************************************************************************************************************************************
//program 15: Write an algorithm to ask a user for year, month, and day(3 integer variables). Then tell if it is a valid date.
/*#include<stdio.h>
int main()
{	int day,month,year;
	printf("Enter year: ");		scanf("%d",&year);
	printf("Enter month: ");	scanf("%d",&month);
	printf("Enter day: "); 		scanf("%d",&day);
	if(year>0) 
	{	if(month>0 && month<=12)
		{	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			{	if(day>0 && day<=31)
					printf("it is valid date");
				else
					printf("it is invalid");	}
			else if(month==2)
			{	if(day>0 && (day==28||day==29))
					printf("it is valid date");
				else
					printf("it is invalid");	}
			else
			{	if(day<=30)
					printf("it is valid date");
				else
					printf("it is invalid");	}	}	}
	else
	{	printf("it is invalid");	}
	return 0;	} */
//*********************************************************************************************************************************************
//program 16: write an algorithm to check whether a number entered by a user is an even or odd number.
/*#include<stdio.h>
int main()
{	int a;
	printf("Enter number: ");	scanf("%d",&a);
	if(a%2==0)
		printf("it is even number");
	else
		printf("it is odd number");
	return 0;	}*/
//*********************************************************************************************************************************************
//program 17: write an algorithm to check if a number entered by a user is positive or negative number.
/*#include<stdio.h>
int main()
{	int a;
	printf("Enter number: ");	scanf("%d",&a);
	if(a<0)
		printf("it is negative number");
	else if(a==0)
		printf("it is zero");
	else
		printf("it is positive number");
	return 0;	}*/
//*********************************************************************************************************************************************
//program 18: write an algorithm to find root of the quadratic equation ax^2 + bx + c =0.ask a user to get input the coefficient a,b,c. 
//Find delta and root x1, x2 based on the value. Then display the result.
/*#include<stdio.h>
#include<math.h>
int main()
{	int a,b,c;
	printf("Enter a: ");	scanf("%d",&a);
	printf("Enter b: ");	scanf("%d",&b);
	printf("Enter c: ");	scanf("%d",&c);
	int delta = pow(b,2)-4*a*c;
	int x1 = (-b+sqrt(delta))/(2*a);
	int x2 = (-b-sqrt(delta))/(2*a);
	if(delta>=0)
		printf("There are two roots\n x1=%d and x2=%d",x1,x2);
	else
		printf("The roots are imaginary");
	return 0;	}*/
//*********************************************************************************************************************************************
//program 19: write an algorithm to ask a user for 8 numbers. Find the maximum number among them. Display maximum number on screen.
/*#include<stdio.h>
int main()
{	int num1,num2,num3,num4,num5,num6,num7,num8;
	int max;
	printf("Enter num1,num2,num3,num4,num5,num6,num7,num8: ");	
	scanf("%d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8);
	max=num1;
				if(max<num2)	{ max=num2; }
				if(max<num3)	{ max=num3; }
				if(max<num4)	{ max=num4; }
				if(max<num5)	{ max=num5; }
				if(max<num6)	{ max=num6; }
				if(max<num7)	{ max=num7; }
				if(max<num8)	{ max=num8; }
	printf("the maximum number is %d\n",max);
	return 0;	}*/
//*********************************************************************************************************************************************
//program 20: write an algorithm to compute tax that a person needs to pay.the person needs to pay tax 2% for female and her salary is more than
//300 USD, 4% for male and his salary is more than 300 USD. when a person's salary is less than 300 USD, so no need to pay tax.
/*#include<stdio.h>
int main()
{	char name[50];
	char sex;
	float tax;
	float salary;
	printf("Enter your sex: "); 	scanf("%c",&sex);
	printf("Enter your salary: "); 	scanf("%f",&salary);
	printf("Enter your name: "); 	scanf("%s",&name);
	if(sex == 'M'){
		if(salary>300){	
			tax = 0.03*salary;	 
			printf("you need to pay the tax %.2f\n",tax);  }
		else	
			printf("you do not need to pay tax\n");		}
	else if(sex == 'F')
	{	if(salary>300){	
			tax = 0.02*salary;	
			printf("you need to pay the tax %.2f\n",tax);  }
		else
			printf("you do not need to pay tax\n");		}
	else 	
			printf("it is invalid\n");
	return 0;	}*/
//*****************************************************************************************************************
/*#include<stdio.h>
int main()
{	char name[30];
	char sex;
	float salary, tax;
	printf("Enter name: ");		scanf("%s",&name);
	printf("Enter sex: ");		scanf("%c",&sex);	scanf("%c",&sex); //because "Enter" is called as a character too in ASCII Code.
	printf("Enter salary: ");	scanf("%f",&salary);
	if(salary>300){	
		if(sex =='M'||sex=='m'){	
			tax = 0.03*salary;		
			printf("you need to pay %.2f for tax\n",tax);
			float final_salary = salary-tax;
			printf("your final salary is %.2f\n",final_salary);	}
		else if(sex =='F'||sex=='f'){
			tax = 0.02*salary;		
			printf("you need to pay %.2f for tax\n", tax);
			float final_salary = salary-tax;
			printf("your final salary is %.2f\n",final_salary); }
		else{
			printf("it is invalid");	}  }
	else{   
			printf("you do not need to pay."); }
	return 0;	} */
//*********************************************************************************************************************************************
//program 21: for loop beginer
/*#include<stdio.h>
int main()
{	int i;
	for (i=0;i<1000;i=i+1) //for(initialization;condition;increment)
	{	printf("\t%d", i); 	}
	printf("\n");
	printf("Hello my name is kry senghort and i am data scientist.\n\n");
	return 0;	}*/
//*********************************************************************************************************************************************
//program 22: how to stop the loop.
/*#include<stdio.h>
int main()
{	int i;
	for(i=0;i<100;i++)
	{	printf("%d", i);
		printf("Hello you are my sweetheart");
	}	}*/
//*********************************************************************************************************************************************
//program 23: for loop....
/*#include<stdio.h>
	int main(){	
		int k,m,n;
			for(k=1;k<=100;k++){
				printf("\t%d",k);	}
				printf("\n\n");
			for(m=2;m<=100;m+=2){
				printf("\t%d",m);	}
				printf("\n\n");
			for(n=7;n<=100;n+=7){
				printf("\t%d",n);	}
	return 0;	}*/
//*********************************************************************************************************************************************
//program 24: the summation is gotten by some numbers using for loop.
/*#include<stdio.h>
int main()
{	int n;
	printf("Enter number: ");	scanf("%d",&n);
	int i,sum=0;
	if(n>=0){	
		for(i=0;i<=n;i++){	
			printf("\t%d",i);
			sum = sum + i;	}
		printf("\n\n");
		printf("the summmation is %d\n",sum);	}
	else
		printf("it is invalid");
	return 0;	}*/
//********************************************************************************************************************************************
//program 25: Write an algorithm to show the result of students based on their grades. A user is required to input his/her grade.
/*#include<stdio.h>
int main(){	
	char grade;
	printf("Enter grade: ");	scanf("%c",&grade);
		if(grade=='A'||grade=='a')
			printf("you are very good\n");	
		else if(grade=='B'||grade=='b')
			printf("you are good\n");
		else if(grade=='C'||grade=='c')
			printf("you are good enough");
		else if(grade=='D'||grade=='d')
			printf("you are pass");
		else
			printf("it is invalid");
	return 0;	}*/
//********************************************************************************************************************************************
//program 26: Write an algorithm which allows a user to input 2 numbers and an operation(+,-,/,*) then using the SWITCH...DO to perform the given operation between those two numbers.
/*#include<stdio.h>
int main(){ 
while(1>0){ //we use it when we want to run code as for looping.
	int i,j;
		printf("Enter number1: ");	scanf("%d",&i);
		printf("Enter number2: ");	scanf("%d",&j);
	int choice;
	int summation,substraction,multiplication,division;
		printf("  1==>summation\n  2==>substraction\n  3==>multiplication\n  4==>division\n");
		printf("Please enter 1,2,3,4,5,6,7 to choose your choice: ");	scanf("%d",&choice);
	switch(choice)
	{	case 1:
			summation=i+j;
			printf("the summation is %d\n",summation);
			break;
		case 2:
			substraction=i-j;
			printf("the substraction is %d\n",substraction);
			break;
		case 3:
			multiplication=i*j;
			printf("the multiplication of these two numbers is %d\n",multiplication);
			break;
		case 4:
			division=i/j;
			printf("the division of these two numbers is %d\n",division);
			break;	}
	char option[5];
	printf("Do you want to continue or not?\n"); scanf("%s",&option);
		if(option=="no")
			break; }
	return 0;  }*/
//*********************************************************************************************************************************************
//program 27: for loop 01
/*#include<stdio.h>
int main()
{	int i;
		for(i=1;i<=7;i=i+2)
			printf("\t%d",i);  
		for(i=25;i<=30;i++)
			printf("\t%d",i);   
		for(i=25;i>0;i=i-5)
			printf("\t%d",i);   
		//for(i=7;i>7;i+=2)
	    //	printf("\t%d",i);  //it is infinite loop.
	return 0; } */
//*********************************************************************************************************************************************
//program 28: for loop 02:
/*#include<stdio.h>
int main(){	
	int i,j;
		for(i=1;i<=3;i++){	
			for(j=1;j<=4;j++){	
				printf("A");
				printf("B");	}
		printf("\t");	} 
	return 0;	} */
//==> output: ABABABAB	ABABABAB	ABABABAB
//*********************************************************************************************************************************************
//program 29: for loop 03:
/*#include<stdio.h>
int main(){	
	int i,j,k,n=4;
		for(i=1;i<=n;i=i++){	
			for(j=1;j<=n-i;j++){  
				    printf(" "); }
				for(k=1;k<=2*i-1;k=k++){  
						printf("*");	}
		        printf("\n"); }
	return 0; } 
/*==> Output: 
		   *
		  ***
		 *****
		*******         */
//*****************************************************************************************************************************
//program 30: for loop 04:
/*#include<stdio.h>
int main(){	
	int s=0;
	int k;
		for(k=1;k<100;k++){
			printf("\t%d",k);
			s=s+k;  }
		printf("\n\tSum is: %d",s);
	int s2=0;
	int t=1;
		while(t<100){	
			s2=s2+t;
			t=t+1;	}
		printf("\n\tSum is: %d",s2);
    return 0;  }*/
//*********************************************************************************************************************************************
//program 31: write an algorithm to display the words "Hello" 20 times and then ""bye" 10 time. 
//first section line for displaying the word"Hello" and second section line for displaying the word"byte".
/*#include<stdio.h>
int main(){
	int i;
		for(i=1;i<=20;i++)
			printf("Hello %d\n",i);	
		for(i=1;i<=10;i++){
			printf("bye %d\n",i);	}
	return 0;  } */                
//********************************************************************************************************************************************
//program 32: write an algorithm to display all of even numbers between 0 to 30.
//#include<stdio.h>
//int main(){
	/*int i;
	for(i=0;i<=30;i++){
		if(i%2==0){
			printf("\t%d",i);	}	}*/
//******************************************
	/*int i=30;
	while(i>0){
		if(i%2==0){
			printf("\t%d",i);
		}     i=i-1;	}*/
//*********************************************************************************************************************************************
//program 33: write an algorithm to calculate factorial of integer numbers n, where n is a positive number entered by a user.
/*#include<stdio.h>
int main(){	
	int num,count,fact=1;
		printf("Enter number: ");	scanf("%d",&num);
			for(count=1;count<=num;count++)
				fact=fact*count;	
		printf("factorial of %d is %d",num,fact);
	return 0;  } */
//*****************************************************
/*#include<stdio.h>
int main(){	
	int num,count=1,fact=1;
		printf("Enter number: ");	scanf("%d",&num);
			while(count<=num){	
				fact=fact*count;
					count++;  }
		printf("factorial of this number is %d",fact);
	return 0;	}*/
//*********************************************************************************************************************************************
//program 34: write an algorithm to sum of suite number from 1 to n, where n is a positive number and entered by a user.
//#include<stdio.h>
//int main(){
/*	int count,sum=0,num;
		printf("Enter number: ");	scanf("%d",&num);
			for(count=1;count<=num;count++){
				sum=sum+count;	}
		printf("the summation this suite number is %d\n",sum);
	return 0;*/
//*************************************************************
	/*int count=1,sum=0,num;
		printf("Enter number: ");	scanf("%d",&num);
			while(count<=num){
				sum=sum+count;
					count++;  }
	printf("the summation of this suite number is %d\n",sum); 
	return 0 ;}*/
//*********************************************************************************************************************************************
//program 35: display all number from 99 to 1.
//#include<stdio.h>
//int main()
/*{	int i;
		for(i=1;i<=99;i+=1)
			printf("\t%d",i); }*/
/*int i=1;
		while(i<=99){
			printf("\t%d",i);
				i++;
	}	}*/
//output: 1  2	 3	 4	 5	 6	 7	 8	 9	 10	 11 ................ 99
//**********************************************************************************************************
/*{ int i;
		for(i=99;i>0;i--){
	  		printf("\t%d",i);
	} return 0;	}*/
/*{	int i=99;
		while(i>0)
			printf("\t%d",i); i--;
	}*/
//output: 99	98	97.............3	2	1
//*****************************************************************************************************************************
//program 36: display the numbers from 1 to 100 except the number 50.
//#include<stdio.h>
//int main(){
	/*int i;
		for(i=1;i<=49;i++){
			printf("\t%d",i); }
		for(i=51;i<=100;i++)
	{   	printf("\t%d",i);		
	 } return 0; } */
/*	int i=1;
		while(i<=49){
			printf("\t%d",i); i++; }
	int j=51;
		while(j<=100){
			printf("\t%d",j); j++;	}	}*/
//output: 1	2	3	4	5	6	7	8	9	10	11......49	51......100
//**********************************************************************
/*int i;
	for(i=100;i>0;i--){
		printf("\t%d",i); 
			if(i==51) 
				break; }
	for(i=49;i>0;i--)
		printf("\t%d",i); 
			return 0;}*/
//**********************************************************************
/*int i=100;
	while(i>0){
		printf("\t%d",i);  
		    i--;
			 if(i==50) 
				 break; }
int j=49;
	while(j>0){
		printf("\t%d",j); 
			j--; }
return 0;}*/
//output: 100	99	98	97	........	51	49	..........	1
//*****************************************************************************************************************************
//Program 35: display odd number between 8 to 1000 but except the number 11,17,21
//#include<stdio.h>
//int main()
/*{	int i;
	for(i=8;i<11;i++){
		if(i%2!=0){
			printf("\t%d",i); }		}	
	for(i=12;i<17;i++){
		if(i%2!=0){
			printf("\t%d",i);	}	}			
	for(i=18;i<21;i++){
		if(i%2!=0){
			printf("\t%d",i);	}	}
	for(i=22;i<1000;i++){
		if(i%2!=0){
			printf("\t%d",i);   }
	} return 0;  }*/
//*************************************************
/*#include<stdio.h>
int main(){
	int i;
		for(i=8;i<100;i++){
			if(i%2!=0){
				if(i==11||i==17||i==21)
					continue;
						printf("\t%d",i);
				}  }
	return 0; } */
//*************************************************
/*{	int i=8;
		while(i<11){
			if(i%2!=0)
				printf("\t%d",i);	
					i++;	}
	int j=12;
		while(j<17){
			if(j%2!=0)
				printf("\t%d",j);  
					j++; 	}
	int k=18;
		while(k<21){
			if(k%2!=0)
				printf("\t%d",k);  
					k++; 	}
	int m=22;
		while(m<1000){
			if(m%2!=0)
				printf("\t%d",m); 
					m++;	}
	return 0;}	*/
//*********************************************************************************************************************************************
//program 36:Show all of integers divisible by 3 between 1 to 100 except 30, 60 and 90.
/*#include<stdio.h>
 int main(){
 	int i;
 	for(i=1;i<=100;i++){
 		if(i%3==0){
 			if(i==30||i==60||i==90)
 				continue;
 					printf("\t%d",i); }  }
	 return 0;	}*/
//***********************************************
//#include<stdio.h>
//int main()
/*{	int i;
		for(i=1;i<30;i++){
			if(i%3==0){
				printf("\t%d",i); } }
		for(i=31;i<60;i++){
			if(i%3==0){
				printf("\t%d",i); } }
		for(i=61;i<90;i++){
			if(i%3==0){
				printf("\t%d",i); } }
		for(i=91;i<100;i++){
			if(i%3==0){
				printf("\t%d",i); } }
	return 0;	}*/
//***********************************************
/*{	int i=1;
		while(i<30){
			if(i%3==0)
				printf("\t%d",i); 
					i++;	}
	int j=31;
		while(j<60){
			if(j%3==0)
				printf("\t%d",j); 
					j++;	}
	int k=61;
		while(k<90){
			if(k%3==0)
				printf("\t%d",k);   
					k++;  } 
	int m=91;
		while(m<100){
			if(m%3==0)
				printf("\t%d",m);
					m++;	}
	return 0; }	*/
//*********************************************************************************************************************************************
//program 37: Sum all numbers from 1 to 100 then display all result.
/*#include<stdio.h>
int main(){
	int i,sum=0;
		for(i=1;i<=100;i++){
			printf("\t%d",i);
				sum=sum+i;} 
	printf("\n***********************************************************************************************");
		printf("\nthe summation is %d",sum);
return 0; }*/
//*********************************************************************************************************************************************
//program 38: Multiply all numbers from 1 to 16 then display the result.
/*#include<stdio.h>
int main(){
	int i; 
	int m=1;
		for(i=1;i<=16;i++){
			printf("\t%d",i);
				m=m*i; }
		printf("\nthe multiplication is %d",m);
	return 0;} */
//==>Note: in case more than 16 it will be error. because it is unlimited or tend to Anant.
//*********************************************************************************************************************************************
//program 39: Compute and display the summation of the suite cube number starting from 1 up to n, where n is the input number entered by a user.
//n is greater than 1.
/*#include<stdio.h>
#include<math.h>
int main(){
	int n,sum=0,i;
		printf("Enter number: ");	scanf("%d",&n);
			for(i=1;i<=n;i++){
				printf("\t%d",i);
					sum=sum+pow(i,3);	}
		printf("\n*****************************************************");
	printf("\nthe summation of this suite cube power is %d\n",sum);
return 0;  }*/
//*********************************************************************************************************************************************
//program 40: Check whether an input number is a primary number or not. 
//The program runs infinitely so that we can always check another input number.
/*#include<stdio.h>
int main(){
	int num,i,primary=1;
		printf("Enter number: ");	scanf("%d",&num);
			for(i=2;i<num;i++){
				if(num%i==0){
					primary=0;
						break; }  }
	if(primary)
		printf("%d is a primary number.\n",num); 
	else
		printf("%d is not primary number.\n",num);
 return 0;  } */
//*****************************************************************************************************************************
//program 41: Display all of primary numbers from 2 to 500.
/*#include<stdio.h>
	int main(){
		int i,j;
			printf("the primary numbers from 2 to 500, there are such as: \n");
				printf("\n");
		for(i=2;i<=500;i++){
			for(j=2;j<=i;j++){
				if(i%j==0)		
					break;	}
		if(i==j)
			printf("\t%d",i);	}
	return 0;	}  */
//*****************************************************************************************************************************
//program 42: Read 10 input numbers from a user and then find a maximum number and display it on screen.
/*#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h,i,j;
		printf("Enter num1,num2,num3,num4,num5,num6,num7,num8,num9,num10: ");	
		scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	int max;
		if(a>max)	{  printf("the maximum value is %d",a);	}
		if(b>max)	{  printf("the maximum value is %d",b);	}
		if(c>max)	{  printf("the maximum value is %d",c);	}
		if(d>max)	{  printf("the maximum value is %d",d);	}
		if(e>max)	{  printf("the maximum value is %d",e);	}
		if(f>max)	{  printf("the maximum value is %d",f);	}
		if(g>max)	{  printf("the maximum value is %d",g);	}
		if(h>max)	{  printf("the maximum value is %d",h);	}
		if(i>max)	{  printf("the maximum value is %d",i);	}
		if(j>max)	{  printf("the maximum value is %d",j);	}
	return 0;  } */
//*********************************************************************************************************************************************
//program 42: Write an algorithm to check an input number is a perfect number or not. perfect number is a number which's equal its divisor summation.
/*#include<stdio.h>
int main(){
	int n;
		printf("Enter number: ");
			scanf("%d",&n);
	int i,sum=0;
		for(i=1;i<n;i++){
			if(n%i==0)
				sum=sum+i;   }
		if(sum==n)
			printf("%d is a perfect number",n); 
		else
			printf("%d is not a perfect number",n);	
 	return 0; } */
//*********************************************************************************************************************************************
//program 43: Ask user to input many numbers as possible. When user inputs 0, stop asking the user for the number and display the summation of all input numbers on the screen.
/*#include<stdio.h>
int main(){
   	int sum=0,n;
		while(1){
			printf("Enter number: ");	scanf("\t%d",&n);
				if(n==0)
					break;	
				sum+=n;	}
			printf("sum of these numbers is %d\n",sum);
	return 0; } */
//*********************************************************************************************************************************************
//program 44: find the product and summation.
/*#include<stdio.h>
int main(){
	int sum=0,product=1,n;
	while(1){
		printf("Enter number: ");	scanf("%d",&n);
		if(n==0){
			break;	}
		sum=sum+n;
		product*=n;	}
	printf("***********************************\n");
	printf("sum = %d and product = %d",sum,product);
return 0;	}  */
//*********************************************************************************************************************************************
//program 45: Get input number from user and find the maximum number and minimum number. stop by enter 0.
/*#include<stdio.h>
int main(){
	int max,min,n;
		while(1){
			printf("Enter number: ");	scanf("%d",&n);
				if(n==0)
					break;	
			max=(n>max) ? n:max;
			min=(n<min) ? n:min; } 
	printf("*******************************************\n"); 
	printf("the maximum is %d\n",max);
	printf("the minimum is %d\n",min);
return 0;  } */
//*****************************************************************************************************************************
//program: 46: display first n numbers of suits fibonacci, where n is a number was entered by user.fibonacci sequence is a 
//series numbers such as: 1 1 2 3 5 6 11....... the next number is gotten by summation between two numbers before it.
/*#include<stdio.h>
int main(){
	int i,n,a=0,result,b=1;
		printf("Enter number: ");	scanf("%d",&n);
			for(i=1;i<=n;i++){
				printf("\t%d",a);
		result = a+b;
			a=b;
			b=result;	}   
	return 0;	}   */
//*****************************************************************************************************************************
//program 47: while loop part 01:
/*#include<stdio.h>
int main(){	
	int num1=1230;
		while(num1>0){	
			printf("Hello %d\n",num1);
				num1=num1-10;	}
	int num2=1230,remainder,sum=0;
//*************************************************************************	
	while(num2!=0){	
		printf("\t%d",num2);
			num2=num2-10;       
//this is a condition which we must include it into while loop.if not have it will be infinite loop.
	remainder=num2%10;
	sum=sum+remainder;	}
	printf("\n");
		printf("the remainder is %d\n",remainder);
		printf("the summation of remainder is %d\n",sum);
	return 0;  } */
/*==> Output: 
		Hello 1230	Hello 1220	.............	Hello 10
        1230    1220    1210    1200    1190    1180    1170    1160    1150    1140    1130    1120    1110    1100    1090
		1080    1070    1060    1050    1040    1030    1020    1010    1000    990     980     970     960     950     940 
		930     920     910     900     890     880     870     860     850     840     830     820     810     800     790 
		780     770     760     750     740     730     720     710     700     690     680     670     660     650     640  
		630     620     610     600     590     580     570     560     550     540     530     520     510     500     490   
		480     470     460     450     440     430     420     410     400     390     380     370     360     350     340     
		330     320     310     300     290     280     270     260     250     240     230     220     210     200     190     
		180     170     160     150     140     130     120     110     100     90      80      70      60      50      40      
		30      20      10
	the remainder is 0
	the summation of remainder is 0 */
//********************************************************************************************************************************************
//program 48: while loop 02:
/*#include<stdio.h>
int main(){	
	char confirm;
	int i;
		do{ 
			for(i=1;i<=100;i++)
				printf("\t%d",i);
		printf("\nDo you want to run this program again? \nPlease confirm(y/n): ");	scanf("%c",&confirm);  fflush(stdin);}
	while(confirm=='y');	
return 0; } */
/* Output: 
        1       2       3       4       5       6       7       8       9       10      11      12      13      14      15
		16      17      18      19      20      21      22      23      24      25      26      27      28      29      30      
		31      32      33      34      35      36      37      38      39      40      41      42      43      44      45      
		46      47      48      49      50      51      52      53      54      55      56      57      58      59      60      
		61      62      63      64      65      66      67      68      69      70      71      72      73      74      75      
		76      77      78      79      80      81      82      83      84      85      86      87      88      89      90      
		91      92      93      94      95      96      97      98      99      100
Do you want to run this program again?
Please confirm(y/n): y
	 	1       2       3       4       5       6       7       8       9       10      11      12      13      14      15
		16      17      18      19      20      21      22      23      24      25      26      27      28      29      30      
		31      32      33      34      35      36      37      38      39      40      41      42      43      44      45      
		46      47      48      49      50      51      52      53      54      55      56      57      58      59      60      
		61      62      63      64      65      66      67      68      69      70      71      72      73      74      75      
		76      77      78      79      80      81      82      83      84      85      86      87      88      89      90      
		91      92      93      94      95      96      97      98      99      100
Do you want to run this program again?
Please confirm(y/n): n
--------------------------------
Process exited after 4.558 seconds with return value 0
Press any key to continue . . .  */
//********************************************************************************************************************************************
//program 49// how to use continue or not in loop decision making.
/*#include<stdio.h>
int main(){
	int count=1;
	char ch;
	do{ 
		printf("%d apple\n",count);	printf("%d IBM\n",count+1);
		printf("Do you want to continue?(y/n)");	scanf("%c",&ch);	fflush(stdin);
	}	while(ch=='y');
	return 0;} */
//********************************************************************************************************************************************
//program 50: do while loop 03
/*#include<stdio.h>
int main(){	
	int p=5;
		do{	
			printf("***********************");	}
		while(p>0);
	return 0;	}*/
//*********************************************************************************************************************************************
//program 51: while loop 04
/*#include<stdio.h>
int main(){
	int n=10;
		while(n-1>2){
			printf("\t%d",n+1);
				n-=2;	}
		return 0;	}*/
//==> output: 11	9	7	5.
//*********************************************************************************************************************************************
//program 52: while loop 05
/*#include<stdio.h>
int main(){
	int n,i=1;
		printf("Enter number: ");	scanf("%d",&n);
	while(i<n){
		printf("\t%d",i);
		i+=2;	}	
	return 0; }*/
//********************************************************************************************************************************************
//program 53: while loop 06
/*#include<stdio.h>
int main(){
	int n=1;
	while(n>=1 && n<=50){
		printf("\t%d",n);
		n=n*2+1;
	} return 0; } */
//********************************************************************************************************************************************
//program 54: Write an algorithm to guess a member. The computer generate a random number. Then program asks a user to input a number for guessing.
//the program keeps asking the user to input a number until the user input the correct one compared to the randomized number.
//==>if user inputs a number greater than the randomized number, tell a user to input another smaller number.
//==>if user inputs a number less than the randomized number, tell a user to input another bigger number.
//==>if user inputs the correct numbers (the number is same to randomized number).display "Congratulations! You guess only n times to be correct."
//==>where n is the number of attemps the user to get it right.
//************************************************************************************************************************************************
// #include<stdio.h>
// int main(){
// 	int i,n,j=2;
// 	for(i=1;i>0;i++){  //we can also use while(1>0) or while(1)
// 		printf("Enter number: ");	scanf("%d",&n);
// 			if(n==j){
// 				printf("Congratulation! you guess only %d times to be correct.\n",i);
// 					break;}
// 			else if(n>j)
// 				printf("please input the smaller number.\n");
// 			else
// 				printf("please input the bigger number.\n");	} 
// 	return 0;	} 
//*****************************************************************************************************************************
//program 54: How to use system(cls)==(clear system), getch/
/*#include<stdio.h>
#include<conio.h>
int main(){
	int n,sum=0,i;
	input:
		system("color A"); //A is green, B is blue, C is red, D is pink, E is yellow, f is white
			printf("1+2+3+4+....+n=?\n");
			printf("Enter number: ");	scanf("%d",&n);
		if(n<0){
			system("cls");
				system("color 3");
			printf("you must enter positive number!.press any key to continue.\n");
			getch();
				system("cls");
			goto input;  }
		else{
			for(i=1;i<=n;i++)
				sum=sum+i;	
		printf("1+2+3+4+5+........+%d = %d\n",n,sum); }	
	return 0;  }  */
//*********************************************************************************************************************************************
//program 55: Nested for loop.
/*#include<stdio.h>
int main(){*/
/*	int i,j; 
		for(i=1;i<=5;i++){
			printf("value of i = %d\n",i);
				for(j=1;j<=3;j++){
					printf("value of j is equal: %d\n",j);}	 }  } */
/* Output: 
			value of i = 1
			value of j is equal: 1
			value of j is equal: 2
			value of j is equal: 3
			value of i = 2
			value of j is equal: 1
			value of j is equal: 2
			value of j is equal: 3
			value of i = 3
			value of j is equal: 1
			value of j is equal: 2
			value of j is equal: 3
			value of i = 4
			value of j is equal: 1
			value of j is equal: 2
			value of j is equal: 3
			value of i = 5
			value of j is equal: 1
			value of j is equal: 2
			value of j is equal: 3    */
//***************************************************************
/*	int i=1;
	while(i<=5){
		printf("value of i =%d\n",i);
		int j=1;
			while(j<=3){
				printf("value of J is equal: %d\n",j);
					j++; } 
			i++;	}   } */
//***************************************************************
	/*for(i=1;i<=5;i++){
		printf("value of i = %d\n",i);
		j=1;
		while(j<=3){
			printf("value of j is equal: %d\n",j);
	j++;}  }*/
//***************************************************************
/*	i=1;
	while(i<=5){
		printf("value of i = %d\n",i);
		for(j=1;j<=3;j++){
			printf("value of j is equal %d\n",j);
	}i++;  }*/	
//***************************************************************
/*	int i,j;
	for(i=1;i<=100;i++){
		for(j=1;j<=10;j++)
			printf("\t%d x  %d   =	%d\n",i,j,(i*j));
printf("***********************************************************\n");	}
	return 0; } */
//output: it is a multiplication table from 1 to 100.
  /*    1 x  1   =      1
        1 x  2   =      2
        1 x  3   =      3
        1 x  4   =      4
        1 x  5   =      5
        1 x  6   =      6
        1 x  7   =      7
        1 x  8   =      8
        1 x  9   =      9
        1 x  10   =     10
		.	  .			 .
		.	  .			 .
		.	  .			 .
        100 x  1   =    100
        100 x  2   =    200
        100 x  3   =    300
        100 x  4   =    400
        100 x  5   =    500
        100 x  6   =    600
        100 x  7   =    700
        100 x  8   =    800
        100 x  9   =    900
        100 x  10   =   1000  */
//*****************************************************************************************************************************
/*#include<stdio.h>
 int main(){
 	int i,j;
 	for(i=1;i<=20;i++){
 		for(j=1;j<=10;j++)
 			printf("%d  x  %d   = %d\n",i,j,(i*j));  
	printf("**********************************************************\n"); } 	
	return 0; }*/
//*****************************************************************************************************************************
/*#include<stdio.h>
int main(){
	int i=1,j,k=1,num;
		printf("Enter number: ");	scanf("%d",&num);
			if(num<=7){
				while(i<=12){
					for(j=2;j<=num;j++)
						printf("%2d x %2d = %2d\t",i,j,i*j);
					printf("\n");
					i++; }	}
			if(num>7){
				while(i<=12){
					for(j=2;j<=7;j++)
						printf("%2d x %2d = %2d\t",i,j,i*j);
					printf("\n");
						i++;  }	}
	printf("\n***********************************************************************************************");
	printf("\n\n");
				while(k<=12){
					for(j=8;j<=num;j++){
						printf("%2d x %2d = %2d\t",j,k,j*k); }
				printf("\n");
		    k++; }
	return 0; }	*/
/*Output:
Enter number: 14
 1 x  2 =  2     1 x  3 =  3     1 x  4 =  4     1 x  5 =  5     1 x  6 =  6     1 x  7 =  7
 2 x  2 =  4     2 x  3 =  6     2 x  4 =  8     2 x  5 = 10     2 x  6 = 12     2 x  7 = 14
 3 x  2 =  6     3 x  3 =  9     3 x  4 = 12     3 x  5 = 15     3 x  6 = 18     3 x  7 = 21
 4 x  2 =  8     4 x  3 = 12     4 x  4 = 16     4 x  5 = 20     4 x  6 = 24     4 x  7 = 28
 5 x  2 = 10     5 x  3 = 15     5 x  4 = 20     5 x  5 = 25     5 x  6 = 30     5 x  7 = 35
 6 x  2 = 12     6 x  3 = 18     6 x  4 = 24     6 x  5 = 30     6 x  6 = 36     6 x  7 = 42
 7 x  2 = 14     7 x  3 = 21     7 x  4 = 28     7 x  5 = 35     7 x  6 = 42     7 x  7 = 49
 8 x  2 = 16     8 x  3 = 24     8 x  4 = 32     8 x  5 = 40     8 x  6 = 48     8 x  7 = 56
 9 x  2 = 18     9 x  3 = 27     9 x  4 = 36     9 x  5 = 45     9 x  6 = 54     9 x  7 = 63
10 x  2 = 20    10 x  3 = 30    10 x  4 = 40    10 x  5 = 50    10 x  6 = 60    10 x  7 = 70
11 x  2 = 22    11 x  3 = 33    11 x  4 = 44    11 x  5 = 55    11 x  6 = 66    11 x  7 = 77
12 x  2 = 24    12 x  3 = 36    12 x  4 = 48    12 x  5 = 60    12 x  6 = 72    12 x  7 = 84
*************************************************************************************************************  
 8 x  1 =  8     9 x  1 =  9    10 x  1 = 10    11 x  1 = 11    12 x  1 = 12    13 x  1 = 13    14 x  1 = 14
 8 x  2 = 16     9 x  2 = 18    10 x  2 = 20    11 x  2 = 22    12 x  2 = 24    13 x  2 = 26    14 x  2 = 28
 8 x  3 = 24     9 x  3 = 27    10 x  3 = 30    11 x  3 = 33    12 x  3 = 36    13 x  3 = 39    14 x  3 = 42
 8 x  4 = 32     9 x  4 = 36    10 x  4 = 40    11 x  4 = 44    12 x  4 = 48    13 x  4 = 52    14 x  4 = 56
 8 x  5 = 40     9 x  5 = 45    10 x  5 = 50    11 x  5 = 55    12 x  5 = 60    13 x  5 = 65    14 x  5 = 70
 8 x  6 = 48     9 x  6 = 54    10 x  6 = 60    11 x  6 = 66    12 x  6 = 72    13 x  6 = 78    14 x  6 = 84
 8 x  7 = 56     9 x  7 = 63    10 x  7 = 70    11 x  7 = 77    12 x  7 = 84    13 x  7 = 91    14 x  7 = 98
 8 x  8 = 64     9 x  8 = 72    10 x  8 = 80    11 x  8 = 88    12 x  8 = 96    13 x  8 = 104   14 x  8 = 112
 8 x  9 = 72     9 x  9 = 81    10 x  9 = 90    11 x  9 = 99    12 x  9 = 108   13 x  9 = 117   14 x  9 = 126
 8 x 10 = 80     9 x 10 = 90    10 x 10 = 100   11 x 10 = 110   12 x 10 = 120   13 x 10 = 130   14 x 10 = 140
 8 x 11 = 88     9 x 11 = 99    10 x 11 = 110   11 x 11 = 121   12 x 11 = 132   13 x 11 = 143   14 x 11 = 154
 8 x 12 = 96     9 x 12 = 108   10 x 12 = 120   11 x 12 = 132   12 x 12 = 144   13 x 12 = 156   14 x 12 = 168 */
/*#include<stdio.h>
int main(){
	int i=1,j,k=1,num;
		printf("Enter number: ");	scanf("%d",&num);
			if(num<=10){
				while(i<=12){
					for(j=1;j<=num;j++)
						printf("%2d x %2d = %2d\t",i,j,i*j);
					printf("\n");
				i++; }	}
			if(num>10){
				while(i<=12){
					for(j=1;j<=10;j++)
						printf("%2d x %2d = %2d\t",i,j,i*j);
					printf("\n");
						i++;  }	}
	printf("\n***********************************************************************************************");
	printf("\n\n");
				while(k<=12){
					for(j=8;j<=num;j++){
						printf("%2d x %2d = %2d\t",j,k,j*k); }
				printf("\n");
		    k++; }
	return 0; } */
/* Output: 
Enter number: 17
 1 x  1 =  1     1 x  2 =  2     1 x  3 =  3     1 x  4 =  4     1 x  5 =  5     1 x  6 =  6     1 x  7 =  7     1 x  8 =  8     1 x  9 =  9     1 x 10 = 10
 2 x  1 =  2     2 x  2 =  4     2 x  3 =  6     2 x  4 =  8     2 x  5 = 10     2 x  6 = 12     2 x  7 = 14     2 x  8 = 16     2 x  9 = 18     2 x 10 = 20
 3 x  1 =  3     3 x  2 =  6     3 x  3 =  9     3 x  4 = 12     3 x  5 = 15     3 x  6 = 18     3 x  7 = 21     3 x  8 = 24     3 x  9 = 27     3 x 10 = 30
 4 x  1 =  4     4 x  2 =  8     4 x  3 = 12     4 x  4 = 16     4 x  5 = 20     4 x  6 = 24     4 x  7 = 28     4 x  8 = 32     4 x  9 = 36     4 x 10 = 40
 5 x  1 =  5     5 x  2 = 10     5 x  3 = 15     5 x  4 = 20     5 x  5 = 25     5 x  6 = 30     5 x  7 = 35     5 x  8 = 40     5 x  9 = 45     5 x 10 = 50
 6 x  1 =  6     6 x  2 = 12     6 x  3 = 18     6 x  4 = 24     6 x  5 = 30     6 x  6 = 36     6 x  7 = 42     6 x  8 = 48     6 x  9 = 54     6 x 10 = 60
 7 x  1 =  7     7 x  2 = 14     7 x  3 = 21     7 x  4 = 28     7 x  5 = 35     7 x  6 = 42     7 x  7 = 49     7 x  8 = 56     7 x  9 = 63     7 x 10 = 70
 8 x  1 =  8     8 x  2 = 16     8 x  3 = 24     8 x  4 = 32     8 x  5 = 40     8 x  6 = 48     8 x  7 = 56     8 x  8 = 64     8 x  9 = 72     8 x 10 = 80
 9 x  1 =  9     9 x  2 = 18     9 x  3 = 27     9 x  4 = 36     9 x  5 = 45     9 x  6 = 54     9 x  7 = 63     9 x  8 = 72     9 x  9 = 81     9 x 10 = 90
10 x  1 = 10    10 x  2 = 20    10 x  3 = 30    10 x  4 = 40    10 x  5 = 50    10 x  6 = 60    10 x  7 = 70    10 x  8 = 80    10 x  9 = 90    10 x 10 = 100
11 x  1 = 11    11 x  2 = 22    11 x  3 = 33    11 x  4 = 44    11 x  5 = 55    11 x  6 = 66    11 x  7 = 77    11 x  8 = 88    11 x  9 = 99    11 x 10 = 110
12 x  1 = 12    12 x  2 = 24    12 x  3 = 36    12 x  4 = 48    12 x  5 = 60    12 x  6 = 72    12 x  7 = 84    12 x  8 = 96    12 x  9 = 108   12 x 10 = 120

*************************************************************************************************************************************************************

 8 x  1 =  8     9 x  1 =  9    10 x  1 = 10    11 x  1 = 11    12 x  1 = 12    13 x  1 = 13    14 x  1 = 14    15 x  1 = 15    16 x  1 = 16    17 x  1 = 17
 8 x  2 = 16     9 x  2 = 18    10 x  2 = 20    11 x  2 = 22    12 x  2 = 24    13 x  2 = 26    14 x  2 = 28    15 x  2 = 30    16 x  2 = 32    17 x  2 = 34
 8 x  3 = 24     9 x  3 = 27    10 x  3 = 30    11 x  3 = 33    12 x  3 = 36    13 x  3 = 39    14 x  3 = 42    15 x  3 = 45    16 x  3 = 48    17 x  3 = 51
 8 x  4 = 32     9 x  4 = 36    10 x  4 = 40    11 x  4 = 44    12 x  4 = 48    13 x  4 = 52    14 x  4 = 56    15 x  4 = 60    16 x  4 = 64    17 x  4 = 68
 8 x  5 = 40     9 x  5 = 45    10 x  5 = 50    11 x  5 = 55    12 x  5 = 60    13 x  5 = 65    14 x  5 = 70    15 x  5 = 75    16 x  5 = 80    17 x  5 = 85
 8 x  6 = 48     9 x  6 = 54    10 x  6 = 60    11 x  6 = 66    12 x  6 = 72    13 x  6 = 78    14 x  6 = 84    15 x  6 = 90    16 x  6 = 96    17 x  6 = 102
 8 x  7 = 56     9 x  7 = 63    10 x  7 = 70    11 x  7 = 77    12 x  7 = 84    13 x  7 = 91    14 x  7 = 98    15 x  7 = 105   16 x  7 = 112   17 x  7 = 119
 8 x  8 = 64     9 x  8 = 72    10 x  8 = 80    11 x  8 = 88    12 x  8 = 96    13 x  8 = 104   14 x  8 = 112   15 x  8 = 120   16 x  8 = 128   17 x  8 = 136
 8 x  9 = 72     9 x  9 = 81    10 x  9 = 90    11 x  9 = 99    12 x  9 = 108   13 x  9 = 117   14 x  9 = 126   15 x  9 = 135   16 x  9 = 144   17 x  9 = 153
 8 x 10 = 80     9 x 10 = 90    10 x 10 = 100   11 x 10 = 110   12 x 10 = 120   13 x 10 = 130   14 x 10 = 140   15 x 10 = 150   16 x 10 = 160   17 x 10 = 170
 8 x 11 = 88     9 x 11 = 99    10 x 11 = 110   11 x 11 = 121   12 x 11 = 132   13 x 11 = 143   14 x 11 = 154   15 x 11 = 165   16 x 11 = 176   17 x 11 = 187
 8 x 12 = 96     9 x 12 = 108   10 x 12 = 120   11 x 12 = 132   12 x 12 = 144   13 x 12 = 156   14 x 12 = 168   15 x 12 = 180   16 x 12 = 192   17 x 12 = 204  */
/*#include<stdio.h>
int main(){
	int i=1,j,k=1,num;
		printf("Enter number: ");	scanf("%d",&num);
			if(num<=10){
				while(i<=12){
					for(j=1;j<=num;j++)
						printf("%2d x %2d = %2d\t",j,i,i*j);
					printf("\n");
				i++; }	}
			if(num>10){
				while(i<=12){
					for(j=1;j<=10;j++)
						printf("%2d x %2d = %2d\t",j,i,i*j);
					printf("\n");
						i++;  }	}
printf("\n**************************************************************************************************************************************************************");
	printf("\n\n");
				while(k<=12){
					for(j=8;j<=num;j++){
						printf("%2d x %2d = %2d\t",j,k,j*k); }
				printf("\n");
		    k++; }
	return 0; } */
/* Output: 
Enter number: 17
 1 x  1 =  1     2 x  1 =  2     3 x  1 =  3     4 x  1 =  4     5 x  1 =  5     6 x  1 =  6     7 x  1 =  7     8 x  1 =  8     9 x  1 =  9    10 x  1 = 10
 1 x  2 =  2     2 x  2 =  4     3 x  2 =  6     4 x  2 =  8     5 x  2 = 10     6 x  2 = 12     7 x  2 = 14     8 x  2 = 16     9 x  2 = 18    10 x  2 = 20
 1 x  3 =  3     2 x  3 =  6     3 x  3 =  9     4 x  3 = 12     5 x  3 = 15     6 x  3 = 18     7 x  3 = 21     8 x  3 = 24     9 x  3 = 27    10 x  3 = 30
 1 x  4 =  4     2 x  4 =  8     3 x  4 = 12     4 x  4 = 16     5 x  4 = 20     6 x  4 = 24     7 x  4 = 28     8 x  4 = 32     9 x  4 = 36    10 x  4 = 40
 1 x  5 =  5     2 x  5 = 10     3 x  5 = 15     4 x  5 = 20     5 x  5 = 25     6 x  5 = 30     7 x  5 = 35     8 x  5 = 40     9 x  5 = 45    10 x  5 = 50
 1 x  6 =  6     2 x  6 = 12     3 x  6 = 18     4 x  6 = 24     5 x  6 = 30     6 x  6 = 36     7 x  6 = 42     8 x  6 = 48     9 x  6 = 54    10 x  6 = 60
 1 x  7 =  7     2 x  7 = 14     3 x  7 = 21     4 x  7 = 28     5 x  7 = 35     6 x  7 = 42     7 x  7 = 49     8 x  7 = 56     9 x  7 = 63    10 x  7 = 70
 1 x  8 =  8     2 x  8 = 16     3 x  8 = 24     4 x  8 = 32     5 x  8 = 40     6 x  8 = 48     7 x  8 = 56     8 x  8 = 64     9 x  8 = 72    10 x  8 = 80
 1 x  9 =  9     2 x  9 = 18     3 x  9 = 27     4 x  9 = 36     5 x  9 = 45     6 x  9 = 54     7 x  9 = 63     8 x  9 = 72     9 x  9 = 81    10 x  9 = 90
 1 x 10 = 10     2 x 10 = 20     3 x 10 = 30     4 x 10 = 40     5 x 10 = 50     6 x 10 = 60     7 x 10 = 70     8 x 10 = 80     9 x 10 = 90    10 x 10 = 100
 1 x 11 = 11     2 x 11 = 22     3 x 11 = 33     4 x 11 = 44     5 x 11 = 55     6 x 11 = 66     7 x 11 = 77     8 x 11 = 88     9 x 11 = 99    10 x 11 = 110
 1 x 12 = 12     2 x 12 = 24     3 x 12 = 36     4 x 12 = 48     5 x 12 = 60     6 x 12 = 72     7 x 12 = 84     8 x 12 = 96     9 x 12 = 108   10 x 12 = 120

**************************************************************************************************************************************************************

 8 x  1 =  8     9 x  1 =  9    10 x  1 = 10    11 x  1 = 11    12 x  1 = 12    13 x  1 = 13    14 x  1 = 14    15 x  1 = 15    16 x  1 = 16    17 x  1 = 17
 8 x  2 = 16     9 x  2 = 18    10 x  2 = 20    11 x  2 = 22    12 x  2 = 24    13 x  2 = 26    14 x  2 = 28    15 x  2 = 30    16 x  2 = 32    17 x  2 = 34
 8 x  3 = 24     9 x  3 = 27    10 x  3 = 30    11 x  3 = 33    12 x  3 = 36    13 x  3 = 39    14 x  3 = 42    15 x  3 = 45    16 x  3 = 48    17 x  3 = 51
 8 x  4 = 32     9 x  4 = 36    10 x  4 = 40    11 x  4 = 44    12 x  4 = 48    13 x  4 = 52    14 x  4 = 56    15 x  4 = 60    16 x  4 = 64    17 x  4 = 68
 8 x  5 = 40     9 x  5 = 45    10 x  5 = 50    11 x  5 = 55    12 x  5 = 60    13 x  5 = 65    14 x  5 = 70    15 x  5 = 75    16 x  5 = 80    17 x  5 = 85
 8 x  6 = 48     9 x  6 = 54    10 x  6 = 60    11 x  6 = 66    12 x  6 = 72    13 x  6 = 78    14 x  6 = 84    15 x  6 = 90    16 x  6 = 96    17 x  6 = 102
 8 x  7 = 56     9 x  7 = 63    10 x  7 = 70    11 x  7 = 77    12 x  7 = 84    13 x  7 = 91    14 x  7 = 98    15 x  7 = 105   16 x  7 = 112   17 x  7 = 119
 8 x  8 = 64     9 x  8 = 72    10 x  8 = 80    11 x  8 = 88    12 x  8 = 96    13 x  8 = 104   14 x  8 = 112   15 x  8 = 120   16 x  8 = 128   17 x  8 = 136
 8 x  9 = 72     9 x  9 = 81    10 x  9 = 90    11 x  9 = 99    12 x  9 = 108   13 x  9 = 117   14 x  9 = 126   15 x  9 = 135   16 x  9 = 144   17 x  9 = 153
 8 x 10 = 80     9 x 10 = 90    10 x 10 = 100   11 x 10 = 110   12 x 10 = 120   13 x 10 = 130   14 x 10 = 140   15 x 10 = 150   16 x 10 = 160   17 x 10 = 170
 8 x 11 = 88     9 x 11 = 99    10 x 11 = 110   11 x 11 = 121   12 x 11 = 132   13 x 11 = 143   14 x 11 = 154   15 x 11 = 165   16 x 11 = 176   17 x 11 = 187
 8 x 12 = 96     9 x 12 = 108   10 x 12 = 120   11 x 12 = 132   12 x 12 = 144   13 x 12 = 156   14 x 12 = 168   15 x 12 = 180   16 x 12 = 192   17 x 12 = 204    */
/*#include<stdio.h>
int main(){
	int i=1,j,k=1,num;
		printf("Enter number: ");	scanf("%d",&num);
printf("*************************************************************************************************************************************************************\n");
			if(num<=10){
				while(i<=10){
					for(j=1;j<=num;j++)
						printf("%2d x %2d = %2d\t",j,i,i*j);
					printf("\n"); //mean that line 1 x 1 = 1 then enter. 
				i++; }	}
			if(num>10){
				while(i<=10){
					for(j=1;j<=10;j++)
						printf("%2d x %2d = %2d\t",j,i,i*j);
					printf("\n");
						i++;  }	}
printf("*************************************************************************************************************************************************************\n");
				while(k<=10){
					for(j=11;j<=num;j++)
						printf("%2d x %2d = %2d\t",j,k,j*k); 
				printf("\n");
		    k++; }
printf("*************************************************************************************************************************************************************\n");
	return 0; } */
/* Output: 
Enter number: 20
*************************************************************************************************************************************************************
 1 x  1 =  1     2 x  1 =  2     3 x  1 =  3     4 x  1 =  4     5 x  1 =  5     6 x  1 =  6     7 x  1 =  7     8 x  1 =  8     9 x  1 =  9    10 x  1 = 10
 1 x  2 =  2     2 x  2 =  4     3 x  2 =  6     4 x  2 =  8     5 x  2 = 10     6 x  2 = 12     7 x  2 = 14     8 x  2 = 16     9 x  2 = 18    10 x  2 = 20
 1 x  3 =  3     2 x  3 =  6     3 x  3 =  9     4 x  3 = 12     5 x  3 = 15     6 x  3 = 18     7 x  3 = 21     8 x  3 = 24     9 x  3 = 27    10 x  3 = 30
 1 x  4 =  4     2 x  4 =  8     3 x  4 = 12     4 x  4 = 16     5 x  4 = 20     6 x  4 = 24     7 x  4 = 28     8 x  4 = 32     9 x  4 = 36    10 x  4 = 40
 1 x  5 =  5     2 x  5 = 10     3 x  5 = 15     4 x  5 = 20     5 x  5 = 25     6 x  5 = 30     7 x  5 = 35     8 x  5 = 40     9 x  5 = 45    10 x  5 = 50
 1 x  6 =  6     2 x  6 = 12     3 x  6 = 18     4 x  6 = 24     5 x  6 = 30     6 x  6 = 36     7 x  6 = 42     8 x  6 = 48     9 x  6 = 54    10 x  6 = 60
 1 x  7 =  7     2 x  7 = 14     3 x  7 = 21     4 x  7 = 28     5 x  7 = 35     6 x  7 = 42     7 x  7 = 49     8 x  7 = 56     9 x  7 = 63    10 x  7 = 70
 1 x  8 =  8     2 x  8 = 16     3 x  8 = 24     4 x  8 = 32     5 x  8 = 40     6 x  8 = 48     7 x  8 = 56     8 x  8 = 64     9 x  8 = 72    10 x  8 = 80
 1 x  9 =  9     2 x  9 = 18     3 x  9 = 27     4 x  9 = 36     5 x  9 = 45     6 x  9 = 54     7 x  9 = 63     8 x  9 = 72     9 x  9 = 81    10 x  9 = 90
 1 x 10 = 10     2 x 10 = 20     3 x 10 = 30     4 x 10 = 40     5 x 10 = 50     6 x 10 = 60     7 x 10 = 70     8 x 10 = 80     9 x 10 = 90    10 x 10 = 100
*************************************************************************************************************************************************************
11 x  1 = 11    12 x  1 = 12    13 x  1 = 13    14 x  1 = 14    15 x  1 = 15    16 x  1 = 16    17 x  1 = 17    18 x  1 = 18    19 x  1 = 19    20 x  1 = 20
11 x  2 = 22    12 x  2 = 24    13 x  2 = 26    14 x  2 = 28    15 x  2 = 30    16 x  2 = 32    17 x  2 = 34    18 x  2 = 36    19 x  2 = 38    20 x  2 = 40
11 x  3 = 33    12 x  3 = 36    13 x  3 = 39    14 x  3 = 42    15 x  3 = 45    16 x  3 = 48    17 x  3 = 51    18 x  3 = 54    19 x  3 = 57    20 x  3 = 60
11 x  4 = 44    12 x  4 = 48    13 x  4 = 52    14 x  4 = 56    15 x  4 = 60    16 x  4 = 64    17 x  4 = 68    18 x  4 = 72    19 x  4 = 76    20 x  4 = 80
11 x  5 = 55    12 x  5 = 60    13 x  5 = 65    14 x  5 = 70    15 x  5 = 75    16 x  5 = 80    17 x  5 = 85    18 x  5 = 90    19 x  5 = 95    20 x  5 = 100
11 x  6 = 66    12 x  6 = 72    13 x  6 = 78    14 x  6 = 84    15 x  6 = 90    16 x  6 = 96    17 x  6 = 102   18 x  6 = 108   19 x  6 = 114   20 x  6 = 120
11 x  7 = 77    12 x  7 = 84    13 x  7 = 91    14 x  7 = 98    15 x  7 = 105   16 x  7 = 112   17 x  7 = 119   18 x  7 = 126   19 x  7 = 133   20 x  7 = 140
11 x  8 = 88    12 x  8 = 96    13 x  8 = 104   14 x  8 = 112   15 x  8 = 120   16 x  8 = 128   17 x  8 = 136   18 x  8 = 144   19 x  8 = 152   20 x  8 = 160
11 x  9 = 99    12 x  9 = 108   13 x  9 = 117   14 x  9 = 126   15 x  9 = 135   16 x  9 = 144   17 x  9 = 153   18 x  9 = 162   19 x  9 = 171   20 x  9 = 180
11 x 10 = 110   12 x 10 = 120   13 x 10 = 130   14 x 10 = 140   15 x 10 = 150   16 x 10 = 160   17 x 10 = 170   18 x 10 = 180   19 x 10 = 190   20 x 10 = 200   */
//***********************************************************************************************************************************************************
//program 56: Nested loop 02
/*#include<stdio.h>
int main(){
	int i,j,k,m;
		for(i=1;i<=9;i++){
			for(j=i;j<=9;j++)
				printf(" ");
			for(k=1;k<=i;k++)
				printf("*");
			for(m=1;m<i;m++)
				printf("*");
			printf("\n");}
	return 0;   } */
/*==>Output: 
			         *
			        ***
			       *****
			      *******
			     *********
			    ***********
			   *************
			  ***************
			 *****************    		*/       
//*****************************************************************************************************************************
//program 57: Nested loop 03: 
/*#include<stdio.h>
int main(){
	int i,j;
		for(i=1;i<=9;i++){
			for(j=i;j<=9;j++){
				printf("*");	}
		printf("\n");	}
//********************************
	for(i=1;i<=9;i++){
		for(j=1;j<=10-i;j++){
			printf("*");  }
		printf("\n"); }
//********************************
	for(i=1;i<=9;i++){
		for(j=9;j>=i;j--){
			printf("*"); }
		printf("\n");	}
//********************************
	for(i=9;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("*"); }
		printf("\n"); }
//********************************
	for(i=9;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*"); }
		printf("\n"); }		
return 0;  } */
/*==>Output: 
			*********
			********
			*******
			******
			*****
			****
			***
			**
			*		*/
//*****************************************************************************************************************************
//program 58: Nested loop 04
/*#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=9;i++){
		printf("\t");
		for(j=1;j<=i;j++){
			printf("*");}
	printf("\n");	}
//******************************
    for(i=1;i<=9;i++){
    	printf("\t");
		for(j=10-i;j<=9;j++){
			printf("*");}
	printf("\n");	}
//******************************
	for(i=1;i<=9;i++){
		printf("\t");
		for(j=i;j>=1;j--){
			printf("*");}
	printf("\n");	}
//******************************
	for(i=9;i>=1;i--){
		printf("\t");
		for(j=i;j<=9;j++){
			printf("*");}
	printf("\n");	}
//*******************************
	for(i=9;i>=1;i--){
		printf("\t");
		for(j=9;j>=i;j--){
			printf("*");}
	printf("\n");	}		
return 0;
}*/
/*==>output: 
		
		*
		**
		***
		****
		*****
		******
		*******
		********
		*********  */
//#include<stdio.h>		
//int main(){
//	int i,j;
//		for(i=1;i<=9;i++){
//			for(j=1;j<=i;j++)
//				printf("*");
//			printf("\n");
//		}
//		for(i=9;i>0;i--){
//			for(j=1;j<=10-i;j++)
//				printf("*");
//		 	printf("\n");
//		}
//		for(i=1;i<=9;i++){
//			for(j=10-i;j<=9;j++){
//				printf("*");
//			}  printf("\n");
//		}
//		for(i=1;i<=9;i++){
//			for(j=9;j<=10-i;j++){
//				printf("*");
//			} printf("\n");
//		}
//	return 0;
//}
//*********************************************************************************************************************************************
//program 59: Nested loop 05
/*#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*"); }
		printf("\n"); }  
	return 0; }*/
/*==>Output: 

		*********
		 ********
		  *******
		    *****
		     ****
		      ***
		       **
		        *   */
//*********************************************************************************************************************************************
//Program 60: Nested loop 06
/*#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=9;i++){
		for(j=i;j<=9;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		printf("\n");	}
	return 0; }*/
//==>Output:
			/*
					*
				   **
				  ***
			     ****
			    *****
			   ******
			  *******
			 ********
			*********  */
//*********************************************************************************************************************************************
//program 61: Nested loop 07
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			printf(" "); }
	for(k=9;k>=i;k--){
		printf("*"); }
	for(l=i;l<=8;l++){
		printf("*"); }
	printf("\n"); }
	return 0; } */
//output: 

/*		 *****************
		  ***************
		   *************
		    ***********
		     *********
		      *******
		       *****
		        ***
		         *                 */
//*********************************************************************************************************************************************
//Program 62: Nested Loop 08
/*#include<stdio.h>
int main(){
	int i,j,k,l;
		for(i=1;i<=9;i++){
		for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//****************************************		
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*********************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*********************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//**********************************************		
	    for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//******************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************		
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************
	printf("\n");	}
	return 0; }*/
//==>Output: 
/*      *                *                *                *                *                *                *                *                *
       ***              ***              ***              ***              ***              ***              ***              ***              ***
      *****            *****            *****            *****            *****            *****            *****            *****            *****
     *******          *******          *******          *******          *******          *******          *******          *******          *******
    *********        *********        *********        *********        *********        *********        *********        *********        *********
   ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********
  *************    *************    *************    *************    *************    *************    *************    *************    *************
 ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************
*********************************************************************************************************************************************************   */
//***********************************************************************************************************************************************************
//Program 63: Nested Loop 09
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1;i<=9;i++){
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
		printf("\n");}
	return 0; }*/
//output: 
/*		 *****************  *****************  *****************  *****************  *****************  *****************  *****************  *****************
		  ***************    ***************    ***************    ***************    ***************    ***************    ***************    ***************
		   *************      *************      *************      *************      *************      *************      *************      *************
		    ***********        ***********        ***********        ***********        ***********        ***********        ***********        ***********
		     *********          *********          *********          *********          *********          *********          *********          *********
		      *******            *******            *******            *******            *******            *******            *******            *******
		       *****              *****              *****              *****              *****              *****              *****              *****
		        ***                ***                ***                ***                ***                ***                ***                ***
		         *                  *                  *                  *                  *                  *                  *                  *				*/
//*********************************************************************************************************************************************
//program 64: Nested loop 10
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1;i<=9;i++){
		for(j=1;j<i;j++){
			printf(" ");}
		for(j=i;j<=9;j++){
			printf("*");
		}
		for(k=i;k<9;k++){
		    printf("*");	
		}
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//*************************************
		for(j=1;j<i;j++){
		printf(" ");}
		for(j=1;j<i;j++){
		printf(" ");}	
		for(j=i;j<=9;j++){
			printf("*");}
		for(k=i;k<9;k++){
		    printf("*");}	
//************************************
	printf("\n");}
	return 0; }*/
//==>Output: 
 /*             *********************************************************************************************************************************************************
				 ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************
				  *************    *************    *************    *************    *************    *************    *************    *************    *************
				   ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********
				    *********        *********        *********        *********        *********        *********        *********        *********        *********
				     *******          *******          *******          *******          *******          *******          *******          *******          *******
				      *****            *****            *****            *****            *****            *****            *****            *****            *****
				       ***              ***              ***              ***              ***              ***              ***              ***              ***          
				        *                *                *                *                *                *                *                *                *			*/
//*********************************************************************************************************************************************
//program 65: 	Nested loop 11:						
/*#include<stdio.h>
int main(){
	int i,j,k,l;
		for(i=1;i<=9;i++){
		for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//****************************************		
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*********************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*********************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//**********************************************		
	    for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//******************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************		
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*******************************************
	printf("\n");	}
//*******************************************	
	for(i=1;i<=9;i++){
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
//****************************************		
		for(j=i;j>=1;j--){
			printf(" ");}
		for(j=i;j>=1;j--){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}		
		printf("\n");}
	return 0; }*/
//==>Output:
/*      *                *                *                *                *                *                *                *                *
       ***              ***              ***              ***              ***              ***              ***              ***              ***
      *****            *****            *****            *****            *****            *****            *****            *****            *****
     *******          *******          *******          *******          *******          *******          *******          *******          *******
    *********        *********        *********        *********        *********        *********        *********        *********        *********
   ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********
  *************    *************    *************    *************    *************    *************    *************    *************    *************
 ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************
*********************************************************************************************************************************************************
 *****************  *****************  *****************  *****************  *****************  *****************  *****************  *****************
  ***************    ***************    ***************    ***************    ***************    ***************    ***************    ***************
   *************      *************      *************      *************      *************      *************      *************      *************
    ***********        ***********        ***********        ***********        ***********        ***********        ***********        ***********
     *********          *********          *********          *********          *********          *********          *********          *********
      *******            *******            *******            *******            *******            *******            *******            *******
       *****              *****              *****              *****              *****              *****              *****              *****
        ***                ***                ***                ***                ***                ***                ***                ***        
         *                  *                  *                  *                  *                  *                  *                  *	                 */
//*********************************************************************************************************************************************
//program 66: Nested loop 12	
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1;i<=9;i++){
		for(j=i;j<9;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//***********************************************
		for(j=i;j<9;j++){
			printf(" ");
		}for(j=i;j<9;j++){
			printf(" "); }		
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//************************************************
	printf("\n");	}
//************************************************
	for(i=1;i<=8;i++){
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//************************************************	
	    for(j=1;j<=i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf(" ");}
		for(k=i;k<=8;k++){
			printf("*");}
		for(l=i;l<8;l++){
			printf("*");}
//**********************************************			
		printf("\n");}
		return 0; }	*/
//==>Output:

/*      *                *                *                *                *                *                *                *                *
       ***              ***              ***              ***              ***              ***              ***              ***              ***
      *****            *****            *****            *****            *****            *****            *****            *****            *****
     *******          *******          *******          *******          *******          *******          *******          *******          *******
    *********        *********        *********        *********        *********        *********        *********        *********        *********
   ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********
  *************    *************    *************    *************    *************    *************    *************    *************    *************
 ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************
*********************************************************************************************************************************************************
 ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************  ***************
  *************    *************    *************    *************    *************    *************    *************    *************    *************
   ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********      ***********
    *********        *********        *********        *********        *********        *********        *********        *********        *********
     *******          *******          *******          *******          *******          *******          *******          *******          *******
      *****            *****            *****            *****            *****            *****            *****            *****            *****
       ***              ***              ***              ***              ***              ***              ***              ***              ***
        *                *                *                *                *                *                *                *                *       */

//*********************************************************************************************************************************************
//Program 67: Nested loop 13
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1;i<=9;i++){
		for(j=1;j<i;j++){
			printf(" ");}
		for(k=i;k<=9;k++){
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//***********************************************
		for(j=1;j<i;j++){
			printf(" ");}
		for(j=1;j<i-1;j++){
			printf(" ");}
		for(k=i;k<=9;k++){
			if(k==1) continue;
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//***********************************************
		for(j=1;j<i;j++){
			printf(" ");}
		for(j=1;j<i-1;j++){
			printf(" ");}
		for(k=i;k<=9;k++){
			if(k==1) continue;
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
//***********************************************
		for(j=1;j<i;j++){
			printf(" ");}
		for(j=1;j<i-1;j++){
			printf(" ");}
		for(k=i;k<=9;k++){
			if(k==1) continue;
			printf("*");}
		for(l=i;l<9;l++){
			printf("*");}
		printf("\n");}
//***********************************************
//***********************************************
		for(i=1;i<=9;i++){
			if(i==1){
			continue; }
			for(j=i;j<9;j++){
				printf(" ");}
			for(k=1;k<=i;k++){
				printf("*");}
			for(l=1;l<i;l++){
				printf("*");}
//***********************************************
			for(j=i;j<9;j++){
				printf(" ");}
			for(j=i;j<8;j++){
				printf(" ");}
			for(k=1;k<=i;k++){
				printf("*");}
			for(l=1;l<i;l++){
				if(l==8){
				continue;}
				printf("*");}
//***********************************************
			for(j=i;j<9;j++){
				printf(" ");}
			for(j=i;j<8;j++){
				printf(" ");}
			for(k=1;k<=i;k++){
				printf("*");}
			for(l=1;l<i;l++){
		    	if(l==8){
				continue;}
				printf("*");}		
//***********************************************
			for(j=i;j<9;j++){
				printf(" ");}
			for(j=i;j<8;j++){
				printf(" ");}
			for(k=1;k<=i;k++){
				printf("*");}
			for(l=1;l<i;l++){
				if(l==8){
				continue;}
				printf("*");}
			printf("\n");}
return 0;}*/
/*Output: 
			*****************************************************************
			 *************** *************** *************** ***************
			  *************   *************   *************   *************
			   ***********     ***********     ***********     ***********
			    *********       *********       *********       *********
			     *******         *******         *******         *******
			      *****           *****           *****           *****
			       ***             ***             ***             ***
			        *               *               *               *
			       ***             ***             ***             ***
			      *****           *****           *****           *****
			     *******         *******         *******         *******
			    *********       *********       *********       *********
			   ***********     ***********     ***********     ***********
			  *************   *************   *************   *************
			 *************** *************** *************** ***************
			*****************************************************************    */
			
//*********************************************************************************************************************************************
//Program 68: Nested loop 14
/*#include<stdio.h>
int main(){
	int i,j,k,l;
		for(i=1;i<=9;i++){
		for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//****************************************		
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*********************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
//*********************************************
		for(j=i;j<=8;j++){
			printf(" ");
		}for(j=i;j<=8;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
		printf("\n");}
//**********************************************
		for(i=1;i<=9;i++){
			printf("*\t\t*\t\t *\t\t  *\t\t   *");
			printf("\n"); }
    	for(i=1;i<=68;i++){
    		printf("*");}
	return 0; }*/	
//Output: 
				/*      *                *                *                *
				       ***              ***              ***              ***
				      *****            *****            *****            *****
				     *******          *******          *******          *******
				    *********        *********        *********        *********
				   ***********      ***********      ***********      ***********
				  *************    *************    *************    *************
				 ***************  ***************  ***************  ***************
				********************************************************************
				*               *                *                *                *
				*               *                *                *                *
				*               *                *                *                *
				*               *                *                *                *
				*               *                *                *                *
				*               *                *                *                *
				*               *                *                *                *
				*               *                *                *                *
				*               *                *                *                *
				********************************************************************         */
//*********************************************************************************************************************************************
//Program 69: Nested loop 15
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1;i<=4;i++){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
		printf("\n");}
//*******************************************
	for(i=2;i<=10;i+=2){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k+=1){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
		printf("\n");}
//*******************************************
	for(i=4;i<=20;i+=4){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(k=1;k<i;k++){
			printf("*");}
		printf("\n");	}
//********************************************
	for(i=6;i<=24;i+=3){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*"); }
		for(k=1;k<i;k++){
		printf("*");}
		printf("\n");}
//*********************************************
	for(i=1;i<=8;i++){
		for(j=1;j<=28;j++){
			printf(" ");}
		for(k=1;k<=5;k++){
			printf("*");}
		printf("\n");}
//**********************************************
	for(i=1;i<=3;i++){
		for(j=1;j<=24;j++){
			printf(" ");}
		for(k=1;k<=13;k++){
			printf("*");}
		printf("\n");	}
	return 0;}*/			
//==>Output: 
/*                            *
                             ***
                            *****
                           *******
                             ***
                           *******
                         ***********
                       ***************
                     *******************
                           *******
                       ***************
                   ***********************
               *******************************
           ***************************************
                         ***********
                      *****************
                   ***********************
                *****************************
             ***********************************
          *****************************************
       ***********************************************
                            *****
                            *****
                            *****
                            *****
                            *****
                            *****
                            *****
                            *****
                        *************
                        *************
                        *************      */		
//*********************************************************************************************************************************************
//Program 70: Nested Loop 16
/*#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k,l;
	for(i=1;i<=4;i++){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
		printf("\n");}
		sleep(2);
//*******************************************
	for(i=2;i<=10;i+=2){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k+=1){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
		sleep(1);
		printf("\n");}
//*******************************************
	for(i=4;i<=20;i+=4){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(k=1;k<i;k++){
			printf("*");}
			sleep(1);
		printf("\n");	}
//********************************************
	for(i=6;i<=24;i+=3){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*"); }
		for(k=1;k<i;k++){
		printf("*");}
		sleep(1);
		printf("\n");}
//*********************************************
	for(i=1;i<=8;i++){
		for(j=1;j<=28;j++){
			printf(" ");}
		for(k=1;k<=5;k++){
			printf("*");}
		sleep(1);
		printf("\n");}
//**********************************************
	for(i=1;i<=3;i++){
		for(j=1;j<=24;j++){
			printf(" ");}
		for(k=1;k<=13;k++){
			printf("*");}
		sleep(1);
		printf("\n");	}
	getch();
	}*/
//==>Create the mouvement of loop from above until below of christmas tree.
//*********************************************************************************************************************************************
//Program 71: Nested Loop 17
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	for(;;){//it is infinite loop for control on mouvement of loop code.
	for(i=1;i<=4;i++){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
			sleep(0.5);
		printf("\n");}
//*******************************************
	for(i=2;i<=10;i+=2){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k+=1){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
			sleep(0.5);
		printf("\n");}
//*******************************************
	for(i=4;i<=20;i+=4){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(k=1;k<i;k++){
			printf("*");}
			sleep(0.5);
		printf("\n");	}
//********************************************
	for(i=6;i<=24;i+=3){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*"); }
		for(k=1;k<i;k++){
		printf("*");}
		sleep(0.5);
		printf("\n");}
//*********************************************
	for(i=1;i<=8;i++){
		for(j=1;j<=28;j++){
			printf(" ");}
		for(k=1;k<=5;k++){
			printf("*");}
		sleep(0.5);
		printf("\n");}
//**********************************************
	for(i=1;i<=3;i++){
		for(j=1;j<=24;j++){
			printf(" ");}
		for(k=1;k<=13;k++){
			printf("*");}
		sleep(0.5);
		printf("\n");	}	
	}
	getch(); }*/
//*********************************************************************************************************************************************
//Program 71: Nested Loop 17
/*#include<stdio.h>
#include<time.h>
int main(){
	int i,j,k,l,t;
	for(t=1;t>0;t++){
		if(t%5==0)
		system("color E");
		else if(t%5==1)
		system("color 4");
		else if(t%5==2)
		system("color A");
		else if(t%5==3)
		system("color B");
		else if(t%5==4)
		system("color A"); }
	for(;;){//it is infinite loop for control on mouvement of loop code.
	for(i=1;i<=4;i++){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
		printf("\n");}
//*******************************************
	for(i=2;i<=10;i+=2){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k+=1){
			printf("*");}
		for(l=1;l<i;l++){
			printf("*");}
		printf("\n");}
//*******************************************
	for(i=4;i<=20;i+=4){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*");}
		for(k=1;k<i;k++){
			printf("*");}
		printf("\n");	}
//********************************************
	for(i=6;i<=24;i+=3){
		for(j=i;j<=30;j++){
			printf(" ");}
		for(k=1;k<=i;k++){
			printf("*"); }
		for(k=1;k<i;k++){
		printf("*");}
		printf("\n");}
//*********************************************
	for(i=1;i<=8;i++){
		for(j=1;j<=28;j++){
			printf(" ");}
		for(k=1;k<=5;k++){
			printf("*");}
		printf("\n");}
//**********************************************
	for(i=1;i<=3;i++){
		for(j=1;j<=24;j++){
			printf(" ");}
		for(k=1;k<=13;k++){
			printf("*");}
		printf("\n");	}
	}
	sleep(0.5);
	system("cls");
	return 0; } */
//Create the color hightlght show of its mouvement.
