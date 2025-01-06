#include<stdio.h>
#include<string.h>

int main()
{
	char temp;
	char str[] = "Suri";
	printf("Before reverse string is %s\n",str); 
	int l = strlen(str);
	for(int i=0; i<(l/2); i++)
	{
		temp = str[i];
		str[i] = str[l-1-i];
		str[l-i-1] = temp;
	}	
	printf("After reverse strig is %s\n", str);
}
