#include<iostream>

using namespace std;

class Person {
	string name;

    
public:
    Person(string n) {
            name = n;
        }
    virtual ~Person() {

        }
    string getName()const {
            return name;
        }
    virtual void showName() {
            cout << "I'm a Person, my name is " << getName();
        }
};

class Employee : virtual Person
{
    int salary;

public:
    Employee(string n, int s) : Person(n), salary(s) {};
    virtual ~Employee() {

    }
    int getSalary() const {
        return salary;
    }
    void setSalary(int s) {
        salary = s;
    }
    virtual void showName() {
        cout << "I'm an employee, my name is " << getName();
    }

};

class Student : virtual public Person
{

    float score;

public:
    Student(string n, float sc): Person(n), score(sc){}

    virtual ~Student(){}

    float getScore()const {
        return score;
    }
    void setScore(float sc) {
        score = sc;
    }

    virtual void showName() {
        cout << "I'm an student, my name is " << getName();
    }
};

class Scholar : public Employee, public Student
{
    int scholarshipYearDuration;

public:
    Scholar(string n, int s, float sc, int sYD) : Person(n), Employee(n, s), Student(n, sc), scholarshipYearDuration(sYD)
    {

    }
    virtual ~Scholar(){}
    int getScholarshipDuration() const {
        return scholarshipYearDuration;
    }
    void setScholarshipDuration(int sD) {
        scholarshipYearDuration = sD;
    }
    virtual void showName() {
        cout << "I'm an scholar, my name is " << getName();
    }

};

int main()
{
    Scholar pedro("Jaime",1000,7.0,2);
    pedro.showName();
    cout<< ", Salary: "
        << pedro.getSalary()<<", Score: "
        << pedro.getScore()<<", Years of Scholarship: "
        << pedro.getScholarshipDuration()<<endl;

    Person *pPerson=nullptr;
    Student *pStudent=nullptr;
    Scholar *pScholar=nullptr;

    //Using Person pointer
    pPerson = new Student("Pedro",7.0f);
    pPerson->showName();// will use student's showName member
    delete pPerson;
    pPerson=nullptr;

    //Using Student pointer
    pStudent = new Scholar("Alejandra",800,9.3f,2);
    pStudent->showName(); // Will use Scholar's showName member
    delete pStudent;
    pStudent=nullptr;

    //Using Scholar pointer
    pScholar = new Scholar("Carlos",1200,7.3f,1);
    pScholar->showName(); // Will use Scholar's showName member
    delete pScholar;
    pScholar=nullptr;

    return 0;
}




