#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int noc=0,nos=0,nol=0;
	fp=fopen("teach.c","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
		noc++;
		if(ch==' ')
		nos++;
		if(ch=='\n')
		nol++;
	}
	fclose(fp);
	printf("\nNumber of Characters: %d\n",noc);
	printf("Number of Spaces: %d\n",nos);
	printf("Number of Lines: %d",nol+1);
}
