# Arduino Two-Button LED Control Project

## Simulación
[Ver projeto en Tinkercad](https://www.tinkercad.com/things/0TtUJBx66TO-boton-onoff)

## Descripción
Código Arduino que controla un LED usando dos botones independientes.

## Componentes
- Arduino
- LED
- 2 Botones pulsadores
- Resistencias (si es necesario)

## Código Explicado

### Configuración de Pines
```cpp
int led = 2;     // Pin del LED
int boton1 = 13; // Pin del botón 1
int boton2 = 12; // Pin del botón 2
```

### Función `setup()`
- Configura LED como salida
- Configura botones como entradas con resistencia pull-up
- Inicializa LED apagado

### Función `loop()`
- Lee estado de ambos botones
- Botón 1: Enciende LED
- Botón 2: Apaga LED

## Características
- Control independiente de LED
- Uso de `INPUT_PULLUP`
- Antirebote básico con `delay(20)`

## Personalización
- Cambiar pines según conexión física
- Ajustar tiempo de antirebote

## Licencia
Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## Autor
[Pedro Carranza](https://github.com/draexx)
