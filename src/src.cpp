#include <iostream>
#include <thread>

#include "HeroineState.h"

int main()
{
    HeroineState* movie = new HeroineState();

    while (true)
    {
        movie->Update();
    }
}

