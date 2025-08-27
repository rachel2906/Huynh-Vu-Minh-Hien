#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    string gpu;     // Card đồ họa
    int ram;        // Dung lượng RAM (GB)
    int storage;    // Dung lượng ổ cứng (GB)
    const int maxRAM = 64; // Giả sử RAM tối đa hỗ trợ 64GB

public:
    void setBrand(string b) { brand = b; }
    string getBrand() { return brand; }

    void setModel(string m) { model = m; }
    string getModel() { return model; }

    void setGPU(string g) { gpu = g; }
    string getGPU() { return gpu; }

    void setRAM(int r) { 
        if (r > 0 && r <= maxRAM) ram = r;
        else ram = 8; // mặc định 8GB nếu nhập sai
    }
    int getRAM() { return ram; }

    void setStorage(int s) { 
        if (s > 0) storage = s;
        else storage = 256; 
    }
    int getStorage() { return storage; }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    // Kiểm tra RAM
    void checkRAM(int requiredRAM) {
        if (ram >= requiredRAM)
            cout << "This laptop has enough RAM." << endl;
        else
            cout << "This laptop does not have enough RAM." << endl;
    }

    // Kiểm tra GPU 
    void checkGPU() {
        if (gpu == "NVIDIA" || gpu == "AMD") {
            cout << "This laptop has a strong GPU for gaming." << endl;
        } 
        else if (gpu == "Intel") {
            cout << "This laptop only has integrated graphics, not ideal for gaming." << endl;
        } 
        else {
            cout << "No dedicated GPU detected!" << endl;
        }
    }

    // Nâng cấp RAM
    void upgradeRAM(int additionalRAM) {
        if (ram + additionalRAM <= maxRAM) {
            ram += additionalRAM;
            cout << "RAM upgraded successfully. New RAM: " << ram << " GB" << endl;
        } else {
            cout << "Upgrade failed! Exceeds maximum supported RAM (" 
                 << maxRAM << " GB)." << endl;
        }
    }
};

int main() {
    Laptop laptop1;

    laptop1.setBrand("Dell");
    laptop1.setModel("XPS 13");
    laptop1.setRAM(8);
    laptop1.setStorage(256);

    // Trường hợp 1: NVIDIA (mạnh)
    laptop1.setGPU("NVIDIA");
    cout << "\n=== Laptop NVIDIA ===" << endl;
    laptop1.displayInfo();
    laptop1.checkGPU();

    // Trường hợp 2: Intel (yếu)
    laptop1.setGPU("Intel");
    cout << "\n=== Laptop Intel ===" << endl;
    laptop1.displayInfo();
    laptop1.checkGPU();

    // Trường hợp 3: Không có GPU
    laptop1.setGPU("None");
    cout << "\n=== Laptop không có GPU ===" << endl;
    laptop1.displayInfo();
    laptop1.checkGPU();

    return 0;
}
