#include<iostream> 
#include <stdlib.h> 
#include<iomanip> 
 
 
 using namespace std; 
 
 
 struct Quiz{ 
 	float result[4]; 
 }; 
 
 
 struct Student{ 
 	int ID; 
 	char name[50]; 
 	Quiz quiz; 
 }; 
 
 
 void remark(float sum){ 
 	if(sum >=75) 
 		cout << "Passed"; 
 		 
 	else 
 		cout << "Failed"; 
 } 
 
 
 main(){ 
 	Student stud[6]; 
 	float sum =0; 
 	 
 	cout<<"Enter 5 Student(s) Record"<<endl<<endl; 
 	  
 	for(int i=1; i<6; i++){ 
             cout << "Student "<< i <<endl; 
             cout << "ID: "; 
             cin >> (stud[i].ID); 
             cin.ignore(); 
    			cout << "Name: "; 
 			cin.getline(stud[i].name, 49);  
 			cout << "Enter 3 quize(s): "; 
             	 cin >> (stud[i].quiz.result[0]);   
             	 cin >> (stud[i].quiz.result[1]);  
             	 cin >> (stud[i].quiz.result[2]);  
 					sum =( (stud[i].quiz.result[0])+(stud[i].quiz.result[1]) + (stud[i].quiz.result[2]))/3; 
    cout << endl; 
 	} 
 	 
 	cout << setw(5) << "No." 
 	<< setw(10)<<"Student No" 
 	<< setw(15)<<"Name" 
 	<< setw(5)<<"Grade" 
 	<< setw(5)<<"Remark"; 
 	 
 	for(int i=1; i<6; i++){ 
 		cout<<endl; 
 		cout<<setw(5)<<i 
 		<<setw(10)<<stud[i].ID 
 		<<setw(15)<<stud[i].name; 
 		cout<<setw(5)<<setprecision(4)<<sum<<setw(5); 
 		remark(sum); 
 		}	 
 			 
 } 

