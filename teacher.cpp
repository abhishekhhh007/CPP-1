#include <iostream>
#include <string>
using namespace std;
class teacher {
              
	     private:
		     
		     string id, name,sub,dept;

	 public :
                     void setdata()
	           {
		      cout <<"enter the name of the teacher : "<<endl;
		      cin >> name;
		      cout << "enter the id of the teacher : "<< endl;
		      cin >> id;
		      cout << "enter the subject of the teacher : "<<endl;
		      cin >>sub;
		      cout << "enter department name : "<<endl;
		      cin >> dept;


		   }		     

		     void print()
		     {
		      cout << "TEACHER NAME : " << name << endl;
		      cout <<"ID : "<<id << endl;
		      cout <<"SUBJECT NAME : " << sub <<endl;
		      cout <<"DEPARTMENT NAME : " << dept <<endl;

		     
		     }




               };

   int main()
    {
      int i,n;
      cout << "enter no.of teachers : "<<endl;
      cin >> n;

      teacher teach[n];

     for(i=0;i<n;i++)
     
     { teach[i].setdata();}
    	       
     for(i=0;i<n;i++)
     { teach[i].print();}

    
    }

