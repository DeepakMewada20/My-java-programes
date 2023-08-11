#include<iostream>
using namespace std;
void fectorial(){
	int n,s=1;
	cout<<"enter number = ";
	cin>>n;
	for(int i=n;i>0;i--){
		s=s*i;
	}
	cout<<"fectorial is = "<<s<<endl;
}
int main(){
	fectorial();
}
