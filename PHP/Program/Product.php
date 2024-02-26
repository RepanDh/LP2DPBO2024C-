<?php

class Product{
    private $id;
    private $nama;
    private $brand;
    private $harga;

    function __construct($id = '', $nama = "", $brand = "", $harga = "") {
        $this->id = $id;
        $this->nama = $nama;
        $this->brand = $brand;
        $this->harga = $harga;
    }

    

    public function getId() {
      return $this->id;
    }
    public function setId($id) {
      $this->id = $id;
    }

    public function getNama() {
      return $this->nama;
    }
    public function setNama($nama) {
      $this->nama = $nama;
    }

    public function getBrand() {
      return $this->brand;
    }
    public function setBrand($brand) {
      $this->brand = $brand;
    }

    public function getHarga() {
      return $this->harga;
    }
    public function setHarga($harga) {
      $this->harga = $harga;
    }
}







?>