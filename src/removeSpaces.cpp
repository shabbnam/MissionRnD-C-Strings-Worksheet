/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	int i,j=0;
	if (str)
	{
		for (i = 0; str[i] != '\0';)
		{
			if (str[i] == ' ')
			{
				i++;
				continue;
			}
			else  str[j++] = str[i]; i++;
		}
	
		str[j] = '\0';
	}
	else return '\0';
}