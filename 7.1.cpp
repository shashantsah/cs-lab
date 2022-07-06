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

