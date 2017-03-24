#include <iostream>
using namespace std;

struct Student {
  char *citizenship;
  bool campus;
  int course;
};

int main() {
  const int iStudentsLength = 7;

  //variant 5
  //part1

  const int iTargetCourse = 5;

  Student maxim = {.course = 3, .citizenship = (char*)"UA", .campus = false};
  Student kostya = {.course = 2, .citizenship = (char*)"RU", .campus = true};
  Student stas = {.course = 4, .citizenship = (char*)"UAE", .campus = false};
  Student misha = {.course = 1, .citizenship = (char*)"USA", .campus = true};
  Student ignat = {.course = 2, .citizenship = (char*)"GB", .campus = false};
  Student vlad = {.course = 5,  .citizenship = (char*)"FR", .campus = false};
  Student timur = {.course = 3, .citizenship = (char*)"UA", .campus = true};
  Student group[iStudentsLength] = {
    maxim,
    kostya,
    stas,
    misha,xw
    ignat,
    vlad,
    timur
  };

  const char *cHomelandCountry = "UA";
  int iForeignersCount = 0;
  float fForeignersInCampus;

  for (int i = 0; i < iStudentsLength; i++) {
    Student student = group[i];
    if (student.citizenship != cHomelandCountry && student.campus == true) {
      iForeignersCount++;
    }
  }
  cout << "Foreigners in campus count: " << iForeignersCount << "\n";
  fForeignersInCampus = (float)iForeignersCount / (float)iStudentsLength;
  int iPercentage = (int)(fForeignersInCampus * 100);
  cout << "Percent of students who are foreigners and live in campus: " << iPercentage << "\n";
}