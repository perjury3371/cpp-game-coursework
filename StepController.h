#ifndef STEPCONTROLLER_H_INCLUDED
#define STEPCONTROLLER_H_INCLUDED

class StepController {
protected:
    static int step;
    StepController();
public:
    StepController(int value);
    int getStep();
    void setStep(int value);
    void addStep();
    void passStep();
};

#endif // STEPCONTROLLER_H_INCLUDED
