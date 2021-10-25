#include <vector>

struct Stats
   {
    float average;
    float max;
    float min;
   };



namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&vect );
}
typedef void (*funcptr)();
void checkAndAlert(float maxThreshold, funcptr IAlerter[], struct Stats computedStats);

extern bool emailAlertCall;
extern bool ledAlertCall;
void emailAlerter();
void ledAlerter();


