<?php

require ('Shirt.php');

$Shirt1 = new Shirt(1, "Shirt1", "Brand1", 10000, "M", "Cotton", "Laki-laki", "Biru", "pendek");
$Shirt2 = new Shirt(2, "Shirt2", "Brand2", 20000, "L", "Silk", "Perempuan", "Biru", "panjang");
$Shirt3 = new Shirt(3, "Shirt3", "Brand3", 30000, "XL", "Wool", "Unisex", "Hijau", "panjang");


$daftarShirt = array($Shirt1, $Shirt2, $Shirt3);

echo "<table border='1'>";
echo "<tr><th>ID</th><th>Nama</th><th>Brand</th><th>Harga</th><th>Size</th><th>Material</th><th>Gender</th><th>Color</th><th>Sleeve Type</th></tr>";
foreach ($daftarShirt as $shirt) {
    echo "<tr>";
    echo "<td>" . $shirt->getId() . "</td>";
    echo "<td>" . $shirt->getNama() . "</td>";
    echo "<td>" . $shirt->getBrand() . "</td>";
    echo "<td>" . $shirt->getHarga() . "</td>";
    echo "<td>" . $shirt->getSize() . "</td>";
    echo "<td>" . $shirt->getMaterial() . "</td>";
    echo "<td>" . $shirt->getGender() . "</td>";
    echo "<td>" . $shirt->getColor() . "</td>";
    echo "<td>" . $shirt->getSleeveType() . "</td>";
    echo "</tr>";
}
echo "</table>";


?>
