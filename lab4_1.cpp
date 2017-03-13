#include <iostream>
using namespace std;

struct Student {
  char *name;
  bool army;
  int course;
};

int main() {
  const int iStudentsLength = 7;

  //variant 12
  //part1

  const int iTargetCourse = 5;

  Student maxim = {.name = (char *)"Maxim", .army = false, .course = 5};
  Student kostya = {.name = (char *)"Kostya", .army = true, .course = 2};
  Student stas = {.name = (char *)"Stas", .army = false, .course = 1};
  Student misha = {.name = (char *)"Mikhail", .army = false, .course = 5};
  Student ignat = {.name = (char *)"Ignat", .army = true, .course = 2};
  Student vlad = {.name = (char *)"Vlad",  .army = true, .course = 5};
  Student timur = {.name = (char *)"Timur", .army = true, .course = 5};
  Student group[iStudentsLength] = {
    maxim,
    kostya,
    stas,
    misha,
    ignat,
    vlad,
    timur
  };

  int iArmees = 0;
  int iFifthCourseCount = 0;

  for (int i = 0; i < iStudentsLength; i++) {
    Student stud = group[i];
    if (stud.course == iTargetCourse) {
      iFifthCourseCount++;
      if (stud.army == true) {
        iArmees++;
      }
    }
  }
  float fifthCourseArmeesPercent = (float)iArmees / (float)iFifthCourseCount * 100;
  cout << "Armees percent: " << fifthCourseArmeesPercent << "\n";

}