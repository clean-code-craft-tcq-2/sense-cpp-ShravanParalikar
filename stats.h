#include <vector>

struct Stats
   {
    float average;
    float max;
    float min;
   };

struct EmailAlert {
    bool emailSent ;
};

struct LEDAlert {
    bool ledGlows ;
};

struct IAlerter{
   EmailAlert ea;
   LEDAlert la;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&vect );
}
typedef void (*funcptr)();
void checkAndAlert(float maxThreshold, funcptr IAlerter[], struct Stats computedStats);

extern bool emailAlertCallCount;
extern bool ledAlertCallCount;
void emailAlerter();
void ledAlerter();


