## Abstract
In this project, a Seven segment BCD display is interfaced with Arduino Uno to display numbers from 0-9.

## Hardware Components

- Arduino Uno
- Seven segment BCD Display(Common Cathode)

## Development Tools Used:

- PROTEUS 8 - for simulation
- Arduino - for programming

## Hardware Connection:

- D2-D5 of Arduino Uno is connected to BCD display 

## Usage:
- Download the schematic.pdsprj file->open in PROTEUS 8 tool.

<img src=https://user-images.githubusercontent.com/84024571/135746001-e4b2541a-937a-4fbc-8ba0-70ad1363341d.PNG width="800" height="400">

- Download code. ino and open in the Arduino tool.
- Go to tools ->select Board->select Arduino UNO.
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in   Program file->Click OK.

<img src=https://user-images.githubusercontent.com/84024571/132992989-2161269d-0baf-4f56-9f3c-890b1d71bbe5.PNG width="800" height="400">

- Click on the Run button.

## Output:

<img src=https://user-images.githubusercontent.com/84024571/135746083-fee45e39-cbac-487e-b1d6-5f6ba81947c1.PNG width="800" height="400">
