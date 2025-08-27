#include<iostream>
using namespace std;
class Car{
    private:
    int year;
    string brand;
    public:
    Car(int y, string b){
        year=y;
        brand=b;
    }
    void displayInfo(){
        cout<<"Year: "<<year<<endl;
        cout<<"Brand: "<<brand<<endl;
    }
};
int main () {
    Car car1(2020, "Toyota");
    car1.displayInfo();
    return 0;
}