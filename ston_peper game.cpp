#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int genrat(char you,char com){
	if(you==com)
	return 0;
	else if((you=='s') && (com=='w'))
	return 1;
	else if((you=='w') && (com=='s'))
	return -1;
	else if((you=='s') && (com=='g'))
	return -1;
	else if((you=='g') && (com=='s'))
	return 1;
	else if((you=='w') && (com=='g'))
	return 1;
	else
	return -1;
	}
int main(){
	int i=0;
	int num,result;
	char com,you;
	for(i=0;i<2;i++){
	srand(time(0));
	num=rand()%3+1;
	//printf("%d\n",num);
	if(num==1){
		com='s';
	}
	else if(num==2){
		com='w';
	}
	else{
		com='g';
	}
	printf("s for : snec\nw for : water\ng for : gun\nEnter your chouse = ");
	scanf("%c",&you);
	result=genrat(you,com);
	if(result==0){
		printf("this mach is tie\n");
	}
	else if(result==1){
		printf("you are win!\n");
	}
	else{
		printf("computer is win!\n");
	}
	printf("Becouse you chouse %c and computer choude %c.\n",you,com);
	//printf("you want to Exit enter 1, else enter any number\n");
	//scanf("%d",&i);
	system("pause");
	//system("cls");
    getch();
	system("cls");
}
	return 0;
}
