#include<iostream>
#include<cstring>
#include<cctype>
#include<cmath>
using namespace std;

int main(){
	char str[50];
	cout<<"Enter some string: ";
	cin.getline(str, 50);
	
	str[0]=toupper(str[0]);
	
	for(int i=1; i<strlen(str);i++){
		if(isspace(str[i])){
			i++;
			str[i]=toupper(str[i]);
		}
		else{
			str[i]=tolower(str[i]);
		}
	}
	cout<<str;
	
	return 0;
}
