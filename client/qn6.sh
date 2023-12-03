#!/bin/bash
# Function to perform addition
addition() {
    sum=$(( $1 + $2 ))
    echo "The sum of $1 and $2 is: $sum"
}
# Function to perform multiplication
multiplication() {
    product=$(( $1 * $2 ))
    echo "The product of $1 and $2 is: $product"
}
# Main script starts here
echo "Enter the first number:"
read num1
echo "Enter the second number:"
read num2
# Call the addition function
addition $num1 $num2
# Call the multiplication function
multiplication $num1 $num2

