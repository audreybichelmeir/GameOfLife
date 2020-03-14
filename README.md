# GameOfLife
# GameOfLife

Data Structures Assignment2

Audrey Bichelmeir & Blake Fuller are partners
Student 1
Full name: Audrey Bichelmeir
Student ID: 2327865
Chapman email: bichelmeir@chapman.edu
Course number and section: Cpsc350 -02
Assignment or exercise number: assignment2

Student 2
Full name: Blake Fuller
Student ID: 2312459
Chapman email: bfuller@chapman.edu
Course number and section: Cpsc350 -02
Assignment or exercise number: assignment2


Files submitted:
File.cpp
File.h
GameMode.cpp
GameOfLife.cpp
GameOfLife.h
Grid.cpp
Grid.h
main.cpp
Cell.h
Cell.cpp
Makefile
test.txt


How to run the program
make all
make all real clean
g++ main.cpp
./a.out

Known Errors:
The classes do not properly reference the main.cpp. For File.cpp we know that it
properly takes in a file because it gets the first two lines of it and prints it out to assign variable (row & col).

If you try to compile everything all at once it will not work, but if you compile and run just the main main.cpp will run along with other classes that are directly attached to it like File.cpp and GameOfLife.cpp

For cell.h/cpp individually implementing, it could get the rows and columns and print the cell board. Due to time constraints we have a set percentage alive cells of 0.35%.


References:
Nick - general outline, helped organize the classes
Dan - general outline
Ryan - file boolean isGood portion
How to print a 2d array: https://www.geeksforgeeks.org/print-2d-matrix-in-different-lines-and-without-curly-braces-in-cc/
How to make cell class: http://www.cplusplus.com/doc/tutorial/classes/
reading a file: https://gist.github.com/stevedoyle/1319089
finding a certain string (".txt") https://www.tutorialspoint.com/How-to-check-if-a-string-contains-a-certain-word-in-Chash
how to make boarder around a 2d array: http://www.cplusplus.com/forum/beginner/118196/
presses the enter key (acts like a pause function) https://www.geeksforgeeks.org/system-call-in-c/
Follow the tutorial:
organization (C-based) https://www.youtube.com/watch?v=flYIkz4XHQc
Displaying and Randomness (C-based) https://www.youtube.com/watch?v=zrA77vUSli4
Neighbor counting (C-based) https://www.youtube.com/watch?v=bg3Emk0yhhM

Sorry it's not C++, we wanted to turn something in and learn so we watched a tutorial that was similar to the language being taught. We tried to modify it to work on a c++ language platform. 
