
#include <iostream>

using namespace std;

class Electronics {
    public:
        
    int power;
    string jenis;
    
    Electronics(int power1, string jenis1) {
        
    power = power1;
    jenis = jenis1;
    
    }
    
    void turnOn() {
        cout << "Jenis elektronik yang sedang dinyalakan: " << jenis << endl;
    }
    
    
    void turnOff() {
        cout << "Jenis elektronik yang sedang dimatikan: " << jenis << endl;
    }
    
    
};


class Furniture {
    public:
    
    string material;
    string namaF;
    
    Furniture(string material1, string namaF1) {
        
    material = material1;
    namaF = namaF1;
    
    }
    
    void assemble() {
        cout << "Furniture sedang dirakit: " << namaF << endl;
    }
    
    void disassemble() {
        cout << "Furniture sedang dibongkar: " << namaF << endl;
    }
    
    
};


class SmartChair : public Electronics, public Furniture {
    public:
    
    SmartChair(int power1, string jenis1, string material1, string namaF1) : Electronics(power1, jenis1),  Furniture(material1, namaF1){}
  
    void showFeatures () {
        cout << power << endl << jenis << endl << material << endl << namaF << "\n\n";
    }
    
    void keterangan () {
        cout << endl << namaF << " " << jenis << " made of " << material << "is demostrating all features" << endl;
    }
    
};

int main()
{
    SmartChair SChair(120, "massager", "leather", "ultimate relax");

    
    SChair.showFeatures();
    SChair.assemble();
    SChair.disassemble();
    SChair.turnOn();
    SChair.turnOff();
    SChair.keterangan();
    
    return 0;
}
