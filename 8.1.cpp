#include<iostream>
using namespace std;

class publication{
    public:
    string title;
    float price;

    void getdata(){
        string t;
        float p;
        cout<<"\nenter the titel::";
        cin>>t;
        cout<<"enter the price::";
        cin>>p;
        title=t;
        price=p;
    }
    void putdata(){
        cout<<"title:-"<<title<<endl;
        cout<<"price:-"<<price<<endl;
    }
};

class book: public publication {
    public:
    int page_count;

    void getdata1(){
        getdata();
        int pc;
        cout<<"enter page count::";
        cin>>pc;
        page_count= pc;
    }
    void putdata1(){
        putdata();
        cout<<"page count:-"<<page_count<<endl;
    }
};

class tape: public publication{
    public:
    float play_time;
    void getdata2(){
        getdata();
        float pt;
        cout<<"playing time::";
        cin>>pt;
        play_time= pt;
    }
    void putdata2(){
        putdata();
        cout<<"play_time:-"<<play_time<<endl;
    }

};
int main(int argc, char const *argv[])
{
    book raj;
    tape babu;
    raj.getdata1();
    babu.getdata2();
    raj.putdata1();
    babu.putdata2();

    return 0;
}
