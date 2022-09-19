#include<iostream>
using namespace std;
int  main()
{
    int age;
    cout<< "tell me your age";
    cin>>age;

    // if (age<18)
    // {
    //     cout<<"your not eligible for exam";        
        
    // }
    // else if(age==18)
    // {
    //     cout<<"your fillup the exam form";
    // }
    // else if(age>18)
    // {
    //     cout<<"your can appeqar for exam";
    // }
    switch (age)
    {
    case 18:
    cout<<"your eighteen ";
        break;
    case 20:
    cout<<"your eighteen plus ";
        break;
    case 17:
    cout<<"your teen ";
        break;
    
    default:
        break;
    }
    cout<<"***************you are nothing********************";
}