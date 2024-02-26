#include <iostream>
#include <string>

using namespace std;

class Product{
    private:
        int id;
        string nama;
        string brand;
        int harga;
    public:

        Product(){
            this->id = '0';
            this->nama = "";
            this->brand = "";
            this->harga = '0';
        }

        Product(int id, string nama, string brand, int harga){
            this->id = id;
            this->nama = nama;
            this->brand = brand;
            this->harga = harga;
        }


         // Getter
        int getId() { 
            return id; 
        }
        string getNama() { 
            return nama; 
        }
        string getBrand() { 
            return brand; 
        }
        int getHarga() { 
            return harga; 
        }

        // Setter
        void setId(int id) { 
            this->id = id; 
        }
        void setNama(string nama) { 
            this->nama = nama; 
        }
        void setBrand(string brand) { 
            this->brand = brand; 
        }
        void setHarga(int harga) { 
            this->harga = harga; 
        }

        ~Product(){
            
        }
};