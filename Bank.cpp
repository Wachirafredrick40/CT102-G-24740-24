/*
Name:Fredrick wachira 
Reg No:CT102/G/24740/24
*/
#include <stdio.h>
int main()
{
	int age;
	float annual_income;
	//prompt the customer to enter their age 
	printf("please enter age:");
	scanf("%f",&age);
	//prompt the customer to enter annual_income
	printf("please enter annual_income:");
	scanf("%f",annual_income);
	
	if(age>=21 and annual_income>=21000){
	printf("congratulations you qualify for a loan");
	}
	else {
     printf("unfortunately,we are unable to offer ya loan at this time");
	}
	return 0;
		
	
}