#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char s[80];
	fp=fopen("POEM.txt","w");  //to not overwrite any existing code in the file, open it in the append (a) mode
	if(fp==NULL)
	{
		printf("Cannot Open File");
		exit(1);
	}
	printf("Enter a few lines of text: \n");
	while(strlen(gets(s))>0)
	{
		fputs(s,fp);
		fputs("\n",fp);
	}
	fclose(fp);
}
