#include<iostream>
#include<string>
using namespace std;

int main()
{
    char u[200]="abc@gmail.com",p[200]="12345";

    char u1[200],p1[200];

    cout<<"enter username\n";
    cin>>u1;
    cout<<"enter passsword\n";
    cin>>p1;

    if( strcmp (u,u1)==0 && strcmp(p,p1)==0)
{
    cout<<"login succesfull";

}
else{
cout<<"wrong username or password";

}
    return 0;
}
