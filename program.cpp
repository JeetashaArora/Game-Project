#include"splashkit.h"
#include "power_up.h"
#include "player.h"
player_data player;

/**
 * Load the game images, sounds, etc.
 */
void load_resources()
{
    load_resource_bundle("game_bundle", "lost_in_space.txt");
}
void HUD_display()
{
    draw_text("SCORE: ", COLOR_BRIGHT_GREEN, 0, 0, option_to_screen());
    draw_text("LOCATION: " + point_to_string(center_point(player.player_sprite)), COLOR_GREEN, 0, 10, option_to_screen());
    fill_rectangle(COLOR_BLACK,0,20,100,100,option_to_screen());
    draw_bitmap("empty",100,30,option_to_screen());
    draw_bitmap("full",100,30,option_part_bmp(0,0,0.25*bitmap_width("full"),bitmap_height("full"),option_to_screen()));
    draw_bitmap("empty",100,60,option_to_screen());
    draw_bitmap("green_bar_bubbles",100,60,option_part_bmp(0,0,0.75*bitmap_width("green_bar_bubbles"),bitmap_height("green_bar_bubbles"),option_to_screen()));
    draw_bitmap("bar_grey_fill",100,90,option_to_screen());
    draw_bitmap("orange_bar",100,90,option_part_bmp(0,0,0.55*bitmap_width("orange_bar"),bitmap_height("orange_bar"),option_to_screen()));

}

/**
 * Entry point.
 * 
 * Manages the initialisation of data, the event loop, and quitting.
 */
int main()
{
    open_window("Lost In Space", 800, 800);
    load_resources();
    player = new_player();
    power_up_data power_up,power_up_1,power_up_2,power_up_3,power_up_4,power_up_5,power_up_6,power_up_7,power_up_8;
    power_up_data power_up_9,power_up_10,power_up_11,power_up_12,power_up_13,power_up_14,power_up_15,power_up_16,power_up_17;
    power_up_data power_up_18,power_up_19,power_up_20,power_up_21,power_up_22,power_up_23,power_up_24,power_up_25,power_up_26;
    power_up=new_power_up(90,80);
    power_up_1= new_power_up(100,200);
    power_up_2=new_power_up(90,80);
    power_up_3=new_power_up(120,70);
    power_up_4=new_power_up(60,150);
    power_up_5=new_power_up(260,300);
    power_up_6=new_power_up(170,350);
    power_up_7=new_power_up(570,30);
    power_up_8=new_power_up(700,680);
    power_up_9=new_power_up(800,50);
    power_up_10=new_power_up(700,560);
    power_up_11=new_power_up(400,790);
    power_up_12=new_power_up(450,570);
    power_up_13=new_power_up(460,654);
    power_up_14=new_power_up(700,560);
    power_up_15=new_power_up(400,443);
    power_up_16=new_power_up(450,340);
    power_up_17=new_power_up(460,263);
    power_up_18=new_power_up(470,532);
    power_up_19=new_power_up(550,721);
    power_up_20=new_power_up(350,222);
    power_up_21=new_power_up(276,422);
    power_up_22=new_power_up(564,609);
    power_up_23=new_power_up(683,60);
    power_up_24=new_power_up(532,62);
    power_up_25=new_power_up(473,83);
    power_up_26=new_power_up(183,647);
    
    while ( not quit_requested() )
    {
        // Handle input to adjust player movement
        process_events();
        handle_input(player);

        // Perform movement and update the camera
        update_player(player);
        update_power_up(power_up);
        update_power_up(power_up_1);
        update_power_up(power_up_2);
        update_power_up(power_up_3);
        update_power_up(power_up_4);
        update_power_up(power_up_5);
        update_power_up(power_up_6);
        update_power_up(power_up_7);
        update_power_up(power_up_8);
        update_power_up(power_up_9);
        update_power_up(power_up_10);
        update_power_up(power_up_11);
        update_power_up(power_up_12);
        update_power_up(power_up_13);
        update_power_up(power_up_14);
        update_power_up(power_up_15);
        update_power_up(power_up_16);
        update_power_up(power_up_17);
        update_power_up(power_up_18);
        update_power_up(power_up_19);
        update_power_up(power_up_20);
        update_power_up(power_up_21);
        update_power_up(power_up_22);
        update_power_up(power_up_23);
        update_power_up(power_up_24);
        update_power_up(power_up_25);
        update_power_up(power_up_26);
        // Redraw everything
        clear_screen(COLOR_BLACK);
        HUD_display();
        
        // including something stationary - it doesn't move
        //fill_rectangle(COLOR_WHITE, 400, 400, 10, 10);
        // as well as the player who can move
        draw_player(player);
        draw_power_up(power_up);
        draw_power_up(power_up_1);
        draw_power_up(power_up_2);
        draw_power_up(power_up_3);
        draw_power_up(power_up_4);
        draw_power_up(power_up_5);
        draw_power_up(power_up_6);
        draw_power_up(power_up_7);
        draw_power_up(power_up_8);
        draw_power_up(power_up_9);
        draw_power_up(power_up_10);
        draw_power_up(power_up_11);
        draw_power_up(power_up_12);
        draw_power_up(power_up_13);
        draw_power_up(power_up_14);
        draw_power_up(power_up_15);
        draw_power_up(power_up_16);
        draw_power_up(power_up_17);
        draw_power_up(power_up_18);
        draw_power_up(power_up_19);
        draw_power_up(power_up_20);
        draw_power_up(power_up_21);
        draw_power_up(power_up_22);
        draw_power_up(power_up_23);
        draw_power_up(power_up_24);
        draw_power_up(power_up_25);
        draw_power_up(power_up_26);
        refresh_screen(60);
        
    }

    return 0;
}