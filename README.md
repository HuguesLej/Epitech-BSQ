# BSQ - find the Biggest SQuare

BSQ is an {Epitech} 1st year project. It's part of the Elementary Programming in C module.

**⚠️ If you're an Epitech student, be aware that copying any part of this code is considered cheating and would cause an -42!**
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
- a pattern of `.` and `o` to repeat line by line
<br>
Then, the generated map is solved and displayed.
<br>
<br>

## Tests results

<table>
  <thead>
    <tr>
      <th>Name</th>
      <th>Percentage</th>
      <th>Tests</th>
      <th>Crash ?</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Algorithm app. - Generating column</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Algorithm app. - Generating edges</td>
      <td>100%</td>
      <td>2/2</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Algorithm app. - Generating line</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Algorithm app. - Generating square</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Algorithm app. - Opening column</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Algorithm app. - Opening edges</td>
      <td>100%</td>
      <td>2/2</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Algorithm app. - Opening line</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Algorithm app. - Opening rectangle</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Basics</td>
      <td>100%</td>
      <td>6/6</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Data structure - Generating</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Data structure - Opening</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Optimization - Generating 100 to 500</td>
      <td>100%</td>
      <td>4/4</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Optimization - Generating 1000 to 2000</td>
      <td>100%</td>
      <td>2/2</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Optimization - Generating 5000 to 10000</td>
      <td>100%</td>
      <td>2/2</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Optimization - Opening 100 to 500</td>
      <td>100%</td>
      <td>4/4</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Optimization - Opening 1000 to 2000</td>
      <td>100%</td>
      <td>2/2</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Optimization - Opening 5000 to 10000</td>
      <td>100%</td>
      <td>2/2</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Parsing - Opening</td>
      <td>100%</td>
      <td>3/3</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Robustness - Generating empty map</td>
      <td>100%</td>
      <td>4/4</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Robustness - Generating filled map</td>
      <td>100%</td>
      <td>2/2</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Robustness - Generating valid board</td>
      <td>60%</td>
      <td>3/5</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Robustness - Opening empty map</td>
      <td>100%</td>
      <td>6/6</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Robustness - Opening filled map</td>
      <td>100%</td>
      <td>6/6</td>
      <td>No</td>
    </tr>
    <tr>
      <td>Robustness - Opening valid file</td>
      <td>60%</td>
      <td>3/5</td>
      <td>No</td>
    </tr>
  </tbody>
  <tfoot>
    <tr>
      <th>Total</th>
      <th>95.1%</th>
      <th>77/81</th>
      <th>No</th>
    </tr>
  </tfoot>
</table>

<br>

## How to use

### Requirements

To use this program, you need to install some tools:
- [GCC](https://gcc.gnu.org/)
- [GNU Make](https://www.gnu.org/software/make/)

<br>

### Usages

Here are commands you should paste in the terminal that browses the source files directory.\
<br>
To compile the program:
```
make
```
To re-compile the program:
```
make re
```
To solve a map:
```
./bsq <map_to_solve_path>
```
```
./bsq example_files/maps/intermediate_map_1000_1000
```
To generate a map and solve it:
```
./bsq <size_of_map> <pattern>
```
```
./bsq 10 oo...o.
```
```
./bsq 50 ...o..ooo.
```
To remove all object files:
```
make clean
```
To remove the program binary and object files:
```
make fclean
```
