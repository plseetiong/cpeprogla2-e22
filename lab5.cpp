#include<iostream>
using namespace std;

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

struct Name{
	char lastName[30];
	char firstName[30];
};

struct Item{
	int id;
	char name[50];
	int price;
	int quantity;
};

struct Date{
	int day;
	int month;
	int year;
};

struct Order{
	Date date;
	Item item;
};

struct Customer{
	Name name;
	char contactNo[10];
	Order order;
};

main(){
	cout << "Enter 3 Customers"<<endl<<endl;
	
	Customer cust[3];
	
	for(int i=1; i<4; i++){
		cout << "CONTACT INFORMATION "<<i<<endl;
		cin.ignore();
		cout << "First Name: ";
		cin.getline(cust[i].name.firstName, 29);
		cout << "Last Name: ";
		cin.getline(cust[i].name.lastName, 29);
		cout << "Contact No: ";
		cin >> (cust[i].contactNo);
		cout << "Order Date: "<<endl;
		cout << "Day: ";
		cin >> (cust[i].order.date.day);
		cout << "Month: ";
		cin >> (cust[i].order.date.month);
		cout << "Year: ";
		cin >> (cust[i].order.date.year);
		cout << "Enter 3 items:"<<endl;
		for(int j=0; j<3; j++){
		cout << "ID: ";
		cin >> (cust[j].order.item.id);
		cout << "Name: ";
		cin >> (cust[j].order.item.name);
		cout << "Price: ";
		cin >> (cust[j].order.item.price);
		cout << "Quantity: ";
		cin >> (cust[j].order.item.quantity);
		}
	}
}
