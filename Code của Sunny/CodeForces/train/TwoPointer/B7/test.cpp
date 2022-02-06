#include <bits/stdc++.h>
using namespace std;
// Tên chương trình
const string NAME = "a";
// Số test kiểm tra
const int NTEST = 100;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

long long Rand(long long l, long long h) {
    assert(l <= h);
    return l + (rand() % (h - l + 1));
}

int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp((NAME + ".inp").c_str());
        // Code phần sinh test ở đây

        int n = Rand(1 , 100000);

        inp << n << endl;
        for(int i = 0 ; i < n; i++)
            inp << Rand(1 , 1000000000000000000) << " ";
        inp << endl;

        inp.close();
        // Nếu dùng Linux thì "./" + Tên chương trình
        system("a.exe");
        system("trau.exe");
        // Nếu dùng linux thì thay fc bằng diff
        if (system(("fc " + NAME + ".out " + "trau.out").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}