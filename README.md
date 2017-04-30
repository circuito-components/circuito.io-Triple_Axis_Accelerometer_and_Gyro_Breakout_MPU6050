# About circuito.io
[circuito.io](https://www.circuito.io) is a service for makers - It automatically generates wiring instructions and code for different combinations of hardware used in an electronics project.

The user selects the components they want to use in their project, and gets a complete BoM including every auxiliary component they may need, a step by step guide on how to connect everything, and a custom code with the basic driver for each component.

# what are we doing on Github?
We are now opening up circuito.io to community contribution, to allow more components into the system and grow the number of possible projects we support.

So, if you created a circuit, and one of the components doesn’t have code - you can try looking for it here, or if you’re up to it, even be the one to contribute the code you wrote by yourself to test the component.

Find Help & Help Others build cool electronics projects!

# Using Contributed Test Code:
If you are looking for code for you component:
1. In the repository of the component.
2. Please read the license before you proceed to use.
3. Clone or download the repository.
4. Navigate to the relevant board folder, e.g. Arduino.
5. If a code and libraries were contributed you will see them in this folder. 
##### Option #1: Use code as only component:
1. Open the Firmware.ino with your Arduino IDE.
2. Upload to board.
3. Make sure the pin number definitions are correct.
##### Option #2 : Use inside auto generated circuito code:
1. Copy the library files into your Firmware folder, downloaded from circuito.io.
2. Open the contributed Firmware and copy section by section to its corresponding section in the Firmware provided in the zip by circuito.

Enjoy! :)

# Contributing Code:
The code to be contributed will serve other users looking for code, and also our circuito engine to generate the code automatically in the future.

##### In order to contribute your code and libraries:
1. In the chosen component repository, go to the relevant controller library. Current only Arduino is available.
2. Please read the license in the library before you proceed with contribution.
3. Contribute library files: place all the *.h and *.cpp file inside if such exist.
4. Contribute snippet test code: 
    - Each component has an empty Firmware.ino template. It contains a main structure of an Arduino code and pin definitions of the component. You should use the pin definition names in your contributed code - do not change them. You can change the assigned pin number if necessary.  
    - The Firmware.ino contains several sections to be filled:
        1. Include libraries
        2. Global variables and defines
        3. Constructors - declare component instance if necessary.
        4. Setup - setup snippet for the component
        5. Test code - inside loop()
    - Keep in mind that this code is processed by the circuito engine. Only edit lines within specified code blocks, other changes will be discarded.
    - Send us a pull-request.

Thank you! :)



