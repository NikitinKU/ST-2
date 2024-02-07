# ST-2 UNIT-тестирование с использованием Googletest (C++) (2)


![GitHub pull requests](https://img.shields.io/github/issues-pr/UNN-CS/ST-2)
![GitHub closed pull requests](https://img.shields.io/github/issues-pr-closed/UNN-CS/ST-2)

Срок выполнения задания:

<!--- **до 26.02.23** ![Relative date](https://img.shields.io/date/1677445200) -->


## Задание

Разработать класс `Circle` (круг), содержащий следующие поля:

- `radius` - радиус
- `ference` - длина окружности
- `area` - площадь круга

Данные поля рекомендуется объявить как переменные типа `double` и с модификатором доступа `private` для безопасности. Доступ к этим полям следует ограничить с помощью методов класса.

В класс `Circle` включить конструктор, принимающий значение радиуса.

Класс должен обязательно содержать методы:

- **setRadius()**
- **setFerence()**
- **setArea()**
- **getRadius()**
- **getFerence()**
- **getArea()**

*Замечание*

- при установке значения радиуса пересчитывать длину окружности и площадь;
- при установке длины окружности пересчитывать радиус и площадь;
- при установке площади пересчитывать радиус и длину окружности.

При помощи класса `Circle` решить две вспомогательные задачи:

**"Земля и верёвка"**

Решить с использованием класса `Circle` следующую задачу:

> Представим, что земля имеет форму идеального шара. Вокруг поверхности земного шара туго натянута верёвка (между ней и поверхностью нет никакого зазора). Кто-то разрезает верёвку в произвольном месте и добавляет кусок верёвки длиной 1 метр. После вставки между поверхностью земли и верёвкой возникает зазор, вызванный увеличением длины. Найти величину этого зазора. Примем за радиус земли расстояние в 6378.1 км

**"Бассейн"**

Решить с помощью класса Circle следующую задачу:

> Необходимо рассчитать стоимость материалов для бетонной дорожки вокруг круглого бассейна, а также стоимость материалов ограды вокруг бассейна (вместе с дорожкой). Стоимость 1 квадратного метра бетонного покрытия 1000 р. Стоимость 1 погонного метра ограды 2000 р. Радиус бассейна 3 м. Ширина бетонной дорожки вокруг бассейна 1 м.


**Тестирование**

Написать не менее 10 тестов для класса *Circle* и решаемой задачи.

**Состав проекта**

- **include/circle.h** - описание класса `Circle`
- **src/circle.cpp** - реализация методов
- **test/tests.cpp** - модульные тесты


 

