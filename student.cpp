#include <iostream>
#include <string.h>
using namespace std;
class students {

	public :
		
          string name;
	  int id;
	  int subject;
	  float marks[10];
	  float average;
           
        };

int main ()
{
	   
	int  n,i,j; 
	cout << "enter no.of stduents:";
	cin >> n;
	students s[n];
	for(i=0;i<n;i++)
	{
		cout << "enter student name  "<<i+1 << "  :"  ;
	        cin >> s[i].name;
		cout <<"roll no:";
	     	cin >> s[i].id;
	     	cout << "enter no.of subjects :";
	     	cin >> s[i].subject;
                int total=0;
		for(j=0;j<s[i].subject;j++)
	     	{
			cout << "subject marks " <<j+1 << " : ";
		        cin >> s[i].marks[j];

			
			total=total+s[i].marks[j];
			
		        
		        
	     	}
		cout <<"total mark :" <<total << "\n";


		s[i].average = total/s[i].subject;

		cout << "average mark : " << s[i].average <<"\n";

	 }
}

