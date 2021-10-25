#include "stats.h"
#include <bits/stdc++.h>

Stats Statistics::ComputeStatistics(const std::vector<float>&vect ) {
    //Implement statistics here
    Stats computedStats;
   
    if ( vect.empty() )
    {
      computedStats.min = NAN;
      computedStats.max = NAN;
      computedStats.average = NAN;
        
      return computedStats;
    }
    else
    {
    int size = vect.size();
    float sum = 0;

    for (int i = 0; i < size; ++i)
    {
        sum += vect[i];
    }
    computedStats.average = (float)sum/size;
        
    computedStats.min =  *min_element(vect.begin(),vect.end());
    computedStats.max =  *max_element(vect.begin(),vect.end());
        
    return computedStats;
    }
    
}

void StatsAlerter::checkAndAlert( const std::vector<float>& vect)
{
    auto computedStats = Statistics::ComputeStatistics(vect);
    if(computedStats.max > maximumThreshold)
    {
        *(vecAlert[0]->emailAlertPtr) = {true};
        *(vecAlert[0]->ledAlertPtr) = {true};
    }

}
