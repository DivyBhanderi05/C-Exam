#include<iostream>

using namespace std;

class RBI{
	
	public :
		int rate;
		
		void set(){
			
			rate = 12;
			cout<<rate<<endl;
		}
		
		
};
class SBI : public RBI {
	
	public :
		void get(){
			cout<<rate;
			cout<<"SBI Rate 12%";
			
		}
};
class BOB : public RBI {
	
	public :
		void get(){
			cout<<rate;
			cout<<"BOB Rate 16%";
			
		}
};
class ICICI : public RBI {
	
	public :
		void get(){
			cout<<rate;
			cout<<"ICICI Rate 13%";
			
		}
};
int main(){
	
	SBI obj1;
	obj1.set();
	obj1.get();
	BOB obj2;
	obj2.get();
	ICICI obj3;
	obj3.get();
	return 0;
}
