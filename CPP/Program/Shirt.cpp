#include <bits/stdc++.h>
#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing{
    private:
        string color;
        string sleeve_type;
    public:

        Shirt() : Clothing(){
            this->color = "";
            this->sleeve_type = "";
        }

        Shirt(int id, string nama, string brand, int harga, string size, string material, string gender, string color, string sleeve_type) : Clothing(id, nama, brand, harga, size, material, gender){
            this->color = color;
            this->sleeve_type = sleeve_type;
        }

        // Getter
        string getColor() { 
            return color; 
        }
        string getSleeveType() { 
            return sleeve_type; 
        }

        // Setter
        void setColor(string color) { 
            this->color = color; 
        }
        void setSleeveType(string sleeve_type) { 
            this->sleeve_type = sleeve_type; 
        }

        ~Shirt(){
            
        }
};
