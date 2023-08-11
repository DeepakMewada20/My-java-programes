#include<stdio.h>
int main(){
		FILE *ptr,*c;
		char ch;
		ptr=fopen("Input_file","r");
		c=fopen("","w");
		ch=getc(ptr);
		while(ch!=EOF){
			printf("%c",ch);
			putc(ch,c);
			ch=getc(ptr);
		}
		fclose(ptr);
		fclose(c);
		//printf(ch);
		return 0;
		
}
