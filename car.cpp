// Write a program to define a class Car with attributes like Brand,Model,and year .Write member functions of the following :
// a) to read data members
// b) to display car details 
//
// Create three car objects with different with different attributes and dispaly details of each one.


#include <iostream>
#include <string>
using namespace std;

class Car {
	private:

	string brand,model;
	int year;
 
	public:

         void readdata() {
		cout << "enter brand of the car : " <<endl;
		cin >> brand;
		cout << "enter model of the car : " <<endl;
		cin >> model;
		cout <<"enter manufactured year of the car ; " <<endl;
		cin >> year;

            }

	 void displaydetails() {

		 cout << "BRAND : "<< brand << endl;
		 cout << "MODEl : "<< model << endl;
		 cout << "YEAR  : "<< year  << endl;
	 
	 
	 }



};

int main() {

	Car car1,car2,car3;

	cout << "Enter Details of Car 1 : " << endl;
	car1.readdata();

	cout << " Ente Details of Car 2 : " << endl;
	car2.readdata();

	cout << "Enter Details of Car 3 : " << endl;
	car3.readdata();


	cout << "  \n------DETAILS OF THE CAR--------\n"<<endl;

	cout << "Dispaly the details of Car 1 : " << endl;
	car1.displaydetails();
	cout << "\n"<<endl;

	cout << "Display the details of Car 2 : " << endl;
	car2.displaydetails();
	cout <<"\n"<<endl;

	cout << "Display the details of Car 3 : " << endl;
	car3.displaydetails();



}
