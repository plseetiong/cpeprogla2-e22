#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int hashmatArmy[3][1];
	int enemyArmy[3][1];
	int diff[3];
	
	cout<<"Opponents Army: ";
	cin>> enemyArmy[1][1]>>enemyArmy[2][1]>>enemyArmy[3][1];
	
	cout<<"Hashmat Army: ";
	cin >> hashmatArmy[1][1]>>hashmatArmy[2][1]>>hashmatArmy[3][1];
	system("cls");
	
	cout << enemyArmy[1][1]<<"	"<<hashmatArmy[1][1];
	cout << enemyArmy[2][1]<<"	"<<hashmatArmy[2][1];
	cout << enemyArmy[3][1]<<"	"<<hashmatArmy[3][1];
	system("cls");
	
	diff[1]= enemyArmy[1][1]-hashmatArmy[1][1];
	diff[2]= enemyArmy[2][1]-hashmatArmy[2][1];
	diff[3]= enemyArmy[3][1]-hashmatArmy[3][1];
	
	cout<<abs(diff[1])<<endl;
	cout<<abs(diff[2])<<endl;
	cout<<abs(diff[3])<<endl;
}
