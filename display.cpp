#include <iostream>
using namespace std;

class games{
	public:

	 games(){
			cout << "boom boom"<<endl;
		}

};

class pes : public games {
	public:
		void show(){
			cout<<"hello";
		}

};

int main(){

	pes g;
	g.show();



}
