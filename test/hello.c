#include <stdio.h>

int main (void){

    printf("this is my first c program.\n");
    printf("trying source control");
}

//流程: hello.c --> compiler (compiling) --> executable file(myfirstc)

//用指令: dir, cd
//  gcc hello.c -o myfirstc
//  ./myfirstcd

// 也可以用extention，直接執行，但用指令可能比較乾淨

// 真正推到github:
// 左邊source control -->寫message --> commit& push (要有push才是真正推到github)

// codespace是會存起來的
// 要記得如果有連接到repo，要先做pull，算"同步"