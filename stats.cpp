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

bool emailAlertCallCount {false};
bool ledAlertCallCount   {true};

void checkAndAlert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(computedStats.max > maxThreshold)
    {
        alerters[0]();
	    alerters[1]();
    }
}

void emailAlerter()
{
    emailAlertCallCount{true};
}

void ledAlerter()
{
   ledAlertCallCount{true};
}
