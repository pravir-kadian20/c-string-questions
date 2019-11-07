// S PALINDROME?
// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

// Input Format:
// Enter a number N , add N more numbers

// Constraints:
// None

// Output Format
// Display the Boolean result

// Sample Input
// 4
// 1
// 2
// 2
// 1
// Sample Output
// true
#include<iostream>
using namespace std;

bool ispalindrome(int n,int a[10000]){
	int b[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[n-i-1]=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			return false;
		}
	}
	return true;
}
int main() {
	int a[1000];
	int n;
	cin >> n;
	if(ispalindrome(n,a)==true){
		cout << "true";
	}
	else{
		cout << "false";
	}
}