Процесс- абстрактый термин. Под ним понимается набор ресурсов задачи во время её выполнения:

Память
Открытые файловые дискрипторы
Контекст выполнения
pid
Обработчики сигналов
Как минимум, один поток
Поток имеют:
Общую виртуальную память
Каждый - сврй виртуальный процессор
Stack - адреса возврата из подпрограмм (аргументы функций)
mmap - разделяемая библиотека heap - всякие локальные переменные и временные данные программы data - инициализированные глобальные и статические переменные

Рекурсивная функция - функция, вызывающая сама себя

Виртуальная файловая система /proc - Не имеет существующих файлов, существует только в оперативной памяти. Содержит оперативную информаию о системе и процессах в ней. В файлы можно писать значения, изменяя этим параметры системы
