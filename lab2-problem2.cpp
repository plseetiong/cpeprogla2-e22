#include <iostream> 
#include <stdlib.h> 
#include<time.h> 
#define N 20 
using namespace std; 
 
 
main(){ 
    int ran_num[N];    
    srand(time(0));       
    for (int i=1; i<20; i++){ 
        ran_num[i] = i;   
    } 
        for (int i=0; i<(20-1); i++){ 
            int r = i + (rand() % (20-i));  
            int temp = ran_num[i];  
            ran_num[i] = ran_num[r];  
            ran_num[r] = temp; 
        } 
          
        for (int c=0; c<10; c++){ 
             cout<< "  " << (" %d ", ran_num[c]);   
        } 
          
        cout << "\n"; 
 } 

