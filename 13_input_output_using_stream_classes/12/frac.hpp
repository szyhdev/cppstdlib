class Fraction {
private:
    int _n;
    int _d;
public:
    Fraction(int n, int d) : _n(n), _d(d) {
    }
    int numerator() const {
        return _n;
    }
    int denominator() const {
        return _d;
    }
};
