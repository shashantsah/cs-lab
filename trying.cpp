#include <iostream>
using namespace std;
class publication {
public:
string title;
float price;
void getdata(){
    string t;
float p;
    cout<<"Enter title:";
    cin>>t;
    cout<<"Enter price:";
    cin>>p;
    title=t;
    price=p;
}
void putdata(){
    cout<<"Title:"<<title<<endl;
    cout<<"Price:"<<price<<endl;
}
};

class book: public publication{
    public:
    int page_count;

    void getdata1(){
        int pc;
       getdata();
       cout<<"Enter page count:";
       cin>>pc;
       page_count=pc;
    }

    void putdata1(){
        putdata();
        cout<<"Page count:"<<page_count<<endl;
    }
};

class tape: public publication{
    public:
    float play_time;

    void getdata2(){
         float pt;
       getdata();
       cout<<"Enter play time:";
       cin>>pt;
       play_time=pt;
    }

    void putdata2(){
        putdata();
        cout<<"play time:"<<play_time<<endl;
    }
};

int main()
{
    book economics;
    tape ranjha;
    economics.getdata1();
    ranjha.getdata2();
    economics.putdata1();

    ranjha.putdata2();
}