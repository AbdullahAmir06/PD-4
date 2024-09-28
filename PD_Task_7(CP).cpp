#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main()
{
	int redRose,whiteRose,tulip;
	cout<<"Red Rose: ";
	cin>>redRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(redRose,whiteRose,tulip);
}
void flowerShop(int redRose,int whiteRose, int tulip)
{
	float priceOfRedRose,priceOfWhiteRose,priceOfTulip,total,priceAfterDiscount,discountedAmount;
	
	priceOfRedRose=redRose*2;
	priceOfWhiteRose=whiteRose*4.10;
	priceOfTulip=tulip*2.50;
	total=priceOfRedRose+priceOfWhiteRose+priceOfTulip;
	if(total>200)
	{
		discountedAmount=(total*20)/100;
		priceAfterDiscount=total-discountedAmount;
		cout<<"Original Price: "<<total<<endl;
		cout<<"Price after Discount: "<<priceAfterDiscount;
	}
	if(total<200)
	{
		cout<<"Original Price: "<<total<<endl;
		cout<<"No discount applied.";	
	}
	
	
		



}