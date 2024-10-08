class DemoStaticMethod {
   public:
    static int count;

    DemoStaticMethod() { count++; }  // default ctor

    static int get_count() {  // class method
        return count;
    }
};  // class DemoStaticMethod