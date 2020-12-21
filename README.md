# BULDING A MONTY LANGUAGE INTERPRETER


## What is The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

#### Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.

## How it works 
To use the program, compile the *.c files in the repository:

```$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty ```
#### Example

<img src="https://www.holbertonschool.com/holberton-logo.png"/>