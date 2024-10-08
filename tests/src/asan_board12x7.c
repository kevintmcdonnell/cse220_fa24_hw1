#include <string.h>
#include "hw1.h"

extern char board[MAX_ROWS][MAX_COLS];

int main() {
    int act_num_x = -1, act_num_o = -1;
    const char *init_board = "xo--o---o---oo-------oxx-o-x----o--o-o---xx---ox----o-----o--x-x-x--xx-x---x--oo---x";
    char board_array[MAX_ROWS][MAX_COLS] = {
    {']','e','V','@','}',']','d','>','L','N','F',':','s','O','6','f','=','<','(','W',},
    {'e','d','o','c','f','7',' ','o','o','=',')','2','#',']','S','}','6','5','9','`',},
    {'c',']','w','T','*','.',';','G','G','?','{','-','$','k','p','g','!','n','N','V',},
    {',','T','h',',','1','9','(','D','N','@','%','/','z','|','c','%','(','{','L','O',},
    {';','F',']','<','/','K','$','0','o','O','c','C','$','J','L','2','`','S','W','-',},
    {'p',']','<','l','W','}','n','o','y','<','0','6','b','i','R','q','2','T',' ','I',},
    {'!','`','l','&','(','6','5','i','f','i','s','U','D','0','?','{','.','.','[','&',},
    {'J','h','<','*','S','k','y','b','=','v','-','?','T','v','B',']','.','W','D','t',},
    {'B','8','J','f','E','f','_','x','u','8','W','@','"','s','H','R',']','?','5','z',},
    {'6','B','7','j','7','Y','E','E','.','i','7','M','~','_','1','B','F','p','s','<',},
    {'*','K','Z',')','<','#','[','x','?','m','p','U','.','%','=','E','^','c','j','j',},
    {'J','~','8','G','^','J','i','#','8','Z','?','B','&','v','H','B','v','$','8','6',},
    {'r','(','k','x',',','(','F','h','g','.','S','2','-','k','V','i','3','=','l','L',},
    {'w',')','k','}','!','5','=','t','6','V',',','&','Z','t','$','f','{','G','O','c',},
    {'U',' ','s','`','i','J','G','|','e','1','F',']','7','0','Y','5','B','v','+','X',},
    {'J','7',']','%',')','`','i','&',')','6','f','[','7','Z','9','!','#','`','z','h',},
    {'n','x','F','(','O',' ','<','n','t','G','G','?','[','$','B','e','b',',','h','k',},
    {'?','O','x','V','+','a','T','+','?','M','s','/','l','7','3','9','5','O','(','*',},
    {'t','L','F','x','N','e','3','1','n','x','y','/','I','A','b','Q',' ','8',']','=',},
    {'e','M','I','O','x',']','h','v',')','m','}','}','7','E','I','e','(','Y','s','w',},
    };
    memcpy(board, board_array, sizeof(board_array));
    (void)solve(init_board, 12, 7, &act_num_x, &act_num_o);
}
