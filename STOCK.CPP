#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class company
{
  public:
     void totalholding(char A[]);
     void totalholding(char A[],int n);

};
void company::totalholding(char A[])
{
double a,n;
if(strcmpi(A,"Google")==0)
a=400;
else
if(strcmpi(A,"Microsoft")==0)
a=500;
else
a=600;
cout<<"Company  name:"<<A<<endl;
cout<<"Stock value:"<<a<<endl;
cout<<"Enter the no of stock purchased:";
cin>>n;
cout<<"Total holding:"<<n*a<<endl;
}
void company::totalholding(char A[],int n)
{
double a,b;
if(strcmpi(A,"Google")==0)
{
a=450;
b=400;
}
else
if(strcmpi(A,"Microsoft")==0)
{
a=550;
b=500;
}
else
{
a=650;
b=600;
}
cout<<"Company name:"<<A<<endl;
cout<<"Stock value:"<<a<<endl;
cout<<"Total holding:"<<n*a<<endl;
cout<<"Estimated profit:"<<(a*n)-(b*n)<<endl;
}

class stock
{
  public:
    char nameofcomp;
    float invval,stockval,ratestock,bal;
    int nostock;
};

int nostock(float a,float b)
{
int c;
c=a/b;
return (c);
}

void stockval(stock &a)

{
a.stockval=a.nostock*a.ratestock;
}

float bal(float a,float b)
{
float c;
c=a-b;
return (c);
}

void main()
{
clrscr();
int n;
stock amount;
cout<<"Entet investment ammount :";
cin>>amount.invval;
cout<<"1.Google"<<endl<<"2.Microsoft"<<endl<<"3.Apple"<<endl<<"Enter choice :";
cin>>n;
switch(n)
{
case 1:amount.ratestock=400;
       amount.nostock=nostock(amount.invval,amount.ratestock);
       stockval(amount);
       amount.bal=bal(amount.invval,amount.stockval);
       cout<<"\n"<<"Company Name   :Google"<<endl;
       cout<<"Rate of stock  :"<<amount.ratestock<<endl;
       cout<<"Invested amount:"<<amount.invval<<endl;
       cout<<"No of stocks purchased:"<<amount.nostock<<endl;
       cout<<"Stockvalue:"<<amount.stockval<<endl;
       cout<<"Balance   :"<<amount.bal<<endl;
       break;
case 2:amount.ratestock=500;
       amount.nostock=nostock(amount.invval,amount.ratestock);
       stockval(amount);
       amount.bal=bal(amount.invval,amount.stockval);
       cout<<"\nCompany Name   :Microsoft"<<endl;
       cout<<"Rate of stock  :"<<amount.ratestock<<endl;
       cout<<"Invested amount:"<<amount.invval<<endl;
       cout<<"No of stocks purchased:"<<amount.nostock<<endl;
       cout<<"Stockvalue:"<<amount.stockval<<endl;
       cout<<"Balance   :"<<amount.bal<<endl;
       break;
case 3:amount.ratestock=600;
       amount.nostock=nostock(amount.invval,amount.ratestock);
       stockval(amount);
       amount.bal=bal(amount.invval,amount.stockval);
       cout<<"\nCompany Name :Apple"<<endl;
       cout<<"Rate of stock:"<<amount.ratestock<<endl;
       cout<<"Invested amount:"<<amount.invval<<endl;
       cout<<"No of stocks purchased:"<<amount.nostock<<endl;
       cout<<"Stockvalue:"<<amount.stockval<<endl;
       cout<<"Balance   :"<<amount.bal<<endl;
       break;
default:cout<<"Invalid choice of company"<<endl;
}
company comp;
char A[50];
double i,b;
cout<<"\n\nEnter company name:";
gets(A);
cout<<"1.Verify Purchasing status"<<endl<<"2.Check current status"<<endl<<"Enter choice:";
cin>>i;
if(i==1)
comp.totalholding(A);
else
{
cout<<"Enter the no of stock purchased:";
cin>>b;
comp.totalholding(A,b);
}
getch();
}

