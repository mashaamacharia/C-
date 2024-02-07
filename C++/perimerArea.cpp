#include<Iostream>
using namespace std;
int main(int argc, char** argv)
{
    //eb3/56347/21
    cout<< "Lets calculate the area and perimeter of a rectangle\n\n";
    float a,b,per,area;
    cout<< "Please enter your legth\n";
    cin>>a;
    cout<< "Please enter your width\n";
    cin>>b;
    per=2*(a*b);
    cout<< "The perimeter of the rectagle is\n"<<per;
    area=a*b;
    cout<< "\n The area of the rectangle is \n"<<area;
	return 0;
}