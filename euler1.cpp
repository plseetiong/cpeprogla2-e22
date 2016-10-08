#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
	int val=0;
	int total;
	ifstream f("input.txt");
	f>>val;
	cout<<val<<endl;
		for(int i=0; i<val; i++){
			if(i%3==0||i%5==0){
				total = total + i;
			}
		}
	
	cout << total;
	system ("pause > 0");
}
