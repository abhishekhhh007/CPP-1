#include <iostream>
using namespace std;

class sports {
        public:
                void football(){
                        cout <<"here we gooo..... :"<< endl;

                }

};

 class cricket : public sports {
         public:
                 void cric(){
                         cout <<"FIVE TIME CHAMPIONS...."<<endl;

                 }

 };

class hockey : private sports {
	public:
	void cric(){
		cout <<"welcome"<<endl;
	
	}
};

class tennis : private hockey {
	public:
		void ten(){
			cout <<"heyy"<<endl;
		}
};

int main(){
        tennis cf;
        cf.football();
        cf.cric();
        cf.cric();
	cf.ten();

}       

