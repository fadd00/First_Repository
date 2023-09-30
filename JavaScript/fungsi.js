function greeting(){
    console.log("selamat pagi!");
}

greeting();

// kita bisa membuat fungsi dinamis dengan cara berikut

function selamat(waktu){
    console.log("selamat " + waktu + "!");
}

selamat('malam');
selamat('sore');

// kita juga dapat membuat parameter default pada fungsi

function hallo(nama = "izzudin"){
    console.log("hallo " + nama + "!");
}

hallo();
hallo('yang lain');