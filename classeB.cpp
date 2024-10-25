#include <iostream>
using namespace std;

class B{
	private:
		int B1;
		float B2;
	
	public:
		int getB1(){
			return B1;
		}
		
		float getB2(){
			return B2;
		}
		
		void setB1(int novoB1){
			B1 = novoB1;
		}
		
		void setB2(float novoB2){
			B2 = novoB2;
		}
		
		void MB1(){
			cout << "MB1" << endl;
		}
		
		void MB2(){
			cout << "MB2" << endl;
		}
		
		void MB3(){
			cout << "MB3" << endl;
		}
};
