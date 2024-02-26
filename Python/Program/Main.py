from Shirt import Shirt

list = []
for i in range(1, 4):
    print(f"Masukkan input untuk baju ke -{i}:")

    idProduct = input("ID: ")
    name = input("Nama: ")
    brand = input("Brand: ")
    price = int(input("Harga: "))
    size = input("Ukuran: ")
    material = input("Material: ")
    gender = input("Gender (Laki-Laki / Perempuan): ")
    color = input("Warna: ")
    sleeve_type = input("Jenis Lengan Baju: ")

    baju = Shirt(idProduct, name, brand, price, size, material, gender, color, sleeve_type)
    list.append(baju)

print("-" * 117)
print("|%-5s|%-20s|%-10s|%-10s|%-10s|%-12s|%-10s|%-15s|%-15s|" % ("ID", "Name", "Brand", "Price(Rp.)", "Size", "Material", "Gender", "Color", "Sleeve Type"))
print("-" * 117)
for baju in list:
    print("|%-5s|%-20s|%-10s|%-10s|%-10s|%-12s|%-10s|%-15s|%-15s|" % (baju.get_id(), baju.get_nama(), baju.get_brand(), baju.get_price(), baju.get_size(), baju.get_material(), baju.get_gender(), baju.get_color(), baju.get_sleeve_type()))
print("-" * 117)