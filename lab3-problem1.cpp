#include<iostream>
#include<cstring>
using namespace std;

int strCmp(char* str1, char* str2){
	switch(strcmp(str1, str2)){
		case -1:
			cout << "Negative";
		break;
		case 0:
			cout << "Equal";
		break;
		case 1:
			cout << "Positive";
		break;
	}
}

main(){
	char str1[50];
	char str2[50];
	
	cout<<"Enter first word: ";
	cin.getline(str1, 49);
	cout<<"Enter second word: ";
	cin.getline(str2, 49);
	system("cls");
	
	cout<<"*****************"<<endl;
	cout<<"STRING COMPARE"<<endl;
	cout<<"*****************"<<endl<<endl;
	
	strCmp(str1, str2);
}
