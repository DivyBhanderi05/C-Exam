#include<iostream>

using namespace std;

class task{
	
	public :
	void math(int n, int m){
		cout<<n-m<<endl<<endl;
		
	}
	void math(int n, int m , int l){
		cout<<n+m+l;
		
	}
};

int main(){
	task obj;
	obj.math(40,30);
	obj.math(20,30,50);
	
	return 0;
}
