// file_newline.cpp : Defines the entry point for the console application.
//

#include "stdio.h"


void newLines(FILE *fp,FILE *fq)
{
	char ch;
	while((ch=getc(fp))!=EOF)
	{
		if(ch==' ')
		{
			putc('\n',fq);
		}
		else
		{
			putc(ch,fq);
		}
	}
}



int main()
{
	char file[20];
	FILE *fp,*fq;
	printf("enter path for input file");
	scanf("%s",file);
	fp=fopen(file,"r");
	fq=fopen("E://output.txt","w");
	if(fp==NULL)
		printf("no file exists");
	else
	{
		newLines(fp,fq);
		fclose(fp);
		fclose(fq);
	}
	return 0;
}

