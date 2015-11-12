/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include <malloc.h>
void extract_digits(int digit, char*str, int len, int afterdecimal, int negative)
{
	
	int i, rem;
	str[len] = '\0';
	for (i = len - 1; i >= 0; i--)
	{

		if (afterdecimal != 0)
		{
			if (i == (len - (afterdecimal + 1)))
			{
				str[i] = '.'; continue;
			}
		}

		rem = digit % 10;
		str[i] = rem + '0';
		digit /= 10;
	}
	if (negative == 1)
	{
		str[0] = '-';
	}



}

int power(int ten, int afterdecimal)
{
	int i, num = 1;
	for (i = 0; i<afterdecimal; i++)
	{
		num *= ten;
	}
	return num;
}
void find_length(float number, char *str, int afterdecimal, int negative, int *len, int *digit)
{
	int count = 0;
	*digit = number*power(10, afterdecimal);
	int temp = *digit;

	for (; temp>1; temp /= 10, count++);

	(afterdecimal == 0) ? (negative == 0) ? (*len = count) : (*len = count + 1) : (negative == 0) ? (*len = count + 1) : (*len = count + 2);




}

void number_to_str(float number, char *str,int afterdecimal){
	int  len, digit;

	number>0 ? find_length(number, str, afterdecimal, 0, &len, &digit) : find_length(-number, str, afterdecimal, 1, &len, &digit);
	number>0 ? extract_digits(digit, str, len, afterdecimal, 0) : extract_digits(digit, str, len, afterdecimal, 1);
	
}
