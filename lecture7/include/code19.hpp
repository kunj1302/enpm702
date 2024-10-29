class Temperature {
   public:
    // Constructor taking one argument for the temperature in Celsius
    Temperature(double celsius)
        : celsius_{celsius} {
    }

    double get_celsius() const { return celsius_; }

   private:
    double celsius_;
};