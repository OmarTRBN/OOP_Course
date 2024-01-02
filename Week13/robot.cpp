#include <iostream>
#include <vector>

using namespace std;

class RobotComponent
{
public:
    RobotComponent() {}
    ~RobotComponent() {}
    virtual double operate(double) = 0;
    virtual void getParameters() = 0;
};

class TemperatureSensor : public RobotComponent
{
private:
    double T0; // Referance temperature
    double VoutT0;

public:
    TemperatureSensor() : T0(20), VoutT0(2.98) {}
    TemperatureSensor(double t0, double voutt0) : T0(t0), VoutT0(voutt0) {}
    ~TemperatureSensor() {}

    void setParameters(double t0, double vout0)
    {
        T0 = t0;
        VoutT0 = vout0;
    }

    void getParameters() override
    {
        cout << "T0 is equal to: " << T0 << endl;
        cout << "VoutT0 is equal to: " << VoutT0 << endl;
    }

    double operate(double temperatureReading) override
    {
        double outputVoltage;
        outputVoltage = temperatureReading * VoutT0 / T0;
        return outputVoltage;
    }
};

class DCMotor : public RobotComponent
{
private:
    double resistance;
    double torqueConstant;

public:
    DCMotor() :  resistance(200), torqueConstant(4) {}
    DCMotor(double r, double k) : resistance(r), torqueConstant(k) {}
    ~DCMotor() {}

    void setParameters(double r, double k)
    {
        resistance = r;
        torqueConstant = k;
    }

    void getParameters() override
    {
        cout << "resistance is equal to: " << resistance << endl;
        cout << "torqueConstant is equal to: " << torqueConstant << endl;
    }

    double operate(double voltage) override
    {
        double current = voltage / resistance;
        double torque = torqueConstant * current;
        return torque;
    }
};

class Gyroscope : public RobotComponent
{
private:
    double sensitivity;

public:
    Gyroscope() : sensitivity(0.01) {}
    Gyroscope(double s) : sensitivity(s) {}
    ~Gyroscope() {}

    void setParameters(double s)
    {
        sensitivity = s;
    }

    void getParameters() override
    {
        cout << "Sensitivity is equal to: " << sensitivity << " degrees per second" << endl;
    }

    double operate(double angularVelocity) override
    {
        double orientationChange = angularVelocity * sensitivity;
        return orientationChange;
    }
};

class Robot
{
private:
    string name;
    long int serialNumber;
    static int objectCounter;
    vector<RobotComponent*> componentsList;

public:
    Robot(string name) : name(name)
    {
        objectCounter++;
        serialNumber = objectCounter;
    }
    ~Robot() {}

    friend class RobotMonitor;

    void attachComponent(RobotComponent* newComponent)
    {
        componentsList.push_back(newComponent);
    }

    static int getObjectCounter()
    {
        return objectCounter;
    }

    Robot &operator+=(RobotComponent *b)
    {
        this->attachComponent(b);
        return *this;
    }
};

int Robot::objectCounter = 0;

class RobotMonitor
{
private:
    Robot &robotObj;

public:
    RobotMonitor (Robot &robotObj) : robotObj(robotObj)
    {
        cout << "Robot monitor attached." << endl;
    }

    void printRobotInfo()
    {
        cout << "Name: " << robotObj.name << endl;
        cout << "Serial number: " << robotObj.serialNumber << endl;
    }

    void printComponentsInfo()
    {
        for (size_t i = 0; i < robotObj.componentsList.size(); ++i)
        {
            cout << "Component " << i + 1 << ":" << endl;
            robotObj.componentsList[i]->getParameters();
            cout << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    TemperatureSensor tempSensor(23.3 , 3.05);
    tempSensor.getParameters();

    DCMotor dcMotor(180, 5);
    dcMotor.getParameters();
    
    Robot viper("Viper");
    cout << "Robot object instances: " << Robot::getObjectCounter() << endl;

    Robot robot2("Arduinobot");
    cout << "Robot object instances: " << Robot::getObjectCounter() << endl;
    
    // DCMotor dcMotor2(121, 2);
    // dcMotor2.getParameters();

    viper.attachComponent(&tempSensor);
    viper.attachComponent(&dcMotor);

    RobotMonitor monitorObj(viper);
    monitorObj.printRobotInfo();
    monitorObj.printComponentsInfo();

    // RobotComponent *ptr3 = &dcMotor2;
    // robot2.printComponentsInfo();
    // robot2+=ptr3;

    return 0;
}
