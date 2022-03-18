#include<iostream>
using namespace std;
int sum(int,int);
void g();
 void g(){
	cout<<"hello";
}

int sum (int a, int b){
	int c=a+b;
	return c;
}
int main ()
{
	int o, p;
	cout<<"enter a";
	cin>>o;
	cout<<"enter b";
	cin>>p;
	cout<<"the sum is "<<sum(o,p);
	g();
	return 0;
}
/*int sum (int a, int b){
	int c=a+b;
	return c;
}*/
