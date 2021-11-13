# Gameplay state machine
Let's assume state machine for a game. When we start the game app, we find ourselves in the **Main menu**. Let's say our game is very simple and we have only two options in menu: 
1. Start playing
2. Exit game app

If we choose to have a fun and play game, we go to the **Playing** state. Often when we play some game, we can complete some level or die trying. In case we are successful, we can continue playing on the next level. Second option is to leave game as undefeated hero. Nad finally we can lose and the game is over - we are in **Game over** state.
As in main manu, also in game over state we have to option:
1. We can accept the failure and leave the game back to the main menu
2. Try again by reseting game and starting from the beggining.

This is state machine for ordinary gameplay with three states and several transitions between them. See the image below.


![state machine diagram](game_sm.jpg)

# Game process
First we have to prepare a class for game process we'll be running. The **GameProcess** class contains contructor and methods, which represents user actions. Within state machine context, these methods are representing state transitions. I have used C++ language for implementation in this project.
```
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
```


# State Machine Compiler
State machine compiler or SMC is a java application, which is able to analyze content of *.sm* file and convert it to required programming language. *.sm* file is a special file, written in simple, common language used to describe any finite state machine. Output after compilation is a class in particular programming language, which was defined before compilation. Thanks to the State Machine Compiler, you can put state diagram into one file and generate class for programming language used in your project.
There are more ten 10 programming languages supported by SMC. More information about SMC on ![this link](http://smc.sourceforge.net/)

## Feauters of SMC
Inside ths *.sm* file, there is a file header. It defines class name
```
%class GameProcess
%fsmclass GameProvess_sm
%fsmfile GameProvess_sm

%header GameProvess.hpp
```
- The **%class** keyword which specifies the application class to which this FSM is associated: GameProcess
- The **%fsmclass** keyword specifies the generated finite state machine class name
- The **%fsmfile** keyword specifies the generated finite state machine class file name
- The **%header** keyword specifies the header file, which contains methods used in state machine. E.g. fsmPrint()

### States
Then we have defined states, based on precreated diagram.
- **%map** SMC states are grouped into maps. The %map followed by a %% pair groups the states appearing within
- **%start** keyword specifies the FSM's start state
```
%start GameMap::NotStarted
%map GameMap
%%

NotStarted
{

}

MainMenu
{

}

Playing
{

}

GameOver
{

}
%%
```

### Transitions
Simple Transiiton
External Loopback Transition
Internal Loopback Transition
Push Transition
Pop Transition
## Transition Actions
## Entry / Exit Actions
## transition guards



# Compiling .sm file


# License
GNU GENERAL PUBLIC LICENSE