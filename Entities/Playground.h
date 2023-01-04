//
// Created by Mathis Burger on 20.12.22.
//

#ifndef TIC_TAC_TOE_PLAYGROUND_H
#define TIC_TAC_TOE_PLAYGROUND_H


class Playground {
private:
    int* fields[9];
    void printChar(char c);

public:
    Playground();
    void printPlayground();
    void updatePlayground(int pos, int val);
    bool isOccupied(int pos);
    int getPlaygroundPos(int pos);
};


#endif //TIC_TAC_TOE_PLAYGROUND_H
