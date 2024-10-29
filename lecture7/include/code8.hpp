class DemoConstAndRef {
   public:
    DemoConstAndRef(int constant, int reference): {
        const_ = constant;  // error
        ref_ = reference;   // error
    }

   private:
    const int const_;
    int &ref_;

};  // class DemoConstAndRef