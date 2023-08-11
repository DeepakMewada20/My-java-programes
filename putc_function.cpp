#include<stdio.h>
#include<conio.h>
int main(){
	FILE *ptr;
	char c='f';
	/*ptr=fopen("getcdemo.txt","r");
//	c=getc(ptr);
	printf("charecter of my file %c\n",getc(ptr));
	printf("charecter of my file %c\n",getc(ptr));
	printf("charecter of my file %c\n",getc(ptr));
	printf("charecter of my file %c\n",getc(ptr));
	printf("charecter of my file %c\n",getc(ptr));
	printf("charecter of my file %c\n",getc(ptr));
	printf("charecter of my file %c\n",getc(ptr));*/
	ptr=fopen("putcdemo.txt","w");
	putc(c,ptr);
	fclose(ptr);
return 0;
}
