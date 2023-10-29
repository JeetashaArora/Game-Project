#include"splashkit.h"
#include"power_up.h"
bitmap power_up_bitmap(power_up_kind kind)
{
    switch (kind)
    {
    case FUEL:
        return bitmap_named("fuel");
    case SHIELD:
        return bitmap_named("shield");
    case POTION:
        return bitmap_named("potion");
    case STAR:
        return bitmap_named("star");
    default:
        return bitmap_named("cash");
    }
}
power_up_data new_power_up(double x , double y)
{
    power_up_data result;
    result.power_up_sprite=create_sprite(power_up_bitmap(static_cast<power_up_kind>(rnd(6))));
    sprite_set_x(result.power_up_sprite , x );
    sprite_set_y(result.power_up_sprite , y );
    sprite_set_dx(result.power_up_sprite , rnd()*4-2);
    return result;
}
void draw_power_up(const power_up_data &power_up_to_draw)
{
    draw_sprite(power_up_to_draw.power_up_sprite);
}
void update_power_up(power_up_data &power_up_to_update)
{
    update_sprite(power_up_to_update.power_up_sprite);
};