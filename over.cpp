#include <iostream>
using namespace std;
int myfunc(int i);
double myfunc(double i);

	int main(){
		cout <<"my function  "<<myfunc(10)<<endl;
		cout <<"my function double  "<<myfunc(3.5)<<endl;
		return 0;
	}
		double myfunc(double i)
                 {
			return i;
		 }
	
            int myfunc(int i)
            {
	     return i;
            }



