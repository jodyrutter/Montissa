/**
 * Very simple program that finds the montissa for a given absolute value x.
 *
 * @author: Jody Rutter
 * @version: 2/28/2019 05:36 v1.0
*/
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
/**
 * Main method that executes the entire program.
*/
int main(){
	double x;
	std::cout << "Enter absolute value of x: ";
	std::cin >> x;
	int exp = floor(log2(x));
	double r = x-pow(2,exp);
	exp--;
	char nu; //Not used.
	int montissa [23];
	
	for(int i = 0; i<23; i++)
	{
		std::cout << r << "/(2^" << exp << ") = ";
		if(r-pow(2,exp)>0){
			r=r-pow(2,exp);
			std::cout << "1";
			montissa[i] = 1;
		}
		else{
			std::cout << "0";
			montissa[i] = 0;
		}
		std::cout << " r" << r << std::endl;
		exp--;
	}
	std::cout << "Montissa = ";
	for(int j=0;j<23;j++){
		std::cout << montissa[j];
	}
	std::cout << std::endl;
	std::cout << "Type a letter to end: ";
	std::cin >> nu;
	return 0;
}
