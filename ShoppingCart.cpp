//name-yogesh
//university-lovely professional unversity
//reg no- 12101629
// STREAM-MCA


#include<iostream>
using namespace std;


int main()
{
	int quantity1,price1,gst1,totalexp1,gstcounta,gstcountb;
	int quantity2,price2,gst2,totalexp2,gstcountc,gstcountd;
	int quantity3,price3,gst3,totalexp3,gstcounte,gstcountf;
	int quantity4,price4,gst4,totalexp4,gstcountg,gstcounth;
	int total;
	cout<<"1. prdouctName:: Leather wallet"<<endl;
	cout<<"quantity of product:: ";
	cin>>quantity1;
	cout<<"\nprice of product:: ";
	cin>>price1;
	cout<<"\nGST of product in % ::";
	cin>>gst1;
	
	totalexp1=quantity1*price1;
	gstcounta=(totalexp1*gst1)/100;
	gstcountb=price1+gstcounta;
	
	cout<<"\ntotal amount of product (Leather wallet):: "<<gstcountb<<endl;
	
	
	
	cout<<"2. prdouctName:: Umbrella"<<endl;
	cout<<"quantity of product:: ";
	cin>>quantity2;
	cout<<"\nprice of product:: ";
	cin>>price2;
	cout<<"\nGST of product in % ::";
	cin>>gst2;
	
	totalexp2=quantity2*price2;
	gstcountc=(totalexp2*gst2)/100;
	gstcountd=price2+gstcountc;
	
	cout<<"\ntotal amount of product (Umbrella):: "<<gstcountd<<endl;
	
	
	cout<<"3. prdouctName:: Cigarette"<<endl;
	cout<<"quantity of product:: ";
	cin>>quantity3;
	cout<<"\nprice of product:: ";
	cin>>price3;
	cout<<"\nGST of product in % ::";
	cin>>gst3;
	
	totalexp3=quantity3*price3;
	gstcounte=(totalexp3*gst3)/100;
	gstcountf=price3+gstcounte;
	
	cout<<"\ntotal amount of product (Cigarette):: "<<gstcountf<<endl;
	
	
	
		cout<<"4. prdouctName:: Honey"<<endl;
	cout<<"quantity of product:: ";
	cin>>quantity4;
	cout<<"\nprice of product:: ";
	cin>>price4;
	cout<<"\nGST of product in % ::";
	cin>>gst4;
	
	totalexp4=quantity4*price4;
	gstcountg=(totalexp4*gst4)/100;
	gstcounth=price4+gstcountg;
	
	cout<<"\ntotal amount of product (Honey):: "<<gstcounth<<endl;
	
	total=gstcountb+gstcountd+gstcountf+gstcounth;
	
	cout<<"total amount to be paid to the shop-keeper:: "<<total<<endl;
	 
	
	if(gst1>gst2 && gst1>gst3 && gst1>gst4)
	{
	 cout<<"maximum GST::"<<gst1<<endl;	
	}
	else if(gst2>gst1 && gst2>gst3 && gst2>gst4)
	{
		cout<<"maximum GST::"<<gst2<<endl;
	}
	else if(gst3>gst1 && gst3>gst2 && gst3>gst4)
	{
		cout<<"maximum GST::"<<gst3<<endl;
	}
	else
	{
		cout<<"maximum GST::"<<gst4<<endl;
	}
	
	
	return 0;
}
	
	
	
	
	
