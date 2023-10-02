//Program 01: Do operation and test some condition for starting on function.
/*#include<stdio.h>
int add(int x, int y){
	int s;
	s=x+y;
	return s;}
//**********************************************************************************************
float function1(float a,float b,float c){
	float s;
	s=b*b-4*a*c;
	if(s>0)
	return s;
	else
	return -99999;}
//**********************************************************************************************
float calculus(float n1,float n2){
	float devided=n1/n2;
	return devided;}
//**********************************************************************************************
int main(){
	int n;// n is a local variable.
	n=add(10,9);
	printf("the summation of these two numbers is %d\n",n);
//**********************************************************************************************    
	float f1= function1(2.5,3,5);
    printf("the calculation in function1 as in representing value above is %.2f\n",f1);
//**********************************************************************************************    
    float c=calculus(32.00,13.00);
	printf("the devided between this two number is %.2f\n",c);    
//**********************************************************************************************
	return 0; } */
/*Output:===>
					the summation of these two numbers is 19
					the calculation in function1 as in representing value above is -99999.00
					the devided between this two number is 2.46
			       ----------------------------------------------------------------------------
					Process exited after 0.02626 seconds with return value 0
					Press any key to continue . . . . . . . . . . . . . . . . .       */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//Program 02: write an algorithm to display greater number between two numbers.
/*#include<stdio.h>
int function(int a,int b){
	int max;
	if(a>b)
	max=a;
	else 
	max=b;
	return max; }
int main(){
	int x=function(4,6);
	printf("the maximum value is %d",x);	
	return 0; }*/
/*Output: 
					the maximum value is 6
					-----------------------------------------------------------
					Process exited after 0.03724 seconds with return value 0
					Press any key to continue . . .       */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 03: Write an algorithm to check two numbers which is greater number.
/*#include<stdio.h>
int max(int a,int b);
int min(int x,int y);
//********************************************************
int main(){
	int n1,n2,maximum,minimum;
	printf("Enter two numbers: ");
	scanf("%d  %d",&n1,&n2);
	maximum=max(n1,n2);
	minimum=min(n1,n2);
	printf("the maximum value is %d\n",maximum);
	printf("the minimum value is %d\n",minimum);
	return 0; }
//**********************************************************
int max(int a,int b){
	return(a>b)?a:b;}
int min(int x,int y){
	return(x>y)?y:x; }*/
//*****************************************************************************************************************************
//Output==> 
/*				Enter two numers: 22	33
				the maximum value is 33
				the minimum value is 22
		----------------------------------------------------------------------
				Process exited after 4.2 seconds with return value 0
				Press any key to continue . . .			*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 04: display the age for eligible to voting of person's right.
 //  int age;//it is a global variable.
/*void validate_vote(int age){
	if(age>=18)
	printf("yes, you can vote");
	else
	printf("no, you cannot vote!");
}
int main(){
	int age;
	int v = validate_vote(age);
	printf("Enter your age: "); scanf("%d",&age);
	printf("%s",v);
	return 0; }*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 05: Create three choices for choosing as options. 
//display suite form   
//check positive or negative
//validate even or odd number.
/*#include<stdio.h>
void display_suite_form(int n);
void check_positive(int n);
void validate_even_or_odd(int n);
//*******************************************************************************************
int main(){
	while(1){
	int option,num,x,y;
	printf("**********************************Menu****************************************\n");
	printf("[1]: Display suite number\n");
	printf("[2]: Check positive number or odd number\n");
	printf("[3]: validate even or odd number\n");
	printf("Enter your option: ");
	scanf("%d",&option);
	if(option==1){
		printf("==========>Welcome to suite display number<==========\n");
		printf("Enter a number: ");
		scanf("%d",&num);
		display_suite_form(num);
	}else if(option==2){
		printf("==========>Welcome to check positive number or odd number<==========\n");
		printf("Enter a number: ");
		scanf("%d",&x);
		check_positive(x);}
	else if(option==3){
		printf("==========>Welcome to validate even or odd number<==========\n");
		printf("Enter a number: ");
		scanf("%d",&y);
		validate_even_or_odd(y); }
	else if(option==4) 
		break;
	else
		printf("it is invalid."); }
	return 0; }   
//**********************************************************
void display_suite_form(int n){
	int k;
	for(k=1;k<=n;k++)
	printf("\t%d",k);
	printf("\n");}
//***********************************************************
void check_positive(int n){
	if(n>0)
	printf("%d is a positive number\n",n);
	else if(n==0)
	printf("%d is a neutral number\n",n);
	else 
	printf("%d is a negative number\n",n);}
//***********************************************************
void validate_even_or_odd(int n){
	int r;
	r=n%2;
	if(r==0)
	printf("%d is an even number\n",n);
	else
	printf("%d is an odd numer\n",n); }*/
//Output: 
/*				**********************************Menu****************************************
				[1]: Display suite number
				[2]: Check positive number or odd number
				[3]: validate even or odd number
				[4]: Exit.
				Enter your option: 1
				==========>Welcome to suite display number<==========
				Enter a number: 100
					1       2       3       4       5       6       7       8       9       10      11      12      13      14      
					15      16      17      18      19      20      21      22      23      24      25      26      27      28      
					29      30      31      32      33      34      35      36      37      38      39      40      41      42      
					43      44      45      46      47      48      49      50      51      52      53      54      55      56      
					57      58      59      60      61      62      63      64      65      66      67      68      69      70      
					71      72      73      74      75      76      77      78      79      80      81      82      83      84      
					85      86      87      88      89      90      91      92      93      94      95      96      97      98      
					99      100
				**********************************Menu****************************************
				[1]: Display suite number
				[2]: Check positive number or odd number
				[3]: validate even or odd number
				Enter your option: 2
				==========>Welcome to check positive number or odd number<==========
				Enter a number: -2
				-2 is a negative number
				**********************************Menu****************************************
				[1]: Display suite number
				[2]: Check positive number or odd number
				[3]: validate even or odd number
				Enter your option: 2
				==========>Welcome to check positive number or odd number<==========
				Enter a number: 44
				44 is a positive number
				**********************************Menu****************************************
				[1]: Display suite number
				[2]: Check positive number or odd number
				[3]: validate even or odd number
				Enter your option: 3
				==========>Welcome to validate even or odd number<==========
				Enter a number: 66
				66 is an even number
				**********************************Menu****************************************
				[1]: Display suite number
				[2]: Check positive number or odd number
				[3]: validate even or odd number
				Enter your option: 3
				==========>Welcome to validate even or odd number<==========
				Enter a number: 99
				99 is an odd numer
				**********************************Menu****************************************
				[1]: Display suite number
				[2]: Check positive number or odd number
				[3]: validate even or odd number
				Enter your option: 4
				it is invalid.**********************************Menu****************************************
				[1]: Display suite number
				[2]: Check positive number or odd number
				[3]: validate even or odd number
				Enter your option: 0
				--------------------------------
				Process exited after 76.64 seconds with return value 0
				Press any key to continue . . .				*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 06 : input and compare between two variable of integers.
/*#include<stdio.h>
int n=90,k;
void display(){
	printf("\n%d\n",n);
	printf("\n");
	for(k=1;k<=n;k++)
	printf("\t%d",k);
}
int main(){
    int n=10;
	printf("value: %d",n);	
	display();
	return 0; }*/
//Output: 
/*value: 10
90

        1       2       3       4       5       6       7       8       9       10      11      12      13      14      15      
		16      17      18      19      20      21      22      23      24      25      26      27      28      29      30      
		31      32      33      34      35      36      37      38      39      40      41      42      43      44      45      
		46      47      48      49      50      51      52      53      54      55      56      57      58      59      60      
		61      62      63      64      65      66      67      68      69      70      71      72      73      74      75      
		76      77      78      79      80      81      82      83      84      85      86      87      88      89      90
-----------------------------------------------------------------------------------------------------------------------------------
Process exited after 0.05298 seconds with return value 0
Press any key to continue . . .*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 07 : find the smallest number.
/*#include<stdio.h>
int findsmallest(int a,int b,int c){
	int min;
	min=a;
if(b<min)
	min=b;
if(c<min)
	min=c;
	return min; }
int main(){
	int a;
//	int s=findsmallest(2,5,8);
//	printf("the smallest number is %d\n",s);
    int x,y,z;
    char choice[10];
    while(1>0){
	printf("Enter number: ");
	scanf("%d %d %d",&x,&y,&z);
	int w=findsmallest(x,y,z);
	printf("the smallest number is %d\n",w);
	printf("Do you want to continue or stop?\n");
	printf("Enter your choice: ");
	fflush(stdin);
	gets(choice[10]);
	if(choice=="NO"||choice=="no")
	break; }
	return 0; }*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 08 : Write an algorithm to calculate the formaula y = 3x^2 -2x. where x is a parameter of function and function return the value of y/      
/*#include<stdio.h>
#include<math.h>
int function(int x){
	int y=3*pow(x,2)-2*x;
	return y;
}
int main(){
int m=function(2);
printf("the value of y is %d\n",m);//put the value to do operation.
printf("==========================================================\n");
while(1>0){
int x;//for user input the information.
printf("Enter parameter: ");
scanf("%d",&x);
int f=function(x);
printf("the value of y is: %d\n",f);
printf("==========================================================\n");
if(x==0)
break;
}
return 0;
}
//Output==>
/*				the value of y is 8
				==========================================================
				Enter parameter: 1
				the value of y is: 1
				==========================================================
				Enter parameter: 2
				the value of y is: 8
				==========================================================
				Enter parameter: 3
				the value of y is: 21
				==========================================================
				Enter parameter: 4
				the value of y is: 40
				==========================================================
				Enter parameter: 5
				the value of y is: 65
				==========================================================
				Enter parameter: 6
				the value of y is: 96
				==========================================================
				Enter parameter: 7
				the value of y is: 133
				==========================================================
				Enter parameter: 8
				the value of y is: 176
				==========================================================
				Enter parameter: 9
				the value of y is: 225
				==========================================================
				Enter parameter: 10
				the value of y is: 280
				==========================================================
				Enter parameter: 11
				the value of y is: 341
				==========================================================
				Enter parameter: 22
				the value of y is: 1408
				==========================================================
				Enter parameter: 33
				the value of y is: 3201
				==========================================================
				Enter parameter: 55
				the value of y is: 8965
				==========================================================
				Enter parameter: 66
				the value of y is: 12936
				==========================================================
				Enter parameter: 77
				the value of y is: 17633
				==========================================================
				Enter parameter: 88
				the value of y is: 23056
				==========================================================
				Enter parameter: 99
				the value of y is: 29205
				==========================================================
				Enter parameter: 00
				the value of y is: 0
				==========================================================
				------------------------------------------------------------------------
				Process exited after 29.9 seconds with return value 0
				Press any key to continue . . . */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 09: Do summation by using void and function return value then compare. 
//#include<stdio.h>
/*float SUM(float x,float y){
    float sum=x+y;
    return sum; }*/
//********************************************************************
/*void SUM(float x, float y){
	float sum=x+y;
	printf("the summation of these two numbers is %.2f\n",sum); }*/
//*********************************************************************
//int main(){
/*	float x,y,result;
	printf("Enter number: ");
	scanf("%f	%f",&x,&y);
	result=SUM(x,y);
	printf("the summation of these two number is %.2f\n",result);
	return 0;*/
//********************************************************************
/*	float x,y;
	printf("Enter number: ");
	scanf("%f %f",&x,&y);	
	SUM(x,y);
	return 0; }*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 10: Solve the 2(nd) quadratic equation.
/*#include<stdio.h>
#include<math.h>
void calculus(int a,int b,int c){
	int delta = pow(b,2)-4*a*c;
	float root1= (-b+sqrt(delta))/2*a;
	float root2= (-b-sqrt(delta))/2*a;
	if(delta>0)
	printf("\tthis equation has two roots:\n \t\tX1=%.2f \n\t\tX2=%.2f",root1,root2);
	else if(delta==0)
	printf("\tthis equation has the same double roots: \n\t\tX1=X2=%.2f",root1);
	else
	printf("\tthis equation has no real root or it has imaginary root.\n"); }
int main(){
	while(1>0){
	int a,b,c;
printf("\n=====================>Welcome to Quadratic Equation Solution<==============================\n");
	printf("\t\tEnter a: ");  scanf("%d",&a);
	printf("\t\tEnter b: ");  scanf("%d",&b);
	printf("\t\tEnter c: ");  scanf("%d",&c);
	calculus(a,b,c);
	printf("\nif you want to stop please enter 0 0 0");
	if(a==0&&b==0&&c==0)
	break; }
	return 0; }*/
//Output: 
/*
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 1
			                Enter b: 2
			                Enter c: 1
			        this equation has the same double roots:
			                X1=X2=-1.00
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 1
			                Enter b: -2
			                Enter c: 1
			        this equation has the same double roots:
			                X1=X2=1.00
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 2
			                Enter b: 1
			                Enter c: 0
			        this equation has two roots:
			                X1=0.00
			                X2=-2.00
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 1
			                Enter b: -6
			                Enter c: 8
			        this equation has two roots:
			                X1=4.00
			                X2=2.00
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 9
			                Enter b: 8
			                Enter c: 1
			        this equation has two roots:
			                X1=-12.19
			                X2=-59.81
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 2
			                Enter b: 4
			                Enter c: 9
			        this equation has no real root or it has imaginary root.
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 8
			                Enter b: 9
			                Enter c: 0
			        this equation has two roots:
			                X1=0.00
			                X2=-72.00
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 2
			                Enter b: 3
			                Enter c: 1
			        this equation has two roots:
			                X1=-2.00
			                X2=-4.00
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 5
			                Enter b: 7
			                Enter c: 9
			        this equation has no real root or it has imaginary root.
			if you want to stop please enter 0 0 0
			=====================>Welcome to Quadratic Equation Solution<==============================
			                Enter a: 0
			                Enter b: 0
			                Enter c: 0
			        this equation has the same double roots:
			                X1=X2=0.00
			if you want to stop please enter 0 0 0
	------------------------------------------------------------------------------------------------------
			Process exited after 180.4 seconds with return value 0
			Press any key to continue . . .		*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 11:  Function with array
/*#include<stdio.h>
#include<conio.h>
#include<windows.h>
float sum(float num[],int size);
//*************************************************************************
int main(){
	float arr[]={1,5,2,3,4,5,6,7,8,9};
	float n[]={45,43,5,6};
	float nArr[]={4,5,6,7,8,9};
//===================================================
	int nsize=ARRAYSIZE(n);
	int size = sizeof(arr)/sizeof(arr[0]);//one element has size 4 bytes.
//====================================================
	float result =sum(n,nsize);
	float ars=sum(arr,arrsize);
	printf("array n: %.2f\n",result);
	printf("array arr: %.2f\n",ars);
	printf("array nArr: %.2f\n",sum(nArr,ARRAYSIZE(nArr));
	return 0;}
//*************************************************************************
float sum(float num[],int size){
	float sum=0;
	int i;
	for(i=0;i<size;i++)
	sum+=num[i];
	return sum; }*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program 12: Meeting of any calculation and checking functions.
/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float function1(float x){
	float cube;
	cube=pow(x,3); 
	return cube;
}
void function2(int r){
	int diameter=2*r;
	int circumference=2*3.14*r;
	int  area = 3.14*pow(r,2);
	printf("diameter of circle is %d\n",diameter);
	printf("circumference of circle is %d\n",circumference);
	printf("area of circle is %d\n",area);
}
void function3(int x, int y){
	int max, min;
	if(x>y){
	max=x,min=y;
	printf("the maximum number is %d\n",max);
	printf("the minimum number is %d\n",min);}
	else{
	max=y,min=x;
	printf("the minimum number is %d\n",min);
    printf("the maximum number is %d\n",max);}
}
void function4(int a){
	int r=a%2;
	if(r==0)
	printf("%d is an even number",a);
	else
	printf("%d is an odd number",a);
}
void function5(int m){
	int n;
	for(m=1;m<=n;m++)
	printf("\t%d",m);
}
void function6(int l){
	int cube,power;
	cube=pow(l,3);
	power=pow(l,2);
	int L;
	for(l=1;l<=L;l++)
	printf("\t%d",l);
}
void function7(int b){
	int even,odd,n;
	for(b=1;b<=n;b++){
		if(b%2==0)
			printf("the even number are such as: \t%d",b);
		else
			printf("the odd number are such as: \t%d",b);
	}
}
int function8(int g){
	int sum=0,n;
	for(g=0;g<=n;g++){
	sum=sum+g;
	printf("the summation of these numbers is %d\n",sum); }
}
int main(){
	printf("============================>Welcome to our project<===========================================\n");
	while(1>0){
	printf("===========>Welcome to Program1<======================");
	float x;
	printf("Enter x: ");  scanf("%f",&x);
	float f1=function1(x);
	printf("the cube value of this number is %.2f\n",f1);
	printf("Do you want to continue or not ?\n");
	int y;
	printf("if you want to continue please input any key! or if not continue please press 0.");
	scanf("%d",&y);
	if(y==0)
	break;
//***********************************************************************************************
	printf("===========>Welcome to Program2<======================");
	int rayon;
	printf("Enter rayon: ");
	scanf("%d",&rayon);
	int f2=function2(rayon);
		
	
	
}
return 0;
}*/
