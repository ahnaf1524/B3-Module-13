// author : ahnaf_cp
#include <iostream>
#define endl '\n'
#define LOCAL
using namespace std;

void solve(void) {
    int n;
    cin >> n;
    int setBit = n | (1 << 0);
    int unsetBit = setBit & ~(1 << 1);
    int flipBit = unsetBit ^ (1 << 2);
    cout << flipBit << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif
    solve();
    return 0;
}
