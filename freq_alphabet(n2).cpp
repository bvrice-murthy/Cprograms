// freq_alphabet.cpp : Defines the entry point for the console application.
//

#include "stdio.h"


int main()
{
	FILE *f1;
	char ch;
	int alp[26],index=0,i;

	for(i=0;i<26;i++)
		alp[i]=0;
	
	f1=fopen("data.txt","w");
	while((ch=getchar())!=EOF)
		putc(ch,f1);

	fclose(f1);
	
	f1=fopen("data.txt","r");
	if(f1==NULL)
		return 0;
	while((ch=getc(f1))!=EOF)
	{
		if(ch>='a'&&ch<='z')
		{
			alp[ch-'a']++;
			if(alp[ch-'a']>alp[index])
				index=ch-'a';
		}
		else if(ch>='A'&&ch<='Z')
		{
			alp[ch-'A']++;
			if(alp[ch-'A']>alp[index])
				index=ch-'A';
		}
		
	}
	fclose(f1);

	printf("\n\n the most freqently used alphabet is %c and its count %d    ",index+'a',alp[index]);
	return 0;
}

