#include "input.h"
#include <termios.h>
#include <unistd.h>
#include <bits/stdc++.h>
#include <string>
#include <cstdio>

using namespace std;

struct termios t;

void input_enter_off()
{
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag &= ~ICANON;
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

void input_enter_on()
{
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag |= ICANON;
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

enum Direction get_input()
{
    enum Direction result = East;
    char user_input = getchar();

    switch (user_input)
    {
        case 'a':
            result = West;
            break;
        case 'D':
            result = West;
            break;
        case 'w':
            result = North;
            break;
        case 'A':
            result = North;
            break;
        case 'd':
            result = East;
            break;
        case 'C':
            result = East;
            break;
        case 's':
            result = South;
            break;
        case 'B':
            result = South;
            break;
        default:
            result = Error;
            break;
    }
    return result;
}

void input_init() {
}