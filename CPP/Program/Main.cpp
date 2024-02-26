#include <bits/stdc++.h>
#include "Shirt.cpp"

using namespace std;

int main(){
    list<Shirt> list;
    for(int i = 1; i <= 3; i++){
        cout << "Masukkan input untuk baju ke -" << i << ":\n";

        int idProduct;
        string name, brand, size, material, gender, color, sleeve_type;
        int price;

        cout << "ID: ";
        cin >> idProduct;
        cin.ignore();

        cout << "Nama: ";
        getline(cin, name);

        cout << "Brand: ";
        getline(cin, brand);

        cout << "Harga: ";
        cin >> price;
        cin.ignore();

        cout << "Ukuran: ";
        getline(cin, size);

        cout << "Material: ";
        getline(cin, material);

        cout << "Gender (Laki-Laki / Perempuan): ";
        getline(cin, gender);

        cout << "Warna: ";
        getline(cin, color);

        cout << "Jenis Lengan Baju: ";
        getline(cin, sleeve_type);

        Shirt baju(idProduct, name, brand, price, size, material, gender, color, sleeve_type);
        list.push_back(baju);
    }

    cout << string(117, '-') << "\n";
    printf("|%-5s|%-20s|%-10s|%-10s|%-10s|%-12s|%-10s|%-15s|%-15s|\n", "ID", "Name", "Brand", "Price(Rp.)", "Size", "Material", "Gender", "Color", "Sleeve Type");
    cout << string(117, '-') << "\n";
    for(Shirt &baju : list){
        printf("|%-5d|%-20s|%-10s|%-10d|%-10s|%-12s|%-10s|%-15s|%-15s|\n", baju.getId(), baju.getNama().c_str(), baju.getBrand().c_str(), baju.getHarga(), baju.getSize().c_str(), baju.getMaterial().c_str(), baju.getGender().c_str(), baju.getColor().c_str(), baju.getSleeveType().c_str());
    }
    cout << string(117, '-') << "\n";

    return 0;
}
