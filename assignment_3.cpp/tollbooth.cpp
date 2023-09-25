#include <iostream>
using namespace std;

class tollbooth {
    unsigned int count;
    double amt;

    public:

    tollbooth (): count(0),amt(0.0)
    {
    }

    void payingcar (){
        this->count++;
        this->amt = this->amt+0.5;
    }

    void nopaycar (){
        this->count++;
    }

    void printonconsole(){
        cout<<"The total number of cars passed is "<<this->count<<"."<<endl;
        cout<<"The total Toll amount collected is "<<this->amt<<" dollars."<<endl;   
    }
};

enum {EXIT, PAY_C, NO_PAY_C, PRINT};

int Emenu(){
    int choice;
    cout<<"****************************************"<<endl;
    cout<<"0 : For exit."<<endl;
    cout<<"1 : For paying car."<<endl;
    cout<<"2 : To non-paying car."<<endl;
    cout<<"3 : To display the details."<<endl;
    cin>>choice;
    cout<<"****************************************"<<endl;
    return choice;
} 

int main(){
    class tollbooth t;
    int choice;

    while ((choice = Emenu())!= EXIT)
        {
            switch (choice){
                case PAY_C : t.payingcar();
                             break;

                case NO_PAY_C : t.nopaycar();
                                break;

                case PRINT : t.printonconsole();
                              break; 

                default : cout<<"Please enter valid choice !!!"<<endl;
                            break; 
            }
        }
    cout<<"Thank You !"<<endl;

    return 0;
}