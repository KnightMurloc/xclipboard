//
// Created by victor on 23.10.2022.
//

#include <stdio.h>
#include <xclipboard.h>
#include <stdlib.h>

void callback(char* text){
    printf("%s\n",text);
    free(text);
}

int main(){

    if(!clip_board_init()){
        printf("lib clip_board_init error\n");
        return 1;
    }

    clipboard_notify_loop(callback);

    return 0;
}