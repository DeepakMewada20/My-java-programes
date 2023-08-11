#include<stdio.h>
#include<conio.h>
struct Anjali {
    int date;
    char month;
    int year;
};
int main(){
    struct Anjali a;
    printf("Enter date = ");
    scanf("%d",&a.date);
    scanf("%c",&a.month);
    fluch();
    scanf("%d",&a.year);
    printf("%d/%c/%d",a.date,a.month,a.year);
    return 0;
}
