/*

Given a text file with many lines of numbers to format and print, for each row of  space-separated doubles, format and print the numbers using the specifications in the Output Format section below.

Input Format

The first line contains an integer, , the number of test cases.
Each of the  subsequent lines describes a test case as  space-separated floating-point numbers: , , and , respectively.

Constraints

Each number will fit into a double.
Output Format

For each test case, print  lines containing the formatted , , and , respectively. Each , , and  must be formatted as follows:

: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.
: Print it to a scale of  decimal places, preceded by a  or  sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
Sample Input

1  
100.345 2006.008 2331.41592653498
Sample Output

0x64             
_______+2006.01  
2.331415927E+03
Explanation

For the first line of output,  (in reverse, ).
The second and third lines of output are formatted as described in the Output Format section.

  */

//Code
cout << left << hex 
        << showbase << nouppercase 
        << (long)A << endl;
    
    cout << right << fixed << setw(15) 
        << showpos << setprecision(2) 
        << setfill('_') << B << endl;
    
    //cout << setiosflags(ios::uppercase) << setiosflags(ios::scientific); 
    cout << setprecision(9)
        << scientific << noshowpos << uppercase  
        << C << endl;
