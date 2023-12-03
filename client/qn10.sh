#!/bin/bash
echo "Counting from 1 to 5 using an until loop:"
counter=1
until [ $counter -gt 5 ]
do
    echo $counter
    ((counter++))
done

