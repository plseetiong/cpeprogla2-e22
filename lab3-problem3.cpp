#include<iostream>
#include<cstring>
using namespace std;

void strCat(char* str1, char* str2){
	strcat(str1, str2);
	cout<<"New string value for (str1) "<<str1;
}

main(){
	char str1[50];
	char str2[50];
	
	cout<<"Enter first word(str1): ";
	cin.getline(str1, 49);
	cout<<"Enter second number(str2): ";
	cin.getline(str2, 49);
	
	strCat(str1, str2);
}
