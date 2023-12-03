#!/bin/bash
echo "Counting from 1 to 5 using a while loop:"
counter=1
while [ $counter -le 5 ]
do
    echo $counter
    ((counter++))
done

