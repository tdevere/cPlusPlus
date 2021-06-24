#pragma once

namespace WindowsRuntimeComponent1
{
    public ref class Doubler sealed
    {
    public:
        Doubler();

        int DoubleInput(int input);
    };
}
