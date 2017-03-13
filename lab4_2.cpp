#include <iostream>
using namespace std;

struct Student {
  char *name;
  float average;
  int course;
};

int main() {
  const int iStudentsLength = 7;

  //variant 4

  Student maxim = {.name = (char *)"Maxim", .average = 4.6, .course = 2};
  Student kostya = {.name = (char *)"Kostya", .average = 3.5, .course = 2};
  Student stas = {.name = (char *)"Stas", .average = 4.8, .course = 1};
  Student misha = {.name = (char *)"Mikhail", .average = 3.2, .course = 2};
  Student ignat = {.name = (char *)"Ignat", .average = 4.6, .course = 2};
  Student vlad = {.name = (char *)"Vlad", .average = 4.5, .course = 2};
  Student timur = {.name = (char *)"Timur", .average = 3.7, .course = 3};
  Student group[iStudentsLength] = {
    maxim,
    kostya,
    stas,
    misha,
    ignat,
    vlad,
    timur
  };

  const float fSuperGradeThreshold = 4.5;
  const int iCourse = 2;

  int iSuperGrades = 0;
  int iSecondCourseStudents = 0;

  for (int i = 0; i < iStudentsLength; i++) {
    Student stud = group[i];
    if (stud.course == iCourse) {
      iSecondCourseStudents++;
      if (stud.average >= fSuperGradeThreshold) {
        iSuperGrades++;
      }
    }
  }

  float fSuperGradesPercent = (float)iSuperGrades / (float)iSecondCourseStudents * 100;
  cout << "Super grades percent: " << fSuperGradesPercent << "\n";

  return 0;
}