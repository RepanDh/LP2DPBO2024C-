
class Product {
    private String idProduct;
    private String name;
    private String brand;
    private int price;

    public Product(){

    }

    public Product(String idproduct, String name, String brand, int price){
        this.idProduct = idproduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    public String getIdProduct() {
        return idProduct;
    }

    public void setIdProduct(String idProduct) {
        this.idProduct = idProduct;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    
}
