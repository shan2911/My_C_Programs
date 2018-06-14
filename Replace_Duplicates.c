#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
if(argc <= 1)
{
	printf("Please enter atleast one argument !!!\n");
	exit(1);
}
if(argc >=3)
{
	printf("You have entered more arguments !!!\n");
	exit(1);
}
char *s = (char*)malloc(strlen(argv[1])*sizeof(char));
int i = 0;
memcpy(s,argv[1],strlen(argv[1]));
printf("Original_String=%s\n",s);
while(*s != '\0')
{
if(*s == 'a' && *(s+1) == 'a')
{
	*s = 'x';
	strcpy(s+1 ,s+2);
}
s += 1;
i++;
}
s = s-i;
printf("Final_String = %s\n",s);
}

