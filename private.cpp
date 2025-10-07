#include <iostream>
#include <string>
using namespace std;

class student 
      {
        private:
		int id;
		string name;
		int m1,m2,m3;
	public:
		void setstudentdata(){
		
		cout << "enter number of the student : ";
		cin >> id;
		cout << "enter name of the student : ";
		cin >> name;
		cout <<"enter marks of the students : ";
		cin >>m1>>m2>>m3;
                }
		void result(){
		 float total_marks=m1+m2+m3;
                 cout << "Total Mark is :" << total_marks;
                 float average = total_marks/3;
		 cout << "Average is : " << average;
		 float percentage = (total_marks/600)*100;
		 cout << "percentage :"<< percentage;


		}


      };
        
       int main()
	{
	

	int i,n;
	cin>>n;
student std[n];

	for(i=0;i<n;i++)
		std[i].setstudentdata();
	for(i=0;i<n;i++)
		std[i].result();




	}

