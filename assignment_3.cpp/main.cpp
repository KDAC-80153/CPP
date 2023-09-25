#include "./cylinder.h"
#include "./menu.h"

int main (){
    cylinder c;
    Emenu choice;
    while ((choice = menu()) != EXIT)

    {
        switch (choice)
            {
            case INPUT_DATA : c.acceptvalues();
                          break;

            case DISPLAY_VOLUME : c.printvolume();
                              break;
        
            default:    cout << "Wrong choice entered ...:(" << endl;
                    break;
            }
    }
    cout << "Thank You!!" << endl;
    return 0;
}
