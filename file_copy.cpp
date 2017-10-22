// file_copy.cpp : Defines the entry point for the console application.
//

#include "stdio.h"





void file_copy(FILE *fp,FILE *fq)
{
	char ch;
	int x;
	while((ch=getc(fp))!=EOF)
	{
		x=ch;
		if((ch>='0' && ch<='9') )
		{
			putc(',',fq);
			putc(' ',fq);
			;
		}
		if(ch=='\n')
			
		putc(ch,fq);
	}
}



int main()
{
	FILE *fp,*fq;
	fp=fopen("E://input.txt","r");
	fq=fopen("E://output.txt","w");
	if(	!fp || !fq)
		printf("FILES NOT FOUND");
	else
	file_copy(fp,fq);
	fclose(fp);
	fclose(fq);
	return 0;
}

