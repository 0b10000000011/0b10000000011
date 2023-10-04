#define IS_HEADERS
#ifdef IS_HEADERS
#include <iostream>
#endif // Headers

namespace star {
template <typename T, unsigned long long arrLenger>
void InsertSort(T (&arrName)[arrLenger], bool ascendingSort = 0) {
    for (unsigned long long For0 = 1; For0 < arrLenger; For0++) {
        T tempArr = arrName[For0];
        unsigned long long For1 = For0 - 1;
        for (; For1 >= 0; For1--) {
            if (tempArr <= arrName[For1]) {
                arrName[For1 + 1] = arrName[For1];
            } else {
                break;
            }
        }
        arrName[For1 + 1] = tempArr;
    }
}
} // namespace star
#undef IS_HEADERS
