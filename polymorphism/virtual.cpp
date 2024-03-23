#include<iostream>
#include<string>
using namespace std;
class Book{
	public:
	string title;
	string author;
	Book(string name,string author):title(name),author(author){
	}
	virtual void display(){}
};
class library:public Book{
	public:
	int nofbook;
	int nofseats;
	library(string title , string author,int num,int seats):Book(title,author),nofbook(num),nofseats(seats){
	}
	void display(){
		cout<<"the name of the book is :"<<title<<endl;
		cout<<"the author of the book is :"<<author<<endl;
		cout<<"the number of the seats in library :"<<nofseats<<endl;
		cout<<"the number of the book in library :"<<nofbook<<endl;		
	}
};
class reception:public Book{
	public:
		int receiptno;
	reception(string title , string author,int receiptno):Book(title , author),receiptno(receiptno){
	}
	void display(){
		cout<<"the name of the book is :"<<title<<endl;
		cout<<"the author of the book is :"<<author<<endl;
		cout<<"the issue of book no is :"<<receiptno<<endl;
	}
};
int main(){
	string title;
	string author;
	int nofbook;
	int nofseats;
	int receiptno;
	//for library class
	title = ("the great diversity");
	author =( "mixwell");
	nofbook = 300;
	nofseats = 45;
library l1(title,author,nofbook,nofseats);
	//l1.display()//will give error 
	// for reception class
	title = ("the great diversity");
	author = ("mixwell");
	nofbook = 300;
	nofseats = 45;
	receiptno = 23;
	reception r(title , author, receiptno);
	Book * b[2];
	b[0] = &l1;
	b[1] = &r;
	b[0]->display();
	b[1]->display();
	return 0;
}
