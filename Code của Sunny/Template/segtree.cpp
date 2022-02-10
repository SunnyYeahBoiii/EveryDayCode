struct segtree{

    vector<int> tree , lazy;
    int n , size;

    void init(int a){
        n = a;
        size = n*4+1;
        tree.resize(size);
        lazy.resize(size);
    }

    void build(){
        build(1 , 0 , n-1);
    }

    void down(int vt){
        int x = lazy[vt];
        lazy[vt] = 0;

        tree[vt*2] += x;
        lazy[vt*2] += x;

        tree[vt*2+1] += x;
        lazy[vt*2+1] += x;
    }

    void build(int vt , int l , int r){
        if(l == r){
            /*tree[vt] = value*/;
            return;
        }

        int mid = (l + r) / 2;

        build(vt*2 , l , mid);
        build(vt*2+1 , mid+1 , r);

        /*tree[vt] =  combine child nodes*/;
    }

    void update(int l , int r , int x){
        update(1 , 0 , n-1 , l , r , x);
    }

    void update(int vt , int l , int r , int u , int v , int x){
        if(l > v || r < u)
            return;

        if(u <= l && r <= v){
            tree[vt] = x;
            lazy[vt] += x;
            return;
        }

        down(vt);

        int mid = (l + r) / 2;

        update(vt*2 , l , mid , u , v, x);
        update(vt*2+1 , mid+1 , r , u , v,  x);

        /*tree[vt] = combine child nodes*/;
    }

    int get(int l , int r){
        return get(1 , 0 , n-1 , l , r);
    }

    int get(int vt , int l , int r , int u , int v){
        if(l > v || r < u)
            return 0;

        if(u <= l && r <= v)
            return tree[vt];

        down(vt);

        int mid = (l + r) / 2;

        return get(vt*2 , l , mid , u , v) + get(vt*2+1 , mid+1 , r , u , v);
    }

};