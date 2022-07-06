//Create a class called Time that maintains the time in 11:59:59 format. Include appropriate datamembers, constructors, and appropriate member functions in the class to set the time, update the time, etc. 
 
 
#include <iostream> 
using namespace std; 
class Time{ 
public: 
int h; 
int m; 
int s; 
Time(){ 
h=0; 
m=0; 
s=0; 
} 
Time(int ah,int am,int as){ 
h=ah%12; 
m=am%60; 
s=as%60; 
} 
void updatetime(int ah,int am,int as){ h=ah%12; 
m=am%60; 
s=as%60; 
} 
void Printtime(){ 
if(h<10){ 
cout<<0; 
} 
cout<<h<<":"; 
if(m<10){ 
cout<<0;
} 
cout<<m<<":"; 
if(s<10){ 
cout<<0; 
} 
cout<<s<<endl; 
} 
}; 
int main(){ 
    int a, b, c,d,e,f;
    char ans;
    cout<< "Enter your time";
    cin >> a>>b>>c;
Time time1(a,b,c); 
time1.Printtime();
 
    cout <<" do you want to update the time (y/n)";
    cin>> ans;
    if ( ans== 'y')
    {
        cout<< "enter the new time to update";
        cin>>d>>e>>f;
 
 
time1.updatetime(d,e,f); 
time1.Printtime(); 
}
return 0; 
}
===========================================
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
===========================================
#include <iostream>
using namespace std;
class tollbooth
{
    int a, b;
public:
    tollbooth()
    {
    a = 0;
    b = 0;
    }
    tollbooth(int a, int b)
    {
    a = a;
    b = b;
    }
    void payingCar()
    {
        a++;
        b = b + 50;
    }
    void nopayCar()
    {
    a++;
    }
    void display()
    {
        cout << " Total number of cars = " << a << endl;
        cout << "Total amount of money = " << b << endl;
    }
};
int main()
{
    tollbooth obj;
    while (true)
    {
        cout << "Press 1 to add nonpaying car" << endl;
        cout << "Press 2 to add paying car" << endl;
        cout << "Press 0 to display and exit" << endl;
        int input;
        cin >> input;
        if (input == 0)
        {
            obj.display();
            break;
        }
        if (input == 1)
        {
            obj.nopayCar();
        }
        if (input == 2)
        {
            obj.payingCar();
        }
 
 }
 return 0;
}