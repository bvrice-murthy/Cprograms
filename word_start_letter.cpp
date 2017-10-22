// word_start_letter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void freqLetter(FILE *fp,int a[26])
{
	int i;
	char ch;
	while((ch=getc(fp))!=EOF)
	{
		i=ch-'a';
		a[i]++;		
		while((ch=getc(fp))!=EOF)
		{
			if(ch==' ' || ch=='\n')
			break;
		}
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	int a[26],i,top,j;
	FILE *fp;
	fp=fopen("E://input.txt","r");
	if(!fp)
		printf("files not exists");
	else
	{
		for(i=0;i<=25;i++)
			a[i]=0;
		freqLetter(fp,a);
		fclose(fp);
		top=a[0];
		j=0;
		for(i=1;i<26;i++)
		{
			if(a[i]>top)
			{
				top=a[i];
				j=i;
			}
		}
		printf("alphabet frequently used for beginning is: %c (%d)",j+'a',top);
	}
	return 0;
}



