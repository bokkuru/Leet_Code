class Foo {
private: 
    int flag;
    void roop(int num){
        while(flag != num){
            std::this_thread::sleep_for(std::chrono::microseconds(1));
        }
    }
    void flag_set(int num){
        flag = num;
    }
    
public:
    Foo() {
        flag = 0;
    }

    void first(function<void()> printFirst) {
        roop(0);
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();    
        flag_set(1);
    }

    void second(function<void()> printSecond) {
        roop(1);
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();        
        flag_set(2);
    }

    void third(function<void()> printThird) {
        roop(2);
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        flag_set(0);
    }
};