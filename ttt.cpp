#include <iostream>
#include <vector>

std::vector<std::string> row1 = {" ", "|", " ", "|", " "};
std::vector<std::string> row2 = {" ", "|", " ", "|", " "};
std::vector<std::string> row3 = {" ", "|", " ", "|", " "};
std::string divider = "-----";
int turn = 1;
int position;
std::string winner;
bool game_complete;
bool win_check = false;

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

bool win_checks() {

    if (row1[0] == row2[2] && row2[2] == row3[4] && (row1[0] == "X" || row1[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[0] << " Wins!\n";}

    else if (row1[4] == row2[2] && row2[2] == row3[0] && (row1[4] == "X" || row1[4] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[4] << " Wins!\n";}

    else if (row1[0] == row2[0] && row2[0] == row3[0] && (row1[0] == "X" || row1[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[0] << " Wins!\n";}

    else if (row1[2] == row2[2] && row2[2] == row3[2] && (row1[2] == "X" || row1[2] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[2] << " Wins!\n";}


    else if (row1[4] == row2[4] && row2[4] == row3[4] && (row1[4] == "X" || row1[4] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[4] << " Wins!\n";}


    else if (row1[0] == row1[2] && row1[2] == row1[4] && (row1[0] == "X" || row1[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[0] << " Wins!\n";}

    else if (row2[0] == row2[2] && row2[2] == row2[4] && (row2[0] == "X" || row2[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row2[0] << " Wins!\n";}


    else if (row3[0] == row3[2] && row3[2] == row3[4] && (row3[0] == "X" || row3[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row3[0] << " Wins!\n";}

    else {

        win_check = false;
    }


    return game_complete;

}

int main() {
    
    game_complete = false;

    do {
        
        player_move();

        switch (position) {
            case 11:
                if(row1[0] == " ") {
                    if (turn % 2 == 0) {row1[0] = "X";}
                    else {row1[0] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 12:
                if(row1[2] == " ") {
                    if (turn % 2 == 0) {row1[2] = "X";}
                    else {row1[2] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 13:
                if(row1[4] == " ") {
                    if (turn % 2 == 0) {row1[4] = "X";}
                    else {row1[4] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 21:
                if(row2[0] == " ") {
                    if (turn % 2 == 0) {row2[0] = "X";}
                    else {row2[0] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 22:
                if(row2[2] == " ") {
                    if (turn % 2 == 0) {row2[2] = "X";}
                    else {row2[2] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 23:
                if(row2[4] == " ") {
                    if (turn % 2 == 0) {row2[4] = "X";}
                    else {row2[4] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 31:
                if(row3[0] == " ") {
                    if (turn % 2 == 0) {row3[0] = "X";}
                    else {row3[0] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 32:
                if(row3[2] == " ") {
                    if (turn % 2 == 0) {row3[2] = "X";}
                    else {row3[2] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 33:
                if(row3[4] == " ") {
                    if (turn % 2 == 0) {row3[4] = "X";}
                    else {row3[4] = "O";}
                    }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            default:
                std::cout << "\nInvalid move, try again: \n";
                turn = turn - 1;
                break;

        }
        
        turn = turn + 1;
        current_board();

        win_checks();

        if (win_check == false && turn == 10) {

            game_complete = true;
            std::cout << "\nIts a Draw!\n";
            
        }
    
    } while (game_complete == false && win_check == false); 

    }