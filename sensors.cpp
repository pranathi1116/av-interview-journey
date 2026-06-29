#include <iostream>

class Sensor {
protected:
int id;
string name;
public:
Sensor(std::string name, int id) 
        : name(std::move(name)), id(id) {}
~Sensor();
int getId() const { return id; }
const std::string& getName() const { return name; }
virtual void printInfo() const{
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};

class Lidar : public Sensor {
public :
Lidar(std::string name, int id) 
        : Sensor(std::move(name), id) {}
~Lidar();
void printInfo() const override {
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};

class Camera : public Sensor {
public :
Camera(std::string name, int id) 
        : Sensor(std::move(name), id) {}
~Camera();
void printInfo() const override {
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};

class Radar : public Sensor {
public :
Radar(std::string name, int id) 
        : Sensor(std::move(name), id) {}
~Radar();
void printInfo() const override {
  std::cout << "Sensor ID : " << id << "Sensor Name : " << name;
}
};
