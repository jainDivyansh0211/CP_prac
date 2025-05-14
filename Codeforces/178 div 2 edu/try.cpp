#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solveGame(int n, const string& cardDistribution) {
    // Count initial cards for each player
    int aliceCardCount = 0, bobCardCount = 0;
    vector<bool> aliceHasCard(n + 1, false);
    
    for (int i = 0; i < n; i++) {
        if (cardDistribution[i] == 'A') {
            aliceHasCard[i + 1] = true;
            aliceCardCount++;
        } else {
            bobCardCount++;
        }
    }
    
    // Check if Alice has card 1 and Bob has card n
    bool aliceHasOne = aliceHasCard[1];
    bool bobHasN = !aliceHasCard[n];
    
    // Key insight: If Alice has card 1, she can always win with optimal play
    // If Bob has card n, he can use it to counter card 1
    // Otherwise, the player with the highest card generally has the advantage
    
    // Special case: If Alice has card 1 and Bob has card n
    if (aliceHasOne && bobHasN) {
        // Alice can play card 1, which beats card n
        // Bob's best move is to play card n, but then Alice gets both
        // Analyze if this initial advantage is enough for Alice to win
        
        // Count cards excluding 1 and n
        int aliceRemaining = aliceCardCount - 1;
        int bobRemaining = bobCardCount - 1;
        
        // After first exchange, Alice has +2 cards advantage
        if (aliceRemaining + 2 > bobRemaining) {
            return "Alice";
        } else {
            return "Bob";
        }
    }
    
    // If Alice has card 1 but Bob doesn't have card n, Alice can use card 1 to win against Bob's highest card
    if (aliceHasOne) {
        return "Alice";
    }
    
    // If Bob has card n and Alice doesn't have card 1, then card n is essentially the highest card
    // Bob can counter any of Alice's cards
    if (bobHasN) {
        return "Bob";
    }
    
    // In general scenarios, determine who has the highest card
    int highestCard = n;
    while (highestCard > 0) {
        if (aliceHasCard[highestCard]) {
            return "Alice"; // Alice has the highest card
        }
        if (!aliceHasCard[highestCard]) {
            return "Bob"; // Bob has the highest card
        }
        highestCard--;
    }
    
    // Fallback (shouldn't reach here with proper inputs)
    return "Alice";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string cardDistribution;
        cin >> cardDistribution;
        
        cout << solveGame(n, cardDistribution) << endl;
    }
    
    return 0;
}