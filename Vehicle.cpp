class Vehicle {
public:
int id;
sts::string type;
float speed;
Vehicle(int id, std::string type, float speed) {}
};

class VehicleManager {
public:
std::vector<Vehicle> vehicles;

 void addVehicle(const Vehicle& vehicle) {
        if (vehicle) {
            vehicles.push_back(vehicle);
        }
    }

Vehicle* findVehicle(int id) {
        for (const auto& vehicle : vehicles) {
            if (vehicle->getId() == id) {
                return vehicle.get();
            }
        }
        return nullptr;
    }

Vehicle* updateSpeed(int id, double speed) {
   for (const auto& vehicle : vehicles) {
            if (vehicle->getId() == id) {
            vehicle.speed == speed;  
            return vehicle.get();
            }
        }
        return nullptr;
    }

void printVehicle(const Vehicle& vehicle) {
  for (const auto& vehicle : vehicles) {
    std::cout << "Vehicle details : id " << vehicle.id << " type" << vehicle.type << "speed" << vehicle.speed;
}

};
