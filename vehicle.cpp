#include<iostream>
using namespace std;
class Vehicle{
    private:
    string type; // Loại phương tiện
    int maxSpeed; // Tốc độ tối đa
    string color; // Màu sắc
    int capacity; // Sức chứa
    double price; // Giá 
    bool isElectric; // Có phải xe điện hay không
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
    Vehicle (string ty, int max, string col, int cap, double pr, bool electric, string own, string li){
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

    int getPrice(){
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
    void displayInfo(){
        cout<<"Type: "<<type<<endl;
        cout<<"MaxSpeed"<<maxSpeed<<endl;
        cout<<""
    }
};