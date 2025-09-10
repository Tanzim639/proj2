#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        bitset<32> binary(N);
        int ones_count = binary.count();
        
        bitset<32> new_binary;
        for (int i = 0; i < ones_count; i++) {
            new_binary.set(i);
        }
        
        int result = static_cast<int>(new_binary.to_ulong());
        cout << result << endl;
    }
    
    return 0;
}
