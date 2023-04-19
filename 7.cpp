#include<iostream>

using namespace std;

class A{
	public :
	int id,salary,expirience,contact;
	char name[50],role[50],comp_name[50],email[50],address[50];
	
	void set1(){
		
		cout<<"Enter Id : ";
		cin>>id;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter role : ";
		cin>>role;
		
	}
};
class B : public A{
	public :
	void set2(){
		
		cout<<"Enter Salary : ";
		cin>>salary;
		cout<<"Enter Expireince : ";
		cin>>expirience;
	}
};
class C : public B{
	public :
	void set3(){
		
		cout<<"Enter Company Name : ";
		cin>>comp_name;
		cout<<"Enter Address : ";
		cin>>address;
	}
	void get1(){
		
		cout<<name<<endl;
		cout<<role<<endl;
		cout<<salary<<endl;
	}
};
class D : public C{
	public :
	void set4(){
		
		cout<<"Enter Email : ";
		cin>>email;
		cout<<"Enter Contact : ";
		cin>>contact;
	}
	void get2(){
		
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<role<<endl;
		cout<<salary<<endl;
		cout<<expirience<<endl;
		cout<<comp_name<<endl;
		cout<<email<<endl;
		cout<<address<<endl;
		cout<<contact<<endl;
	}
};
int main(){
	
	D obj1,obj2,obj3,obj4,obj5,obj6;
	obj1.set1();
	obj2.set2();
	obj3.set3();
	obj4.get1();
	obj5.set4();
	obj6.get2();
	
	return 0;
}
