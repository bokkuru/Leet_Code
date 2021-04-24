class FooBar {
private:
    int n;
    int flag;
    void roop(int num){
        while(flag != num){
            std::this_thread::sleep_for(std::chrono::microseconds(1));
        }
    }
    void set_flag(int num){
        this->flag = num;
    }

public:
    FooBar(int n) {
        this->n = n;
        this->flag = 0;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            roop(0);
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            set_flag(1);
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            roop(1);
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            set_flag(0);
        }
    }
};