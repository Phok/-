#include "stdio.h"
#include "string.h"
void swap (char *str1,char *str2);
int main ()
{
	char s1[10],s2[10],s3[10];
    gets (s1);
	gets (s2);
	gets (s3);
	if (strcmp(s1,s2)>0) swap (s1,s2);
	if (strcmp(s1,s3)>0) swap (s1,s3);
	if (strcmp(s2,s3)>0) swap (s2,s3);
	puts(s1);
	puts(s2);
	puts(s3);
}

void swap (char *str1,char *str2)
{
  char n[15];
  strcpy(n,str1);
  strcpy(str1,str2);
  strcpy(str2,n);
}