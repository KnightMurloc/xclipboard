//
// Created by victor on 23.10.2022.
//

#ifndef LIBCLIPBOARD_LIB_H
#define LIBCLIPBOARD_LIB_H

int clip_board_init();

char* get_from_clipboard();
void put_to_clipboard(const char* text);

void clipboard_notify_loop(void(*callback)(char* text));

void stop_loop();

#endif //LIBCLIPBOARD_LIB_H
