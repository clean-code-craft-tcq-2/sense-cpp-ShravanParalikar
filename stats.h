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

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&vect );
}
