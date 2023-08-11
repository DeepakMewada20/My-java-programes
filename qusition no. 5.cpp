#include<iostream>
using namespace std;
int main(){
	int a[5],s=0;
	cout<<"enter array element for addition\n";
	for(int i=0;i<5;i++){
		cin>>a[i];
		s=s+a[i];
	}
	cout<<"your addition is --> "<<s;
	return 0;
}
