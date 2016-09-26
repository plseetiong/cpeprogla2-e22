#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

char reverse(char str[50]){
	int i;
	int j;
	for(i=0; str[i]!='\0'; i++);
	for(i--; i>=0; i--){
		if(str[i-1]==' ' || i==0){
			for(j=i; str[j]!='\0'&&str[j]!=' ';j++)
				cout<<str[j];
				cout<<endl;
			
		}
	}
	cout<<endl;
}

int main(){
	char str[50];
	
	cout<<"Enter Word: ";
	cin.getline(str, 50);
	reverse(str);
	
	return 0;
}
