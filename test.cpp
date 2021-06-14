#include <bits/stdc++.h>

using namespace std;

void change_pointer(int*& pointer) {
  *pointer = 20;
  pointer = new int(2000);
}
int main() {
  int* pointer = new int(30);
  change_pointer(pointer);
  cout << *pointer << endl;
  return 0;
}