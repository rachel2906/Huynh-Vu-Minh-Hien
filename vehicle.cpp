#include<iostream>
using namespace std;

class Vehicle{
    private:
    string type; // Loại phương tiện
    int maxSpeed; // Tốc độ tối đa
    string color; // Màu sắc
    int capacity; // Sức chứa
    double price; // Giá 
    bool isElectric; // Kiểm tra xem có phải xe điện hay không
    string ownerName; // Tên chủ sở hữu
    string licensePlate; // Biển số xe

    public:
    Vehicle(){
        type="Unknown";
        maxSpeed=0;
        color="Unknown";
        capacity=0;
        price=0;
        isElectric=false;
        ownerName="Unknown";
        licensePlate="Unknown";
    }

    Vehicle(string ty, int max, string col, int cap, double pr, bool electric, string own, string li){
        type=ty;
        maxSpeed=max;
        color=col;
        capacity=cap;
        price=pr;
        isElectric=electric;
        ownerName=own;
        licensePlate=li;
    }

    // Setter và Getter
    void setType(string type){
        this->type=type;
    }
    string getType(){
        return type;
    }

    void setMaxSpeed(int maxSpeed){
        this->maxSpeed=maxSpeed;
    }
    int getMaxSpeed(){
        return maxSpeed;
    }

    void setColor(string color){
        this->color=color;
    }
    string getColor(){
        return color;
    }

    void setCapacity(int capacity){
        this->capacity=capacity;
    }
    int getCapacity(){
        return capacity;
    }

    void setPrice(double price){
        this->price=price;
    }
    double getPrice(){
        return price;
    }

    void setIsElectric(bool isElectric){
        this->isElectric=isElectric;
    }
    bool getIsElectric(){
        return isElectric;
    }

    void setOwnerName(string ownerName){
        this->ownerName=ownerName;
    }
    string getOwnerName(){
        return ownerName;
    }

    void setLicensePlate(string licensePlate){
        this->licensePlate=licensePlate;
    } 
    string getLicensePlate(){
        return licensePlate; 
    }

    // Methods
    void accelerate() {
        cout << type << " is accelerating!" << endl;
    }

    void displayInfo(){
        cout << "Type: " << type << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Color: " << color << endl;
        cout << "Capacity: " << capacity << " people" << endl;
        cout << "Price: $" << price << endl;
        cout << "Is Electric: " << (isElectric ? "Yes" : "No") << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "License Plate: " << licensePlate << endl;
        cout << "------------------" << endl;
    }

    void applyDiscount(double percent) {
        price = price * (1 - percent/100.0);
    }

    void changeOwner(string newOwner) {
        ownerName = newOwner;
    }
};

int main() {
    Vehicle car("Car",200,"Red",5,30000,false,"Alice","51A-12345");
    car.accelerate();
    car.displayInfo();

    Vehicle bike("Motorbike",120,"Black",2,1500,false,"Bob","59B-67890");
    bike.displayInfo();
    bike.applyDiscount(10);
    cout << "After discount: " << bike.getPrice() << endl;

    Vehicle eCar("Electric Car",180,"White",5,40000,true,"Charlie","30E-88888");
    eCar.displayInfo();
    eCar.changeOwner("David");
    cout << "New owner: " << eCar.getOwnerName() << endl;

    return 0;
}
