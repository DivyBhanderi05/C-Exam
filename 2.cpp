#include<iostream>

using namespace std;

class X{
	
	public :
		
		int a , b, c;
};
class Y : public X {
	
	public :
		void set(){
			
			cout<<"Enter A :";
			cin>>a;
			cout<<"Enter B :";
			cin>>b;
			cout<<"Enter C :";
			cin>>c;
		}
		void get(){
			
			cout<<"Addition of Cube : "<<a*a*a + b*b*b + c*c*c;
		}
};
int main(){
	Y obj;
	obj.set();
	obj.get();
	
	return 0;
}
