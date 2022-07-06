#include <iostream>
 
using namespace std;
 
class Fraction
{
    public:
    int num;
    int den;
 
    int conv(char a)
    {
        int n = a - '0';
        return n;
    }
 
 
    void input()
    {
        int quit = 0;
        do
        {
            int i=0;
            num=0;
            den=0;
            string s;
            cin>>s;
            for(;i<s.length();i++)
            {
                if(s[i] == '/')
                {
                    i++;
                    break;
                }
                num = num * 10 + conv(s[i]);
            }
 
            for(;i<s.length();i++)
            {
                if(s[i] == '\0')
                {
                    break;
                }
                den = den * 10 + conv(s[i]);
            }
            if(den==0)
            {
                cout<<"0 is denominator is not allowed... kindly select a different fraction"<<endl;
                quit=0;
            }
            else{quit=1;}
        }while(quit==0);
 
 
    }
    void output()
    {
        cout<<num<<"/"<<den<<endl;
    }
 
    int gcd(int n1,int n2)
    {
        int HCF = 1;
        for(int i = 1; i <= n1 ; i++)
        {
            if((n1 % i == 0) && (n2 % i == 0))
            {
                HCF=i;
            }
        }
    return HCF;
    }
 
    void add(Fraction f1,Fraction f2)
    {
        num=(f1.num)*(f2.den)+(f2.num)*(f1.den);
        den=(f1.den)*(f2.den);
        int c=gcd(num,den);
        num/=c;
        den/=c;
    }
};
 
int main()
{
    int k=1;
    do
    {
        Fraction f1,f2,f3;
        cout<<"Enter 1st fraction : ";
        f1.input();
        cout<<"Enter 2nd fraction : ";
        f2.input();
        f3.add(f1,f2);
        cout<<"Sum is : ";
        f3.output();
        cout<<"Press '1' if you want to continue : ";
        cin>>k;
        cout<<k<<endl;
    }while(k==1);
return 0;
}