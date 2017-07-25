# trackPlatform

Мобильная платформа на гусенечной базе с набором датчиков на базе микроконтроллерной системы Arduino Mega 2560. 

Проект выполняется на кафедре ЭВМ БГУИР

Используемые датчики:
- Датчики расстояния (GP2Y0A21YK0F)
- Датчики линии (TCRT5000L)

Используемые модули:
- Wi-Fi (ESP8266)
- Bluetooth (HC-05)
- Драйвер двигателя (L298N)
- Поворотная платформа

Для отладки требуется небольная модификация исходников Arduino IDE  в соответствии с [этой](https://playground.arduino.cc/Main/Printf) статьей.

Датчики расстояния объедены в модуль, который несложно снимается, что позволяет заменить датчики. В модуле 5 датчиков расстояния, расположенных под различными углами для улучшения ориентирования на местности. Так же углы поворота датчиков можно настраивать в небольшом диапазоне. Расположены спереди платформы.

![](https://pp.userapi.com/c626121/v626121114/60cc7/xe6EOab8Ysw.jpg)

Датчики линии расположены снизу корпуса. Их тоже 5, для улучшения ориентации в пространстве.

![](https://pp.userapi.com/c626121/v626121114/60ca9/vW6THCRAiqo.jpg)

Wi-Fi и Bluetooth предназначены для общения с мобильным модулем на расстоянии. Закреплены сверху корпуса.

Драйвером двигателя управляется движением платформы. Расположен внутри корпуса.

![](https://pp.userapi.com/c626121/v626121114/60cd1/5vMa45samWA.jpg)

Поворотная платформа предназначена для крепления камеры. Закреплена сверху корпуса.

В перспективе планируется добавить датчик траектории, который будет расположен снизу корпуса, радом с датчиками линии. Он необходим для определения траектории движения платформы. Модель - PAW2512

Так же планируется добавить компас, акселерометр, гироскоп для создания системы положения в пространстве.
