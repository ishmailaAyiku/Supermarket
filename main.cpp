#include <iostream>
#include<cmath>
using namespace std;

string customer,item1,item2,item3, ans ;
int unique_id,cost1=0,cost2=0,cost3=0,qty1=0,qty2=0,qty3=0,want;
int printer=1000,table=55,phone=500,total_cost;
float balance,payable,customer_money,owe;
string a="printer",b="phone" ,c="table";
const float vat=0.12;
int main()
{

      cout << "  *****    WELCOME TO INF SUPERMARKET   *****\n"<< endl;
    cout<<"*How can we help you ? "<<endl;

    cout<<"1.Purchase an item"<<endl;
    cout<<"2. Make Enquiry "<<endl;
    cout<<"-Select an option  1 or 2"<<endl;
    cin>>want;/*1st control structure 1*/
 if(want==1){ cout<<"     ***Please enter your details to proceed***.\n"<<endl;
 cout<<"<< PLEASE KNOW THAT YOU HAVE ONLY 3 CHANCES TO PERFORM A PURCHASE >>-\n"<<endl;
    cout <<"*Please Enter Your Name : " ;
    cin>>customer;
    cout<<"*Please Enter Your ID (0-20):";

    cin>> unique_id;
     cout<<"Hello "<<customer<<"!"<< endl;
cout<<"\n"<<endl;
      cout<<"*What would you like to Purchase ? "<<endl;
      cout<<"\n"<<endl;
   cout<<"...Available products...\n"<<endl;
    cout<<"a. Printer  Price: GHS1000.00"<<endl;
    cout<<"b. Phone   Price:GHS500.00"<<endl;
    cout<<"c. Table Price: GHS55.00\n"<<endl;
    cout<<"-Please select the product you want by entering the product name eg phone "<<endl;
    cin>>item1;


 cout<<"*How many would you like to Purchase ?"<<endl;
 cin>>qty1;
 if (item1=="Printer"||item1=="printer"){
        cost1=printer*qty1;
        string item1="PRINTER";
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost1<<endl;
 } else
 if(item1=="Phone"||item1=="phone"){
        cost1=phone*qty1;
        string item1="Phone";
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost1<<endl;
 }
 else
 if(item1=="Table"||item1=="table"){
     cost1=table*qty1;
     string item1="Table";
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost1<<endl;

 }cout<<"\n"<<endl;
 cout<<"*Would you like to buy anything else ?"<<endl;
 cout<<"-Please select 'a' for Yes and 'b' for NO  "<<endl;
 cin>>ans;
 if (ans =="a"){
cout<<"\n"<<endl;
      cout<<"*What would you like to Purchase ? "<<endl;
   cout<<"...Available products...\n"<<endl;
    cout<<"a. Printer  Price: GHS1000.00"<<endl;
    cout<<"b. Phone   Price:GHS500.00"<<endl;
    cout<<"c. Table Price: GHS55.00"<<endl;
    cout<<"-Please select the product you want by entering the product name eg phone "<<endl;
    cin>>item2;

cout<<"*How many would you like to Purchase ?"<<endl;
 cin>>qty2;
if (item2=="Printer"||item2=="printer"){

        cost2=printer*qty2;
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost2<<endl;
 } else
 if(item2=="Phone"||item2=="phone"){

        cost2=phone*qty2;
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost2<<endl;
 }
 else
 if(item2=="Table"||item2=="table"){

     cost2=table*qty2;
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost2<<endl;

 }
 cout<<"\n"<<endl;
  cout<<"*Would you like to buy anything else ?"<<endl;
 cout<<"-Please select 'a' for Yes and 'b' for NO  "<<endl;
cin>>ans;
if (ans =="a"){
cout<<"\n"<<endl;
      cout<<"*What would you like to Purchase  "<<endl;
   cout<<"...Available products...\n"<<endl;
    cout<<"a. Printer  Price: GHS1000.00"<<endl;
    cout<<"b. Phone   Price:GHS500.00"<<endl;
    cout<<"c. Table Price: GHS55.00"<<endl;
    cout<<"-Please select the product you want by entering the product name eg phone "<<endl;
    cin>>item3;

cout<<"*How many would you like to Purchase ?"<<endl;
 cin>>qty3;
if (item3=="Printer"||item3=="printer"){
        cost3=printer*qty3;
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost3<<endl;
 } else
 if(item3=="Phone"||item3=="phone"){
        cost3=phone*qty3;
    cout <<"THE COST OF THE PRODUCT IS:GHS"<<+cost3<<endl;
 }
 else
 if(item3=="Table"||item3=="table"){
     cost3=table*qty3;
    cout <<"THE COST OF THE PRODUCT IS :GHS"<<+cost3<<endl;

 }
 cout<<"\n"<<endl;
 cout<<"---------------PAYMENT---------------";
 cout<<"\n"<<endl;
 /*processing amount*/
 total_cost=cost1+cost2+cost3;
 payable=total_cost+vat;
 owe=payable-customer_money;
 balance =customer_money-payable;
 cout<<"*ENTER YOUR MONETARY VALUE "<<"GHS:";
 cin>>customer_money;
 cout<<"**TOTAL AMOUNT TO BE PAID IS"<<" GHS"<<total_cost<<endl;
 cout<<"\n"<<endl;
 cout<<"**TOTAL COST PAYABLE IS "<<" GHS"<<payable<<endl;
 if(customer_money>payable){
 cout<<"**BALANCE IS: "<<"GHS"<<balance<<endl;
 }
 else{
    cout<<"**YOU HAVE "<<"GHS"<<owe<<" MORE TO PAY BEFORE YOU CAN CHECK OUT\n"<<endl;
 }
/*RECEIPT*/
cout<<"\n"<<endl;
cout<<"\n"<<endl;
cout<<"      *********  R E C E I P T *******\n"<<endl;
cout<<"NAME OF CUSTOMER:"<<"  "<<customer<<"\n"<<endl;
cout<<"YOUR ID NUMBER:"<<"    "<<unique_id<<"\n"<<endl;
cout<<"      _____ITEM BOUGHT_____   "<<"\n"<<endl;


cout<<"   ITEM"<<"   QUANTITY"<<""<<endl;

cout<<"      "<<item1<<"   "<<qty1<<endl;
cout<<"      "<<item2<<"   "<<qty2<<endl;
cout<<"      "<<item3<<"   "<<qty3<<endl;
cout<<"\n";
cout<<"VAT = "<<vat<<endl;
cout<<"TOTAL COST GHS:"<<payable<<endl;
cout<<"TOTAL AMOUNT PAID GHS:"<<customer_money<<endl;
 if(customer_money>payable){
 cout<<"BALANCE  GHS:"<<balance<<endl;
 }
 else{
    cout<<"ARREARS GHS:"<<owe<<endl;
 }
cout<<".....THANK YOU FOR TRANSACTING WITH US...."<<endl;
cout<<"------------------------------------------------------\n"<<endl;
}

else//if customer says no

    if(ans=="b"){
     cout<<"---------------PAYMENT---------------";
     cout<<"*ENTER YOUR MONETARY VALUE "<<"GHS:";
 cin>>customer_money;
 cout<<"**TOTAL AMOUNT TO BE PAID IS"<<" GHS"<<total_cost<<endl;
 cout<<"\n"<<endl;
 cout<<"**TOTAL COST PAYABLE IS "<<" GHS"<<payable<<endl;
 if(customer_money>payable){
 cout<<"**BALANCE IS: "<<"GHS"<<balance<<endl;
 }
 else{
    cout<<"**YOU HAVE "<<"GHS"<<owe<<" MORE TO PAY BEFORE YOU CAN CHECK OUT\n"<<endl;
 }
   cout<<"      *********  R E C E I P T *******\n"<<endl;
cout<<"NAME OF CUSTOMER:"<<customer<<"\n"<<endl;
cout<<"YOUR ID NUMBER:"<<unique_id<<"\n"<<endl;
cout<<"      _____ITEM BOUGHT_____   "<<"\n"<<endl;
cout<<"      ITEM"<<"           QUANTITY"<<""<<endl;

cout<<"        "<<item1<<"       "<<qty1<<endl;
cout<<"        "<<item2<<"       "<<qty2<<endl;
cout<<"        "<<item3<<"       "<<qty3<<endl;
cout<<"\n";
cout<<"VAT = "<<vat<<endl;
cout<<"TOTAL COST GHS:"<<payable<<endl;
cout<<"TOTAL AMOUNT PAID GHS:"<<customer_money<<endl;
 if(customer_money>payable){
 cout<<"BALANCE  GHS:"<<balance<<endl;
 }
 else{
    cout<<"ARREARS GHS:"<<owe<<endl;
 }
cout<<".....THANK YOU FOR TRANSACTING WITH US...."<<endl;
cout<<"------------------------------------------------------\n"<<endl;
}
}else
if(ans==b){cout<<"---------------PAYMENT---------------";
     cout<<"*ENTER YOUR MONETARY VALUE "<<"GHS:";
 cin>>customer_money;
 cout<<"**TOTAL AMOUNT TO BE PAID IS"<<" GHS"<<total_cost<<endl;
 cout<<"\n"<<endl;
 cout<<"**TOTAL COST PAYABLE IS "<<" GHS"<<payable<<endl;
 if(customer_money>payable){
 cout<<"**BALANCE IS: "<<"GHS"<<balance<<endl;
 }
 else{
    cout<<"**YOU HAVE "<<"GHS"<<owe<<" MORE TO PAY BEFORE YOU CAN CHECK OUT\n"<<endl;
 }
   cout<<"      *********  R E C E I P T *******\n"<<endl;
cout<<"NAME OF CUSTOMER:"<<customer<<"\n"<<endl;
cout<<"YOUR ID NUMBER:"<<unique_id<<"\n"<<endl;
cout<<"      _____ITEM BOUGHT_____   "<<"\n"<<endl;
cout<<"   ITEM"<<"   QUANTITY"<<""<<endl;

cout<<"      "<<item1<<"   "<<qty1<<endl;
cout<<"      "<<item2<<"   "<<qty2<<endl;
cout<<"      "<<item3<<"   "<<qty3<<endl;
cout<<"\n";
cout<<"VAT = "<<vat<<endl;
cout<<"TOTAL COST GHS:"<<payable<<endl;
cout<<"TOTAL AMOUNT PAID GHS:"<<customer_money<<endl;
 if(customer_money>payable){
 cout<<"BALANCE  GHS:"<<balance<<endl;
 }
 else{
    cout<<"ARREARS GHS:"<<owe<<endl;
 }
cout<<".....THANK YOU FOR TRANSACTING WITH US...."<<endl;
cout<<"------------------------------------------------------\n"<<endl;
}

}
/*wrong inputs else*/
else
    if(want==2){
   cout<<"Please contact our customer care line on 0200030000 "<<endl;
   cout<<"Gmail:infsupermarket@gmail.com"<<endl;
   cout<<"THANK YOU !"<<endl;



}

 else{
    cout<<"WRONG INPUT!...Please enter the right answer"<<endl;
    cout<<"Read the instruction carefully before you input an answer"<<endl;
 }

 return 0;
}
