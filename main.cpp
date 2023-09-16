#include<bits/stdc++.h>
#define ll long long
#define Endl endl
using namespace std;
class CurrencyConverter
{
protected:
    double  usd ,eur ,  egp , gbp , sar ;
};
class UsdTo:public CurrencyConverter
{
public:
    UsdTo();
    double UsdToEgp(double AmountOfUsd);
    double UsdToSar(double AmountOfUsd);
    double UsdToGbp(double AmountOfUsd);
    double UsdToEur(double AmountOfUsd);
};
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