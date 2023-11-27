<?php
session_start();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['username'];
    $email = $_POST['email'];
    $password = $_POST['password'];

    // Hashing the password using password_hash function
    $hashed_password = password_hash($password, PASSWORD_DEFAULT);

    // Store the user information in a database (this is a simplified example)
    // Replace database connection details accordingly
    $db_host = "localhost";
    $db_user = "your_username";
    $db_pass = "your_password";
    $db_name = "your_database";

    $conn = new mysqli($db_host, $db_user, $db_pass, $db_name);
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $stmt = $conn->prepare("INSERT INTO users (username, email, password) VALUES (?, ?, ?)");
    $stmt->bind_param("sss", $username, $email, $hashed_password);
    $stmt->execute();

    $stmt->close();
    $conn->close();

    // Redirect to login page after successful registration
    header("Location: login.html");
    exit();
}
?>

