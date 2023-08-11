#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char st1[]={"Deepak"};
	char st2[]={"Mewada"};
	char st3[6];
//	gets(st1);
//	puts(st1);
	printf(" A. Length of entered string...\n");
	printf("\tLength of first string = %d\n",strlen(st1));
	printf("\tLength of second string = %d\n",strlen(st2));
	printf("B. Concatenate two string...\n");
	printf("\t%s\n",strcat(st1,st2));
	printf("C. copy one string to another...\n");
	printf("\t%s\n",strcpy(st3,st2));
	printf("D. compare two string...");
	printf("%d",strcmp(st1,st2));
	return 0;
}
