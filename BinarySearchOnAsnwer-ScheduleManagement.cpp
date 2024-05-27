#include <iostream>
#include <vector>
using namespace std;

bool isOk(int timeTaken, const vector<int>& proficient, int totalTask) {
    long long int task = 0;
    for (int i=0;i<proficient.size();i++) {
        if (proficient[i] >= timeTaken) {
            task += timeTaken;
        } else {
            task += (proficient[i] + (timeTaken - proficient[i]) / 2);
        }
    }
    // cout<<task<<" "<<timeTaken<<"\n";
    return task >= totalTask;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        vector<int> proficient(n, 0);
        
        for (int i = 0; i < m; i++) {
            int curr;
            cin>>curr;
            proficient[curr-1]++;
        }

        int low = 1, high = 2 * m, ans = high;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (isOk(mid, proficient, m)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
