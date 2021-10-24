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

void StatsAlerter::checkAndAlert(const std::vector<float>&vect ) {
   
    if ( vect.empty() )
    {
      alerter[0].emailSent = false;
      alerter[1].ledGlows = false;
      return;
    }
    float max =  *max_element(vect.begin(),vect.end());
    
    if (max > maxThres) {
        alerter[0].emailSent = true;
        alerter[1].ledGlows = true;
    }
    else
    {
        alerter[0].emailSent = false;
        alerter[1].ledGlows = false;
    }
    return;
}
