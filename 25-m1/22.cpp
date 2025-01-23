/* left rotation */
#include <vector>
using namespace std;

vector<int> leftRotate(vector<int> arr, int n) {
    size_t len = arr.size();
    vector<int> res(len);
    for (int i = 0; i < len; i++) {
        res[(len - (n%len) + i) % len] = arr[i];
    }
    return res;
}

int main() {
    return 0;
}