# Projeto 1 - Leitura de Temperatura e Umidade com DHT22 e LCD I²C

## Descrição
Este projeto demonstra a leitura de um **sensor digital DHT22** via biblioteca `DHTesp` e exibição dos valores de **temperatura e umidade** em um display **LCD 20x4 via I²C**.  
Além disso, os dados também são enviados para o **Serial Monitor**.

O projeto foi desenvolvido em **Arduino / ESP32**, utilizando bibliotecas externas para abstração de hardware.

---

## Componentes utilizados
- Arduino/ESP32
- Sensor DHT22
- Display LCD 20x4 I²C
- Cabos de conexão

---

## Bibliotecas
- [DHTesp](https://github.com/beegee-tokyo/DHTesp)  
- [LiquidCrystal_I2C](https://github.com/johnrickman/LiquidCrystal_I2C)

---

## Esquema de ligação
- **DHT22** → Pino digital 19 (data)  
- **LCD I²C** → SDA e SCL conectados ao barramento I²C do microcontrolador  
- Alimentação conforme especificação do microcontrolador

<img width="1364" height="723" alt="DHT22PROJETO" src="https://github.com/user-attachments/assets/2dffb58c-7ab0-45fe-b56b-43b018504bac" />

[Baixar o código - sketch.ino](sketch.ino)

## Funcionalidades
- Leitura de temperatura e umidade do sensor DHT22
- Exibição dos valores no display LCD 20x4
- Log de dados no Serial Monitor
- Atualização de dados a cada 2 segundos
