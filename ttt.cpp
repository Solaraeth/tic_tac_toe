#include <iostream>
#include <vector>

std::vector<std::string> row1 = {" ", "|", " ", "|", " "};
std::vector<std::string> row2 = {" ", "|", " ", "|", " "};
std::vector<std::string> row3 = {" ", "|", " ", "|", " "};
std::string divider = "-----";
int turn =1;

void current_board() {
        
        std::cout << row1[0] << row1[1] << row1[2] << row1[3] << row1[4]<< "\n";
        std::cout << divider << "\n";
        std::cout << row2[0] << row2[1] << row2[2] << row2[3] << row2[4]<< "\n";
        std::cout << divider << "\n";
        std::cout << row3[0] << row3[1] << row3[2] << row3[3] << row3[4]<< "\n";
    
    }

int main() {
    
    int position;
    bool game_complete = false;

    do {

        std::cout << "Pick a row: ";
        std::cin >> position;

        switch (position) {
        case 11:
            row1[0] = "X";
            turn = turn + 1;
            current_board();
            break;
        case 22:
            row2[2] = "X";
            turn = turn + 1;
            current_board();
            break;
        case 33:
            row3[4] = "X";
            turn = turn + 1;
            current_board();
            break;
        default:
            std::cout << "Invalid move, try again: \n";
            std::cin >> position;
            break;
        }

        if (row1[0] == row2[2] && row2[2] == row3[4] && turn > 4) {

        game_complete = true;
        std::cout << "VICTORY!\n";
        }

    } while (game_complete = false);

    

    }