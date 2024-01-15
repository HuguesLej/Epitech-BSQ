# BSQ - find the Biggest SQuare

BSQ is an {Epitech} 1st year projet. It's part of the Elementary Programming in C module.
<br>
<br>

## Constraints

Using standard C library functions is forbidden, except for the following:
- open
- read
- write
- close
- malloc
- free
- stat

<br>

## Purpose

The purpose of this project is to find the biggest square on a map while avoiding obstacles.
<br>
<br>
A valid map is filled with `.` and `o`.\
`.` represents an empty space.\
`o` represents an obstacle.\
<br>
All lines of the map are the same length and are terminated with `\n`.\
<br>
The map is contained in a file whose 1st line cannot be empty. This line contains the number of line in the map.\
<br>
Therefore, the BSQ program have to be able to read a file, get the map it contains and find the biggest square on the map.\
<br>
For example, below is a file the BSQ program can handle. This file is displayed as it would be if printed in a terminal with `cat -e`.
```
9$
...........................$
....o......................$
............o..............$
...........................$
....o......................$
..............o............$
...........................$
......o..............o.....$
..o.......o................$
```
And here is result of the program. It also appears as if it were displayed with `cat -e`.
```
.....xxxxxxx................$
....oxxxxxxx................$
.....xxxxxxxo...............$
.....xxxxxxx................$
....oxxxxxxx................$
.....xxxxxxx...o............$
.....xxxxxxx................$
......o...............o.....$
..o.......o.................$
```
The BSQ program can also generate a map with 2 given parameters:
- a number corresponding to the map's dimensions
- a pattern which will be repeat line by line
<br>
Then, the generated map is solved and displayed.
