#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		vector<string> s(k);
		for (int i = 0; i < k; i++) {	
			cin >> s[i];
		}
		bool last_checker = true;
		for (int i = 0; i < k; i++) {
			bool lower = true;
			bool upper = true;	
			// check if every letter in a word falls in under one 
			// of the categories that were stated in the problem
			for (int j = 0; j < (int) s[i].size(); j++) {
				if (!(s[i][j] >= 'a' && s[i][j] <= 'm')) {
					// if one of its letters is not a lowercase letter from a to m,
					// then this word does not fall in the lowercase category
					lower = false;
				}
				if (!(s[i][j] >= 'N' && s[i][j] <= 'Z')) {
					// if one of its letters is not an uppercase letter from N to Z,
					// then this word does not fall in the uppercase category
					upper = false;
				}
			}
			if ((lower && upper) || (!lower && !upper)) {
				// if the word both contains correct uppercase and lowercase letters, or 
				// if the word both contains incorrect uppercae and lowercase letters,
				// then set 'last_checker' to false (invalid word)
				last_checker = false;
				break;
			}
		}
		cout << (last_checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
