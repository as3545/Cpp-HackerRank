/*
Given a set of arrays of size  and an integer , you have to find the maximum integer for each and every contiguous subarray of size  for each of the given arrays.

Input Format

First line of input will contain the number of test cases T. For each test case, you will be given the size of array N and the size of subarray to be used K. This will be followed by the elements of the array Ai.

Constraints



 , where  is the  element in the array .

Output Format

For each of the contiguous subarrays of size  of each array, you have to print the maximum integer.

Sample Input

2
5 2
3 4 6 3 4
7 4
3 4 5 8 1 4 10
Sample Output

4 6 6 4
8 8 8 10
Explanation

For the first case, the contiguous subarrays of size 2 are {3,4},{4,6},{6,3} and {3,4}. The 4 maximum elements of subarray of size 2 are: 4 6 6 4.

For the second case,the contiguous subarrays of size 4 are {3,4,5,8},{4,5,8,1},{5,8,1,4} and {8,1,4,10}. The 4 maximum element of subarray of size 4 are: 8 8 8 10.
  */

//Code

void printKMax(int arr[], int n, int k) {
    deque<int> dq;

    for (int i = 0; i < k; ++i) {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }

    for (int i = k; i < n; ++i) {
        cout << arr[dq.front()] << " ";

        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();

        dq.push_back(i);
    }

    cout << arr[dq.front()] << endl;
}
