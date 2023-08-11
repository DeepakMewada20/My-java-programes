#include<iostream>
using namespace std;
class salary{
	public:
		int salary = 500000;
};
class bonas : public salary{
	public :
		int bonas = 2000;
};
int main(void){
	bonas b1;
	cout<<"salary = "<<b1.salary<<endl;
	cout<<"bonas = "<<b1.bonas<<endl;
	return 0;
}
