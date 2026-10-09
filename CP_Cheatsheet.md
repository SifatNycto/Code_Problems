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


### Macros
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

### Binary Search 
Standard Template
```cpp
long long lo = 0, hi = 1e18;

while(lo < hi) {
    long long mid = lo + (hi - lo) / 2;

    if(check(mid))
        hi = mid;
    else
        lo = mid + 1;
}
```
---

### Sort
Ascending order
```cpp
sort(a.begin(), a.end());
```
Descending order
```cpp
sort(a.rbegin(), a.rend());
```

---


### Map
For Frequency the occurance
```text
1 2 2 3 3 3
```

```cpp
// O(log n) access
map<int,int> mp;

for(int x : a) {
    mp[x]++;
}
```

```text
mp[1] = 1
mp[2] = 2
mp[3] = 3
```

### Unordered Map
```cpp
// O(1) access
unordered_map<int,int> mp;
```

### Set
For storing unique values in sorted order

```cpp
set<int> s;

s.insert(5);
s.insert(2);
s.insert(5);
s.insert(10);
```
Output
```text
2 5 10
```

---


### Unique finding
Boolean array approach
```cpp
bool seen[26] = {};
int distinct = 0;

for (char c : username)
{
    int index = c - 'a';

    if (!seen[index])
    {
        seen[index] = true;
        distinct++;
    }
}
```

Set approach
```cpp
set<char> uniqueCharacters;

for (char c : items)
    uniqueCharacters.insert(c);
```