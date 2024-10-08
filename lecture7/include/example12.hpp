class DemoStaticAttribute {
   public:
    static int count;  // declaration of class attribute
    DemoStaticAttribute() { count++; }

    int get_count() const {  // object method
        return count;        // OK: non static method accessing static attribute
    }
};  // class DemoStaticAttribute