#include <iostream>
using namespace std;

class Course {
private:
    string instructorName; // Thêm tên giảng viên
    string courseName;
    string courseCode;
    int credits;

public:
    void setInstructorName(string name) { instructorName = name; }
    string getInstructorName() { return instructorName; }

    void setCourseName(string name) { courseName = name; }
    string getCourseName() { return courseName; }

    void setCourseCode(string code) { courseCode = code; }
    string getCourseCode() { return courseCode; }

    void setCredits(int c) {
        if (c > 0) credits = c;
        else credits = 1; 
    }
    int getCredits() { return credits; }

    void displayInfo() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor: " << instructorName << endl;
    }

    // Kiểm tra khóa học có nhiều tín chỉ không
    bool isHighCredit() {
        return credits > 3;
    }

    // Kiểm tra có yêu cầu phòng lab không
    bool isLabRequired() {
        return credits > 4;
    }
};

int main() {
    Course course1;

    // Gán dữ liệu bằng setter
    course1.setCourseName("Object Oriented Programming");
    course1.setCourseCode("CS202");
    course1.setCredits(5);
    course1.setInstructorName("Mr. Phung");

    // Hiển thị thông tin
    course1.displayInfo();

    // Kiểm tra
    if (course1.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }

    if (course1.isLabRequired()) {
        cout << "This course requires a lab." << endl;
    } else {
        cout << "This course doesn't require a lab." << endl;
    }

    return 0;
}
