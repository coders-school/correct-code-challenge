# Wyzwanie poprawnego kodu

## Statystyki

* Zgłoszenia - 35 osób
* Nadesłane rozwiązanie - 16 osób
* Poprawne rozwiązanie - 2 osoby :)

## Treść zadania

* [➡️ Strona wyzwania](https://coders.school/wyzwanie-poprawnego-kodu/)

### Parsowanie liczby

Napisz funkcję biblioteczną, która będzie parsować liczbę z ciągu znaków.

Historia jest taka. W sklepie internetowym jest formularz, gdzie można wpisać liczbę artykułów. Twoja funkcja na wejście przyjmuje wartość z pola tego formularza jako ciąg znaków. Nie ma żadnej walidacji po stronie front-endu. To Twoje zadanie po stronie back-endu.

* Liczbę parsujemy dopóki się da, a jeśli z wejściowego ciągu znaków nie można odczytać liczby to funkcja ma zwrócić 0.
* Liczbę próbujemy parsować od samego początku. Jeśli pierwszy znak nie będzie liczbą, to od razu zwracamy 0.
* Miej na uwadze, że pole formularza nie ma ograniczenia długości, więc przesłany tekst może być dowolnie długi.
* Funkcja powinna używać czystego C++, bez jakichkolwiek bibliotek.
* Funkcja nie może powodować niezdefiniowanego zachowania i nie może rzucać wyjątków.

Więcej szczegółów oraz dokładne wymagania dostaniesz na swój email po podjęciu wyzwania.

### Pytanie wstępne

Super, to odpowiedz tylko najpierw na jedno bardzo ważne pytanie, a potem jedziesz z koksem!

Które z poniższych zdarzeń powodują niezdefiniowane zachowanie?
* [x] Zapis lub odczyt danych poza zakresem tablicy
* [x] Zapis lub odczyt pustego wskaźnika
* [x] Przepełnienie arytmetyczne liczby całkowitej ze znakiem
* [x] Użycie niezainicjalizowanej zmiennej
* [ ] Zwalnianie pamięci wskazywanej przez pusty wskaźnik

### Dokładne wymagania

Napisz funkcję biblioteczną, która będzie parsować liczbę z ciągu znaków.

Kontekst: w sklepie internetowym jest formularz, gdzie można wpisać liczbę artykułów. Twoja funkcja na wejście przyjmuje wartość z pola tego formularza jako ciąg znaków. Nie ma żadnej walidacji po stronie front-endu. To Twoje zadanie po stronie back-endu.

Funkcja MUSI mieć poniższą sygnaturę. Nie możesz zmienić jej nazwy ani typów parametrów czy typu zwracanego. Funkcja musi zwracać liczbę całkowitą, którą udało się odczytać z ciągu znaków.

```cpp
int parseQuantity(const char *);
```

* Liczbę parsujemy dopóki się da, a jeśli z wejściowego ciągu znaków nie można odczytać liczby to musi zwrócić 0.
* Liczbę próbujemy sparsować od samego początku, tzn. jeśli pierwszy znak nie będzie liczbą, to od razu zwracamy 0.
* Miej na uwadze, że pole formularza nie ma ograniczenia długości, więc przesłany tekst może być dowolnie długi.
* Funkcja powinna używać czystego C++. Bez jakichkolwiek bibliotek, także bez STLa!
* Funkcja nie może powodować niezdefiniowanego zachowania i nie może rzucać wyjątków.

Przykłady:

* `"123"` → `123`
* `"abc"` → `0`
* `"123abc"` → `123`
* `"abc123"` → `0`

## Najczęstsze błędy

1. Używanie rzeczy z bibliotek:

   * `strlen()` z `<cstring>`
   * `size_t` z `<cstdlib>`
   * `atoi()` z `<cstdlib>`

2. Brak odpowiednich testów

## Uczestnicy

| Plik         | Uwagi                                        | Failed | Punkty | Kto                                   |
| ------------ | -------------------------------------------- | ------ | ------ | ------------------------------------- |
| 01a.cpp      | dodany `#include <cstring>` (użyte `strlen`) | 9/23   | 14     | Tomasz O.                             |
| 02.cpp       |                                              | 11/23  | 12     | Michal N.                             |
| 03a.cpp      | dodany `#include <cstdlib>` (użyte `atoi`)   | 14/23  | 9      | Krzysztof K.                          |
| 04a.cpp      | dodany `#include <cstdlib>` (użyte `atoi`)   | 8/23   | 15     | Paweł G.                              |
| 05a.cpp      | poprawiona literówka w `parseQuanity`        | 8/23   | 15     | Adrian B.                             |
| 06.cpp       |                                              | 8/23   | 15     | Kacper K.                             |
| 07.cpp       |                                              | 10/23  | 13     | Marcin S.                             |
| 08.cpp       |                                              | 0/23 ✅ | 23     | Barbara T.                            |
| 09.cpp       |                                              | 8/23   | 15     | Jan W.                                |
| 010a.cpp     | dodany `#include <cstdlib>` (użyte `size_t`) | 6/23   | 17     | Adrian Ż.                             |
| 11.cpp       |                                              | 3/23   | 20     | Jakub S.                              |
| 12.cpp       |                                              | 8/23   | 15     | Filip G.                              |
| 13.cpp       |                                              | 8/23   | 15     | Cezary J.                             |
| 14.cpp       |                                              | 0/23 ✅ | 23     | Krzysztof C.                          |
| 015a.cpp     | dodany `#include <cstring>` (użyte `strlen`) | 11/23  | 12     | Sebastian B.                          |
| 16.cpp       |                                              | 9/23   | 14     | Michał P.                             |

## Zwycięzcy

### 400 PLN zniżki

* Barbara T.
* Krzysztof C.

### 100 PLN zniżki

* Tomasz O.
* Michal N.
* Krzysztof K.
* Paweł G.
* Adrian B.
* Kacper K.
* Marcin S.
* Jan W.
* Adrian Ż.
* Jakub S.
* Filip G.
* Cezary J.
* Sebastian B.
* Michał P.
