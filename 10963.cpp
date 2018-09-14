#include <iostream>
using namespace std;

int main() {
	int tc, n, up, down;

	cin>>tc;;
	while (tc--) {
		cin>>n;

		bool yes = true;
		cin>>up>>down;
		int d = up - down;

		for (int i = 0; i < n - 1; i++) {
			cin>>up>>down;
			if (d != up - down)
				yes = false;
		}

		if (yes)
			cout<<"yes\n";
		else
			cout<<"no\n";

		if (tc)
			cout<<"\n";
	}
	return 0;
}
