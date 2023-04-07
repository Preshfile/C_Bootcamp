//Your job is to write an algorithm that calculates the Qwasar version of a Levenshtein number between two words.

//The Qwasar version of a Levenshtein number is simple: it's a value that represents how similar two given strings are.
//It is found by comparing two strings and returning the difference between them.

//a  javascript function that compares two strings and returns 0 if string are stricktly equal or empty.
//return number of differences when not equal,
//returns - 1 when not the same and 0 if empty the difference between them

//a function that takes in a flight path of a rocket ship as a string of letters and returns the following format:
//"{x: X, y: Y, direction: 'DIRECTION'}"
//X,Y represent the ending coordinates of your ship and direction represents its final direction



char *my_spaceship(char* path)
{
    char* directions[4] = {"down", "right", "up", "left"};
    int x = 0;
    int y = 0;
    int current_direction = 0;

    for (int i = 0; path[i] != '\0'; i++)
    {
        if(path[i] == 'R'){
            current_direction += 1;
        }else if(path[i] == 'L'){
            current_direction -= 1;
            if(current_direction == -1){
                current_direction = 3;
            }
        }else{
            if(current_direction == 0){
                y--;
            }else if(current_direction == 1){
                x++;
            }else if(current_direction == 2){
                y++;
            }else{
                x--;
            }

        }
    }
    char *res = malloc(50);
    snprintf(res, 50, "{x: %d, y: %d, direction: '%s'}", x, y, directions[2 - current_direction]);
    
    return res;
}