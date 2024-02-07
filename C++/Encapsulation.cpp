#include<iostream>
using namespace std;
class Encapsulation{
   private:
   	int salary;
   	
   public:
   	void setSalary(int s) {
		   s=salary;
	   }
   
   public:
   	void getSalary(){
   	return salary;
   }	    	
};
int main()
{
	Encapsulation myObj;
	myObj.setSalary(2000);
	cout<< "Your salary is :\n"<<myObj.getSalary;
	return 0;
}