#include <bits/stdc++.h>
using namespace std;
// Tên chương trình
const string NAME = "digit";
// Số test kiểm tra
const int NTEST = 100;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

// Viết lại hàm random để sử dụng cho thuận tiện. Hàm random này sinh ngẫu nhiên số trong phạm vi long long, số sinh ra >= l và <= h.
long long Rand(long long l, long long h) {
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp((NAME + ".inp").c_str());
        // Code phần sinh test ở đây
        long long a = Rand(0 , 9999999999);
	int n = Rand(1 , 20);
        int k = Rand(1 , 1000000000000000000);
	inp << a << endl;
	inp << n << " " << k;
        inp.close();
        // Nếu dùng Linux thì "./" + Tên chương trình
        system(("./"+ NAME + "").c_str());
        system(("./"+ NAME + "_trau").c_str());
        // Nếu dùng linux thì thay fc bằng diff
        if (system(("diff " + NAME + ".out " + NAME + "_trau.out").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}
