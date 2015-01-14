#include "dirty_word_check.h"

#include <iostream>
#include <fstream>


DirtyWordCheck::DirtyWordCheck(void)
{
}

DirtyWordCheck::~DirtyWordCheck(void)
{
}

bool DirtyWordCheck::ReadFile(const std::string& file)
{
    char str_line[200];
    std::ifstream file_input (file.c_str(), std::ios::in);

    if (!file_input)
    {
        return false;
    }

    unsigned int dirty_count = 0;
    while (!file_input.eof())
    {
        file_input.getline(str_line, 200, '\n');
        std::string str_value = str_line;
        if (!str_value.empty())
        {
            dirty_word_vec.push_back(str_value);
        }
        //printf("dirty_word%d:%s\n", dirty_count, str_value.c_str());
        std::cout << str_value << std::endl;
        ++dirty_count;
    }

    file_input.close();

    if (dirty_word_vec.empty())
    {
        return false;
    }

    return true;
}

bool DirtyWordCheck::IsDirtyWord(const std::string& word) const
{
    std::vector<std::string>::const_iterator iter = dirty_word_vec.begin();
    while (iter != dirty_word_vec.end())
    {
        std::string str = *iter;
        const char* pos = strstr(word.c_str(), str.c_str());
        if (pos)
        {
            return true;
        }

        ++iter;
    }

    return false;
}