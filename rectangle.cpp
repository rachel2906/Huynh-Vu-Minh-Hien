#include<iostream>
using namespace std;
class Rectangle{
    private:
    int width;
    int height;
    public:
    Rectangle(int w, int h){
        width=w;
        height=h;
    }
    int calculateArea(){
        return width*height;
    }
};
int main () {
    Rectangle r1(5,10);
    cout<<"Area: "<<r1.calculateArea();
    return 0;
}