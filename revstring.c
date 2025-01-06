#include<stdio.h>
#include<string.h>

int main()
{
	char temp;
	char str[] = "Suri";
	int l = strlen(str);
	for(int i=0; i<(l/2); i++)
	{
		temp = str[i];
		str[i] = str[l-1-i];
		str[l-i-1] = temp;
	}	
	printf("%s\n", str);
}
