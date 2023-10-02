//Program 01: start first time with enumeration.
/*#include<stdio.h>
enum day{
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum color{
	red,blue,black,white,violet,yellow };
enum account{
	gold, VIP, normal, silver };
int main(){
	enum color c1;
	enum account acc1;
	c1 = black;
	printf("%d\n",c1);
	for(c1==red||c1==yellow||c1++){
	if(c1==red)
	pritf("dress red color");
	else if(c1==yelllow)
	printf("dress yellow color");
	else if(c1==violet)
	printf("dress violet color");
	else if(c1==black)
	printf("dress black color");
	else if(c1==white)
	printf("dress white color");
	return 0;  }*/
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//Program 02: 
/*#include<stdio.h>
struct student{
	int ID;
	char name[30];
	char major[30];
	int age;
	int year;
};
int main(){
	struct student s1;
	printf("\tEnter student ID: ");
	scanf("%d",&s1.ID);
	printf("\tEnter name: ");
	scanf("%s",&s1.name);
	printf("\tEnter major: ");
	scanf("%s",&s1.major);
	printf("\tEnter age: ");
	scanf("%d",&s1.age);
	printf("\tEnter year: ");
	scanf("%d",&s1.year);
	printf("the summary of information of all students are such as: \n");
	printf("\tID : %d\n",s1.ID);
	printf("\tname : %s\n",s1.name);
	printf("\tmajor : %d\n",s1.major);
	printf("\tage : %d\n",s1.age);
	printf("\tyear : %d\n",s1.year);
	return 0; }*/
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//Program 03: using array in structure.
#include<stdio.h> 
struct student{
	int ID;
	char name[30];
	char major[30];
	int age;
	int year;
};
int main(){
	struct student st[5];
	int k,p;
	for(k=0;k<5;k++){
		printf("************informations of student#%d*************************",k+1);
		printf("\n");
		printf("\tEnter your ID: ");
		scanf("%d",&st[k].ID);
        printf("\tEnter your name: ");
		scanf("%s",&st[k].name);
        printf("\tEnter your age: ");
		scanf("%d",&st[k].age);
		printf("\tEnter your major: ");
		scanf("%s",&st[k].major);
        printf("\tEnter your year: ");
		scanf("%d",&st[k].year);
}
	printf("the information of students\n");
	for(p=0;p<5;p++){
	printf("ID\tname\tage\tmajor\tyear");
	printf("\n");
	printf("%d\t%s\t%d\t%s\t\t%d",st[p].ID,st[p].name,st[p].age,st[p].major,st[p].year); }
	return 0; }
/************informations of student#1*************************
        Enter your ID: 1111
        Enter your name: dalis
        Enter your age: 23
        Enter your major: data
        Enter your year: 2003
************informations of student#2*************************
        Enter your ID: 2222
        Enter your name: panha
        Enter your age: 32
        Enter your major: engineering
        Enter your year: 2002
************informations of student#3*************************
        Enter your ID: 3333
        Enter your name: senghort
        Enter your age: 43
        Enter your major: datascientist
        Enter your year: 2004
************informations of student#4*************************
        Enter your ID: 4444
        Enter your name: soda
        Enter your age: 45
        Enter your major: human
        Enter your year: 2005
************informations of student#5*************************
        Enter your ID: 5555
        Enter your name: nara
        Enter your age: 45
        Enter your major: data
        Enter your year: 2004
====================>the information of students<=========================
		ID      name    age     major   		year
		1111    dalis   23      data            2003
		2222    panha   32      engineering     2002
		3333    seng    43      datascientist   2004
		4444    soda    45      human           2005
		5555    nara    45      data            2004
-------------------------------------------------------------------------------
		Process exited after 216.8 seconds with return value 0
		Press any key to continue . . .    */
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//Program 04: Using array in structure.
#include<stdio.h>
struct employee{
	int code;
	char name[20];
	float salary;
	char position[20];
	char sex;
};
typedef struct employee EMPLOYEE;
int main(){
printf("*********************************************Welcome to Employee List*********************************************\n");
	EMPLOYEE e1;
	EMPLOYEE employeelist[10];
	int k;
	for(k=0;k<10;k++){
printf("================================>Employee's Information#%d<===============================\n",k+1);
		printf("Enter employee code#%d: ",k+1);
		scanf("%d",&employeelist[k].code);
		printf("Enter employee name#%d: ",k+1);
		scanf("%s",&employeelist[k].name);
		printf("Enter employee salary#%d: ",k+1);
		scanf("%f",&employeelist[k].salary);
		printf("Enter employee position#%d: ",k+1);
		scanf("%s",&employeelist[k].position);
		printf("Enter employee sex#%d: ",k+1);
		scanf("%c",&employeelist[k].sex);
		scanf("%c",&employeelist[k].sex); }
printf("*********************************************Employment List****************************************************\n");
printf("\nEmployee Code   Employee Name	  Employee Salary    Employee Position		Employee Sex");
printf("\n");
for(k=0;k<10;k++){
	printf("%d		%s	          %.2f            %s                     %c",employeelist[k].code,employeelist[k].name,employeelist[k].salary,employeelist[k].position,employeelist[k].sex);
	printf("\n"); }
return 0;
}*/
//Output: 
/*********************************************Welcome to Employee List*********************************************
================================>Employee's Information#1<===============================
Enter employee code#1: 		1111
Enter employee name#1: 		daro
Enter employee salary#1: 	5433
Enter employee position#1: 	manager
Enter employee sex#1: 		M
================================>Employee's Information#2<===============================
Enter employee code#2: 		2222
Enter employee name#2: 		hort
Enter employee salary#2: 	6789
Enter employee position#2: 	GGG
Enter employee sex#2: 		M
================================>Employee's Information#3<===============================
Enter employee code#3: 		3333
Enter employee name#3: 		data
Enter employee salary#3: 	7686
Enter employee position#3: 	director
Enter employee sex#3: 		M
================================>Employee's Information#4<===============================
Enter employee code#4: 		4444
Enter employee name#4: 		madam
Enter employee salary#4: 	4534
Enter employee position#4: 	teacher
Enter employee sex#4: 		F
================================>Employee's Information#5<===============================
Enter employee code#5: 		5555
Enter employee name#5: 		mario
Enter employee salary#5: 	4566
Enter employee position#5: 	develop
Enter employee sex#5: 		M
================================>Employee's Information#6<===============================
Enter employee code#6: 		6666
Enter employee name#6: 		haha
Enter employee salary#6: 	4533
Enter employee position#6: 	engineer
Enter employee sex#6: 		F
================================>Employee's Information#7<===============================
Enter employee code#7: 		7777
Enter employee name#7: 		virak
Enter employee salary#7: 	543
Enter employee position#7: 	police
Enter employee sex#7: 		M
================================>Employee's Information#8<===============================
Enter employee code#8: 		8888
Enter employee name#8: 		John
Enter employee salary#8: 	4534
Enter employee position#8: 	doctor
Enter employee sex#8: 		M
================================>Employee's Information#9<===============================
Enter employee code#9: 		9999
Enter employee name#9: 		sasa
Enter employee salary#9: 	4534
Enter employee position#9: 	model
Enter employee sex#9: 		F
================================>Employee's Information#10<===============================
Enter employee code#10: 	1010
Enter employee name#10: 	nary
Enter employee salary#10: 	4543
Enter employee position#10: human
Enter employee sex#10: 		F
*********************************************Employment List****************************************************

Employee Code   Employee Name     Employee Salary    Employee Position          Employee Sex         Employee Age		Employee Degree	 
1111            daro              5433.00            manager                    M
2222            hort              6789.00            GGG                     	M
3333            data              7686.00            director                   M
4444            madam             4534.00            teacher                    F
5555            mario             4566.00            develop                    M
6666            haha              4533.00            engineer                   F
7777            virak             543.00             police                     M
8888            John              4534.00            doctor                     M
9999            sasa              4534.00            model                      F
1010            nary              4543.00            human                      F

----------------------------------------------------------------------------------------------------------------
Process exited after 290.9 seconds with return value 0
Press any key to continue . . .				*/
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//*************************************************************************************************************************************************************************
//Program 05: =========================>Nested Structures<====================
#include<stdio.h>
#include<time.h>
struct student{
	int ID;
	char name[30];
	char major[30];
	int age;
	int year;
	char sex;
	int Date dob;
	Date StartWorking;
};
typedef struct employee EMPLOYEE;
int main(){
printf("*********************************************Welcome to Employee List*********************************************\n");
	EMPLOYEE e1;
	EMPLOYEE employeelist[10];
	int k;
	for(k=0;k<10;k++){
printf("================================>Employee's Information#%d<===============================\n",k+1);
		printf("Enter employee code#%d: ",k+1);
		scanf("%d",&employeelist[k].code);
		printf("Enter employee name#%d: ",k+1);
		scanf("%s",&employeelist[k].name);
		printf("Enter employee salary#%d: ",k+1);
		scanf("%f",&employeelist[k].salary);
		printf("Enter employee position#%d: ",k+1);
		scanf("%s",&employeelist[k].position);
		printf("Enter employee sex#%d: ",k+1);
		scanf("%c",&employeelist[k].sex);
		scanf("%c",&employeelist[k].sex); 
	    printf("Enter date of birth: ");
	    scanf("%d  %d  %d ", &day,&month,&year);
	    printf("Enter date of start working: ");
	    scanf("%d %d %d ",&day,&month,&year);
}	
	
	
	
printf("*********************************************Employment List****************************************************\n");
printf("\nEmployee Code   Employee Name	  Employee Salary    Employee Position		Employee Sex");
printf("\n");
for(k=0;k<10;k++){
	printf("%d		%s	          %.2f            %s                     %c",employeelist[k].code,employeelist[k].name,employeelist[k].salary,employeelist[k].position,employeelist[k].sex);
	printf("\n"); }
	
return 0;
}






























