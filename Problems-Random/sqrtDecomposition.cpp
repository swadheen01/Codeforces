#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int N = 1e5 + 5;
int arr[N];
int block[N];
int n;
int blockSize;

void build() {
    blockSize = sqrt(n);
    for (int i = 0; i < n; ++i) {
        block[i / blockSize] += arr[i];
    }
}

int query(int l, int r) {
    int sum = 0;
    while (l <= r && l % blockSize != 0) {
        sum += arr[l++];
    }
    while (l + blockSize - 1 <= r) {
        sum += block[l / blockSize];
        l += blockSize;
    }
    while (l <= r) {
        sum += arr[l++];
    }
    return sum;
}

void update(int i, int val) {
    block[i / blockSize] += val - arr[i];
    arr[i] = val;
}

int main() {
    n = 9;
    int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < n; ++i) {
        arr[i] = input[i];
    }

    build();

    cout << query(2, 7) << endl;

    update(4, 10);

    cout << query(2, 7) << endl;

    return 0;
}
