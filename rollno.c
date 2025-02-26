#include <stdio.h>
int main(){
	int rollno;
	printf("Enter you 7 digit roll number: ");
	scanf("%d",&rollno);
	int year= rollno/1000000;
	int branch_code= (rollno/1000)%1000;
	int serial_no= rollno%1000;
	int sec_code= serial_no/100;


	printf("Year: %d\n",year);
	printf("Branch Code: %d\n",branch_code);

	// Determining the branch
	switch(branch_code){
		case 11: printf("Branch: Civil Engineering\n"); break;
		case 21: printf("Branch: Computer Science and Engineering\n"); break;
		case 31: printf("Branch: Electrical Engineering\n"); break;
		case 41: printf("Branch: Electronics and Communication Engineering\n"); break;
		case 51: printf("Branch: Mechanical Engineering\n"); break;
		case 61: printf("Branch: Chemical Engineering\n"); break;
		case 71: printf("Branch: Information Technology\n"); break;
		default: printf("Invalid Branch Code\n");
	}
	
	printf("Serial No: %d\n",serial_no);

	// Determining the section
	switch(sec_code){
		case 0: printf("Section: A\n"); break;
		case 1: printf("Section: B\n"); break;
		case 2: printf("Section: C\n"); break;
		case 3: printf("Section: D\n"); break;
	}
	
}