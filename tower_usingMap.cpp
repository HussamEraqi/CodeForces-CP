#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, bar;
    map<int, int> counts;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> bar;
        counts[bar]++;
    }

    int max_count = 0;
    for (auto& p : counts) {
        if (p.second > max_count) {
            max_count = p.second;
        }
    }

    cout << max_count << " " << counts.size() << endl;
    return 0;
}

