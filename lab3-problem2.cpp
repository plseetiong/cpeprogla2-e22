#include<iostream>
#include<cstring>
using namespace std;

void strCpy(char* str1, char* str2){
	strcpy(str1, str2);
	cout<<"new string value for (str1):"<<str1;
}

main(){
	char str1[50];
	char str2[50];
	
	cout<<"Enter first word(str1): ";
	cin.getline(str1, 49);
	cout<<"Enter second word(str2): ";
	cin.getline(str2, 49);
	
	strCpy(str1, str2);
}
