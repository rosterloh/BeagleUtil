/*
Daniel Cook 2013
daniel@daniel-cook.net
*/

#ifndef __COMMON_H
#define __COMMON_H

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

namespace BeagleUtil
{
    const std::string GPIO_DEFAULT_PATH = "/sys/class/gpio";

    const std::string PWM_P8_19 = "/sys/class/pwm/ehrpwm.2:0";
    const std::string PWM_P8_13 = "/sys/class/pwm/ehrpwm.2:1";

    const std::string PWM_P9_14 = "/sys/class/pwm/ehrpwm.1:0";
    const std::string PWM_P9_16 = "/sys/class/pwm/ehrpwm.1:1";

    const std::string PWM_P9_31 = "/sys/class/pwm/ehrpwm.0:0";
    const std::string PWM_P9_29 = "/sys/class/pwm/ehrpwm.0:1";
}

#endif
