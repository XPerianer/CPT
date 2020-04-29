#include <bits/stdc++.h>

#define rep(a, b)   for(int a = 0; a < (b); ++a)
#define all(a)      (a).begin(),(a).end()
#define endl        '\n'
#define debug(x)    cout << #x << " = " << x << endl;

using namespace std;
using Graph = vector<vector<pair<int, unsigned int>>>;
using ll = long long;
template <typename T>void fastscan(T &number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(10);



    return 0;
}


// -- fast input --
template <typename T>void fastscan(T &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    int c; 
    number = 0; 
    // extract current character from buffer 
    do {
        c = getchar_unlocked();
    } while((c < '0' || c > '9')&& c != '-');
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
        // extract the next character from the buffer 
        c = getchar_unlocked(); 
    } 
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar_unlocked()) 
        number = number *10 + c - 48; 
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}
