#include <bits/stdc++.h>
using namespace std;


int main()
{ 

	pair <int, string> p1;
	pair <int, string> p2;

	// p1= make_pair(42, "why tf this syntax");
	int n;
	string s;

	cin>>n;
	cin>>s;
	p2.first=n;
	p2.second=s;
	// p2 = {n, "STL is nice ig"};

	p1 = p2;   // soft copy -> o(n)

	pair<int, string> &p3 = p2;   // hard copy

	p2.first = 0;

	cout<<" "<<p1.first<<" "<<p1.second<<endl;
	cout<<" "<<p3.first<<" "<<p3.second;

	// printVector(vector<int> v){
	// 	for(int i=0; i<v.size(); i++){
		
	// }
	// }

	// vectors
	int N;
	cin>> N;
	vector<int> v;
	for(int i=0; i<N; i++){
		int x;
		cin>>x;
		v.push_back(x);   // v.push_back -> 0(1)
	}
	cout<<endl;
	for(int i=0; i<v.size(); i++){  // v.size() -> O(1)

		cout<<v[i]<<" ";
	}




	return 0;
}

