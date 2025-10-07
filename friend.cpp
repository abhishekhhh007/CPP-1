#include <iostream>
using namespace std;

class pin 
         {
		 private:
	   		 int password = 4558;

			 friend void showpass(pin p);


	 


	 };
       
         void showpass(pin p)
        {
	cout << "this is my pin : "<<p.password<<endl;
	
	}
       
        int main()
              {
	      pin mypin;

	       showpass(mypin);
	      return 0; 
	      
	      
	      }


