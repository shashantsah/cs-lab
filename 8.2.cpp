#include<iostream>
using namespace std;

void addarrays(int* a , int* b, int *c){
    for (int  i = 0; i < 5; i++)
    {
        *c= *a + *b;
        c++;
        a++;
        b++;
    }
    
}

int main(int argc, char const *argv[])
{
    int A[]={1,2,3,4,5};
    int B[]={1,2,3,4,5};
    int C[5];
    addarrays(A,B,C);
    for (int i = 0; i < 5; i++)
    {
        cout<<C[i]<<" ";
    }

    

    return 0;
}