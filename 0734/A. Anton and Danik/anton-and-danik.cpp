// https://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// for cin>>vector
template <typename T>
istream &operator>>(istream &in, vector<T> &v)
{

	T x;
	char sentinel; // for '['
	in >> sentinel;
	while (in >> x)
	{
		if (in.peek() == ',') // check if the next character is a comma and ignore it
			in.ignore();
		v.push_back(x);
	}
	return in;
}

// for cout<<vector
template <typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
	out << "[";
	for_each(begin(v), end(v) - 1, [&](const auto &element)
			 { out << element << ","; });
	out << v.back() << "]" << endl;
	return out;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("0-!n.txt", "r", stdin);
	freopen("0-out.txt", "w", stdout);
#endif
	std::ios::sync_with_stdio(false);
	int t = 1;
#ifndef ONLINE_JUDGE
	cin >> t;
#endif

	while (t--)
	{
		int n;
		string s;
		cin >> n >> s;
		int a_wins = 0, b_wins = 0;
		for (auto &c : s)
		{
			if (c == 'A')
			{
				a_wins++;
			}
			else
			{
				b_wins++;
			}
		}
		if (a_wins > b_wins)
		{
			cout << "Anton" << endl;
		}
		else if (b_wins > a_wins)
		{
			cout << "Danik" << endl;
		}
		else
		{
			cout << "Friendship" << endl;
		}
	}
	return 0;
}
