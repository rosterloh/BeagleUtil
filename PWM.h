/*
Daniel Cook 2013
daniel@daniel-cook.net
*/

#ifndef __PWM_H
#define __PWM_H

#include "Common.h"

namespace BeagleUtil
{

    class PWM{
        private:
        std::string _path;
        unsigned int _dutyPercent;

        public:
        PWM(std::string path);

        void run();
        void stop();

        bool request();
        bool release();

        void setDutyPercent(unsigned int percent);
        void setPeriodFreq(unsigned int freq);

        bool isFree();
    };

}

#endif
