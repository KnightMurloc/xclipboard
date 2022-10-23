//
// Created by victor on 23.10.2022.
//

#include <xclipboard.h>
#include <stdio.h>

int main(){

    clip_board_init();

    char* text = get_from_clipboard();
    if(text){
        printf("%s\n",text);
    }

    return 0;
}