#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10_2/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:
        TEST_METHOD(TestFind) {

            ofstream tempFile("Temp.txt");
            tempFile << "usydh abibi bmasid" << endl;
            tempFile.close();

            string lala = "abibi";

            Assert::AreEqual(Find("Temp.txt"), lala);

            remove("Temp.txt");
        }
    };
}