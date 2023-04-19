#include<iostream>

using namespace std;

class student{
public :
	int stu_id,stu_age;
	char  stu_name[50]  , stu_course[50]; 
	void set(){
		
		cout<<"Enter Id :";
		cin>>stu_id;
		cout<<"Enter name :";
		cin>>stu_name;
		cout<<"Enter age :";
		cin>>stu_age;
		cout<<"Enter course :";
		cin>>stu_course;
		
	} 	
	
	void get(){
		
		cout<<stu_id<<endl;
		cout<<stu_name<<endl;
		cout<<stu_age<<endl;
		cout<<stu_course<<endl;
	}
	
};
int main(){
	
	student obj1,obj2;
	obj1.set();
	obj1.get();
	obj2.set();
	obj2.get();
}

