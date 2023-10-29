
#ifndef LOST_IN_SPACE_POWER
#define LOST_IN_SPACE_POWER
#include "splashkit.h"
#include <vector>

using namespace std;
enum power_up_kind
{
    FUEL,
    SHIELD,
    POTION,
    STAR,
    CASH,
};

struct power_up_data
{
    power_up_kind kind;
    sprite power_up_sprite;
};
power_up_data new_power_up(double x , double y);
void draw_power_up(const power_up_data &power_up_to_draw);
void update_power_up(power_up_data &power_up_to_update);

#endif
