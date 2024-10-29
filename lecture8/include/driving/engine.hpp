#pragma once

namespace driving {

class Engine {
<<<<<<< HEAD
    public:
    Engine(unsigned int horsepower): horsepower_{horsepower}{
    }
    void start() const;
    private:
=======
   public:
    Engine(unsigned int horsepower) : horsepower_{horsepower} {
        /*body*/
    }
    void start() const;

   private:
>>>>>>> upstream/main
    unsigned int horsepower_;
};  // class Engine
}  // namespace driving
