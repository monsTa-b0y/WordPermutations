#include<iostream>
#include<sstream>
#include<typeinfo>
using namespace std;

int main(){
	string input;
	cout<<"Enter the number";
	cin>>input;
	cout << typeid(input).name();
//	cout<< typeof(input);
	int number[100];
	number = atoi(input);
	//cout<< typeof(number);
	cout << typeid(number).name() << endl;
	cout<<input<<":"<<number;
}
