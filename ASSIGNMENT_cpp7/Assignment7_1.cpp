#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int get_day()
    {
        return day;
    }
    void set_day(int day)

    {
        this->day = day;
    }
    int get_month()
    {
        return month;
    }
    void set_month(int month)

    {
        this->month = month;
    }
    int get_year()
    {
        return year;
    }
    void set_year(int year)

    {
        this->year = year;
    }
    void accept()
    {
        cout << "Enter day = " << endl;
        cin >> this->day;
        cout << "Enter month = " << endl;
        cin >> this->month;
        cout << "Enter year = " << endl;
        cin >> this->year;
    }
    void display()
    {
        cout << "Date = " << this->day << " / " << this->month << " / " << this->year << endl;
    }
    // bool is_a_leap_year()
    //{

    //}
};

class Person
{
private:
    string name;
    string address;
    Date birth_date;

public:
    Person()
    {
        string name = "xxx";
        string address = "xxx";
    }
    Person(string name, string address, int day, int month, int year)
    {
        this->name = name;
        this->address = address;
    }

    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        this->name = name;
    }

    string get_address()
    {
        return address;
    }
    void set_address(string address)
    {
        this->address = address;
    }

    Date get_birth_date()
    {
        return birth_date;
    }
    void set_birth_date(Date birth_date)
    {
        this->birth_date = birth_date;
    }
    virtual void accept()
    {    
        cout << "Enter name = " << endl;
        getchar();
        getline(cin, this->name);
        cout << "Enter address = " << endl;
        getline(cin, this->address);
        birth_date.accept();
    }
    virtual void display()
    {
        cout << "Person detail = " << this->name <<endl;
        cout<<"Adresss = " <<this->address << endl;
        cout << "Birth Date = " << endl;
        this->birth_date.display();
    }
};

class Employee : public Person
{
private:
    int empid;
    string dept;
    float salary;
    Date joining_date;

public:
    Employee()
    {
        this->empid = 0;
        this->dept = "xxx";
        this->salary = 0;
    }

    Employee(int empid, string dept, float salary, int day, int month, int year) : joining_date(day, month, year)
    {
        this->empid = empid;
        this->dept = dept;
        this->salary = salary;
    }
    int get_empid()
    {
        return empid;
    }
    void set_empid(int empid)
    {
        this->empid = empid;
    }

    float get_salary()
    {
        return salary;
    }
    void set_salary(float salary)
    {
        this->salary = salary;
    }

    string get_dept()
    {
        return dept;
    }
    void set_dept(string dept)
    {
        this->dept = dept;
    }
    Date get_joining_date()
    {
        return joining_date;
    }
    void set_joining_date(Date joining_date)

    {
        this->joining_date = joining_date;
    }

    void accept()
    {
        cout << "**********************************" << endl;
        cout << "Enter empid = " << endl;
        cin >> this->empid;
        cout << "Enter dept = " << endl;
        cin>>this->dept;
        cout << "Enter salary = " << endl;
        cin >> this->salary;
        cout << "Enter Joing Date = " << endl;
        this->joining_date.accept();
        Person::accept();
    }
    void display()
    {
        cout << "**********************************" << endl;
        cout << "Empid = " << this->empid << endl;
        cout << "Salary = " << this->salary << endl;
        cout << "Dept = " << this->dept << endl;
        cout << " Joing Date = " << endl;
        this->joining_date.display();
        Person::display();
        cout << "**********************************" << endl;
        // cout << "Date of joining = " << endl;
        
    }
};
int main()
{
//     Date d1;
//     Person p1;
//    p1.acceptPerson();
//    p1.displayPerson();
//     Employee e1;
//     e1.acceptEmployee();
//     e1.displayEmployee();




 Person *p1 = new Employee();
 p1->accept();
 p1->display();

 delete p1;
    return 0;
}