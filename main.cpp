#include "Entities/Playground.h"

int main()
{
    Playground playground = Playground();
    playground.printPlayground();
    playground.updatePlayground(2, 1);
    playground.printPlayground();
    return 0;
}
