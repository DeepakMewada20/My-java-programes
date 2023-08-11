#include<stdio.h>
#include<conio.h>
int main(){
	FILE *ptr;
	int i,n,m=0,r[30];
	printf("enter number, you want to table= ");
	scanf("%d",&n);
	ptr=fopen("file_for_table.txt","w");
	for(i=1;i<11;i++){
		fprintf(ptr,"%d x %d = %d\n",n,i,n*i);
	}
//	getch();
	/*ptr=fopen("file_for_table.txt","r");   //file for read
	for(i=0;i<30;i++){
		fscanf(ptr,"%d",&r[i]);
		if(m==2){
			printf("%d x %d = %d\n ",r[i-2],r[i-1],r[i]);
			m=-1;
		}
		m++;
	}*/
	fclose(ptr);
	return 0;
}
