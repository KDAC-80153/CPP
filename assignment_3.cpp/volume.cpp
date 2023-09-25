#include <iostream>
using namespace std;

class volume {

int length;
int breadth;
int width;

public:
volume (){
    this->length = 1;
    this->breadth = 1;
    this->width = 1;

}

// volume (int length, int breadth, int width){
//     this->length = length;
//     this->length = breadth;
//     this->length = width;
// }

void inputdata (){
    cout<<"Enter the length, width and height (in metres) : ";
    cin>>length>>breadth>>width; 
}

void displaydata (){
    cout<<"The length,breadth and the width of the box is :"<<length<<"m, "<<breadth<<"m and "<<width<<"m"<<endl;
}

void volume1(){
    cout<<"The volume of the box is : "<<length*breadth*width<<" square metres"<<endl;
}
};
enum Emenu{EXIT, INPUT_DATA, DISPLAY_DATA, VOLUME};


Emenu menu(){
    int choice;
    cout<<"************************************"<<endl;
    cout<<"0 : To exit." <<endl;
    cout<<"1 : To input the dimensions." <<endl;
    cout<<"2 : To dislay the dimensions." <<endl;
    cout<<"3 : To display the volume." <<endl;
    cin>>choice;
    cout<<"************************************"<<endl;
    return Emenu(choice);
}

int main (){
    class volume v;
    int choice;

    while ((choice = menu())!=EXIT){
        switch (choice){
            case INPUT_DATA : v.inputdata();
                              break;

            case DISPLAY_DATA : v.displaydata();
                                break;

            case VOLUME : v.volume1();
                          break;         

         }
    }

    cout<<"Thank You !!"<<endl;

    return 0;
}