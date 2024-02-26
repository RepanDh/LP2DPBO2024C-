<?php
require ('Clothing.php');

class Shirt extends Clothing{
    private $color;
    private $sleeve_type;

    
    function __construct($id, $nama, $brand, $harga, $size, $material, $gender, $color, $sleeve_type) {
        parent::__construct($id, $nama, $brand, $harga, $size, $material, $gender);
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

        // Getter methods
        function getColor() {
            return $this->color;
        }
    
        function getSleeveType() {
            return $this->sleeve_type;
        }
    
        // Setter methods
        function setColor($color) {
            $this->color = $color;
        }
    
        function setSleeveType($sleeve_type) {
            $this->sleeve_type = $sleeve_type;
        }
    
}


?>



