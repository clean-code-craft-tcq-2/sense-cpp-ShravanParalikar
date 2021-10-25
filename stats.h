#include <vector>

struct Stats
   {
    float average;
    float max;
    float min;
   };

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}

struct EmailAlert 
{
    bool emailSent;
};
struct LEDAlert 
{
    bool ledGlows;
};
struct IAlerter
{
    EmailAlert *emailAlertPtr;
    LEDAlert *ledAlertPtr;
};

class StatsAlerter
{
    float maximumThreshold;
    std::vector<IAlerter*>vecAlert;

public:
    StatsAlerter(const float Threshold,  std::vector<IAlerter*> vecAlertInit )
    {
        maximumThreshold =  Threshold;
        vecAlert         = vecAlertInit;
    }
    
    void checkAndAlert( const std::vector<float>& );
};

