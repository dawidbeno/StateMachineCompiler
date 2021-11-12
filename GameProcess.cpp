
#include "GameProcess.hpp"
#include <iostream>

GameProcess::GameProcess(){
    std::cout << "Game process constructor" << std::endl;
}

void GameProcess::Start(){
    std::cout << "Game start" << std::endl;
}

void GameProcess::Success(){
    std::cout << "Game success" << std::endl;
}

void GameProcess::Fail(){
    std::cout << "Game fail" << std::endl;
}

void GameProcess::Reset(){
    std::cout << "Game reset" << std::endl;
}

void GameProcess::BackToMenu(){
    std::cout << "Back to menu" << std::endl;
}