#ifndef DIRTY_WORD_DEMO_DIRTY_WORD_CHECK_H_
#define DIRTY_WORD_DEMO_DIRTY_WORD_CHECK_H_
#endif

#include <vector>

class DirtyWordCheck
{
public:
    DirtyWordCheck(void);
    ~DirtyWordCheck(void);

    bool ReadFile(const std::string& file);
    bool IsDirtyWord(const std::string& word) const;

private:
    std::vector<std::string> dirty_word_vec;
};
