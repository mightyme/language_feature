#include <iostream>
#include <string>
//#include <string.h>
#include <cstring>

using namespace std;

class A {
public:
    const string& getName(void) const;
    A(string const &name, char const *from, int salary= 3000): salary(salary)
    {
        this->name = name;
        strncpy(this->from, from, sizeof(this->from));
    }
    void outPut(void) const
    {
        cout << "Department: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
    char * getFrom(void) /*const*/
    {
        return from;
    }
    int getSlary(void) const
    {
        return salary;
    }
private:
    string name;
    static const int ID = 0x0001;
    const int salary;
    char from[50];
};

const string& A::getName(void) const
{
    return name;
}

int main(int argc, char **argv)
{
    char *from = NULL;
    A qudao("qudao","WHUT", 20000);
    A xiaohua("xiaohua", "HUST");
    const string &tmp = qudao.getName();
    cout << tmp << endl;
    qudao.outPut();
    from = qudao.getFrom();
    cout << from << ": "<< qudao.getSlary() << endl;
    xiaohua.outPut();
    from = xiaohua.getFrom();
    cout << from << endl;
    return 0;
}
