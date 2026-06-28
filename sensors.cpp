#include <iostream>

class Sensor {
public:
int id;
string name;
~Sensor();
virtual void printInfo() const{
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};

class Lidar : public Sensor {
public :
~Lidar();
void printInfo() const override {
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};

class Camera : public Sensor {
public :
~Camera();
void printInfo() const override {
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};

class Radar : public Sensor {
public :
~Radar();
void printInfo() const override {
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};
