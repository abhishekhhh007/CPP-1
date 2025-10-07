#include <iostream>
using namespace std;
 class student {
       private :
       string name;
      int age;
   
     public:
      student(string n,int a){
	      name=n;
	      age=a;
      }
      void display(){
	      cout << "enter name :"<<name<<endl;
	      
	      cout <<"enter age : "<<age<<endl;
	      
      }
      ~ student(){
	      cout << "enter name :"<<name<<endl;

              cout <<"enter age : "<<age<<endl;



      }

 };
int main()
{
 
	student s1("abhi",19);
	s1.display();
	return 0;


}
