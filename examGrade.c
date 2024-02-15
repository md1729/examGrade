/*
Example 10: Write the C code of the program that prints the student's 
class passing status on the screen according to the grade entered. 
(Exam grade 50 and above passes, below 50 fails.)
*/
#include<stdio.h>
int main(){
int grade;
printf("Enter exam grade:\n");
scanf("%d",&grade);	

if(grade>=50)
printf("PASSES!\n");
else
printf("FAILS!\n");

return 0;
	
	
}
