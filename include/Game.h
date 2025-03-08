

class Game
{
private:
    /* data */
public:
    Game(/* args */);
    ~Game();

    void RunLoop();

    void Shutdown();

private:
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();
};