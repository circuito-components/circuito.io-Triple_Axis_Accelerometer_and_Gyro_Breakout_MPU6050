# About circuito.io
[circuito.io](https://www.circuito.io) is a service for makers - It automatically generates wiring instructions and code for different combinations of hardware used in electronic projects.

The user selects the components they want to use in their project, and gets a complete BoM including every auxiliary component they may need, a step by step guide on how to connect everything, and a custom code with the basic driver for each component.

# What are we doing on Github?
Our main magic is to generate on the fly the detailed instructions for wiring components to one another, based on their electrical requirements.

Our community magic is to help our users code for those components by providing libraries and code samples to start with.

No matter how hard we try, we won't be able to generate all possible example of libraries and code in advance - as the possibilities & applications are endless.

Therefore, we're calling out to you to share your libraries, and code built for components with the community of circuito.io, and enjoy samples contributed by others.

Find Help & Help Others build cool electronics projects!

# Using Contributed Test Code:
If the component you want to use is missing the code for testing, the following steps will help you fill in the missing code:
1. Go to `circuito.io-component_name`.
2. Clone or download the repository. 
4. Now, navigate to the relevant board folder `controller/Firmware`.e.g. Arduino.
5. If a **code** and/or **libraries** were contributed, you will see them in this folder. 

##### Case #1: Use `Firmware.ino` for testing single component:
1. Open the Firmware.ino with your Arduino IDE.
2. Upload to board.
3. Make sure the pin number definitions are correct.


##### Case #2 : Add code snippet to `Firmware.ino` downloaded from circuito.io app:
1. Copy the library files from the repository into your Firmware folder, downloaded from circuito.io app.

![Download](https://s3-us-west-2.amazonaws.com/ux-ui/gifs/download.gif)

2. Open the `Firmware.ino` you've downloaded from the repository and copy **section by section** to its corresponding section in the Firmware provided in the zip by the circuito.io app.

![Copy paste](	https://s3-us-west-2.amazonaws.com/ux-ui/gifs/co_paste.gif)

Enjoy! :)

# Contributing Code:
The code to be contributed will serve other users looking for code, and also our circuito.io engine to generate the code automatically in the future.

##### In order to contribute your code and libraries:
1. In the chosen component repository, go to the relevant controller library. Current only Arduino is available.
2. Please read the license in the library before you proceed with contribution.
3. Contribute library files: place all the *.h and *.cpp file inside if such exist.
4. Contribute snippet test code: 
    - Each component has an empty Firmware.ino template. It contains a main structure of an Arduino code and pin definitions of the component. Please do not change the declared PIN name. you can change the value if necessary. You can change the assigned pin number if necessary.  
    - The Firmware.ino contains several sections to be filled:
        1. Include libraries
        2. Global variables and defines
        3. Object initialization- declare component instance if necessary.
        4. Setup - setup snippet for the component
        5. Test code - inside loop()
    - Keep in mind that this code is processed by the circuito.io engine. Only edit lines within specified code blocks, other changes will be discarded.
    - Send us a pull-request.

Thank you! :)





