#include <iostream>
using namespace std;

struct Student {
  char *name;
  bool dances;
  bool army;
  float average;
  int course;
};

int main() {
  const int iStudentsLength = 7;

  //variant 4

  Student maxim = {.name = (char *)"Maxim", .dances = true, .army = false, .average = 4.6, .course = 2};
  Student kostya = {.name = (char *)"Kostya", .dances = false, .army = true, .average = 3.5, .course = 2};
  Student stas = {.name = (char *)"Stas", .dances = true, .army = false, .average = 4.8, .course = 1};
  Student misha = {.name = (char *)"Mikhail", .dances = true, .army = false, .average = 3.2, .course = 2};
  Student ignat = {.name = (char *)"Ignat", .dances = false, .army = true, .average = 4.1, .course = 2};
  Student vlad = {.name = (char *)"Vlad", .dances = true, .army = false, .average = 4.5, .course = 2};
  Student timur = {.name = (char *)"Timur", .dances = false, .army = true, .average = 3.7, .course = 3};
  Student group[iStudentsLength] = {
    maxim,
    kostya,
    stas,
    misha,
    ignat,
    vlad,
    timur
  };

  int iADancersCount = 0;
  const float fAgrade = 4;

  for (int i = 0; i < iStudentsLength; i++) {
    if (group[i].average > fAgrade && group[i].dances == true) {
      iADancersCount++;
    }
  }

  cout << "Num of students who dances and have A grade: " << iADancersCount << "\n";

  int iArmy2ndCourse = 0;
  int i2ndCourse = 0;

  for (int i = 0; i < iStudentsLength; i++) {
    if (group[i].course == 2) {
      i2ndCourse++;
      if (group[i].army == false) {
        iArmy2ndCourse++;
      }
    }
  }

  cout << "Num of students who did not enlisted in army and on 2 course: " << iArmy2ndCourse << "\n";
  cout << "2nd course length: " << i2ndCourse << "\n";
  float fPercent = ((float)iArmy2ndCourse / (float)i2ndCourse) * 100;
  cout << "Percent: " << fPercent << "\n";
  return 0;
}