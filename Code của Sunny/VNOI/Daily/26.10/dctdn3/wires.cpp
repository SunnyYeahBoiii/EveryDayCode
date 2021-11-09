#include "bits/stdc++.h"

using namespace std;

struct info{
	int gt , idx;
};

bool cmp(info a,  info b){
	if(a.gt < b.gt)
		return true;
	else if(a.gt > b.gt)
		return false;
	else{
		if(a.idx > b.idx)
			return true;
		else return false;
	}
}

pair<int , int> seg[100005*5];
int n;
int a[100005];
info b[100005];
int track[100005];
void update(int vt , int l , int r , int u , int value , int prev){
	if(u < l || u  > r)
		return;

	if(u == l && u == r){
		seg[vt] = {value , u};
		return;
	}
	int mid = (l+r)/2;
	update(vt*2 , l , mid , u , value , prev);
	update(vt*2+1 , mid+1 , r , u , value , prev);	

	pair<int , int> g1 = seg[vt*2] , g2 = seg[vt*2+1];	
	if(g1.first > g2.first)
		seg[vt] =  g1;
	else if(g2.first > g1.first)
		seg[vt] = g2;
	else seg[vt] = { g1.first , min(g1.second , g2.second) };
}

pair<int , int> get(int vt , int l , int r , int u , int v){
	if(v < l || u > v)
		return {-1 , 1 << 30};
	if(u <= l && r <= v)
		return seg[vt];

	int mid = (l+r)/2;
	pair<int , int> g1 = get(vt*2 , l , mid , u , v);
	pair<int , int> g2 = get(vt*2+1 , mid+1 , r , u , v);
	
	if(g1.first > g2.first)
		return g1;
	else if(g2.first > g1.first)
		return g2;
	else return{ g1.first , min(g1.second , g2.second) };
}

void solve(){
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		b[i].gt = a[i];
		b[i].idx = i;
	}
	memset(seg , 0 , sizeof(seg));
	sort(b , b+n , cmp);
	update(1 , 0 , n-1 , b[0].idx , 1 , -1);
	track[b[0].idx] = -1;
	int res = 0 , index;
	for(int i = 1 ; i < n ; i++){
		pair<int , int> temp = get(1 , 0 , n-1 , 0 , b[i].idx);
		if(temp.first == 0)
			temp = {0 , -1};
		update(1 , 0 , n-1 , b[i].idx , temp.first+1 , temp.second);
		if(temp.first+1 > res){
			res = temp.first+1;
			index = b[i].idx;
		}
		track[b[i].idx] = temp.second;
		//cout << "i =" << i << endl;
	}

	vector<int> path;
	path.push_back(a[index]);
	index = track[index];
	while(index != -1){
		//cout << "idx = " << index << endl;
		path.push_back(a[index]);
		index = track[index];
	}

	reverse(path.begin() , path.end());

	for(int i = 0 ; i < path.size() ; i++)
		cout << path[i] << " ";
	cout << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("wires.inp" , "r" , stdin);
	freopen("wires.out" , "w" , stdout);
	solve();
	return 0;
}
