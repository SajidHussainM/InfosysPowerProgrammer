/*

You are given an array of size N. You need to change this array into a mountain. By mountain we mean, the either ends of the array should have equal elements. Then as we move towards the middle from both ends, the next element is just one more than the previous one. So it would have a peak in the middle and decreases if you go towards either end, just like a mountain.

Examples of mountains are [1, 2, 3, 2, 1] or [6, 7, 8, 8, 7, 6]. But the array [1, 2, 4, 2, 1] is not a mountain because from 2 to 4 the difference is 2. The array [1, 2, 3, 1] is also not a mountain because the elements 2 and 3 are not equal from both ends.

You need to find the minimum number of elements that should be changed in order to make the array a mountain. You can make the elements negative or zero as well.

Input Format:

The first line contains an integer, N, denoting the number of elements in array.

Each line i of the N subsequent lines (where 0 ≤ i < N) contains an integer describing i-th element of array.

Constraints:

2 ≤ n ≤ 105
1 ≤ a[i], m[i] ≤ 103, where 0 ≤ i < n
String s will either the word Odd or the word Even.
Output Format:

Print the minimum number of elements that should be changed in order to make the array a mountain.

 

Sample Input	Sample Output	Explanation
5
1
2
3
4
5	2	By changing 4 and 5 we can get a mountain as [1,2,3,2,1]
5
4
7
6
5
4	1	By changing 7 we can get a mountain as [4,5,6,5,4]


*/



#include <iostream>
using namespace std;

int mountain(int arr[], int n) {
    if (arr == nullptr || n <= 0) {
        return -1; // invalid input
    }
    if (n <= 2) {
        return 0; // already sorted
    }

    // remove duplicates
    int k = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            arr[k++] = arr[i];
        }
    }
    n = k;

    int count = 0;
    if (n % 2 == 0) {
        int m2 = n/2;
        int m1 = m2-1;

        if (arr[m1] == arr[m2]) {
            for (int i = m1-1; i >= 0; i--) {
                if (arr[i] != arr[i+1]-1) {
                    count++;
                    arr[i] = arr[i+1]-1;
                }
            }
        } else if (arr[m1] < arr[m2]) {
            arr[m2] = arr[m1];
            for (int i = m1-1; i >= 0; i--) {
                if (arr[i] != arr[i+1]-1) {
                    count++;
                    arr[i] = arr[i+1]-1;
                }
            }
        } else {
            return -1; // invalid mountain array
        }

        int j = m1-1;
        for (int i = m2+1; i < n; i++) {
            if (arr[i] != arr[j]) {
                count++;
            }
            j--;
        }
        return count;
    } else {
        int mid = n/2;
        for (int i = mid-1; i >= 0; i--) {
            if (arr[i] != arr[i+1]-1) {
                count++;
                arr[i] = arr[i+1]-1;
            }
        }
        int j = mid-1;
        for (int i = mid+1; i < n; i++) {
            if (arr[i] != arr[j]) {
                count++;
            }
            j--;
        }
        return count;
    }
}



/*  Java Code Passing all test cases 

import java.util.*;
import java.io.*;

class MyCode
{
public static int mountain(int[] arr, int n){
if(n<3){
return -1;
}
int count=0;
if(n%2==0){
int m2=n/2;
int m1=m2-1;

if(arr[m1] !=arr[m2]){
arr[m2]=arr[m1];
count++;
}
for(int i=m1-1;i>=0;i--){
if(arr[i]!=(arr[i+1]-1)){
count++;
arr[i]=(arr[i+1]-1);
}
}
int j=m1-1;
for(int i=m2+1;i<n;i++){
if(arr[i]!= arr[j]){
count++;
}
j--;
}

}
else{
int mid=n/2;
for(int i=mid-1;i>=0;i--){
if(arr[i]!= (arr[i+1]-1)){
count++;
arr[i] = (arr[i+1]-1);
}
}
int j=mid-1;
for(int i=mid+1;i<n;i++){
if(arr[i]!= arr[j]){
count++;
}
j--;
}
}
return count;
}

public static void main(String[] args) throws java.lang.Exception
{
Scanner s = new Scanner(System.in);
int n= s.nextInt();
int arr[]= new int[n];
for(int i=0;i<n;i++){
arr[i]=s.nextInt();
}
System.out.print(mountain(arr,n));
}
}

*/
