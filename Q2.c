#include <stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	int count=0;
	fp1=fopen("input1.txt","r");
	fp2=fopen("output.txt","a+");
	printf("Contents of file 1\n");
	while((ch=fgetc(fp1))!=EOF)
	{
		putchar(ch);
		count++;
		if(count%3==0)
		{
			fputc(ch,fp2);
		}
	}
	fclose(fp1);
	count=0;
	fp1=fopen("input2.txt","r");
	printf("Contents of file 2\n");
	while((ch=fgetc(fp1))!=EOF)
        {
                putchar(ch);
                count++;
                if(count%3==0)
                {
                        fputc(ch,fp2);
                }
        }
	fclose(fp1);
	fclose(fp2);

}
