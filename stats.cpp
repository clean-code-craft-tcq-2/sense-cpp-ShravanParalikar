#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>&vect ) {
    //Implement statistics here
    Stats computedStats;

    int size = vect.size();
    float sum = 0;

    for (int i = 0; i < size; ++i)
    {
        sum += vect[i];
    }
    computedStats.average = (float)sum/size;
    return computedStats;
    
}
