/*Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary,
 a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered.
 It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.

Examples
Input
6 6 4
Output
4*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
       long long n , m, a;
    // char operation = '*';
    cin >> n >> m >> a;
     long long x = ceil(n+a-1)/a;
     long long y = ceil(m + a-1)/a;
    cout << x * y << endl;
};