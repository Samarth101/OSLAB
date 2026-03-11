#include <stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("input1.txt","r");
	fp2=fopen("output2.txt","a+");
	while((ch=fgetc(fp1))!=EOF)
	{
		if (ch==' ')
		{
			fputc(',',fp2);
		}
		else
		{
			fputc(ch,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
}
