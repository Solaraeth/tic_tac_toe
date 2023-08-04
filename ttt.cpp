#include <iostream>
#include <vector>

std::vector<std::string> row1 = {" ", "|", " ", "|", " "};
std::vector<std::string> row2 = {" ", "|", " ", "|", " "};
std::vector<std::string> row3 = {" ", "|", " ", "|", " "};
std::string divider = "-----";
int turn = 1;
int position;

void current_board() {

        std::cout << "\n";
        std::cout << row1[0] << row1[1] << row1[2] << row1[3] << row1[4]<< "\n";
        std::cout << divider << "\n";
        std::cout << row2[0] << row2[1] << row2[2] << row2[3] << row2[4]<< "\n";
        std::cout << divider << "\n";
        std::cout << row3[0] << row3[1] << row3[2] << row3[3] << row3[4]<< "\n";
    
    }

int player_move() {
    
    std::cout << "\n";
    std::cout << "Turn: " << turn << "\n\n";
    std::cout << "Select a square: ";
    std::cin >> position;
    
    return position;

}

int main() {
    
    bool game_complete = false;

    do {
        
        player_move();

        switch (position) {
            case 11:
                if(row1[0] == " ") {
                    if (turn % 2 == 0) {row1[0] = "X";}
                    else {row1[0] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 12:
                 if(row1[2] == " ") {
                    if (turn % 2 == 0) {row1[2] = "X";}
                    else {row1[2] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 13:
                if(row1[4] == " ") {
                    if (turn % 2 == 0) {row1[4] = "X";}
                    else {row1[4] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 21:
                  if(row2[0] == " ") {
                    if (turn % 2 == 0) {row2[0] = "X";}
                    else {row2[0] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 22:
                   if(row2[2] == " ") {
                    if (turn % 2 == 0) {row2[2] = "X";}
                    else {row2[2] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 23:
                 if(row2[4] == " ") {
                    if (turn % 2 == 0) {row2[4] = "X";}
                    else {row2[4] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 31:
                  if(row3[0] == " ") {
                    if (turn % 2 == 0) {row3[0] = "X";}
                    else {row3[0] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 32:
                  if(row3[2] == " ") {
                    if (turn % 2 == 0) {row3[2] = "X";}
                    else {row3[2] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            case 33:
                   if(row3[4] == " ") {
                    if (turn % 2 == 0) {row3[4] = "X";}
                    else {row3[4] = "O";}
                    turn = turn + 1;
                    current_board(); }
                else {std::cout << "\nInvalid move, try again: \n";}
                break;
            default:
                std::cout << "\nInvalid move, try again: \n";
                break;
        
        }
        
        if (row1[0] == row2[2] && row2[2] == row3[4] && turn > 4 || turn == 10) {

        game_complete = true;
        
        }

    } while (game_complete == false); 

    std::cout << "\nVICTORY!\n";

    }

    /*switch (position) {
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
            break;*/

/*if (position == 11) {

            row1[0] = "X";
            current_board();
            turn = turn + 1;

        }

        else if (position == 22) {

            row2[2] = "X";
            current_board();
            turn = turn + 1;

        }

        else {

            row3[4] = "X";
            current_board();
            turn = turn + 1;

        }*/
