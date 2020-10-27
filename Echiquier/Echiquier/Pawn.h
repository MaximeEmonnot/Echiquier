#pragma once
#include "Pieces.h"
class Pawn :
    public Pieces
{
public:
    Pawn(std::shared_ptr<WindowManager> window, int x, int y);
    Pawn(std::shared_ptr<WindowManager> window, int coordonates[2]);
    ~Pawn();

    void Move(bool placeTaken[8][8], Pieces& piecesManager) override;

public:
    int startingPoint[2];
    Vector2D dir;
    Vector2D attackDir1, attackDir2;
};