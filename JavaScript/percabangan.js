let myscore = 100;
let compscore = 90;

if (myscore > compscore){
    console.log("anda menang");
}
else{
    console.log("anda kalah");
}

// bila ada lebih dari 2 pecabangan

const score = 83;

if (score > 89) {
    console.log('Anda mendapatkan peringkat A');
} else if (score > 79) {
    console.log('Anda mendapatkan peringkat B');
} else if (score > 69) {
    console.log('Anda mendapatkan peringkat C');
} else {
    console.log('Anda mendapatkan peringkat D');
}

// kita juga bisa menggabungkan percabangan dengan gerbang logika

let totalBelanja = 125000;
let jenisMember = "Bronze";

if(totalBelanja > 100000 && jenisMember == "Silver"){
    console.log("Selamat, Anda mendapat diskon sebesar 10%");
}
else{
    console.log("Maaf, saat ini Anda belum mendapat diskon");
}



if(totalBelanja > 100000 || jenisMember == "Silver"){
    console.log("Selamat, Anda mendapat diskon sebesar 10%");
}
else{
    console.log("Maaf, saat ini Anda belum mendapat diskon");
}