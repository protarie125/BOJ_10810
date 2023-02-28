#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m; cin >> n >> m;
	auto b = vi(n, 0);
	while (0 < (m--)) {
		int i, j, k;
		cin >> i >> j >> k;

		for (auto x = i - 1; x < j; ++x) {
			b[x] = k;
		}
	}

	for (const auto& x : b) {
		cout << x << ' ';
	}

	return 0;
}