/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
int find_length(char input[]);
void reverse(char input[], int i, int j);
void reverse_words(char input[], int length);
void str_words_in_rev(char *input, int len){

	int length;
	length = find_length(input);
	reverse(input, 0, length - 1);
	reverse_words(input, length);

	
}
int find_length(char input[])
{
	int i, count = 0;
	for (i = 0; input[i] != '\0'; i++)
	{

		count++;


	}
	return count;
}

void reverse(char input[], int i, int j)
{
	int firstptr, lastptr;
	char temp;
	for (firstptr = i, lastptr = j; firstptr<lastptr; firstptr++, lastptr--)
	{
		temp = input[firstptr];
		input[firstptr] = input[lastptr];
		input[lastptr] = temp;


	}
}

void reverse_words(char input[], int length)
{
	int i, j;
	int  start = 0, end;
	for (i = 0; i <= length; i++)
	{

		if (input[i] == ' ' || i == length)
		{
			j = i;
			while (input[i + 1] == ' '){ i++; }
			end = j - 1;
			reverse(input, start, end);
			start = i + 1;
		}

	}
}
