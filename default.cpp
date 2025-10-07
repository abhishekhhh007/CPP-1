#include <iostream>
using namespace std;

class cube {
	int x,y,z;
	public:
	cube(int i=2,int j=1,int k=3)
	
	{
		x=i;
		y=j;
		z=k;
	
	}
	int volume(){
		return x*y+z;

	
	}
	

};

int main(){

	cube a(3),b;
	cout <<a.volume() <<endl;
	cout << b.volume()<<endl;

	

	return 0;

}

