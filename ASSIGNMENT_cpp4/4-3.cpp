#include <iostream>
using namespace std;

class Matrix{
    int rows;
    int columns;
    int **m;

    public:

    Matrix (){
    }

    Matrix (int rows, int columns){
        this->rows = rows;
        this->columns = columns;
        this->m = new int*[rows];

        for (int i = 0; i<rows; i++){
            m[i] = new int[columns];
        }
    }

    void accept (){
        cout<<"Input the elements of the matrix of size "<<this->rows<<" * "<<this->columns<<"."<<endl;
        for (int r = 0; r<rows; r++){
            for (int c = 0; c<columns; c++){
                cout<<"maxtrix1["<<r<<"]["<<c<<"] : ";
                cin>>m[r][c]; 
            }
        }
    }

    void print (){
        for (int r = 0; r<this->rows; r++){
            for (int c = 0; c<this->columns; c++){
                cout<<m[r][c]<<"    ";
            }
            cout<<endl;
        }
    }


    void add (Matrix *m1, Matrix *m2){
        for (int r = 0; r<rows; r++){
            for (int c = 0; c<columns; c++){
                this->m[r][c] = m1->m[r][c] + m2->m[r][c];
            }
        }
    }


    void sub (Matrix *m1, Matrix *m2){
        for (int r = 0; r<rows; r++){
            for (int c = 0; c<columns; c++){
                this->m[r][c] = m1->m[r][c] - m2->m[r][c];
            }
        }
    }


    void multiply (Matrix *m1, Matrix *m2){
        for (int r = 0; r<rows; r++){
            for (int c = 0; c<columns; c++){
                this->m[r][c] = 0;
                for (int i = 0; i<r; i++){
                    this->m[r][c] += m1->m[r][i] * m1->m[i][c];
                } 
            }
        }
    }

    void transpose (Matrix m1){
        for (int r = 0; r<rows; r++){
            for (int c = 0; c<columns; c++){
                this->m[r][c] = m1.m[c][r];
            }
        }
    }

    ~Matrix(){
        for (int i = 0; i<rows; i++){
            delete[] m[i];
        }
        delete[] m;
    }
};

enum {EXIT,TRANSPOSE,ADD,SUBTRACT,MULTIPLY};

int Emenu (){
    int choice;
    cout<<"***************************************"<<endl;
    cout<<"0 : To exit."<<endl;
    cout<<"1 : To find transpose"<<endl;
    cout<<"2 : To add matrices."<<endl;
    cout<<"3 : To subtract matrices."<<endl;
    cout<<"4 : To mutiply matrices."<<endl;
    cin>>choice;
    cout<<"***************************************"<<endl;

    return choice;
}


int main (){
    int r,c,choice;
    cout<<"Enter the rows for the matrix : ";
    cin>>r;
    cout<<"Enter the columns for the matrix : ";
    cin>>c;
    
    class Matrix m1(r,c);
    class Matrix m2(r,c);
    class Matrix m3(r,c);

    while ((choice = Emenu()) != EXIT){
        switch (choice){

            case TRANSPOSE :m1.accept();
                            m1.print();
                            cout<<endl;
                            m3.transpose(m1);
                            m3.print();    
                            break;

            case ADD : m1.accept();
                        m2.accept();
                        m3.add(&m1,&m2);
                        m3.print();
                        break;

            case SUBTRACT : m1.accept();
                            m2.accept();
                            m3.sub(&m1,&m2);
                            m3.print();
                            break;

            case MULTIPLY : m1.accept();
                            m2.accept();
                            m3.multiply(&m1,&m2);
                            m3.print();
                            break;
        }
    }
    return 0;
}