#include <iostream>
using namespace std;
class numbers  {
	public:
		      int factorial(int n)
		   {

			      if(n<0)
				      cout << " negative number\n";
			    
				int fact=1;

			      for(int i=1;i<=n;i++)
			      {
				      fact=fact*i;
			      } return fact;
                      
                   }

                  void fibanocci(int n)
		  {
		  int a=0,b=1,c=0;
		  int i;
		  cout <<"Fibanocci series :\n";

		  for(i=0;i<n;i++)
		  {
			  cout << a <<"     ";
			  c=a+b;
			  a=b;
			  b=c;



		  }
		  
		  }
                  void oddeven(int n)


		  {
		  if(n%2==0)
			  cout << "\neven number";
		  else
			  cout <<"\nodd number";
		  }




      };

		      int main()
		      {
                      int N;

		      cout << "enter a number";
		      cin >> N;
                           numbers num;
		       cout <<"factorial is : "<<num.factorial(N)<<"\n";
			

                     num.fibanocci(N);
		     num.oddeven(N);

		      }

                        






		     


