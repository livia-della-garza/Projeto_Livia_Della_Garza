#include <iostream>
using namespace std;

class A{
	private:
		int A1;
		float A2;
	
	public:
		int getA1(){
			return A1;
		}
		
		float getA2(){
			return A2;
		}
		
		void setA1(int novoA1){
			A1 = novoA1;
		}
		
		void setA2(float novoA2){
			A2 = novoA2;
		}
		
		void MA1(){
			cout << "MA1" << endl;
		}
		
		void MA2(){
			cout << "MA2" << endl;
		}
		
		void MA3(){
			cout << "Alteração a classe A a partir do clone" << endl;
		}

		int getSoma(int a, int b){
			return a + b;
		}
};
