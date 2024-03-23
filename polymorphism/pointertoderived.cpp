#include<iostream>
using namespace std;
class base{
	public:
	int var1;
	void display(){
		cout<<"displaying the variable of base class of var1:"<<var1<<endl;
	}
};
class derived:public base{
	public:
	int var2;
	void display(){
		cout<<"displaying the variable of base class of var 1 :"<<var1<<endl;
		cout<<"displaying the varriable of derived class of vae 2 :"<<var2<<endl;
	}
};
int main(){
	base * base_class_pointer;// poit the base class 
	base objbase;
	derived objderived;
	base_class_pointer = &objderived;//point of base class oint the object if derived class
	base_class_pointer->var1= 35;
	//base_class_pointer->var2 = 34;(will give error)
	base_class_pointer->display();	 
		//derived class pointer:
		
		derived*derived_class_pointer;
	derived_class_pointer = &objderived;//point of base class oint the object if derived class
	derived_class_pointer->var1= 35;
	derived_class_pointer->var2 = 34;
	derived_class_pointer->display();
	return 0;
}
