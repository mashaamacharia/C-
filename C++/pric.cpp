#include<Iostream>
using namespace std;
int main()
{
	//eb3/56347/21
	float price,vat,disc,final;
	cout<< "Enter the value of the item \n";
	cin>>price;
	vat=(16*price)/100;
	cout<< "The VAT of the item is \n"<<vat;
	disc=(5*price)/100;
	cout<< "The discout of the item is \n"<< disc;
	final=(price+vat)-disc;
	cout<< "The final value of the item is \n"<<final;
	return 0;
}