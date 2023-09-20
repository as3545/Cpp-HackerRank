/*
You are given four integers: , , , . You will use them in order to create the sequence  with the following pseudo-code.

a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31) 
Your task is to calculate the number of distinct integers in the sequence .

Input Format

Four space separated integers on a single line, , , , and  respectively.

Output Format

A single integer that denotes the number of distinct integers in the sequence .

Constraints




Sample Input

3 1 1 1
Sample Output

3
Explanation


Hence, there are  different integers in the sequence.
*/


//Code

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, S, P, Q;
    cin >> N >> S >> P >> Q;
    int modulo = 1u << 31;
    long int current;
    long int previous = S % modulo;
    int count = 1;
    for (int i = 1; i < N; i++) {
        current = (previous*P+Q) % modulo;
        if (current == previous)
            break;
        previous = current;
        count++;
    }
    cout << count << endl;
    return 0;
}
