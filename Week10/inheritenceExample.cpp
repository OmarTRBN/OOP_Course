#include <iostream>

using namespace std;

class RobotComponent
{
public:
    // RobotComponent(){}
    virtual double operate(double) = 0;
    // virtual ~RobotComponent() {}
};

class TemperatureSensor : public RobotComponent
{
private:
    double T0; // Referance temperature
    double VoutT0; 

public:
    TemperatureSensor();
    ~TemperatureSensor();

    void setParameters(double t0, double vout0)
    {
        T0 = t0;
        VoutT0 = vout0;
    }

    void getParameters()
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
    DCMotor();
    ~DCMotor();

    void setParameters(double r, double k)
    {
        resistance = r;
        torqueConstant = k;
    }

    void getParameters()
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

class Robot
{
private:
    string name;
    string serialNumber;
    // int componentsList[];

public:
    // void attachComponent(RobotComponent &newComponent)
    // {
    // }
};

TemperatureSensor::TemperatureSensor()
{
    T0 = 20;
    VoutT0 = 2.98;
}

TemperatureSensor::~TemperatureSensor(){}

DCMotor::DCMotor()
{
    resistance = 200;
    torqueConstant = 4;
}
DCMotor::~DCMotor(){}

int main()
{
    TemperatureSensor tempSensor;
    tempSensor.getParameters();

    return 0;
}