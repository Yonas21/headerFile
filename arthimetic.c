#include "arthimetic.h"
void main(){
	int number1,number2;
	//get input from keyboard
	printf("Enter The First Number: \n");
	scanf("%d",&number1);
	printf("Enter The Second Number: \n");
	scanf("%d",&number2);

	//display the result
	printf("The sum is:%d\n",Add(number1,number2) );
	printf("The diffrence is:%d\n",Subtract(number1,number2) );
	printf("The nultiple is:%d\n",Multiply(number1,number2) );
	printf("The ratio is:%lf\n",Devide(number1,number2) );
}

int Add(int number1, int number2){
	return number1+number2;
}

int Subtract(int number1,int number2){
	return number1-number2;
}

int Multiply(int number1,int number2){
	return number1*number2;
}

double Devide(int number1,int number2){
	return number1/number2;
}