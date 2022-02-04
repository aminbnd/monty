# BULDING A MONTY LANGUAGE INTERPRETER - Stack, Queue -LIFO, FIFO

## What is The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

#### Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.

## Why
This project reviewed the concepts of file input/output, linked lists, and stack data structure.
## Requirements of project
* Ubuntu 14.04 LTS
* all `.c` files pass [Betty](https://github.com/holbertonschool/Betty) style: [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* maximum of one global variable
* no more than 5 functions per file
* prototypes of all functions are included in header file called `monty.h`
* all header files are include guarded
* allowed to use standard library

## Compilation
To use the program, compile the *.c files in the repository:
## How to use
1. Clone this repository on your local Pc
2. Compile files
3. $ ./monty monty_byte_code_file_name.m

A few Monty bytecode files are supplied in the byecodes directory. For supported opcodes, look below.

```$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty ```
## Example of usage
```$ cat bytecodes/12.m
push 1
push 2
push 3
pall
add
pall
$ ./monty bytecodes/12.m
3
2
1
5
1
```
## Challenges
* breaking down the project into smaller manageable pieces, and then breaking them into even smaller pieces so that I could have functions that each only did one thing
* trying to make main function have fewer lines
* memory leaks from not freeing dynamically allocated memory

## Contributors (Developers)
[Med Amin Bondi](https://github.com/aminbnd)
<br>
[Med Salah Bourouba](https://github.com/Brandixitor)
<br>

## About me:
Med Amin Bondi is currently a software engineering student at [Holberton School](https://www.holbertonschool.com/) starting from september 2020 specialized in the AR/VR field.
<br>
During the learning period at Holberton Shcool, Med Amin has learned so much staff related to software enginnering such as:
* C language
* Python
* JavaScript
* C#
* Unity
* Full Stack Web development

Before learning software engineering, Med Amin Bondi was a financial analyst and strategy and transaction consultant at EY Tunis for several years during which he provided many services to local and international companies and groups and got a huge experience and deep knowlage of the business world.
<br>

[LinkedIn](https://www.linkedin.com/in/mohamed-amine-bondi-67bb1b171/)
<br>
[twitter](https://twitter.com/AminBondi)