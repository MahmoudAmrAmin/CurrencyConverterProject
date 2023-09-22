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
//class EurTo
class EurTo :public  CurrencyConverter
{
public:
    EurTo();
    double EurToUsd(double AmountEur);
    double EurToSar(double AmountEur);
    double EurToGbp(double AmountEur);
    double EurToEgp(double AmountEur);
};

//class GbpTo

class GbpTo : public CurrencyConverter
{
public:
    GbpTo();
    double GbpToEur (double AmountOfGbp);
    double GbpToEgp (double AmountOfGbp);
    double GbpToUsd (double & AmountOfGbp);
    double GbpToSar (double AmountOfGbp);
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

// function members EurTo

EurTo::EurTo() {
    eur = 1  , egp =33.000058 ,sar = 4.0049786 , gbp = 0.86180361 ,usd = 1.0679609 ;
}
double EurTo ::EurToEgp(double AmountEur) {
    double res = (AmountEur * egp );
    return res ;
}
double EurTo ::EurToGbp(double AmountEur) {
    double res = (AmountEur * gbp );
    return res ;
}
double EurTo ::EurToSar(double AmountEur) {
    double res = (AmountEur * sar );
    return res ;
}
double EurTo ::EurToUsd(double AmountEur) {
    double res = (AmountEur * usd );
    return res ;
}

// members functions of GbpTo class

GbpTo ::GbpTo() {
    gbp =1  ,usd = 1.2265139,sar = 4.6465828 , egp =37.893792, eur = 1.1602676;
}
double GbpTo ::GbpToEgp(double AmountOfGbp) {
    double res = (AmountOfGbp * egp );
    return res ;
}
double GbpTo ::GbpToUsd(double & AmountOfGbp) {
    double res = (AmountOfGbp * usd );
    return res ;
}
double GbpTo ::GbpToEur(double AmountOfGbp) {
    double res = (AmountOfGbp * eur );
    return res ;
}
double GbpTo ::GbpToSar(double AmountOfGbp) {
    double res  (AmountOfGbp * sar );
    return res ;
}

int main()
{
    int choice1 ;
    cout<<"enter 1 to convert from USD "<<Endl;
    cout<<"enter 2 to convert from EGP "<<endl;
    cout<<"enter 3 to convert from GBP "<<Endl;
    cout<<"enter 4 to convert from SAR "<<endl;
    cout<<"enter 5 to convert from EUR "<<Endl;
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
    else if (choice1 == 2)
    {
        int choice2;
        cout<<"enter 1 to convert to USD "<<Endl;
        cout<<"enter 2 to convert to GBP "<<Endl;
        cout<<"enter 3 to convert to SAR "<<endl;
        cout<<"enter 4 to convert to EUR "<<Endl;
        cin >>choice2;
        if(choice2 == 1 )
        {
            EgpTo ob;
            double AmountOfEGP;
            cout<<"enter amount of EGP "<<endl;
            cin>>AmountOfEGP;
            cout<<"amount of money after converting is :  "<<ob.EgpToUsd(AmountOfEGP)<<" USD "<<Endl;
        }
        else if(choice2 == 2 )
        {
            EgpTo ob;
            double AmountOfEGP;
            cout<<"enter amount of EGP "<<endl;
            cin>>AmountOfEGP;
            cout<<"amount of money after converting is :  "<<ob.EgpToGbp(AmountOfEGP)<<" GBP "<<Endl;
        }
        else if (choice2 == 3)
        {
            EgpTo ob;
            double AmountOfEGP;
            cout<<"enter amount of EGP "<<endl;
            cin>>AmountOfEGP;
            cout<<"amount of money after converting is :  "<<ob.EgpToSar(AmountOfEGP)<<" SAR "<<Endl;
        }
        else if (choice2 == 4)
        {
            EgpTo ob;
            double AmountOfEGP;
            cout<<"enter amount of EGP "<<endl;
            cin>>AmountOfEGP;
            cout<<"amount of money after converting is :  "<<ob.EgpToEur(AmountOfEGP)<<" EUR "<<Endl;
        }
        else
        {
            cout<<"invalid choice please check choices "<<endl;
        }
    }
    else if(choice1 == 3)
    {
        int choice2;
        cout<<"enter 1 to convert to USD "<<Endl;
        cout<<"enter 2 to convert to EGP "<<Endl;
        cout<<"enter 3 to convert to SAR "<<endl;
        cout<<"enter 4 to convert to EUR "<<Endl;
        cin>> choice2;
        if(choice2 == 1)
        {
            GbpTo ob;
            double  AmountOfGbp;
            cout<<"enter amount of GBP "<<endl;
            cin>>AmountOfGbp;
            cout<<"amount of money after converting is :  "<<setprecision(2)<<fixed<<ob.GbpToUsd(AmountOfGbp)<<" USD "<<endl;
        }
        else if(choice2 == 2)
        {
            GbpTo ob;
            double  AmountOfGbp;
            cout<<"enter amount of GBP "<<endl;
            cin>>AmountOfGbp;
            cout<<"amount of money after converting is :  "<<setprecision(2)<<fixed<<ob.GbpToEgp(AmountOfGbp)<<" EGP "<<endl;
        }
        else if(choice2 == 3)
        {
            GbpTo ob;
            double  AmountOfGbp;
            cout<<"enter amount of GBP "<<endl;
            cin>>AmountOfGbp;
            cout<<"amount of money after converting is :  "<<setprecision(2)<<fixed<<ob.GbpToSar(AmountOfGbp)<<" SAR "<<endl;
        }
        else if(choice2 == 4)
        {
            GbpTo ob;
            double  AmountOfGbp;
            cout<<"enter amount of GBP "<<endl;
            cin>>AmountOfGbp;
            cout<<"amount of money after converting is :  "<<setprecision(2)<<fixed<<ob.GbpToEur(AmountOfGbp)<<" EUR "<<endl;
        }
        else
        {
            cout<<"invalid choice please check choices "<<endl;
        }
    }
}