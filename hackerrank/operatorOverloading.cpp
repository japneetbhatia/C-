
class Matrix {
    public:
        vector<vector<int>> a;
};

inline Matrix operator+(const Matrix &A, const Matrix &B) {
    Matrix C;
    int n = A.a.size(), m = A.a.front().size();
    
    for(int i = 0; i < n; ++i) {
        C.a.push_back(A.a[i]);
        for(int j = 0; j < m; ++j) {
            C.a[i][j] += B.a[i][j];
        }
    }
    
    return C;
}
