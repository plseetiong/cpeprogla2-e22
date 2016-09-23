#include<iostream>
#include<math.h>
using namespace std;

//functions
int areaSquare(int sq, int ans){
	ans=sq*sq;
	cout << "The area is "<< ans << " sq. units";
}

int areaRectangle(int length, int width, int ans){ 
	ans=length*width;
	cout<<"The area is "<<ans<<" sq. units";
}

int areaTriangle(int base, int height, int ans){
	ans=(base*height)/2;
	cout<<"The area is "<<ans<<" sq. units";
}

int areaCircle(int rad, int ans){
	ans=(3.14*rad)*(3.14*rad);
	cout<<"The area is "<<ans<<" radius";
}

int main(){
	int sq;
	int length;
	int width;
	int base;
	int height;
	int rad;
	int ans;
	char choice;
	char yesOrno;
	
	cout<<"************************************"<<endl;
	cout<<"MENU"<<endl;
	cout<<"************************************"<<endl;
	cout<<"[1] - Area of Square\n[2] - Area of Rectangle\n[3] - Area of Triangle\n[4] - Area of Circle\n[5] - Exit"<<endl<<endl;
	cout<<"Enter choice: ";
	cin>>choice;
	system("cls");
	
	
	switch(choice){
		case '1':
			cout << "Enter the side of the square: ";
			cin >> sq;
			areaSquare(sq, ans);
			break;
			
		case '2':
			 cout<<"Enter the length and width of the rectangle: ";
			 cin >> length >> width;
			 areaRectangle(length, width, ans);
			 break;
			 
		case '3':
			cout<<"Enter the base and height of the triangle: ";
			cin >> base >> height;
			areaTriangle(base, height, ans);
			break;
			
		case '4':
			cout<<"Enter the radius of the circle: ";
			cin >> rad;
			areaCircle(rad, ans);
			break;
			
		case '5':
			cout << "Are you sure you want to exit? (y/n): ";
			cin >> yesOrno;
			system("cls");
			
			switch(yesOrno){
				case 'y':
					system("exit");
					break;
					
				case 'n':
					main();
			}
		
		default:
			cout<<"Error Input"<<endl;
			system("pause");
			system("cls");
			main();	
	}
	
}
