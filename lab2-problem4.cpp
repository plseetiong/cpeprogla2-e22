#include<iostream>
using namespace std;

int main(){
	int givenNumber;
	int factorNumber;
	
	cout<<"Enter Number: ";
	cin>>givenNumber;
	for(int i=0; i<=givenNumber; i++){
		if(i==0){
			factorNumber = 1;
		}
		else{
			factorNumber= factorNumber*i;
		}
	}
	cout << "The factorial of "<<givenNumber<<" is "<<factorNumber;
}
