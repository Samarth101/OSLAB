#include <stdio.h>
#include <ctype.h>
void main()
{
	FILE *fp1,*fp2;
	char ch,prev='\0';
	fp1=fopen("input4.txt","r");
	fp2=fopen("out.txt","a+");
	while((ch=fgetc(fp1))!=EOF)
	{
		if (prev=='.' && islower(ch))
		{
			ch=toupper(ch);
		}
		fputc(ch,fp2);
		prev=ch;
	}
	fclose(fp1);
	fclose(fp2);
}
