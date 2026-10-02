#include<stdio.h>
int main()
{
	char First_name[40];
	char Last_name[40];
	char Reg[20];
	int age;
	float database, Cprogramming, python, Datastructure, Total, average;
	
	printf("Enter Student First_name: ");
	scanf("%39s",&First_name);
	
	printf("Enter student Last_name: ");
	scanf("%39s", &Last_name);
	
	printf("Enter Regestration number: ");
	scanf("%19s",&Reg);
	
	printf("Enter Age: ");
	scanf("%d", &age);
	
	printf("\nEnter marks for Database: ");
	scanf("%f",&database);
	
	printf("Enter marks for C-programming: ");
	scanf("%f",&Cprogramming);
	
	printf("Enter marks for Python: ");
	scanf("%f",&python);
	
	printf("Enter marks for Datastructure: ");
	scanf("%f",&Datastructure);
	
	Total=database + Cprogramming + python + Datastructure;
	average = Total/4;
	
	printf("\n===============STUDENT REPORT==============\n");
	printf("First_Name: %s\n", First_name);
	printf("Last_name: %s\n", Last_name);
	printf("Regestration number: %s\n", Reg);
	printf("Age: %d\n", age);
	printf("\nTotal Marks: %.2f\n", Total);
	printf("Average: %.2f\n", average);
	
	if(average>=80)
	{
		printf("Grade: A\n");
	}
	else if(average>=70)
	{
		printf("Grade: B\n");
	}
	else if(average>=60)
	{
		printf("Grade: C\n");
	}
	else if(average>=50)
	{
		printf("Grade: D\n");
	}
	else
	{
		printf("Grade: F\n");
	}
	return 0;
}