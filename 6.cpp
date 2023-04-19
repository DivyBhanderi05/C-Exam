#include<iostream>

using namespace std;

int main(){
	
	int age;
	cout<<"Enter age : ";
	cin>>age;
	
	try{
		if(age<=18){
			cout<<"Not eligible to vote";
		}
		else{
			throw age;
		}
	}
	catch(int age){
		
		cout<<"Eligible to vote";
		
	}
	
	return 0;
}
