#include <iostream>
#include <string>
using namespace std;
 class student{
	 private:
		 int id;
		 string name;
		 float m1,m2,m3;
		 float total_marks;

       public:
		student(){

			cout <<"enter student name :"<<endl;
			cin >>name;

			cout << "enter roll number :"<<endl;
			cin >>id;

			cout <<"enter marks : "<<endl;
			cin >>m1>>m2>>m3;

			total_marks=m1+m2+m3;
			cout <<"Total mark"<<total_marks;
		
		}
		
			
			
		void read(){
			cout <<"Name of the student :"<<name;
			cout <<"\n";
			cout <<"Roll number :"<<id;
			cout <<"\n";
			cout << "Total Mark :"<<total_marks;
			cout <<"\n";
		
		}

		 
 };
int main(){
      int i,n;
      cout << "enter no.of students : ";
      cin >> n;
      student std[n];
      
      
      for(i=0;i<n;i++){
	      std[i].read();
      }

}
