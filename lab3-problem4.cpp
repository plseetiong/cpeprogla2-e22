#include<iostream>
#include<cstring>
using namespace std;

main(){
	char str[50];
	int strLen;
	int palRemark;
	
	cout<<"Enter a Word: ";
	cin.getline(str, 49);
	
	strLen = strlen(str);
	for(int i=0; i<strLen; i++){
		if(str[i]!=str[strLen-i-1]){
			palRemark = 1;
		}
	}
	if(palRemark){
		cout<<str<<" is not palindrome";
	}
	else{
		cout<<str<<" is palindrome";
	}
	
}
