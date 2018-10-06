# ASCII ART ASSIGNMENT

## HOW TO RUN

In the parse.c file I have made the assumptions that the execute file will run from a directories that contains both directories containing the ASCII art files. However, there are no other assumptions when it comes to file paths.\
The code is also so basic that it will not work with any other ASCII-ART files than the two directories given.

## ASSIGMNET TEXT

### Instructions

This is an ungraded, completely voluntary delivery which gives you an opportunity to get feedback on your skills.

A short description of how the program and your thought processes have worked will help me understand your thought process, and will be required for the real exam. Try to avoid memory leaks and buffer overflows.\
The delivery should contain the code and a readme.txt which explains any decisions made in the assignment.


### Merge ASCII-art

With this assignment you will find to folders with multiple .txt-files. These contain files named “part_x_y_name.txt” these are 30x30 character parts of ASCII-drawings. That is, the asci-art is split into 30 by 30 squares of characters, and need to be puzzled together. After each line you will need to add a newline character.\
Make a C-program that reads and merges these prats into one file where the image looks right.\
Reading and merging should happen in a c-file separate from the main function. The main function should parse parameters and call the separate merging system.