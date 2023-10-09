
const loginFormElement = document.querySelector('#loginForm');
const inputEmailElement = document.querySelector('#inputEmail');
const inputPasswordElement = document.querySelector('#inputPassword');

const expectedEmail = 'admin@dicoding.com';
const expectedPassword = 'superpassword';

loginFormElement.addEventListener('submit', function(event) {
    event.preventDefault();
    // Mendapatkan input email dan password pengguna dari form.
    const email = inputEmailElement.value;
    const password = inputPasswordElement.value;

    
    // Jika variabel email identik dengan expectedEmail dan password identik dengan expectedPassword, panggil fungsi goToHome().
    // Jika tidak, maka panggil fungsi showPopUp().

    if (email == expectedEmail && password == expectedPassword){
      goToHome()
    }
    else{
      showPopUp()
    }
});
