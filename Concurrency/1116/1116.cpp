class ZeroEvenOdd {
private:
    int n;
    mutex m1, m2, m3, m4;

public:
    ZeroEvenOdd(int n) {
        this->n = n;
        m1.lock();
        m3.lock();
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        for (int i = 0; i < n; i++){
            m4.lock();
            printNumber(0);
            m1.unlock();
        }
    }

    void even(function<void(int)> printNumber) {
        for (int i = 2; i <= n; i=i+2){
            m3.lock();
            m1.lock();
            printNumber(i);
            m2.unlock();
            m4.unlock();
        }
        
    }

    void odd(function<void(int)> printNumber) {
        for (int i = 1; i <= n; i=i+2){
            m2.lock();
            m1.lock();
            printNumber(i);
            m3.unlock();
            m4.unlock();
        }
    }
};