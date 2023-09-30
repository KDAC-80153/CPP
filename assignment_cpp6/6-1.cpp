#include<iostream>
using namespace std;

class date
{
    private:
    int day;
    int month;
    int year;

    public:
    date()// default
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    date(int day, int month, int year)// parameter constr
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getDay()
    {
        return day;
    }
    void setday(int day)
    {
        this->day=day;
    }
    int getMonth()
    {
        return month;
    }
    void setmonth(int month)
    {
        this->month=month;

    }
    int getYear()
    {
        return year;
    }
    void setyear(int year)
    {
        this->year=year;
    }
    void printdate()
    {
        cout<<day<<"/"<<month<<"/"<<year;
    } 
    void acceptdate()
    {
        cout<<"Enter the date: ";
        cin>>this->day;
        cout<<"enter the month: ";
        cin>>this->month;
        cout<<"enter the year: ";
        cin>>this->year;
    }
    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        return false;
    }
      
};

class employee
{
private:
    int empid;
    string name; 
    string dept;
    double salary;
    date doj; 
public:
    employee()
    {
        this->empid = 0;
        this->salary = 0;
        this->dept="";
    }

    employee(int empid, string dept, double salary, int day, int month, int year) : doj(day, month, year) 
    {
        this->empid = empid;
        this->salary = salary;
        this->dept=dept;
    }
    int getId()
    {
        return empid;
    }
    void setId(int empid)
    {
        this->empid=empid;
    }
 
    float getSal()
    {
        return salary;
    }
    void setSal()
    {
        this->salary=salary;
    }
    string getDept()
    {
        return dept;
    }
    void setDept()
    {
        this->dept=dept;
    }
    date getDoj()
    {
        return doj;
    }
    void setDoj(date doj)
    {
        this->doj=doj;
    }
    void display()
    {
        cout<<"**************"<<endl;
        cout << "Empid = " << this->empid << endl;
        cout << "Salary = " << this->salary << endl;
        cout << "Dept Name = " << this->dept << endl;
        cout << "Date of Joining = "<<endl;
        this->doj.printdate();
    }

    void accept()
    {
        cout << "Enter the empid = ";
        cin >> this->empid;
        cout << "Enter the name = ";
        cin >> this->name;
        cout << "Enter the salary = ";
        cin >> this->salary;
        cout << "Dept Name" << endl;
        cin >> this->dept;
        cout << "Enter the joining date below : " << endl;
        this->doj.acceptdate();
    }
};

class person 
{
    private:
    string name;
    string address;
    date dob;
    public:
    person()
    {
        this->name="";
        this->address="";

    }
    person(string name, string address, int day, int month, int year)
    : dob(day, month, year)
    {
        this->address=address;
        this->name=name;
    }

    string getName()
    {
        return name;
    }
    void setName(string _name)
    {
        name = _name;
    }
    string getAdd()
    {
        return address;
    }
    void setAdd(string address)
    {
        this->address = address;
    }
    date getDOB()
    {
        return dob;
    }
    void setDOB(date dob)
    {
        this->dob = dob;
    }
    void printPerson()
    {
        cout << "PName = " << this->name << endl;
        cout<<"PADDRESS = "<<this->address<<endl;
        cout << "Date of birth = "<<endl;
        this->dob.printdate();
    }
    void acceptperson()
    {
        cout<<"enter the Pname:";
        cin>>name;
        cout<<"enter the Paddress: ";
        cin>>address;
        cout<<"enter dob"<<endl;
        this->dob.acceptdate();
    }
};


int main()
{
    employee e1;
    person p1;
    e1.accept();
    p1.acceptperson();
    e1.display();
    p1.printPerson();
    
   
    return 0;
}