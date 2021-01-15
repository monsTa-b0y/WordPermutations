Print all possible words from phone digits

Objectives
Given a keypad as, and an n digit number, list all words which are possible by pressing these
numbers.

Outcomes expected
Student will be able to implement the concepts of arrays, strings and functions.

Brief note on design
Each digit can represent 3 to 4 different alphabets (apart from 0 and 1). So the idea is to form a
recursive function. Then map the number with its string of probable alphabets, i.e 2 with “abc”, 3
with “def” etc. Now the recursive function will try all the alphabets, mapped to the current digit
in alphabetic order and again call the recursive function for the next digit and will pass on the
current output string.

Methodology of implementation
Data Structures using C