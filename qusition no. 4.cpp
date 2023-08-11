#include<iostream>
using namespace std;
class top{
	public:
		void top1(){
		cout<<"This is top class\n";
		}
};
class bottom: public top{
	public:
		void bottom1(){
		cout<<"this is bottem class";
		}
};
int main(){
	bottom obj;
	obj.top1();
	obj.bottom1();
	return 0;
}
