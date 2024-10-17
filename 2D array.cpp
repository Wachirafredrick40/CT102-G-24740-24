/*
program to calculate electric balance using user defined function
author:Fredrick wachira
reg no:CT102/G/24740/24
*/

#include <stdio.h>
int main()
{
	int i,j;
	int marks[2][3]={{1,2,3},{4,5,6}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
		}
	}

	return 0;
}