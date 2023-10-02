//Program 01: Part 01
/*#include<stdio.h>
int main(){
	int n[7];
	int k,p;
	for(k=0;k<=6;k++){
		printf("Enter number#%d: ",k+1);
		scanf("%d",&n[k]);}
printf("******************************************************************************\n");
	for(k=0;k<=6;k++){
		printf("%d ",n[k]);}
	return 0; }*/
//Output: 

		/*		Enter number#1: 4343434
				Enter number#2: 434
				Enter number#3: 333
				Enter number#4: 6566
				Enter number#5: 7878
				Enter number#6: 6565
				Enter number#7: 44545  
	    ******************************************************************************
				4343434		434		333		6566	7878	6565	44545	             */
			
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//Program 02: Part 02
/*#include<stdio.h>
int main(){
	int i,j;
	int n[100]; 
	for(i=0;i<20;i++){
	    printf("    Enter number%d: ",i+1);
		scanf("%d",&n[i]);}
printf("**************************************************\n");
	for(j=0;j<20;j++){
		printf(" %d ",n[j]);}
	return 0; }*/
//==>Output: 
/*					Enter number1: 4343
					Enter number2: 4545
					Enter number3: 566
					Enter number4: 445
					Enter number5: 343
					Enter number6: 5454
					Enter number7: 56565
					Enter number8: 4343
					Enter number9: 2323
					Enter number10: 55
					Enter number11: 76767
					Enter number12: 7878
					Enter number13: 8988
					Enter number14: 8787
					Enter number15: 6565
					Enter number16: 4545
					Enter number17: 434
					Enter number18: 3232
					Enter number19: 6767
					Enter number20: 8989
	    **************************************************
				4343 4545 566 445 343 5454 56565 4343 2323 55 76767 7878 8988 8787 6565 4545 434 3232 6767 8989      */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//Program 03: Part 03
/*#include<stdio.h>
int main(){
	int i,j;
	int n[100];
	for(i=0;i<20;i++){
		printf("\tEnter number%d   :  ",i+1);
		scanf("%d",&n[i]);	}
	for(j=0;j<20;j++){
		printf(" %d",n[j]);	}
	return 0;}*/
//==>Output: 
/*      Enter number1   :  4545
        Enter number2   :  5454
        Enter number3   :  343
        Enter number4   :  77676
        Enter number5   :  6565
        Enter number6   :  45454
        Enter number7   :  77878
        Enter number8   :  65656
        Enter number9   :  4454
        Enter number10   :  7878
        Enter number11   :  5556
        Enter number12   :  45454
        Enter number13   :  77878
        Enter number14   :  565
        Enter number15   :  45454
        Enter number16   :  8787
        Enter number17   :  56565
        Enter number18   :  4454
        Enter number19   :  87878
        Enter number20   :  565656565

 4545 5454 343 77676 6565 45454 77878 65656 4454 7878 5556 45454 77878 565 45454 8787 56565 4454 87878 565656565  */

//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 04: suppose we want to get 100 student's name then display theirs names in a list.
/*#include<stdio.h>
int main(){
	int i,j;
	char name[100][20];
	for(i=0;i<100;i++){
		printf("\tEnter name#%d: ",i+1);
		scanf("%s",&name[i]);}
	for(j=0;j<100;j++){
		printf(" %d : %s\n",j+1,name[j]);}
	return 0; }*/
//==>Output: 
/*                      Enter name#1: ab
				        Enter name#2: bc
				        Enter name#3: cd
				        Enter name#4: ed
				        Enter name#5: fdf
				        Enter name#6: naci
				        Enter name#7: cina
				        Enter name#8: naa
				        Enter name#9: nana
				        Enter name#10: ncin
				        Enter name#11: ca
				        Enter name#12: dfd
				        Enter name#13: fdf
				        Enter name#14: ffd
				        Enter name#15: hgh
				        Enter name#16: hghg
				        Enter name#17: dfdfd
				        Enter name#18: dsd
				        Enter name#19: ghg
				        Enter name#20: fggfg
				        Enter name#21: fgf
				        Enter name#22: hjh
				        Enter name#23: fgg
				        Enter name#24: trt
				        Enter name#25: erer
				        Enter name#26: hghgh
				        Enter name#27: hjj
				        Enter name#28: ffgg
				        Enter name#29: ghghg
				        Enter name#30: trtrtrt
				        Enter name#31: rtrt
				        Enter name#32: ghghgh
				        Enter name#33: ffdf
				        Enter name#34: ghhggh
				        Enter name#35: hjjh
				        Enter name#36: jhhjhjjhj
				        Enter name#37: hghghg
				        Enter name#38: ghghgh
				        Enter name#39: ghghg
				        Enter name#40: ghgh
				        Enter name#41: hghg
				        Enter name#42: ghgh
				        Enter name#43: ghgh
				        Enter name#44: ghgh
				        Enter name#45: ghghg
				        Enter name#46: ggf
				        Enter name#47: trt
				        Enter name#48: rtrtr
				        Enter name#49: tyty
				        Enter name#50: yt
				        Enter name#51: yuy
				        Enter name#52: yuyuy
				        Enter name#53: yyuy
				        Enter name#54: yuyuy
				        Enter name#55: ttyt
				        Enter name#56: rtrtr
				        Enter name#57: tt
				        Enter name#58: tyt
				        Enter name#59: gg
				        Enter name#60: gfgf
				        Enter name#61: ghh
				        Enter name#62: hh
				        Enter name#63: shh
				        Enter name#64: shsd
				        Enter name#65: hh
				        Enter name#66: g
				        Enter name#67: fgfgfg
				        Enter name#68: fgfgfg
				        Enter name#69: dfgfgf
				        Enter name#70: gfgfg
				        Enter name#71: fgfgsgg
				        Enter name#72: ssgsfgsgs
				        Enter name#73: gfggdgdg
				        Enter name#74: sghj
				        Enter name#75: h
				        Enter name#76: jhyt
				        Enter name#77: yt
				        Enter name#78: ytytyt
				        Enter name#79: tyrtyrte
				        Enter name#80: hghghf
				        Enter name#81: ghghg
				        Enter name#82: jhjh
				        Enter name#83: ghggh
				        Enter name#84: hgh
				        Enter name#85: tyt
				        Enter name#86: ty
				        Enter name#87: tyty
				        Enter name#88: yuyu
				        Enter name#89: hgg
				        Enter name#90: ghgh
				        Enter name#91: jhjh
				        Enter name#92: gh
				        Enter name#93: g
				        Enter name#94: ghghg
				        Enter name#95: ghghg
				        Enter name#96: gfgf
				        Enter name#97: ggf
				        Enter name#98: gfgfgf
				        Enter name#99: gfgfg
				        Enter name#100: gfg
			***************************************
			list of all student's names in a school:
			***************************************
							 1 : ab
							 2 : bc
							 3 : cd
							 4 : ed
							 5 : fdf
							 6 : naci
							 7 : cina
							 8 : naa
							 9 : nana
							 10 : ncin
							 11 : ca
							 12 : dfd
							 13 : fdf
							 14 : ffd
							 15 : hgh
							 16 : hghg
							 17 : dfdfd
							 18 : dsd
							 19 : ghg
							 20 : fggfg
							 21 : fgf
							 22 : hjh
							 23 : fgg
							 24 : trt
							 25 : erer
							 26 : hghgh
							 27 : hjj
							 28 : ffgg
							 29 : ghghg
							 30 : trtrtrt
							 31 : rtrt
							 32 : ghghgh
							 33 : ffdf
							 34 : ghhggh
							 35 : hjjh
							 36 : jhhjhjjhj
							 37 : hghghg
							 38 : ghghgh
							 39 : ghghg
							 40 : ghgh
							 41 : hghg
							 42 : ghgh
							 43 : ghgh
							 44 : ghgh
							 45 : ghghg
							 46 : ggf
							 47 : trt
							 48 : rtrtr
							 49 : tyty
							 50 : yt
							 51 : yuy
							 52 : yuyuy
							 53 : yyuy
							 54 : yuyuy
							 55 : ttyt
							 56 : rtrtr
							 57 : tt
							 58 : tyt
							 59 : gg
							 60 : gfgf
							 61 : ghh
							 62 : hh
							 63 : shh
							 64 : shsd
							 65 : hh
							 66 : g
							 67 : fgfgfg
							 68 : fgfgfg
							 69 : dfgfgf
							 70 : gfgfg
							 71 : fgfgsgg
							 72 : ssgsfgsgs
							 73 : gfggdgdg
							 74 : sghj
							 75 : h
							 76 : jhyt
							 77 : yt
							 78 : ytytyt
							 79 : tyrtyrte
							 80 : hghghf
							 81 : ghghg
							 82 : jhjh
							 83 : ghggh
							 84 : hgh
							 85 : tyt
							 86 : ty
							 87 : tyty
							 88 : yuyu
							 89 : hgg
							 90 : ghgh
							 91 : jhjh
							 92 : gh
							 93 : g
							 94 : ghghg
							 95 : ghghg
							 96 : gfgf
							 97 : ggf
							 98 : gfgfgf
							 99 : gfgfg
							 100: gfg         */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 05: Suppose we want to get 100 subjects scores of a students then display it.
/*#include<stdio.h>
int main(){
	int i,j;
	int score[100];
	for(i=0;i<100;i++){
		printf("\tEnter subject#%d score  : ",i+1);
		scanf("%d",&score[i]);}
	for(j=0;j<100;j++){
		printf("\tsubject#%d: %d\n",j+1,score[j]);}
	return 0; }*/
//Output:
/*      Enter subject#1 score   : 54
        Enter subject#2 score   : 45
        Enter subject#3 score   : 45
        Enter subject#4 score   : 45
        Enter subject#5 score   : 45
        Enter subject#6 score   : 45
        Enter subject#7 score   : 54
        Enter subject#8 score   : 45
        Enter subject#9 score   : 45
        Enter subject#10 score  : 45
        Enter subject#11 score  : 45
        Enter subject#12 score  : 5
        Enter subject#13 score  : 56
        Enter subject#14 score  : 56
        Enter subject#15 score  : 56
        Enter subject#16 score  : 6
        Enter subject#17 score  : 67
        Enter subject#18 score  : 7
        Enter subject#19 score  : 7
        Enter subject#20 score  : 7
        Enter subject#21 score  : 87
        Enter subject#22 score  : 87
        Enter subject#23 score  : 87
        Enter subject#24 score  : 87
        Enter subject#25 score  : 78
        Enter subject#26 score  : 7
        Enter subject#27 score  : 76
        Enter subject#28 score  : 67
        Enter subject#29 score  : 6
        Enter subject#30 score  : 65
        Enter subject#31 score  : 56
        Enter subject#32 score  : 5
        Enter subject#33 score  : 45
        Enter subject#34 score  : 45
        Enter subject#35 score  : 4
        Enter subject#36 score  : 45
        Enter subject#37 score  : 4
        Enter subject#38 score  : 4
        Enter subject#39 score  : 65
        Enter subject#40 score  : 65
        Enter subject#41 score  : 6
        Enter subject#42 score  : 67
        Enter subject#43 score  : 76
        Enter subject#44 score  : 7
        Enter subject#45 score  : 87
        Enter subject#46 score  : 87
        Enter subject#47 score  : 87
        Enter subject#48 score  : 87
        Enter subject#49 score  : 78
        Enter subject#50 score  : 87
        Enter subject#51 score  : 87
        Enter subject#52 score  : 76
        Enter subject#53 score  : 67
        Enter subject#54 score  : 67
        Enter subject#55 score  : 67
        Enter subject#56 score  : 6
        Enter subject#57 score  : 65
        Enter subject#58 score  : 65
        Enter subject#59 score  : 65
        Enter subject#60 score  : 65
        Enter subject#61 score  : 65
        Enter subject#62 score  : 56
        Enter subject#63 score  : 65
        Enter subject#64 score  : 6
        Enter subject#65 score  : 65
        Enter subject#66 score  : 5
        Enter subject#67 score  : 5
        Enter subject#68 score  : 5
        Enter subject#69 score  : 5
        Enter subject#70 score  : 56
        Enter subject#71 score  : 65
        Enter subject#72 score  : 6
        Enter subject#73 score  : 6
        Enter subject#74 score  : 67
        Enter subject#75 score  : 76
        Enter subject#76 score  : 76
        Enter subject#77 score  : 7
        Enter subject#78 score  : 7
        Enter subject#79 score  : 87
        Enter subject#80 score  : 87
        Enter subject#81 score  : 78
        Enter subject#82 score  : 76
        Enter subject#83 score  : 76
        Enter subject#84 score  : 67
        Enter subject#85 score  : 6
        Enter subject#86 score  : 6
        Enter subject#87 score  : 65
        Enter subject#88 score  : 65
        Enter subject#89 score  : 65
        Enter subject#90 score  : 65
        Enter subject#91 score  : 65
        Enter subject#92 score  : 6
        Enter subject#93 score  : 67
        Enter subject#94 score  : 76
        Enter subject#95 score  : 7
        Enter subject#96 score  : 7
        Enter subject#97 score  : 87
        Enter subject#98 score  : 87
        Enter subject#99 score  : 56
        Enter subject#100 score : 67
//*****************************************************************************
        subject#1 : 54
        subject#2 : 45
        subject#3 : 45
        subject#4 : 45
        subject#5 : 45
        subject#6 : 45
        subject#7 : 54
        subject#8 : 45
        subject#9 : 45
        subject#10: 45
        subject#11: 45
        subject#12: 5
        subject#13: 56
        subject#14: 56
        subject#15: 56
        subject#16: 6
        subject#17: 67
        subject#18: 7
        subject#19: 7
        subject#20: 7
        subject#21: 87
        subject#22: 87
        subject#23: 87
        subject#24: 87
        subject#25: 78
        subject#26: 7
        subject#27: 76
        subject#28: 67
        subject#29: 6
        subject#30: 65
        subject#31: 56
        subject#32: 5
        subject#33: 45
        subject#34: 45
        subject#35: 4
        subject#36: 45
        subject#37: 4
        subject#38: 4
        subject#39: 65
        subject#40: 65
        subject#41: 6
        subject#42: 67
        subject#43: 76
        subject#44: 7
        subject#45: 87
        subject#46: 87
        subject#47: 87
        subject#48: 87
        subject#49: 78
        subject#50: 87
        subject#51: 87
        subject#52: 76
        subject#53: 67
        subject#54: 67
        subject#55: 67
        subject#56: 6
        subject#57: 65
        subject#58: 65
        subject#59: 65
        subject#60: 65
        subject#61: 65
        subject#62: 56
        subject#63: 65
        subject#64: 6
        subject#65: 65
        subject#66: 5
        subject#67: 5
        subject#68: 5
        subject#69: 5
        subject#70: 56
        subject#71: 65
        subject#72: 6
        subject#73: 6
        subject#74: 67
        subject#75: 76
        subject#76: 76
        subject#77: 7
        subject#78: 7
        subject#79: 87
        subject#80: 87
        subject#81: 78
        subject#82: 76
        subject#83: 76
        subject#84: 67
        subject#85: 6
        subject#86: 6
        subject#87: 65
        subject#88: 65
        subject#89: 65
        subject#90: 65
        subject#91: 65
        subject#92: 6
        subject#93: 67
        subject#94: 76
        subject#95: 7
        subject#96: 7
        subject#97: 87
        subject#98: 87
        subject#99: 56
        subject#100: 67

--------------------------------
Process exited after 35.63 seconds with return value 0
Press any key to continue . . . */

//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 06: Input and display the list of two student score. 
/*#include<stdio.h> 
int main(){
	float score[2];
	int i,j;
	for(i=0;i<=1;i++){
		printf("Enter score%d: ",i+1);
		scanf("%f",&score[i]); }
	printf("********************************************\n");
	for(j=0;j<=1;j++){
		printf("score student%d: %.2f\n",j+1,score[j]);	}
return 0; } */
//************************************************************************************************************************//
//==>Output: 
/*				Enter score1: 44
				Enter score2: 55
				********************************************
				score student1: 44.00
				score student2: 55.00
			
				--------------------------------
				Process exited after 6.451 seconds with return value 0
				Press any key to continue . . .                         */

//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 07:  
/*#include<stdio.h>
int main(){
int i,j;
int num[10];
for(i=0;i<10;i++){
	printf("Enter num%d: ",i+1);
	scanf("%d",&num[i]);}	
for(j=0;j<10;j++){
	printf(" %d",num[j]);}
return 0;}*/
/*			Enter num1: 34
			Enter num2: 4
			Enter num3: 34
			Enter num4: 343
			Enter num5: 545
			Enter num6: 656
			Enter num7: 76
			Enter num8: 565
			Enter num9: 87
			Enter num10: 56
			 34 4 34 343 545 656 76 565 87 56
			--------------------------------
			Process exited after 10.3 seconds with return value 0
			Press any key to continue . . .                       */

//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 08: Get 10 numbers from the user and do summation all those numbers together. Finally, display the result.
/*#include<stdio.h>
int main(){
	int i,sum=0,j;
	int num[10];
	for(i=0;i<10;i++){
		printf("Enter num%d: ",i+1);
		scanf("%d",&num[i]);}
	for(j=0;j<10;j++){
		sum=sum+num[j];}
	printf("the summation of these number is %d\n",sum);
	return 0; }*/
//==>Output: 
/*					Enter num1: 33
					Enter num2: 44
					Enter num3: 55
					Enter num4: 33
					Enter num5: 44
					Enter num6: 33
					Enter num7: 44
					Enter num8: 55
					Enter num9: 66
					Enter num10: 77
					the summation of these number is 484
				---------------------------------------------------------------------------
					Process exited after 8.441 seconds with return value 0
					Press any key to continue . . .                             */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 09: Get 10 sexes from the user and count all males and females then finally display #male and #female. 
/*#include<stdio.h>
int main(){
	int i,j;
	char gender[10];
	for(i=0;i<10;i++){
		printf("Enter gender#%d: ",i+1);
		scanf("%s",&gender[i]);	}
	int m=0;
	int f=0;
	for(j=0;j<10;j++){
		if(gender[j]=='M'||gender[j]=='m')
			{m++;}
		else if(gender[j]=='F'||gender[j]=='f')
			{f++;}			
		 }
	printf("the numbers of male gender is %d\n",m);
	printf("the numbers of female gender is %d\n",f);	
	return 0; }*/
//==>Output: 
/*							Enter gender#1: f
							Enter gender#2: m
							Enter gender#3: m
							Enter gender#4: f
							Enter gender#5: f
							Enter gender#6: f
							Enter gender#7: m
							Enter gender#8: m
							Enter gender#9: f
							Enter gender#10: f
							the numbers of male gender is 4
							the numbers of female gender is 6
							
							--------------------------------
							Process exited after 12.56 seconds with return value 0
							Press any key to continue . . .                                    */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 10: Get 100 genders from user input and count the numbers of female and numbers of male.
/*#include<stdio.h>
int main(){
	int i,j,sumM=0,sumF=0;
	char gender[100];
	for(i=0;i<100;i++){
		printf("Enter gender#%d: ",i+1);
		scanf("%s",&gender[i]);	}
	for(j=0;j<100;j++){
		if(gender[j]=='M'||gender[j]=='m')
		sumM++;
		else if(gender[j]=='F'||gender[j]=='f')
		sumF++;	}
		printf("*********************************************************\n");
	printf("here are the numbers of each gender which represent above: \n");
	printf("the number of male is %d\n",sumM);
	printf("the number of female is %d\n",sumF);
	return 0; } */
//==>Output: 
    /* 					Enter gender#1: f
						Enter gender#2: f
						Enter gender#3: f
						Enter gender#4: f
						Enter gender#5: f
						Enter gender#6: f
						Enter gender#7: f
						Enter gender#8: f
						Enter gender#9: f
						Enter gender#10: f
						Enter gender#11: f
						Enter gender#12: f
						Enter gender#13: f
						Enter gender#14: f
						Enter gender#15: f
						Enter gender#16: f
						Enter gender#17: f
						Enter gender#18: f
						Enter gender#19: f
						Enter gender#20: f
						Enter gender#21: f
						Enter gender#22: f
						Enter gender#23: f
						Enter gender#24: f
						Enter gender#25: f
						Enter gender#26: f
						Enter gender#27: f
						Enter gender#28: f
						Enter gender#29: m
						Enter gender#30: m
						Enter gender#31: m
						Enter gender#32: m
						Enter gender#33: m
						Enter gender#34: m
						Enter gender#35: m
						Enter gender#36: m
						Enter gender#37: m
						Enter gender#38: m
						Enter gender#39: m
						Enter gender#40: m
						Enter gender#41: m
						Enter gender#42: m
						Enter gender#43: m
						Enter gender#44: m
						Enter gender#45: m
						Enter gender#46: m
						Enter gender#47: m
						Enter gender#48: m
						Enter gender#49: m
						Enter gender#50: m
						Enter gender#51: m
						Enter gender#52: m
						Enter gender#53: m
						Enter gender#54: m
						Enter gender#55: m
						Enter gender#56: m
						Enter gender#57: m
						Enter gender#58: m
						Enter gender#59: m
						Enter gender#60: m
						Enter gender#61: m
						Enter gender#62: m
						Enter gender#63: m
						Enter gender#64: m
						Enter gender#65: m
						Enter gender#66: m
						Enter gender#67: m
						Enter gender#68: m
						Enter gender#69: f
						Enter gender#70: f
						Enter gender#71: f
						Enter gender#72: f
						Enter gender#73: f
						Enter gender#74: f
						Enter gender#75: f
						Enter gender#76: f
						Enter gender#77: f
						Enter gender#78: f
						Enter gender#79: f
						Enter gender#80: f
						Enter gender#81: f
						Enter gender#82: f
						Enter gender#83: f
						Enter gender#84: f
						Enter gender#85: f
						Enter gender#86: f
						Enter gender#87: f
						Enter gender#88: f
						Enter gender#89: f
						Enter gender#90: f
						Enter gender#91: f
						Enter gender#92: f
						Enter gender#93: f
						Enter gender#94: f
						Enter gender#95: m
						Enter gender#96: m
						Enter gender#97: m
						Enter gender#98: m
						Enter gender#99: m
						Enter gender#100: m
						*********************************************************
						here are the numbers of each gender which represent above: 
						the number of male is 46
						the number of female is 54						
						--------------------------------
						Process exited after 30 seconds with return value 0
						Press any key to continue . . .                     */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 11: Declare and store an array with 5 english's vowels
/*#include<stdio.h>
int main(){
	int i,j;
	char vowel[5][2];
	for(i=0;i<5;i++){
		printf("Enter vowel#%d: ",i+1);
		scanf("%s",&vowel[i]);  }
printf("*************************************\n");
printf("here are the list of vowel in english:\n");
	for(j=0;j<5;j++){
		printf("%d : %s\n",j+1,vowel[j]);}
   return 0; }	*/
//Output: 
/*						Enter vowel#1: Aa
						Enter vowel#2: Ee
						Enter vowel#3: Ii
						Enter vowel#4: Oo
						Enter vowel#5: Uu
						*************************************
						here are the list of vowel in english:
						1 : Aa
						2 : Ee
						3 : Ii
						4 : Oo
						5 : Uu
						--------------------------------
						Process exited after 6.77 seconds with return value 0
						Press any key to continue . . .                       */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 12. Declare and store an array with  21 consonants in English.
/*#include<stdio.h>
int main(){
	int i,j;
	char consonant[21][10];
	for(i=0;i<21;i++){
		printf("Enter consonant#%d: ",i+1);
		scanf("%s",&consonant[i]);}
	printf("******************************************\n");
	printf("here are the english consonants: \n");
	for(j=0;j<21;j++){
		printf("%d : %s\n",j+1,consonant[j]);}
    return 0;}*/
/*Output: 
						Enter consonant#1: Bb
						Enter consonant#2: Cc
						Enter consonant#3: Dd
						Enter consonant#4: Ff
						Enter consonant#5: Gg
						Enter consonant#6: Hh
						Enter consonant#7: Jj
						Enter consonant#8: Kk
						Enter consonant#9: Ll
						Enter consonant#10: Mm
						Enter consonant#11: Nn
						Enter consonant#12: Pp
						Enter consonant#13: Qq
						Enter consonant#14: Rr
						Enter consonant#15: Ss
						Enter consonant#16: Tt
						Enter consonant#17: Vv
						Enter consonant#18: Ww
						Enter consonant#19: Xx
						Enter consonant#20: Yy
						Enter consonant#21: Zz
						******************************************
						here are the english consonants:
						1 : Bb
						2 : Cc
						3 : Dd
						4 : Ff
						5 : Gg
						6 : Hh
						7 : Jj
						8 : Kk
						9 : Ll
						10 : Mm
						11 : Nn
						12 : Pp
						13 : Qq
						14 : Rr
						15 : Ss
						16 : Tt
						17 : Vv
						18 : Ww
						19 : Xx
						20 : Yy
						21 : Zz
						--------------------------------
						Process exited after 54.36 seconds with return value 0
						Press any key to continue . . .       */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 13. Declare and store an array of Alphabet's English Aa-Zz.
/*#include<stdio.h>
int main(){
	int i,j;
	char alp[26][5];
	for(i=0;i<26;i++){
		printf("Enter alphabet#%d : ",i+1);
		scanf("%s",&alp[i]);}
	printf("****************************************\n");
	printf("here are all of english's alphabets : \n");
	printf("\n");
	for(j=0;j<26;j++){
		printf("%s ",alp[j]);}
	return 0;}*/
/*Output: 
			Enter alphabet#1 : Aa
			Enter alphabet#2 : Bb
			Enter alphabet#3 : Cc
			Enter alphabet#4 : Dd
			Enter alphabet#5 : Ee
			Enter alphabet#6 : Ff
			Enter alphabet#7 : Gg
			Enter alphabet#8 : Hh
			Enter alphabet#9 : Ii
			Enter alphabet#10 : Jj
			Enter alphabet#11 : Kk
			Enter alphabet#12 : Ll
			Enter alphabet#13 : Mm
			Enter alphabet#14 : Nn
			Enter alphabet#15 : Oo
			Enter alphabet#16 : Pp
			Enter alphabet#17 : Qq
			Enter alphabet#18 : Rr
			Enter alphabet#19 : Ss
			Enter alphabet#20 : Tt
			Enter alphabet#21 : Uu
			Enter alphabet#22 : Vv
			Enter alphabet#23 : Ww
			Enter alphabet#24 : Xx
			Enter alphabet#25 : Yy
			Enter alphabet#26 : Zz
			****************************************
			here are all of english's alphabets :
			Aa Bb Cc Dd Ee Ff Gg Hh Ii Jj Kk Ll Mm Nn Oo Pp Qq Rr Ss Tt Uu Vv Ww Xx Yy Zz
			------------------------------------------------------------------------------
			Process exited after 42.54 seconds with return value 0
			Press any key to continue . . .  */
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*#include<stdio.h>
int main(){
	int i,j;
	char alp[26];
	for(i=97;i<=122;i++){
		alp[i-97]=i;}
	for(j=0;j<=122;j++){
		printf("   %c",alp[j]);
		if(alp[j]=='z')
		break;}
	return 0;}*/
//Output: 
/*   a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z
--------------------------------
Process exited after 0.07849 seconds with return value 0
Press any key to continue . . . */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 14: Declare and store an array with even integer numbers 2,4,....,100
/*#include<stdio.h>
int main(){
	int i,j;
	int num[100];
	for(i=0;i<100;i++){
		printf("\t%d",i+1);}
	printf("\n");
printf("*****************************************************************************************************************\n");
printf("Here are the even integer number: \n");
	for(i=1;i<100;i++){
		if(i%2==0)
		printf("\t%d",i);
	    else
	    continue;}	
		return 0; }*/ 
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//#include<stdio.h>
//int main(){
//	int a[100],i,j;
//	for(i=0;i<100;i++){
//		printf("\t%d",i+1);	}
//	printf("\n****************************************************************************************************************************");
//	for(j=0;j<100;j++){
//		if(a[j]%2==0)
//			printf("\t%d",a[j]); }
//	return 0;  }
/*Output: 
        1       2       3       4       5       6       7       8       9       10      11      12      13      14      15      
	    16      17      18      19      20      21      22      23      24      25      26      27      28      29      30      
		31      32      33      34      35      36      37      38      39      40      41      42      43      44      45      
		46      47      48      49      50      51      52      53      54      55      56      57      58      59      60      
		61      62      63      64      65      66      67      68      69      70      71      72      73      74      75      
		76      77      78      79      80      81      82      83      84      85      86      87      88      89      90      
		91      92      93      94      95      96      97      98      99      100
******************************************************************************************************************************
    Here are the even integer number:
        2       4       6       8       10      12      14      16      18      20      22      24      26      28      30      
		32      34      36      38      40      42      44      46      48      50      52      54      56      58      60      
		62      64      66      68      70      72      74      76      78      80      82      84      86      88      90      
		92      94      96      98
------------------------------------------------------------------------------------------------------------------------------
    Process exited after 1.86 seconds with return value 0
    Press any key to continue . . .      */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 15: Declare and store an array of 10 user names. Ask the user to input all those 10 names. Then display their names on the screen.
/*#include<stdio.h>
int main(){
	int i,j;
	char name[10][20];
	for(i=0;i<10;i++){
		printf("\tEnter name#%d: ",i+1);
		scanf("%s",&name[i]);}
	printf("******************************************************\n");
	for(j=0;j<10;j++){
		printf("\t%d : %s\n",j+1,name[j]);}
	return 0;}
/*Output: 
		        Enter name#1: Krysenghort
		        Enter name#2: Krysenghy
		        Enter name#3: Kryseyha
		        Enter name#4: Ykimhor
		        Enter name#5: Soemsophy
		        Enter name#6: Yleangkhim
		        Enter name#7: Saosophon
		        Enter name#8: Thousoviet
		        Enter name#9: Thouleangkhim
		        Enter name#10: Thoudalis
		******************************************************
		        1 : Krysenghort
		        2 : Krysenghy
		        3 : Kryseyha
		        4 : Ykimhor
		        5 : Soemsophy
		        6 : Yleangkhim
		        7 : Saosophon
		        8 : Thousoviet
		        9 : Thouleangkhim
		       10 : Thoudalis
		-------------------------------------------------------
		Process exited after 78.96 seconds with return value 0
		Press any key to continue . . .*/

//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 15: Ask user to input for 20 scores then find average of those scores and show the scores that are greater than average.
//then count numbers of students who got score more than average.
/*#include<stdio.h>
int main(){
	int i,j,k,num=0;
	int sum=0;
	float average;
	int score[20];
	for(i=0;i<20;i++){
		printf("\tEnter student#%d score: ",i+1);
		scanf("%d",&score[i]);}
//****************************************************************
    printf("*******************************************\n");
	for(j=0;j<20;j++){
		sum=sum+score[j];}
	average=sum/20;
	printf("\tthe average of those scores is: %.2f\n",average);
//****************************************************************
    printf("*******************************************\n");
	for(k=0;k<20;k++){
		if(score[k]>average){
		printf(" %d",score[k]);
		num++;}
		else
		continue; }
	printf("\n");
	printf("There are %d numbers which are greater than average.\n",num);	
	return 0; }*/
//Output: 
/*                      Enter student#1 score: 45
				        Enter student#2 score: 65
				        Enter student#3 score: 76
				        Enter student#4 score: 78
				        Enter student#5 score: 67
				        Enter student#6 score: 65
				        Enter student#7 score: 45
				        Enter student#8 score: 43
				        Enter student#9 score: 32
				        Enter student#10 score: 34
				        Enter student#11 score: 89
				        Enter student#12 score: 90
				        Enter student#13 score: 8
				        Enter student#14 score: 78
				        Enter student#15 score: 67
				        Enter student#16 score: 65
				        Enter student#17 score: 67
				        Enter student#18 score: 78
				        Enter student#19 score: 89
				        Enter student#20 score: 65
				*************************************************
				        the average of those scores is: 62.00
				*************************************************
				 65 76 78 67 65 89 90 78 67 65 67 78 89 65
				There are 14 numbers which are greater than average.
				--------------------------------------------------------
				Process exited after 23.74 seconds with return value 0
				Press any key to continue . . .     */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 16: Write an algorithm to get input 10 number and store for display then find the largest and smallest number(display on screen).
/*#include<stdio.h>
int main(){
	int i,j,k,l;
	int num[10];
	for(i=0;i<10;i++){
		printf("\tEnter number%d: ",i+1);
	    scanf("%d",&num[i]);}
//**********************************************
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
	for(j=0;j<10;j++){
		printf("\t%d",num[j]);}
//**********************************************
	int max=num[0],min=num[0];
	for(k=0;k<10;k++){
		if(num[k]>max)
		max=num[k];
		if(num[k]<min)
		min=num[k];}
//*********************************************
	printf("\n");
	printf("\tthe maximum number is %d\n",max);
	printf("\tthe minimum number is %d\n",min);
	return 0;}*/  
//Output: 
			/*    	Enter number1: 54
			        Enter number2: 65
			        Enter number3: 67
			        Enter number4: 56
			        Enter number5: 45
			        Enter number6: 34
			        Enter number7: 32
			        Enter number8: 34
			        Enter number9: 45
			        Enter number10: 90
			+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
			        54      65      67      56      45      34      32      34      45      90
			        the maximum number is 90
			        the minimum number is 32
			---------------------------------------------------------------------------------
			Process exited after 13.19 seconds with return value 0
			Press any key to continue . . .                                  */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 17: Write an algorithm to store the word "New York City" in an array of characters. 
//Then make it to lowercase and uppercase then store in another array.
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i;
	char str[20];
		printf("Enter name of city: ");
		scanf("%s",&str);
		printf("name of city: %s\n",str);
	for(i=0;i<=strlen(str);i++){
		if(str[i]>=97&&str[i]<=122)
		str[i]=str[i]-32;}
	printf("name of city: %s",str);
	return 0;}*/
/*Output:
Enter name of city: New-York-City
name of city: New-York-City
name of city: NEW-YORK-CITY
-------------------------------------------------------------------------------
Process exited after 13.67 seconds with return value 0
Press any key to continue . . . */
//*******************************************************
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i;
	char str[20];
		printf("Enter name of city: ");
		scanf("%s",&str);
		printf("name of city: %s\n",str);
	for(i=0;i<=strlen(str);i++){
		if(str[i]>=65&&str[i]<=90)
		str[i]=str[i]+32;}
	printf("name of city: %s",str);
	return 0;}*/
//Output:
/*				Enter name of city: New-York-City
				name of city: New-York-City
				name of city: new-york-city
				--------------------------------
				Process exited after 11.75 seconds with return value 0
				Press any key to continue . . .   */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 18: Calculate summation of two matrices.
/*#include<stdio.h>
int main(){
	float score[]={10,20,30,40,50};//we can put float score[5] too possible.
	printf("the value of score[2]=%.3f",score[2]);
	return 0; }*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 19: User input 6 scores then find total average and classificate the grade A-F
/*#include<stdio.h>
int main(){
	int i,j,k;
	int score[6];
	for(i=0;i<6;i++){
		printf("Enter score%d: ",i+1);
		scanf("%d",&score[i]);	}
	int sum=0;
	float average;
	for(j=0;j<6;j++){
		sum=sum+score[j];}
		average=sum/6;
	printf("the summation of those scores is %d\n",sum);
	printf("the average score is %.3f\n",average);	
	if(average>=90)
	printf("you got grade A");
	else if(average>=80)
	printf("you got grade B");
	else if(average>=70)
	printf("you got grade C");
    else if(average>=60)
    printf("you got grade D");
    else if(average>=50)
    printf("you got grade E");
    else 
    printf("you got grade F");
	return 0;}*/
//Output: 
/*					Enter score1: 54
					Enter score2: 65
					Enter score3: 34
					Enter score4: 87
					Enter score5: 98
					Enter score6: 67
					the summation of those scores is 405
					the average score is 67.000
					you got grade D
					----------------------------------------------------------
					Process exited after 9.237 seconds with return value 0
					Press any key to continue . . . */
//*********************************************************************************************************************************************
/*#include<stdio.h>
int main(){
	float score[6];
	int i;
	float total=0;
	for(i=0;i<6;i++){
		printf("Enter score#%d: ",i+1);
		scanf("%f",&score[i]);
		total+=score[i];	}
printf("=================================================\n");
	for(i=0;i<6;i++)
		printf("score%d=%.2f\n",i,score[i]);
		printf("The total score: %.2f\n",total);	
	 float average;
	 average=total/6;
	 printf("The average score is %f\n",average);
	 if(total<50)
	 	printf("you got grade F");
	 else if(total>=50)
	    printf("you got grade E");	
    	 else if(total>=60)
	    printf("you got grade D");	
	 else if(total>=70)
	    printf("you got grade C");	
	 else if(total>=80)
 	    printf("you got grade B");	
	 else
	    printf("you got grade A");	
	return 0; }*/
//Output:
/*					Enter score#1: 45
					Enter score#2: 65
					Enter score#3: 67
					Enter score#4: 87
					Enter score#5: 98
					Enter score#6: 78
		=================================================
					score0=45.00
					score1=65.00
					score2=67.00
					score3=87.00
					score4=98.00
					score5=78.00
					The total score: 440.00
					The average score is 73.333336
					you got grade E
------------------------------------------------------------------------------------------
					Process exited after 7.12 seconds with return value 0
					Press any key to continue . . .						*/
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//Program 20: User input number elements of array and check max Vs min value. stop code by enter 0;
/*#include<stdio.h>
int main(){
	int score[10];
	int i;
	for(i=0;i<10;i++){
		printf("\tEnter number%d: ",i+1);
		scanf("%d",&score[i]);}
	printf("\n");
	for(i=0;i<10;i++)
	printf("\t%d",score[i]);
//****************************************************************
    int max=score[0];
	int min=score[0];
	for(i=0;i<10;i++){
    	if(score[i]>max)
    	max=score[i];
    	if(score[i]<min)
    	min=score[i];}
    printf("\n===================================================");
    printf("\nthe maximum value is %d",max);
    printf("\nthe minimum value is %d",min);
	return 0;}*/
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 21: User input number elements of array and sort array from small to big. 
/*#include<stdio.h>
int main(){
	int n,i,j,temp;
	printf("Enter element of array: ");
	scanf("%d",&n);
	printf("==================================================\n");
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter array[%d]= ",i);
		scanf("%d",&arr[i]);	}
	printf("==================================================\n");
	for(i=0;i<n;i++){
		printf("value of array[%d] = %d\n",i,arr[i]);}
	printf("=================>Sort Array<=====================\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>=arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp; } } }
	for(i=0;i<n;i++){
		printf("value of array[%d] = %d\n",i,arr[i]);}
	return 0; }*/
//Output: 				
/*					Enter element of array: 20
		==================================================
					Enter array[0]= 32
					Enter array[1]= 33
					Enter array[2]= 44
					Enter array[3]= 33
					Enter array[4]= 23
					Enter array[5]= 66
					Enter array[6]= 77
					Enter array[7]= 87
					Enter array[8]= 67
					Enter array[9]= 55
					Enter array[10]= 66
					Enter array[11]= 99
					Enter array[12]= 88
					Enter array[13]= 77
					Enter array[14]= 88
					Enter array[15]= 66
					Enter array[16]= 55
					Enter array[17]= 66
					Enter array[18]= 77
					Enter array[19]= 55
		==================================================
					value of array[0] = 32
					value of array[1] = 33
					value of array[2] = 44
					value of array[3] = 33
					value of array[4] = 23
					value of array[5] = 66
					value of array[6] = 77
					value of array[7] = 87
					value of array[8] = 67
					value of array[9] = 55
					value of array[10] = 66
					value of array[11] = 99
					value of array[12] = 88
					value of array[13] = 77
					value of array[14] = 88
					value of array[15] = 66
					value of array[16] = 55
					value of array[17] = 66
					value of array[18] = 77
					value of array[19] = 55
		=================>Sort Array<=====================
					value of array[0] = 23
					value of array[1] = 32
					value of array[2] = 33
					value of array[3] = 33
					value of array[4] = 44
					value of array[5] = 55
					value of array[6] = 55
					value of array[7] = 55
					value of array[8] = 66
					value of array[9] = 66
					value of array[10] = 66
					value of array[11] = 66
					value of array[12] = 67
					value of array[13] = 77
					value of array[14] = 77
					value of array[15] = 77
					value of array[16] = 87
					value of array[17] = 88
					value of array[18] = 88
					value of array[19] = 99
	------------------------------------------------------------------------------------
					Process exited after 30.5 seconds with return value 0
					Press any key to continue . . .                                */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 22: User input number elements of array and sort array from big to small. 
 /*#include<stdio.h>
 int main(){
 	int i,j,n,temp;
 	printf("\tEnter number of elements in array: ");
 	scanf("%d",&n);
//***************************************************************
	printf("======================================================\n");
 	 int arr[n];
	 for(i=0;i<n;i++){
 		printf("\tEnter array[%d] : ",i);
		scanf("%d",&arr[i]); }
	printf("======================================================\n");	
 	for(i=0;i<n;i++)
 		printf("\tthe element in array[%d]: %d",i,arr[i]);
//**************************************************************** 
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<=arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp; } } }
//*****************************************************************
    printf("\n======================================================");
 	for(i=0;i<n;i++){
 		printf("\n\tthe element in array[%d]: %d",i,arr[i]); }
 	return 0; }*/
 /*Output:
        Enter number of elements in array: 20
======================================================
        Enter array[0] : 21
        Enter array[1] : 22
        Enter array[2] : 55
        Enter array[3] : 77
        Enter array[4] : 66
        Enter array[5] : 44
        Enter array[6] : 33
        Enter array[7] : 99
        Enter array[8] : 89
        Enter array[9] : 90
        Enter array[10] : 98
        Enter array[11] : 87
        Enter array[12] : 66
        Enter array[13] : 55
        Enter array[14] : 44
        Enter array[15] : 56
        Enter array[16] : 78
        Enter array[17] : 76
        Enter array[18] : 67
        Enter array[19] : 55
======================================================
        the element in array[0]: 21
        the element in array[1]: 22
        the element in array[2]: 55
        the element in array[3]: 77
        the element in array[4]: 66
        the element in array[5]: 44
        the element in array[6]: 33
        the element in array[7]: 99
        the element in array[8]: 89
        the element in array[9]: 90
        the element in array[10]: 98
        the element in array[11]: 87
        the element in array[12]: 66
        the element in array[13]: 55
        the element in array[14]: 44
        the element in array[15]: 56
        the element in array[16]: 78
        the element in array[17]: 76
        the element in array[18]: 67
        the element in array[19]: 55
======================================================
        the element in array[0]: 99
        the element in array[1]: 98
        the element in array[2]: 90
        the element in array[3]: 89
        the element in array[4]: 87
        the element in array[5]: 78
        the element in array[6]: 77
        the element in array[7]: 76
        the element in array[8]: 67
        the element in array[9]: 66
        the element in array[10]: 66
        the element in array[11]: 56
        the element in array[12]: 55
        the element in array[13]: 55
        the element in array[14]: 55
        the element in array[15]: 44
        the element in array[16]: 44
        the element in array[17]: 33
        the element in array[18]: 22
        the element in array[19]: 21
---------------------------------------------------------
Process exited after 37.91 seconds with return value 0
Press any key to continue . . .                                */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 23:  Array two dimension. Uer want to find the element in array.
/*#include<stdio.h>
int main(){
//	float arr[3][4]={{34,54,22,56},{23,48,78,98},{46,78,65,65}};
//	printf("value of array = %.2f\n",arr[2][3]);
	float arr[3][4];
	arr[0][1] = 34;
	arr[0][2] = 34;
	arr[0][3] = 34;
	arr[1][0] = 34;
	arr[1][1] = 34;
	arr[1][2] = 34;
	arr[1][3] = 34;
	arr[2][0] = 34;
	arr[2][1] = 34;
	arr[2][2] = 34;
	arr[2][3] = 34;
	printf("value of array = %.2f\n",arr[2][3]);
	return 0; } */
//Output: value of array = 34.00
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 24: get input from user in Array 2 Dimesion.
/*#include<stdio.h>
int main(){
	int i,j;
	float arr[5][3];
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("\tEnter number to array[%d][%d] = ",i,j);
			scanf("%f",&arr[i][j]); }	}
	printf("****************************************************************\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
	    printf("\tvalue of array[%d][%d] = %.2f\n",i,j,arr[i][j]); }  }
	return 0;} */
//Output: 
/*      Enter number to array[0][0] = 11				11		22		55
        Enter number to array[0][1] = 22				  
		Enter number to array[0][2] = 55				44		33		22
        Enter number to array[1][0] = 44				
		Enter number to array[1][1] = 33				11		99		88
		Enter number to array[1][2] = 22				
		Enter number to array[2][0] = 11				67		09		90
        Enter number to array[2][1] = 99
        Enter number to array[2][2] = 88				88		77		66
        Enter number to array[3][0] = 67
        Enter number to array[3][1] = 09
        Enter number to array[3][2] = 90
        Enter number to array[4][0] = 88
        Enter number to array[4][1] = 77
        Enter number to array[4][2] = 66
****************************************************************
        value of array[0][0] = 11.00
        value of array[0][1] = 22.00
        value of array[0][2] = 55.00
        value of array[1][0] = 44.00
        value of array[1][1] = 33.00
        value of array[1][2] = 22.00
        value of array[2][0] = 11.00
        value of array[2][1] = 99.00
        value of array[2][2] = 88.00
        value of array[3][0] = 67.00
        value of array[3][1] = 9.00
        value of array[3][2] = 90.00
        value of array[4][0] = 88.00
        value of array[4][1] = 77.00
        value of array[4][2] = 66.00
-------------------------------------------------------------------
Process exited after 20.89 seconds with return value 0
Press any key to continue . . .                          */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 25: 2 dimensional array with characters string
//#include<stdio.h>
//int main(){
  /*char name[300];
	printf("Enter name: ");
	//scanf("%s",&name);
	scanf("%[^\n]",name);//it mean like the same gets(name) too but we can change the rule of enter line.if we want to input &name is all right too.
	//gets(name); //is used to input sequence of characters and it will get input from user until user enter /n.
	printf("your name is %s\n",name);*/
/*	char name[5][30];
	int i;
	for(i=0;i<5;i++){
		printf("Enter your name[%d] : ",i);
		gets(name[i]);
	//	scanf("%[^\n]",name[i]);//we cannot use because IDE cannot catch the element at all. if we want to use it unless we create fflush(stdin).
	//	fflush(stdin);
	}
	printf("\n*************************Result*********************\n");
	for(i=0;i<5;i++)
	printf("\tthe names[%d] : %s\n",i,name[i]);
	return 0;}*/
//
/*					Enter your name[0] : Krysenghort
					Enter your name[1] : Chansophal
					Enter your name[2] : Ykimhor
					Enter your name[3] : Krysenghy
					Enter your name[4] : Kryseyha
					
					*******************Result*********************
					        the names[0] : Krysenghort
					        the names[1] : Chansophal
					        the names[2] : Ykimhor
					        the names[3] : Krysenghy
					        the names[4] : Kryseyha
				---------------------------------------------------------
					Process exited after 82.69 seconds with return value 0
					Press any key to continue . . .                        */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 26: Sort string in array and string method .
/*#include<stdio.h>	
#include<string.h>	
int main(){
	int n,i,j;
	printf("\tEnter numbers of student: ");
	scanf("%d",&n);
	char name[n][30];
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("\tEnter student's name[%d]: ",i);
		gets(name[i]);}
	printf("***************Student's Name*****************\n");
	for(i=0;i<n;i++){
	printf("\tname[%d] : %s\n",i,name[i]);}   
printf("***************Sorted Name*****************\n");
//	char n1[30]="a";
//	char n2[30]="b";
//	int cmp;
//	cmp = strcmp(n1,n2);
//	strcpy=>String Copy
//	strcmp=>String compare
 char temp[30];
 for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(strcmp(name[i],name[j])>0)	 //it starts from A-Z.
	//	if(strcmp(name[i],name[j])<0){ 	 //it starts from Z-A.
		strcpy(temp,name[i]);
		strcpy(name[i],name[j]);
		strcpy(name[j],temp); }	} }
	for(i=0;i<n;i++){
	printf("\tname[%d] : %s\n",i,name[i]);}   
return 0;}
//Output: 				
/*			        Enter numbers of student: 10
			        Enter student's name[0]: Dr. Kry SengHort
			        Enter student's name[1]: Lin Monkolsery
			        Enter student's name[2]: Li Ailan
			        Enter student's name[3]: Eng Chandoeun
			        Enter student's name[4]: Taing Kimleang
			        Enter student's name[5]: Dr. Valy Dona
			        Enter student's name[6]: Chan Sophal
			        Enter student's name[7]: Phok Ponna
			        Enter student's name[8]: Mao Chanrathanak
			        Enter student's name[9]: Chau Sawaddy
			***************Student's Name*****************
			        name[0] : Dr. Kry SengHort
			        name[1] : Lin Monkolsery
			        name[2] : Li Ailan
			        name[3] : Eng Chandoeun
			        name[4] : Taing Kimleang
			        name[5] : Dr. Valy Dona
			        name[6] : Chan Sophal
			        name[7] : Phok Ponna
			        name[8] : Mao Chanrathanak
			        name[9] : Chau Sawaddy
			***************Sorted Name*****************
			        name[0] : Chan Sophal
			        name[1] : Chau Sawaddy
			        name[2] : Dr. Kry SengHort
			        name[3] : Dr. Valy Dona
			        name[4] : Eng Chandoeun
			        name[5] : Li Ailan
			        name[6] : Lin Monkolsery
			        name[7] : Mao Chanrathanak
			        name[8] : Phok Ponna
			        name[9] : Taing Kimleang
			--------------------------------------------
			Process exited after 130.8 seconds with return value 0
			Press any key to continue . . .                       */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************
//********************************************************************************************************************************************* 
//program 27: Project of Array 
/*#include<stdio.h>
int main(){
	int i,n,j;
	printf("\tEnter number of students: ");
	scanf("%d",&n);
	char name[n][30];
	int score[n][5];
//********************************************************************************************************************
    for(i=0;i<6;i++){
    	fflush(stdin);
    	printf("\tEnter name[%d]: ",i+1);        			gets(name[i]);
    	printf("\tEnter C Programming Score: ");  		scanf("%d",&score[i][0]);
		printf("\tEnter C++ Programming Score: ");  	scanf("%d",&score[i][1]);
		printf("\tEnter Java Programming Score: ");  	scanf("%d",&score[i][2]); }
		score[i][3]=score[i][0]+score[i][1]+score[i][2];
		score[i][4]=(score[i][0]+score[i][3])/3.0;
	printf("****************************************************************************************************************************\n");
	printf("\t\tName\t\tC\tC++\tJava\tTotal\tAverage");
		printf("\n"); 
	for(i=0;i<n;i++){
		printf("\t%d",i+1);
		printf("\t%s",name[i]);
		for(j=0;j<6;j++){
			printf("\t\t%d",score[i][j]);}   
			printf("\n"); }
return 0;}*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




	
	
	
	
	
	
	
	
	
