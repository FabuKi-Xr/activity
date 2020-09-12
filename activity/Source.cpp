#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char printstring(char x) 
{
	printf("%c", x);
	return x;
}
int main() 
{
	char str_in[999], * str;
	int i;
	scanf("%s", str_in);
	for (i = 0;str_in[i] != '\0';i++) 
	{
		str = &str_in[i];
		if ((str_in[i] >= 'A' && str_in[i] <= 'Z') || (str_in[i] >= 'a' && str_in[i] <= 'z')) 
		{
			if (str_in[i] >= 'A' && str_in[i] <= 'Z') 
			{
				printstring(*str + 32);
			}
			else printstring(*str - 32);
		}
	}
	return 0;
}