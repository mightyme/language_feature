#include <vector>
#include <iostream>
using namespace std;

class point {
private:
    const char *name;
public:
    point(const point &a) {
        cout << "copy construction, a.name is: " << a.name << endl;
        name = a.name;
    }
    point (const char *name) {
        cout << "construction of name: " << name << endl;
        this->name = name;
    }
    ~point() {
        cout << "destruction of name: " << name << endl;
    }
};

int main()
{
    point a("Tom");
    point b("John");
    vector <point> v_p;
    cout << "v_p's size is: " << v_p.size() << " capacity is:" << v_p.capacity() << endl;
    v_p.push_back(a);
    cout << "after push a, v_p's size is: " << v_p.size() << " capacity is:" << v_p.capacity() << endl;
    v_p.push_back(b);
    cout << "after push b, v_p's size is: " << v_p.size() << " capacity is:" << v_p.capacity() << endl;
    return 0;
}
