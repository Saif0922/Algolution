#include <iostream>
#include <vector>
using namespace std;

long long ORofSubarrays(const vector<int>& A) {
    int N = A.size();
    long long totalOR = 0;
    long long currOR = 0;

    for (int i = 0; i < N; i++) {
        currOR = currOR | A[i];
        totalOR = totalOR | currOR; 
    }

    return totalOR;
}

int main() {
    int N;
    cout << "Enter size of the array: ";
    cin >> N;
    vector<int> A(N);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long result = ORofSubarrays(A);
    cout << "The OR of all subarrays is: " << result << endl;

    return 0;
}
