#include <iostream>

#include "dirty_word_check.h"

const std::string FILE_NAME = "word.txt";

int main()
{
    DirtyWordCheck dirty_check;
    if (!dirty_check.ReadFile(FILE_NAME))
    {
        std::cout << "read file failed" << std::endl;
        return -1;
    }

    std::string word = "中";
    if (dirty_check.IsDirtyWord(word))
    {
        printf("%s 是脏字\n", word.c_str());
    }
    else
    {
        printf("%s 不是脏字\n", word.c_str());
    }

    system("pause");
    return 0;
}