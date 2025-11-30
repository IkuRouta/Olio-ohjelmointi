#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int hp, double disp);

    int getHorsepower() const;
    double getDisplacement() const;

    void setHorsepower(int hp);
    void setDisplacement(double disp);
};

#endif
