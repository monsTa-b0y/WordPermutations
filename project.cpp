#include <iostream> 
#include <sstream> 
#include<typeinfo>
using namespace std; 
  
int main() 
{ 
    string input;
    cout<<"Enter the Number: ";
    cin>>input;
  	cout << "\nType of Input: " <<typeid(input).name(); //prints the type of Input 
    // object from the class stringstream 
    stringstream ss(input); 
  
    int number = 0; 
    ss >> number; 
    cout <<"\nType of number: " <<typeid(number).name() << endl; //prints the type of number 
    // Now the variable x holds the value 12345 
    cout << "Value of number : " << number; 
  
    return 0; 
}
