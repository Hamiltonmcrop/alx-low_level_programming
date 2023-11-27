// Function to hash the password using SHA-256 (insecure for production)
function hashPassword(password) {
    const encoder = new TextEncoder();
    const data = encoder.encode(password);
    return window.crypto.subtle.digest('SHA-256', data)
        .then(hash => {
            return Array.from(new Uint8Array(hash)).map(byte => {
                return ('0' + (byte & 0xFF).toString(16)).slice(-2);
            }).join('');
        });
}

// Login form submission
document.getElementById('loginForm').addEventListener('submit', function (event) {
    event.preventDefault();

    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;

    // Get user data from localStorage
    const storedUser = JSON.parse(localStorage.getItem(username));

    if (storedUser) {
        // Hash the entered password and compare with stored hashed password
        hashPassword(password)
            .then(hashedPassword => {
                if (hashedPassword === storedUser.password) {
                    // Authentication successful
                    alert('User authentication successful!');
                    // Here you can redirect or perform further actions upon successful login
                } else {
                    alert('Invalid username or password');
                }
            })
            .catch(error => {
                console.error('Error hashing password:', error);
            });
    } else {
        alert('User does not exist. Please register.');
    }
});

