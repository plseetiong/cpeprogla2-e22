#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

main(){
	char str[50];
	char toUpper;
	 cout<<"Enter some string: ";
	 cin.getline(str, 50);
	 for(int i=0; i<strlen(str);i++){ //to upper function
	 	toUpper = toupper(str[i]);
	 	cout<<toUpper;
	 }
}