#include <pebble.h>
#include "date_select_menu.h"
  


void date_select_menu_load(Window *window) {
  int num_a_items = 0;
  
  second_menu_items[num_a_items++] = (SimpleMenuItem){
    // You should give each menu item a title and callback
    .title = "Monday",
    .callback = menu_select_callback,
  };
  second_menu_items[num_a_items++] = (SimpleMenuItem){
    // You should give each menu item a title and callback
    .title = "Tuesday",
    .callback = menu_select_callback,
  };
  second_menu_items[num_a_items++] = (SimpleMenuItem){
    // You should give each menu item a title and callback
    .title = "Wednesday",
    .callback = menu_select_callback,
  };
  second_menu_items[num_a_items++] = (SimpleMenuItem){
    // You should give each menu item a title and callback
    .title = "Thursday",
    .callback = menu_select_callback,
  };
  second_menu_items[num_a_items++] = (SimpleMenuItem){
    // You should give each menu item a title and callback
    .title = "Friday",
    .callback = menu_select_callback,
  };
  
  menu_sections[0] = (SimpleMenuSection){
    .num_items = DAY_LIST_LENGTH,
    .items = second_menu_items,
  };
  Layer *menu_window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_frame(menu_window_layer);
  
    // Initialize the simple menu layer
  simple_menu_layer2 = simple_menu_layer_create(bounds, window, menu_sections, NUM_MENU_SECTIONS, NULL);

  // Add it to the window for display
  layer_add_child(menu_window_layer, simple_menu_layer_get_layer(simple_menu_layer2));
}
void date_select_menu_unload(Window *window) {
  simple_menu_layer_destroy(simple_menu_layer2);

  // Cleanup the menu icon
  //gbitmap_destroy(menu_icon_image);
  
}

static void menu_select_callback(int index, void *ctx) {

}