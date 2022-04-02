# Bistro-matic

abacus Bistro-matic - Infinite Calculator

    See the subject here

Project description

    The goal of this project is to write a program that will display the result of an evaluated mathematical expression. The expression will be composed of infinite integers that can be expressed in any base. The program must handle the following operators: +-*/%, parentheses, operation priorities and syntax errors, but not float numbers.
    See man bc

package Compilation

make

clipboard Examples

./calc -h
# Will display:
# USAGE
# ./calc base operators size_read
# DESCRIPTION
#    - base: all the symbols of the base
#    - operators: the symbols for the parentheses and the 5 operators
#    - size_read: number of characters to be read

echo "3+6" | ./calc 0123456789 "()+-*/%" 3
# Will display 9

echo "3v6" | ./calc 0123456789 "{}vwxyz" 3
# Will display 9
