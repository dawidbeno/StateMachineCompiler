#ifndef GAME_PROCESS_HPP_
#define GAME_PROCESS_HPP_

class GameProcess
{
    public:
        GameProcess();

        void Start();
        void Success();
        void Fail();
        void Reset();
        void BackToMenu();
};

#endif