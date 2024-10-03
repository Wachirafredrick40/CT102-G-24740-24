#include <stdio.h>
#include <math.h>
int main(){
	float principle,rate,time,amount,compound_interest;  
	printf("enter principle:");
	scanf("%f",&principle);
	 
	printf("enter rate:");
	scanf("%f",&rate);
	
	 
	printf("enter time:");
	scanf("%f",&time);
	
	 
	amount=principle*pow((1+rate/100),time);
	compound_interest=amount-principle;
	printf("total amount after %.2f years:%2f\n",time,amount);
	printf("compound interest:%.2f\n",compound_interest);
	

	
	return 0;
}