// Problem : https://atcoder.jp/contests/abc213/tasks/abc213_a
// author : ahnaf_cp
#include<iostream>
#define endl '\n'
//#define LOCAL
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifdef LOCAL
   freopen("in.txt","r",stdin);
  #endif
  // popular formula
  // a ^ b = c (given)
  // a ^ c = b
  // c ^ b = a
  int a , b;
  cin >> a >> b;
  cout << (b ^ a) << endl;
  return 0;
}
