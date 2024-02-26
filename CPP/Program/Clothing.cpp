#include <bits/stdc++.h>
#include "Product.cpp"

using namespace std;

class Clothing : public Product{
    private:
        string size;
        string material;
        string gender;
    public:

        Clothing() : Product(){
            this->size = "";
            this->material = "";
            this->gender = "";
        }

        Clothing(int id, string nama, string brand, int harga, string size, string material, string gender) : Product(id, nama, brand, harga){
            this->size = size;
            this->material = material;
            this->gender = gender;
        }

        // Getter
        string getSize() { 
            return size; 
        }
        string getMaterial() { 
            return material; 
        }
        string getGender() { 
            return gender; 
        }

        // Setter
        void setSize(string size) { 
            this->size = size; 
        }
        void setMaterial(string material) { 
            this->material = material; 
        }
        void setGender(string gender) { 
            this->gender = gender; 
        }

        ~Clothing(){
            
        }
};
