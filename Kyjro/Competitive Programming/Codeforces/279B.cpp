/*
** date   :   5.6.2022
** time   :   8:13
** author : Trần Vũ Hải Đăng (kyjro)
** region : Việt Nam , Vũng Tàu
** school : Lê Quý Đôn High School Gifted

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠄⠀⠀⠀⠀⠀⠒⠒⠒⠲⠤⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠧⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣑⡦⠤⠒⠒⠒⠈⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢏⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⣄⠀⠀⠙⢆⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠢⡀⠀⠀⢣⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠸⡀⠀⠀⠀⣠⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄⠀⠈⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢣⡀⠀⡴⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠒⢦⢄⡀⠀⠀⠀⠀⠀⠀⠘⢆⠀⠸⡄⠀⠀⠀⡰⠃⠀
⠀⠀⠀⠀⠀⡸⢻⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠔⠋⢰⠀⠀⡼⠀⢟⠲⣄⠀⠀⠀⠀⠀⠈⢆⠀⠙⢄⣀⢼⠁⠀⠀
⠀⠀⠀⠀⠀⣧⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠃⠀⠀⣸⠀⠀⡇⠀⣸⣦⠈⢧⡀⠀⠀⠀⠀⠈⢆⠀⠀⠀⠘⡀⠀⠀
⠀⠀⠀⠀⢀⡿⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡔⠁⣌⡠⠔⠉⡌⠀⢸⠁⡸⡟⢻⣇⡾⢷⡀⠀⠀⠀⠀⠈⠆⠀⠀⠀⡇⠀⠀
⠀⠀⠀⠀⡜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⣋⣷⠒⠋⠀⠀⢠⠁⢠⡏⢠⠇⠛⠉⠻⣇⡀⣷⠀⠀⠀⠀⠀⠸⡄⠀⠀⠘⡄⠀
⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⢠⠀⠀⠀⠈⢀⡞⣰⣿⣶⣶⣶⣆⣸⣧⣛⣇⠀⠀⠀⠀⠀⢳⡀⠀⠀⢣⠀
⠀⠀⢀⠇⠀⠀⠀⠀⢀⣠⠔⢊⠁⡏⠸⣟⣉⣹⠓⠘⡆⠀⠀⠀⡜⠑⠿⣿⣿⣿⣿⠏⢻⣿⣉⣹⡄⠀⠀⠀⠀⠸⣷⠀⠀⠸⡄
⠀⢀⠎⠀⠀⢀⣴⡞⠁⡏⠀⡎⢸⠁⠈⠉⠉⠁⠀⠀⠙⣰⢁⠎⠀⠀⠀⠫⣁⣉⠝⠀⢾⡟⠋⠉⢱⣄⠀⠀⠀⠀⣧⢣⠀⠀⡇
⠀⡜⠀⢀⣴⠛⣿⢀⢼⡇⢰⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠙⠃⠀⠀⠀⠀⠀⠀⠉⡀⠀⣼⠛⠀⠀⢸⠟⠀⠀⠀⠀⢸⠘⡆⢰⠁
⡼⠀⣠⡏⢿⠀⡏⠀⠸⢰⠂⠀⣿⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⡏⠀⠀⠀⡎⠀⢀⡤⠒⢈⠏⠀⣷⠃⠀
⠙⢌⠻⢧⣸⠐⢿⠀⢀⠸⡇⠀⣿⡆⠱⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡟⠀⠀⣀⡜⠀⡴⠋⠀⢀⠞⠀⠀⡻⠀⠀
⠀⠀⠑⢦⡈⠳⣄⠑⠺⣼⣧⠀⢹⡹⣼⣨⡗⠦⣀⠀⠀⠀⠀⠀⠀⣠⡤⠚⢡⡿⠁⠀⣀⠟⠀⠈⠀⠀⡠⠋⠀⠀⢠⡇⠀⠀
⠀⠀⠀⠀⠙⢆⡀⠑⠠⣈⠛⣄⠘⡏⠁⠀⠸⡀⠈⠑⠒⠄⠐⠒⠋⠁⡟⣣⠴⠋⢀⡠⠊⠁⠀⠀⢀⡠⠊⠀⠀⠀⡠⠋⠀⠀⠀
⠀⠀⠀⠀⠀⡿⠙⢆⠀⠈⠛⢿⡀⠙⢄⣀⣴⠃⠀⠀⠀⠀⠀⠀⠀⡠⠋⠁⡠⠖⠁⠀⠀⠀⡠⠔⠁⠀⠀⠀⡠⠊⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢸⠁⠀⠀⠹⡦⣀⠀⢱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⢁⡠⠊⠀⠀⠀⠀⠀⠈⠀⠀⠀⣠⣴⣏⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠊⠀⠀⠀⠀⢇⠀⠀⢸⡆⠰⣄⠀⠀⠀⠀⠀⠀⢠⣃⠔⠋⣀⠤⠀⠐⠒⠀⡀⠔⠂⠀⠁⢚⣁⠈⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠄⣄⠀⣷⡀⠀⠱⠀⠀⠀⠀⢤⠞⢁⠔⠉⠀⠀⢀⡔⠀⠁⠀⠀⠀⠀⠀⠀⠈⠙⠢⡀⠀⠀⠀⠀⠀

*/

#include<bits/stdc++.h>

using namespace std;

#define EP 1.0e-4
#define maxD 10000
#define COSO 100000000
#define PI 3.1415926535897932384626433832795

#define ll long long
#define ld long double
#define ull unsigned long long
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front

#define fi first
#define se second
#define pii pair<ll , ll>
#define piii pair<pii, ll>
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()

#define NAME " "
#define menma freopen(NAME".inp","r",stdin); freopen(NAME".out","w",stdout);
#define quick ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

template < class T > T Abs(T x){
    return x > 0 ? x : -x;
}

template < class T > T power(T N, T P) {
    return (P == 0) ? 1 : N *  power(N, P - 1);
}

template < class T > inline T max_(T a, T b){
    return a > b ? a : b;
}

template < class T > inline T min_(T a, T b) {
    return a < b ? a : b;
}

template < class T > inline T gcd(T a, T b) {
    if (a <  0) {
        return gcd(-a, b);
    }

    if (b < 0) {
        return gcd(a , -b);
    }

    return (b == 0) ? a : gcd(b, a % b);
}

template < class T > inline T lcm(T a, T b) {
    if (a < 0){
        return lcm(-a , b);
    }

    if (b < 0){
        return lcm(a, -b);
    }

    return a * (b / gcd(a, b));
}

template<typename T> void read(T &x)
{
    x = 0;
    bool neg = 0;
    register T c = getchar();

    if (c == '-')
        neg = 1, c = getchar();

    while ((c < 48) || (c > 57))
        c = getchar();

    for ( ; c < 48||c > 57 ; c = getchar());

    for ( ; c > 47 && c < 58; c = getchar() )
        x= (x << 3) + ( x << 1 ) + ( c & 15 );

    if (neg) x *= -1;
}

template<typename T> void write(T n)
{
    bool neg = 0;

    if (n < 0)
        n *= -1, neg = 1;

    char snum[65];
    int i = 0;
    do
    {
        snum[i++] = n % 10 + '0';
        n /= 10;
    }

    while (n);
    --i;

    if (neg)
        putchar('-');

    while (i >= 0)
        putchar(snum[i--]);

    putchar('\n');
}

const int MOD1 = 1e7;
const int MOD2 = 1e9;
const ll bignum = 1e18;
const int sz1 = 1e5 + 5;
const int sz2= 1e6+5;
const int sz3 = 1e7 + 5;
const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};

int n;
int a[size0];

void solve() {
    read(n); read(t);
    for(int i = 0; i < n; ++i) {
        read(a[i]);
    }

}

int main(){
    //menma
    quick;
    solve();
}



