#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int arr[]={1,2,4,3};
	int n1;
	int n2;
	int j=0;
	ifstream f("input.txt");
	
	f>>n1>>n2;
	cout<<n1<<" ";
	n1+=arr[(j%4)];
	
	for(n1; n1<=n2; n1+=arr[(j%4)]){
		cout<<n1<<" ";
		j++;
	}
}
