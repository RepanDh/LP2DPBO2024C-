from Clothing import Clothing


class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""
    
    def __init__(self, color = "", sleeve_type = ""):
        self.__color = color
        self.__sleeve_type = sleeve_type
        
    def __init__(self, id, nama, brand, price, size, material, gender, color, sleeve_type):
        super().__init__(id, nama, brand, price, size, material, gender)  
        self.__color = color
        self.__sleeve_type = sleeve_type
        
    # Getter
    def get_color(self):
        return self.__color

    def get_sleeve_type(self):
        return self.__sleeve_type

    # Setter
    def set_color(self, color):
        self.__color = color

    def set_sleeve_type(self, sleeve_type):
        self.__sleeve_type = sleeve_type
