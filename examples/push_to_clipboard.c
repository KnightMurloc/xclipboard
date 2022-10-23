//
// Created by victor on 23.10.2022.
//

#include <xclipboard.h>
#include <stdio.h>

int main(){

    clip_board_init();

    const char* text = "test";
    put_to_clipboard(text);

    return 0;
}