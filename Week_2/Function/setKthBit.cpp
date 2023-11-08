#include <iostream>
#include<math.h>
using namespace std;

int kthBit(int N, int K)
{
  int count = 0;
  int ans = N;
  while (N > 0)
  {
    cout << (N&1) << endl;
    if (count == K && (N&1) == 0){
      ans = ans + pow(2, K);
      break;
    }

    N = (N >> 1);
    count++;
  }
  return ans;
}

int main()
{
  int n;
  int k;
  cin >> n >> k;
  cout << kthBit(n, k) << endl;
  return 0;
}