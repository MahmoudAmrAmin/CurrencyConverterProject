#include<bits/stdc++.h>
#define ll long long
#define Endl endl
using namespace std;
// master class
class CurrencyConverter
{
protected:
    double  usd ,eur ,  egp , gbp , sar ;
};
//UsdTo class
class UsdTo:public CurrencyConverter
{
public:
    UsdTo();
    double UsdToEgp(double AmountOfUsd);
    double UsdToSar(double AmountOfUsd);
    double UsdToGbp(double AmountOfUsd);
    double UsdToEur(double AmountOfUsd);
};
// SarTo class
class SarTo : public CurrencyConverter
{
    SarTo();
    double SarToEgp(double AmountOfSar);
    double SarToUsd(double AmountOfSar);
    double SarToGbp(double AmountOfSar);
    double SarToEur(double AmountOfSar);
};

//EgpTo class

class EgpTo :public CurrencyConverter
{
public:
    EgpTo();
    double EgpToUsd(double AmountEgp);
    double EgpToSar(double AmountEgp);
    double EgpToGbp(double AmountEgp);
    double EgpToEur(double AmountEgp);
};
// functions of UsdTo

UsdTo::UsdTo()
{
    usd =1 , gbp = 0.80754721 ,egp = 30.999159 , sar = 3.75 , eur = 0.93794089 ;
}
double UsdTo::UsdToEgp(double AmountOfUsd) {

    double res ;
    res = (AmountOfUsd * egp) / usd ;
    return res;
}
double UsdTo ::UsdToEur(double AmountOfUsd) {
    double res = (AmountOfUsd * eur )/ usd ;
    return res;
}
double UsdTo ::UsdToGbp(double AmountOfUsd) {
    double res = (AmountOfUsd * gbp )/ usd;
    return res ;
}
double UsdTo ::UsdToSar(double AmountOfUsd) {
    double res = (AmountOfUsd * sar )/ usd ;
    return res ;
}


//SarTo Function members

SarTo ::SarTo() {
    sar =1 ,usd =0.26666667 ,eur = 0.25026745 ,gbp = 0.21521123 ,egp = 8.2460536 ;
}
double SarTo ::SarToEgp(double AmountOfSar) {
    double res = (AmountOfSar * egp );
    return res;
}
double SarTo ::SarToEur(double AmountOfSar) {
    double res = (AmountOfSar *eur );
    return res ;
}
double SarTo ::SarToUsd(double AmountOfSar) {
    double res = (AmountOfSar * usd );
    return res ;
}
double SarTo ::SarToGbp(double AmountOfSar) {
    double res = (AmountOfSar  * gbp );
    return gbp;
}

//function of EgpTo
EgpTo ::EgpTo() {
    egp = 1; gbp =0.026042718 , usd = 0.032356307 ,eur = 0.030366488 ,sar = 0.12133615 ;
}
double EgpTo::EgpToUsd(double AmountEgp) {
    double res = (AmountEgp * usd ) ;
    return res;
}
double EgpTo::EgpToSar(double AmountEgp)
{
    double res = (AmountEgp * sar );
    return res;
}
double EgpTo ::EgpToEur(double AmountEgp) {
    double res = AmountEgp * eur ;
    return res ;
}
double EgpTo ::EgpToGbp(double AmountEgp) {
    double res =AmountEgp * gbp ;
    return res ;
}

int main()
{
    int choice1 ;
    cout<<"to convert from usd enter : 1  "<<endl;
    cin>>choice1;
    if(choice1 == 1)
    {
        int choice2;
       cout<<"enter : 1 to Egp  \nenter : 2 to Eur  \nenter : 3 to Sar  \nenter : 4 to Gbp "<<endl;
       cin >>choice2;
       if(choice2 == 1)
       {
            double AmountOfMoney;
            UsdTo ob1;
            cout<<"enter amount of USD "<<Endl;
            cin>> AmountOfMoney ;
            cout<<"amount of money after converting is ";
            cout<<ob1.UsdToEgp(AmountOfMoney)<<" Egp "<<endl;
       }
       else if(choice2 == 2)
       {
           double AmountOfMoney;
           UsdTo ob1;
           cout<<"enter amount of USD "<<Endl;
           cin>> AmountOfMoney ;
           cout<<"amount of money after converting is ";
           cout<<ob1.UsdToEur(AmountOfMoney)<<" Eur "<<endl;
       }
       else if( choice2 == 3)
       {
           double AmountOfMoney;
           UsdTo ob1;
           cout<<"enter amount of USD "<<Endl;
           cin>> AmountOfMoney ;
           cout<<"amount of money after converting is ";
           cout<<ob1.UsdToSar(AmountOfMoney)<<" Sar "<<endl;
       }
       else
       {
           double AmountOfMoney;
           UsdTo ob1;
           cout<<"enter amount of USD "<<Endl;
           cin>> AmountOfMoney ;
           cout<<"amount of money after converting is ";
           cout<<ob1.UsdToGbp(AmountOfMoney)<<" Gbp "<<endl;
       }
    }

}