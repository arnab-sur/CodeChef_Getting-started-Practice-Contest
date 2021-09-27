/*You are given a number N and find all the distinct factors of N.

Input: First-line will contain the number N.
Output: In the first line print number of distinct factors of N.
In the second line print all distinct factors in ascending order separated by space.
Constraints: 1≤N≤106
*/
// C++ code is here...
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N, count=0;
	cin>>N;
	for(int i=1; i<=N; i++){
	    if(N%i==0){
	       count++;
	    }
	}
	cout<<count<<endl;
	for(int i=1; i<=N; i++){
	    if(N%i==0){
	       cout<<i<<" ";
	    }
	}
	return 0;
}

