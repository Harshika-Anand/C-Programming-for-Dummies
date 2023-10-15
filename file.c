#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("teach.c","r");   //say teach.c is a sample file
	while(1)
	{
		ch=fgetc(fp);           //accesses each character of the file
		if(ch==EOF)             //EOF means End Of File
		break;
		printf("%c",ch);          //prints all characters in the file
	}
	fclose(fp);
}
