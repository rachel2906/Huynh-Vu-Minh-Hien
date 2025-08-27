#include <iostream>
using namespace std;

class Account {
private:
    string ownerName;      // Thêm tên chủ tài khoản
    string accountNumber;  // Số tài khoản
    double balance;        // Số dư

    const double minBalance = 100000; // Số dư tối thiểu

public:
    Account(string owner, string accNum, double bal) {
        ownerName = owner;
        accountNumber = accNum;
        if (bal >= minBalance) 
            balance = bal;
        else 
            balance = minBalance; 
    }

    void setOwnerName(string owner) {
        ownerName = owner;
    }
    string getOwnerName() {
        return ownerName;
    }
    void setAccountNumber(string accNum) {
        accountNumber = accNum;
    }
    string getAccountNumber() {
        return accountNumber;
    }
    double getBalance() {
        return balance;
    }

    // Nạp tiền
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " VND" << endl;
    }

    // Kiểm tra số dư
    void withdraw(double amount) {
        if (balance - amount < minBalance) {
            cout << "Transaction failed! Account must keep at least " 
                 << minBalance << " VND." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << " VND" << endl;
        }
    }

    // Hiển thị thông tin tài khoản
    void displayBalance() {
        cout << "----------------------------------" << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Current balance: " << balance << " VND" << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    Account acc1("Huynh Vu Minh Hien", "123456789", 200000);

    acc1.displayBalance();

    acc1.deposit(50000);   // Nạp thêm tiền
    acc1.displayBalance();

    acc1.withdraw(200000); // Rút quá số dư tối thiểu
    acc1.displayBalance();

    acc1.withdraw(50000);  // Rút hợp lệ
    acc1.displayBalance();

    return 0;
}
