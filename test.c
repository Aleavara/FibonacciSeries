#include <stdio.h>
#include <stdlib.h>
int main()
{

int first_number = 0, second_number = 1, third_number, i, number;

	for(i = 1; i < 10; i=i+1) 
	{

	third_number = first_number + second_number;
	printf("\n %d", third_number);
	first_number = second_number;
	second_number = third_number;

}
return 0;

