#include <bits/stdc++.h>

#include <thread>

using namespace std;

int main() {
  auto f = [](int x) {
    for (int i = 0; i < x; i++)
      cout << "Thread using lambda"
              " expression as callable\n";
  };

  thread t(f, 100);

  t.join();
  for (int i = 0; i < 5; i++) {
    cout << "From main\n";
  }
  return 0;
}
