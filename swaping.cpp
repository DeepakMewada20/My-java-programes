#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=54,b=76;
	int *x=&a,*y=&b;
	printf("befor swaping\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	swap(x,y);
	printf("after swaping\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("value of pointer x =%d\n",x);
	printf("value of pointer y = %d\n",y);
	printf("value of pointer x =%d\n",&a);
	printf("value of pointer y = %d",&b);
	printf("value of pointer x =%p\n",*a;
	printf("value of pointer y = %p",*b);
	return 0;
}
