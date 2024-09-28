#include<iostream>
using namespace std;
void discount(string countryName,float price);
main()
{
	system("cls");
	string countryName;
	float price;
	while(true)
	{
		cout<<"Enter the country's name: ";
		cin>>countryName;
		cout<<"Enter the ticket price in dollars: $";
		cin>>price;
		discount(countryName,price);
	}
}
void discount(string countryName,float price)
{
	float priceAfterDiscount,discountedPrice;
	if(countryName=="Pakistan")
	{
		discountedPrice=(price*5)/100;
		priceAfterDiscount=price-discountedPrice;
		cout<<"Final ticket price after discount: $"<<priceAfterDiscount<<endl;
	}
	if(countryName=="Ireland")
	{
		discountedPrice=(price*10)/100;
		priceAfterDiscount=price-discountedPrice;
		cout<<"Final ticket price after discount: $"<<priceAfterDiscount<<endl;
	}
	if(countryName=="India")
	{
		discountedPrice=(price*20)/100;
		priceAfterDiscount=price-discountedPrice;
		cout<<"Final ticket price after discount: $"<<priceAfterDiscount<<endl;
	}
	if(countryName=="England")
	{
		discountedPrice=(price*30)/100;
		priceAfterDiscount=price-discountedPrice;
		cout<<"Final ticket price after discount: $"<<priceAfterDiscount<<endl;
	}
	if(countryName=="Canada")
	{
		discountedPrice=(price*45)/100;
		priceAfterDiscount=price-discountedPrice;
		cout<<"Final ticket price after discount: $"<<priceAfterDiscount<<endl;
	}
}