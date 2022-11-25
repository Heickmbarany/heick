//Program to Give Bonuses to Workers
#include <iostream>
using namespace std;
int main(){
	int time;
	float salary,bonus;
	cout<<"Please Input Your Salary"<<endl;
	cin>>salary;
	cout<<"Input Your Period of Service"<<endl;
	cin>>time;
	if(time>10)
	{
		bonus=salary*10/100;
	}
	else if(time<=10&time>5)
	{
		bonus=salary*8/100;
	}
	else if(time<=5&time>=0)
	{
		bonus=salary*5/100;
	}
	salary=bonus+salary;
	cout<<"Congradulations, Your New Salary is "<<salary;
	return 0;
}