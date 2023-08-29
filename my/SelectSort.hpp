#pragma once
#include <iostream>

template <typename T>
void SelectSort(T &arrName, bool ascendingSort = 0,
                unsigned long long arrLenger = (sizeof arrName /
                                                sizeof arrName[0])) {
  for (unsigned long long count0 = 0; count0 < arrLenger; count0++) {
    unsigned long long minOrMax = count0;
    for (unsigned long long count1 = count0; count1 < arrLenger; count1++)
      if (ascendingSort) {
        if (arrName[minOrMax] > arrName[count1])
          minOrMax = count1;
      } else {
        if (arrName[minOrMax] < arrName[count1])
          minOrMax = count1;
      }
    std::swap(arrName[minOrMax], arrName[count0]);
  }
}
