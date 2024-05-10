#include <iostream>
#include <vector>
#include <string>

std::string hit_target(int n) {
    // Initialize the dp table
    std::vector<int> dp(n + 1, 0);

    // Base case: if n is 2, then two shots at the same spot solve the problem
    dp[2] = 2;

    // Fill the dp table
    for (int i = 3; i <= n; i++) {
        dp[i] = 2 * (i - 1) + 2;  // Add 2 for the extra shots at the second to last spot
    }

    // Initialize the shot counter
    int shot_counter = 0;

    // Sequence of shots for n > 2
    std::vector<int> shots;
    for (int i = 2; i < n; i++) {
        shots.push_back(i);
    }

    for (int i = n - 1; i > 1; i--) {
        shots.push_back(i);
    }
    shots.push_back(2);
    shots.push_back(2);

    for (int shot : shots) {
        std::cout << "Shooting at spot " << shot << ".\n";
        shot_counter += 1;
        std::string result;
        std::cout << "Did the shot hit the target? (yes/no): ";
        std::cin >> result;
        if (result == "yes") {
            return "Target hit at spot " + std::to_string(shot) + " after " + std::to_string(shot_counter) + " shots!";
        }
        else {
            std::cout << "Target missed. Moving to the next spot.\n";
        }
    }

    return "Minimum shots needed to guarantee a hit: " + std::to_string(dp[n]);
}

int main() {
    std::cout << hit_target(4);
    return 0;
}