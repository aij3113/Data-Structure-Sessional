#include<iostream>
using namespace std;
class onion{
private:
int onion_price;
int total_kg=0;
int kg;
public:
onion (int a,int b)
{
onion_price=a;
kg=b;
}
printf()
{
cout<<"kg:"<<total_kg<<endl;
cout<<"onion price:"<<onion_price<<endl;
}
};
class purchase:public onion
{
private:
int total_price=0;
int average_price=0;
public:
purchase(int x,int y):public (x,y)
{
onion_price=x;
kg=y;
}
void display()
{
cout<<"kg:"<<total_kg<<endl;
cout<<"onion price:"<<onion_price<<endl;
}
};
int main()
{
purchase p1(100,4);
purchase p2(100,4);
purchase p3(100,4);
p1.display();
p2.display();
p3.display();
}
