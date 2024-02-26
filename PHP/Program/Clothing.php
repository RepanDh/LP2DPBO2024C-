<?php
require ('Product.php');

class Clothing extends Product{
    private $size;
    private $material;
    private $gender;
    
    function __construct($id, $nama, $brand, $harga, $size, $material, $gender) {
        parent::__construct($id, $nama, $brand, $harga);
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

        // Getter methods
        function getSize() {
            return $this->size;
        }
    
        function getMaterial() {
            return $this->material;
        }
    
        function getGender() {
            return $this->gender;
        }
    
        // Setter methods
        function setSize($size) {
            $this->size = $size;
        }
    
        function setMaterial($material) {
            $this->material = $material;
        }
    
        function setGender($gender) {
            $this->gender = $gender;
        }
}


?>



