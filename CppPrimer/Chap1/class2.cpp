#include <iostream>

using namespace std;

class Person {
friend    istream &read(istream &is, Person &per);
friend    ostream &print(ostream &os, const Person &per);

public:
    Person() = default;
    Person(const string &person_name, const string &address) : name(person_name), addr(address) {}
    Person(istream &is) {
        read(is, *this);
    }
    string get_name() const {return name;}
    string get_addr() const {return addr;}
private:
    string name;
    string addr;
};

istream &read(istream &is, Person &per) {
    is >> per.name >> per.addr;
    return is;
}
ostream &print(ostream &os, const Person &per) {
    os << "name is " << per.name << ", addr is " << per.addr << endl;
    return os;
}


int main() {


    return 0;
}
/*7.36*/
struct X {
    X (int i, int j) : base(i), rem(base % j) {}
    int base, rem;
};
