/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
//////////////////// Descriotion	: C pool Problem 3                ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void main (void)
{
	int num1,num2,temp;
	
	
	printf("Enter Frist Number : ");
	scanf("%d",&num1);
	printf("Enter Second Number : ");
	scanf("%d",&num2);
	
	temp=num1;
	num1= num2;
	num2 = temp;
	
	printf(" ......After swapping...... \n");
	printf("Number 1 = %d\n",num1);
	printf("Number 2 = %d\n",num2);
}