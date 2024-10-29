#pragma once

namespace driving {

class Engine {
    public:
    Engine(unsigned int horsepower): horsepower_{horsepower}{
    }
    void start() const;
    private:
    unsigned int horsepower_;
};  // class Engine
}  // namespace driving
