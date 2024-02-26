class Product:
    __id = ''
    __nama = ""
    __brand = ""
    __price = ""
    
    def __init__(self,id = '',nama = "",brand = "",price = ""):
        self.__id = id
        self.__nama = nama
        self.__brand = brand
        self.__price = price
    
        # Getter
    def get_id(self):
        return self.__id

    def get_nama(self):
        return self.__nama

    def get_brand(self):
        return self.__brand

    def get_price(self):
        return self.__price

    # Setter
    def set_id(self, id):
        self.__id = id

    def set_nama(self, nama):
        self.__nama = nama

    def set_brand(self, brand):
        self.__brand = brand

    def set_price(self, price):
        self.__price = price