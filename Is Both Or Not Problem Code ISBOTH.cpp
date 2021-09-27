/*You're given a number N. If N is divisible by 5 or 11 but not both
then print "ONE"(without quotes). If N is divisible by both 5 and 11
then print "BOTH"(without quotes). If N is not divisible by 5 or 11
then print "NONE"(without quotes).

Input: First-line will contain the number N.
Output: Print the answer in a newline.

Constraints: 1≤N≤103
*/
// C++ code is here...
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	if(N%5==0 || N%11==0){
        if(N%5==0 && N%11==0)
            cout << "BOTH";
        else
            cout << "ONE";
	}
	else
	    cout << "NONE";
	return 0;
}
