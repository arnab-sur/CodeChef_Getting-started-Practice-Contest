/*Chef went to a shop and buys a pens and b pencils.
Each pen costs x units and each pencil costs y units.
Now find what is the total amount Chef will spend to buy a pens and b pencils.

Input: First-line will contain 4 space separated integers a, b, x and y respectively.
Output: Print the answer in a new line.

Constraints: 1≤a,b,x,y≤103
*/

// C++ code is here...
#include <iostream>
using namespace std;

int main() {
	int a,b,x,y;
	cin >> a >> b >> x >> y;
	cout << (a*x + b*y);
	return 0;
}

