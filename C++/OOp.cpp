#include<Iostream>
using namespace std;
class Hello{
	public:
	//	Hello myObj();
		void myMethod(){
		cout<< "Hello world !!";
		}
};
int main(int argc, char** argv)
{
  Hello myObj;
  myObj.myMethod();
	return 0;
}