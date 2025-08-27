#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
    string phoneNumber;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }

    void setAge(int a) {
        if (a >= 0) age = a;
        else age = 0; 
    }
    int getAge() { return age; }

    void setAddress(string addr) { address = addr; }
    string getAddress() { return address; }

    void setPhoneNumber(string phone) { phoneNumber = phone; }
    string getPhoneNumber() { return phoneNumber; }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone number: " << phoneNumber << endl;
    }

    bool isAdult() {
        return age >= 18;
    }

    // Cập nhật địa chỉ mới
    void move(string newAddress) {
        address = newAddress;
        cout << "Address updated to: " << address << endl;
    }

    // In ra lời chào
    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    Person person1;

    person1.setName("John Doe");
    person1.setAge(20);
    person1.setAddress("123 Main St");
    person1.setPhoneNumber("0904638827");

    // Hiển thị thông tin
    person1.displayInfo();

    // Kiểm tra người lớn
    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }

    // Gọi lời chào
    person1.greet();

    // Cập nhật địa chỉ mới
    person1.move("11B Dan Chu Street");

    return 0;
}
