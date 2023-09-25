#include "./menu.h"
#include <iostream>
using namespace std;


Emenu menu(){
    int choice;
    cout<<"************************************"<<endl;
    cout<<"0 : To exit." <<endl;
    cout<<"1 : To input the dimensions." <<endl;
    cout<<"2 : To display the volume." <<endl;
    cin>>choice;
    cout<<"************************************"<<endl;
    return Emenu(choice);
}