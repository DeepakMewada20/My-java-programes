#include<stdio.h>
//#include<conio.h>
int main(){
	int n1,n2;
	FILE *ptr;
	ptr=fopen("filename.txt","r");
	if(ptr==NULL){
		printf("this file does not exist \n");
	}
	else{
	    fscanf(ptr,"%d",&n1);
		fscanf(ptr,"%d",&n2);
		fclose(ptr);
		printf("the n1 is = %d\n",n1);
		printf("the n1 is = %d",n2);
	}
	return 0;
}
