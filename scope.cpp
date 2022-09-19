#include<iostream>
using namespace std;

int glo =5;
void sum()
{
    int a;
    cout<<glo;
}

int main()
{
    int glo = 20;
    glo =25;

    sum();
    cout<<glo;

 return 0;
}