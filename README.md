# Simple-Regex

Practicing using regex in a variety of programming languages (Java, C++, python) by applying it to a specific problem. The problem is given below, and a2_input_unix.txt contains samples to test the programs against.

#### The Problem

Financial quantities in American notation. These have a leading dollar sign ($), an optional string of carets (^—used on checks to discourage fraud), a string of decimal digits, and an optional fractional part consisting of a decimal point (.) and two decimal digits. The string of digits to the left of the decimal point may consist of a single zero (0). Otherwise it must not start with a zero. If there are more than three digits to the left of the decimal point, groups of three (counting from the right) must be separated by commas (,). Example: $\*\*2,345.67. (From *Programming Language Pragmatics, 4th Edition* by Michael L. Scott)
