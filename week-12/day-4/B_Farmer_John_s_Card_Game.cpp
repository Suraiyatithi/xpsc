#include <bits/stdc++.h>
using namespace std;

bool canPlayAllCards(const vector<vector<int>>& cards, vector<int>& order) {
    int n = cards.size();
    vector<multiset<int>> cowCards(n);
    
    // Fill multiset with sorted cards for each cow
    for (int i = 0; i < n; ++i) {
        for (int card : cards[i]) {
            cowCards[i].insert(card);
        }
    }

    int topCard = -1;

    // Simulate m rounds
    for (int round = 0; round < cards[0].size(); ++round) {
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int cowIndex = order[i];
            auto it = cowCards[cowIndex].upper_bound(topCard);
            if (it != cowCards[cowIndex].end()) {
                // Play this card
                topCard = *it;
                cowCards[cowIndex].erase(it); // Remove this card from the multiset
                found = true;
                break; // Move to next round after one successful play
            }
        }
        if (!found) {
            return false; // If no cow could play a card
        }
    }

    return true; // All cards were played successfully
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> cards(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end()); // Sort each cow's cards
        }

        vector<int> order(n);
        iota(order.begin(), order.end(), 0); // Fill with 0, 1, ..., n-1

        bool found = false;

        do {
            if (canPlayAllCards(cards, order)) {
                found = true;
                break;
            }
        } while (next_permutation(order.begin(), order.end()));

        if (found) {
            for (int i = 0; i < n; ++i) {
                cout << order[i] + 1 << " "; // Convert to 1-based index
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}

