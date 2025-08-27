#include<iostream>
#include<cmath>
using namespace std;

class Circle {
private:
    double radius;   // Thêm bán kính
    string color;    // Thêm màu sắc của hình tròn

public:
    // Setter cho bán kính
    void setRadius(double r) {
        if (r > 0)
            radius = r;
        else
            radius = 0; // Nếu bán kính không hợp lệ thì gán 0
    }

    // Getter cho bán kính
    double getRadius() {
        return radius;
    }

    // Setter cho màu
    void setColor(string c) {
        color = c;
    }

    // Getter cho màu
    string getColor() {
        return color;
    }

    // Hàm kiểm tra bán kính có hợp lệ hay không
    bool isValidRadius() {
        return radius > 0;
    }

    // Hàm tính chu vi
    double circumference() {
        return 2 * M_PI * radius;
    }

    // Hàm tính diện tích
    double area() {
        return M_PI * radius * radius;
    }

    // Hàm hiển thị màu
    void displayColor() {
        cout << "Mau cua hinh tron la: " << color << endl;
    }
};

int main() {
    Circle c1;

    c1.setRadius(5.0);       // Gán bán kính
    c1.setColor("Do");       // Gán màu "Đỏ"

    if (c1.isValidRadius()) {
        cout << "Ban kinh: " << c1.getRadius() << endl;
        cout << "Chu vi: " << c1.circumference() << endl;
        cout << "Dien tich: " << c1.area() << endl;
        c1.displayColor();   // Hiển thị màu
    } else {
        cout << "Ban kinh khong hop le!" << endl;
    }

    return 0;
}
