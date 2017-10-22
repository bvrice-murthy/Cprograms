#include<stdio.h>
#include<malloc.h>
void caluculatecount(char *array)
{

	int *countarray,i,max,pos;
	countarray=(int *)malloc(52*sizeof(int));
	for(i=0;i<52;i++)
		countarray[i]=0;
	i=0;
	while(array[i]!='\0')
	{
		if(array[i]==' ')
			i++;
		else if(array[i]>='a'&&array[i]<='z') 
		{
			countarray[array[i]-'a']+=1;
			i++;
		}

		else
		{
			countarray[array[i]-'A'+26]+=1;
			i++;
		}
		
	}
	i=0;max=0;pos=0;
	while(array[i]!='\0')
	{
		if(max<countarray[array[i]-'a'])
		{
			pos=i;
			max=countarray[array[i]-'a'];
		}
		i++;
	}
	printf("The most repeated character is %c,repeted %d times\n",array[pos],max);
	i=0;
	while(array[i]!='\0')
	{
		if(array[i]==' ')
			i++;

		else if(array[i]>='a'&&array[i]<='z')
		{
			printf("%c repeated%dtimes\n",array[i],countarray[array[i]-'a']);
			i++;
		}
		else
		{
			printf("%c repeatde %dtimes\n",array[i],countarray[array[i]-'A'+26]);
			i++;
		}
	}

}
int main()
{
	int range;
	char *inputbuffer;
	printf("Enter the range of the array");
	scanf("%d",&range);
	inputbuffer=(char *)malloc((range)+1*sizeof(char));
	fflush(stdin);
	gets(inputbuffer);
//	gets(inputbuffer);
	caluculatecount(inputbuffer);
	return 0;
}