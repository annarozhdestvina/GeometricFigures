# TopSystems Test

## Задание

Необходимо привести пример программы или библиотеки на C++, которая выводит на экран различные геометрические фигуры: круг, квадрат, треугольник, прямоугольник и т.п. Глубина проработки примера (количество фигур, параметры, методы) на Ваше усмотрение. Программа не обязательно должна запускаться и работать (хотя это будет плюсом). В задании Вам необходимо продемонстрировать умение использовать ООП. Просим не пользоваться библиотекой QT при выполнении задания.

## Solution

Чтобы продемонстрировать навыки ООП:
1. MVC 
2. Легко добавлять новые фигуры - всё, что нужно стороннему разработчику, - это интерфейс фигуры и интерфейс рисовальщика.
3. Ответственность за отрисовку лежит не на классе-хранителе геометрических данных, а на специальном классе-рисовальщике, который имеет доступ к этим геометрическим данным - принцип S из SOLID
4. Класс-фигура знает, как себя рисовать по умолчанию. Можно менять рисование фигур, тогда фигура будет использовать внешний рисовальщик - принцип D из SOLID, то есть рисование зависит от переданной абстракции рисовальщика, а не от конкретной реализации конкретного рисовальщика. В задании НЕ продемонстрировано, лишь задел присутствует
5. Можно засунуть все фигуры в гомогенную структуру - так можно не писать код работы с каждой фигурой отдельно, а использовать общий код - для этого использовался интерфейс фигуры. 
6. В гомогенной структуре нельзя использовать другой рисовальщик - нужно чтобы для отрисовки круга использовался особый рисовальщик круга, для треугольника - особый рисовальщик треугольника и тд. Возможный вариант - использовать шаблон - посетитель - не реализовано. Это главный минус проекта, нужно решить
7. Используются умные указатели - во избежание утечек памяти из-за ошибки программиста - принцип RAII
8. Используются пространства имён - для упрощения понимания, к какой категории относится тот или иной класс
9. Предусмотрена возможность менять способ передачи нарисованных фигур - поэтому используется не протокол, а интерфейс протокола - в задании не демонстрируется. Принцип D из SOLID
10. Нет кода, который зависит от каждого типа фигуры, который при добавлении новой фигуры перестаёт работать. Например, нет перебора типов фигуры 