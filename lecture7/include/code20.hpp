class Unit {
   public:
    Unit(double m, double kg = 0.0, double s = 0.0)
        : meter_{m}, kg_{kg}, second_{s} {
    }

    void print_units() const{
        std::cout << "Meter: "<< meter_ << '\n';
        std::cout << "Kg: " << kg_ << '\n';
        std::cout << "Second: " << second_ << '\n';
    }

   private:
    double meter_;
    double kg_;
    double second_;
};
