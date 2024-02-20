import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<Shirt> list = new ArrayList<>();

        for (int i = 1; i < 4; i++) {
            System.out.println("Masukkan input untuk baju ke -" + i + ":");
            Scanner sc = new Scanner(System.in);

            System.out.println("ID:");
            String idProduct1 = sc.next();
            
            System.out.println("Nama:");
            String name1 = sc.next();

            System.out.println("Brand:");
            String brand1 = sc.next();

            System.out.println("Harga:");
            int price1 = sc.nextInt();

            System.out.println("Ukuran:");
            String size1 = sc.next();

            System.out.println("Material:");
            String material1 = sc.next();

            System.out.println("Gender (Laki-Laki / Perempuan):");
            String gender1 = sc.next();

            System.out.println("Warna:");
            String color1 = sc.next();

            System.out.println("Jenis Lengan Baju:");
            String sleeveType1 = sc.next();
            if (i == 1) {
                Shirt baju1 = new Shirt(idProduct1, name1, brand1, price1, size1, material1, gender1, color1, sleeveType1);
                list.add(baju1);
            }
            else if (i == 2) {
                Shirt baju2 = new Shirt(idProduct1, name1, brand1, price1, size1, material1, gender1, color1, sleeveType1);
                list.add(baju2);
                
            }
            else if (i == 3){
                Shirt baju3 = new Shirt(idProduct1, name1, brand1, price1, size1, material1, gender1, color1, sleeveType1);
                list.add(baju3);

            }
        }


        System.out.println("-".repeat(117));
        System.out.printf("|%-5s|%-20s|%-10s|%-10s|%-10s|%-12s|%-10s|%-15s|%-15s|\n", "ID", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type");
        System.out.println("-".repeat(117));
        for (Shirt baju :list) {
            System.out.printf("|%-5s|%-20s|%-10s|%-10s|%-10s|%-12s|%-10s|%-15s|%-15s|\n", baju.getIdProduct(), baju.getName(), baju.getBrand(), baju.getPrice(), baju.getSize(), baju.getMaterial(), baju.getGender(), baju.getColor(), baju.getSleeve_type());
        }
        System.out.println("-".repeat(117));
    }
}