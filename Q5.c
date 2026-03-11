#include <stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	int count=0;
	fp1=fopen("input5.txt","r");
	while((ch=fgetc(fp1))!=EOF)
	{
		if(!isalnum(ch) && ch!=' ')
		{
			count++;
		}
		putchar(ch);
	}
	printf("\nNumber of special character in given input file : %d \n",count);
	fclose(fp1);
	return 0;
}

