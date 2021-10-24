#include <vector>

struct Stats
   {
    float average;
    float max;
    float min;
   };

typedef struct EmailAlert {
    bool emailSent ;
}IAlerter;

typedef struct LEDAlert {
    bool ledGlows ;
}IAlerter;

typedef struct IAlerter;

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&vect );
}

class StatsAlerter
{
   public:
      const float maxThres;
      const std::vector<IAlerter*> alerter;
      StatsAlerter(const float, const std::vector<IAlerter*>);
      
      void checkAndAlert(const std::vector<float>&vect );
};

StatsAlerter::StatsAlerter(const float maxThreshold, const std::vector<IAlerter*> alerter) 
             : maxThres(maxThreshold), alerter(alerter) {}
