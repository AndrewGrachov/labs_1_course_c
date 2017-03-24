#include <iostream>
using namespace std;

// 1-ша компонента: Ім’я – значення
// перечислювального типу;
// 2-га компонента: Курс – ціле значення;
// 3-тя компонента: Місто – символьне значення

typedef enum {Maxim, Kostya, Stas, Mikhail, Ignat, Timur, Vlad} Names;

struct Student {
  char *city;
  Names name;
  int course;
};

int main() {
  const int iStudentsLength = 7;

  //variant 5

//   Процент студентів 1-
// го курсу, що
// приїхали з інших
// міст

  Student maxim = {.city = (char *)"Kyiv", .name = Maxim, .course = 2};
  Student kostya = {.city = (char *)"Kyiv", .name = Kostya, .course = 1};
  Student stas = {.city = (char *)"Kharkiv", .name = Stas, .course = 1};
  Student misha = {.city = (char *)"Kyiv", .name = Mikhail, .course = 1};
  Student ignat = {.city = (char *)"Donetsk", .name = Ignat, .course = 1};
  Student vlad = {.city = (char *)"IvanoFrankivsk", .name = Timur, .course = 2};
  Student timur = {.city = (char *)"Chernivtsy", .name = Vlad, .course = 1};
  Student group[iStudentsLength] = {
    maxim,
    kostya,
    stas,
    misha,
    ignat,
    vlad,
    timur
  };


  const char *cHomeCity = "Kyiv";
  const int iFirstCourse = 1;

  int iFirstCourseCount = 0;
  int iForeignCityStudentsCount = 0;

  for (int i = 0; i < iStudentsLength; i++) {
    Student student = group[i];
    if (student.course == iFirstCourse) {
      iFirstCourseCount++;
      if (student.city != cHomeCity) {
        iForeignCityStudentsCount++;
      }
    }
  }

  cout << "First course count: " << iFirstCourseCount << "\n";
  cout << "Foreign city count: " << iForeignCityStudentsCount << "\n";

  float fForeignCitiesPart = (float) iForeignCityStudentsCount / (float) iFirstCourseCount;
  int iPercent = (int) (fForeignCitiesPart * 100);

  cout << "Foreign students on 1 course percentage: " << iPercent << "\n";

  return 0;
}