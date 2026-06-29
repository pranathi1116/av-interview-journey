class SensorRegistry {
public :
std::vector<std::unique_ptr<Sensor>> sensorData;
void addSensor(std::unique_ptr<Sensor> sensor) {
        if (sensor) {
            sensorData.push_back(std::move(sensor));
        }
}

 bool removeSensor(int id) {
        auto it = std::remove_if(sensorData.begin(), sensorData.end(),
            [id](const std::unique_ptr<Sensor>& sensor) {
                return Sensor->getId() == id;
            });

        if (it != sensorData.end()) {
            // Erasing triggers the unique_ptr destructor instantly
            sensorData.erase(it, sensorData.end());
            return true; 
        }
        return false;
    }

void printAllSensors() const {
        std::cout << "--- Collection Contents (" << sensorData.size() << " items) ---\n";
        for (const auto& sensor : sensorData) {
            sensor->printInfo(); 
        }
    }
};
