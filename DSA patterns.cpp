#include<iostream>
using namespace std;
int main(){
	
	int i;
	int n = 4;
	char number = 'A';
			for( i = 0; i<n; i++){
			
				for(int j=0;  j<i+1; j++){
					
				cout<<number;
				number++;	
				}
				
				cout<<endl;
			}
	return 0;
}