/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	if (str)
	{
		int count, index; char *s = str;
		for (count = 0; *s != '\0'; count++, s++);
		index = (count - 1) - K;
		return str[index];
	}

	else return '\0';
}