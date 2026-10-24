#include<iostream>
using namespace std;
int main(){
	float x,y,z;
	cout<<"Division of two numbers"<<endl;
	cout<<"1st number: ";
	cin>>x;
	cout<<"2nd number: ";	
	cin>>y;
	if (y==0)
	{
	cout<<"Error";
	}
	
	else{
	z=x/y;
	cout<<"Qoutient: "<<z;
	}	
	
}
