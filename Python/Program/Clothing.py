from Product import Product

class Clothing(Product):
    __size = ""
    __material = ""
    __gender = ""
    
    def __init__(self, size = "", material = "", gender = ""):
        self.__size = size
        self.__material = material
        self.__gender = gender
        
    def __init__(self, id, nama, brand, price, size, material, gender):
        super().__init__(id, nama, brand, price)  
        self.__size = size
        self.__material = material
        self.__gender = gender

        # Getter
    def get_size(self):
        return self.__size

    def get_material(self):
        return self.__material

    def get_gender(self):
        return self.__gender

    # Setter
    def set_size(self, size):
        self.__size = size

    def set_material(self, material):
        self.__material = material

    def set_gender(self, gender):
        self.__gender = gender
