<br />
<div align="center">
  <h1>LinkyTIC</h1>
  
  <h3>développé par Marc Bresson</h3>

  <p align="center">
    <a href="https://linkedin.com/in/marc--bresson"><img src="https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555"/></a>
  </p>

  <p align="center">
    <br />
    <a href="https://github.com/MarcBresson/LinkyTIC/issues">Rapporter un bogue</a>
    ·
    <a href="https://github.com/MarcBresson/LinkyTIC/issues">Suggérer une fonctionnalité</a>
  </p>
</div>

# Installation


# Utilisation

```C
#include LinkyTIC.h

#define LINKY_GROUPS {"GROUP_1","GROUP_5","GROUP_3","GROUP_P"}

LinkyTIC Linky(pin_LkyRx);
LinkyTIC::DATA linky_data

void setup(){
    Linky.init()
}

void loop(){
    if(Linky.read(linky_data)){
        linky_data.GROUP_1
        linky_data.GROUP_5
        linky_data.GROUP_3
        linky_data.GROUP_P
        linky_data.GROUP_OUPS //unknown, must not compile
    }
}
```

## Importer la bibliothèque dans votre code

## Paramètrer la bibliothèque

### Lecture des valeurs qui vous intéressent

## Example d'utilisation
