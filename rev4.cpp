#include<iostream>
using namespace std;
int sum (int a, int b)
{
	int c=a+b;
	return c;
}
 int main ()
 {
 	int a,b;
 	cout<<"enter a";
 	cin>>a;
 	cout<<"enter b";
 	cin>>b;
 	cout<<"the sum of a and b is "<<sum(a,b);
 	return 0;
 }
