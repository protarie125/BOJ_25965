#include <iostream>
#include <vector>

using namespace std;

using ll = long long;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		int m;
		cin >> m;
		auto vk = vl(m);
		auto vd = vl(m);
		auto va = vl(m);
		for (auto i = 0; i < m; ++i) {
			cin >> vk[i] >> vd[i] >> va[i];
		}

		int k, d, a;
		cin >> k >> d >> a;
		auto ans = ll{ 0 };
		for (auto i = 0; i < m; ++i) {
			const auto& x = k * vk[i] - d * vd[i] + a * va[i];
			if (0 < x) {
				ans += x;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}