#include <iostream>
#include "tv.h"

int main()
{
    Tv s42;
    std::cout << "Initial settings for 42\" TV:" << std::endl;
    s42.settings();
    s42.onoff();
    s42.chanup();

    std::cout << "\nAdjusted settings for 42\" TV:" << std::endl;
    s42.settings();

    Remote grey;
    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    grey.DisplayRemoteMode();

    std::cout << "\n42\" settings after using remote:" << std::endl;
    s42.settings();

    std::cout << "\nToggling the remote control's mode with the 42\" TV: " << std::endl;
    s42.ToggleRemoteMode(grey);

    std::cout << "\nTurning the 42\" TV off and toggle the remote control's mode:" << std::endl;
    s42.onoff();
    s42.ToggleRemoteMode(grey);

    std::cout << "\nTurning the 42\" TV on again and toggle the remote control's mode:" << std::endl;
    s42.onoff();
    s42.ToggleRemoteMode(grey);

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    std::cout << "\n58\" settings:" << std::endl;
    s58.settings();

    std::cin.get();

    return 0;
}
