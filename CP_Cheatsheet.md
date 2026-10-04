# 🏆 Competitive Programming Cheatsheet

## Contest Template

### ⚡ Fast I/O
```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Solution here

    return 0;
}
```
---

## Test cases handling
```cpp
int t;
cin >> t;

while(t--) {

    int n;
    cin >> n;

    // solve this test case

}
```
---

### Range based loop
```cpp
for(int x : a) {
    cout << x << " ";
}
```

---


# Macros
Range
```cpp
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// sort(all(v));
// sort(rall(v));
// reverse(all(v));
```

### Swap
for swapping 
```cpp
swap(a, b);
```
swap header ->
```cpp
#include <utility>
```
### Sort
Sorting header ->
```cpp
#include <algorithm>
```
---

```cpp
// Sorting
sort(a.begin(), a.end());

// Descending:
sort(a.rbegin(), a.rend());

// min/max
min(a,b);
max(a,b);
```
---

### Boolen function
```cpp
bool isEven(int x) {
    return x % 2 == 0;
}

if(isEven(x)) {
    cout << "Even";
}
```

---
