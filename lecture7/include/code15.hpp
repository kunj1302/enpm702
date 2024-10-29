class MathUtils {
   public:
    static int add(int a, int b) {
        return a + b;
    }
};

int result{MathUtils::add(3, 4)};  // No need to create a MathUtils object