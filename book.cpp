#include<iostream>
using namespace std;
class Book{
    private:
    string title;
    string author;
    public:
    Book(string t, string au){
        title=t;
        author=au;
    }
    void displayInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
    }
};
int main () {
    Book b1("C++ Programming", "Bjarne Strousrup");
    b1.displayInfo();
    return 0;
}
