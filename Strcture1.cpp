#include <iostream>
using namespace std;

struct mystructure{
int date;
char month[23];
int year;
};
int main(){
    struct mystructure d1;
    cout<<"enter date = ";
    cin>>d1.date;
    //cout<<"enter month = ";
    cin>>d1.month;
    //cout<<"enter year = ";
    cin>>d1.year;
    cout<<d1.date<<"/"<<d1.month<<"/"<<d1.year;
    return 0;


}

