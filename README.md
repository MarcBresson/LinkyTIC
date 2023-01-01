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
#define BASE
#define OPTARIF
#define SMAXIN

#include "LinkyTIC.h"
#include <SoftwareSerial.h>

SoftwareSerial LinkySerial(13, 15);
LinkyTIC linky(LinkySerial, LinkyTIC::STANDARD);

void setup() {
}

void loop() {
  if(linky.read()){
    int base = linky.GetBASE();
    Serial.println(base);
  }
}
```

## Importer la bibliothèque dans votre code

## Paramètrer la bibliothèque

### Lecture des valeurs qui vous intéressent

## Example d'utilisation
