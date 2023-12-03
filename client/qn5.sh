#!/bin/bash
# Uses therelative path
relative_path="./file_folder/relative_file.txt"
echo "Content of file using relative path:"
cat $relative_path
# Using absolute path
absolute_path="/home/user/file_folder/absolute_file.txt"
echo "Content of file using absolute path:"
cat $absolute_path

