#include <iostream>
using namespace std;

//run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	int p;
	int q;
	int quotient;
//conditions
	cout<<"enter first number: ";
	cin>>p;
	cout<<"enter second number: ";
	cin>>q;
// command
	quotient = p/q;
	cout<<"the quotient of p and q is: "<<quotient;
	return 0;
}
