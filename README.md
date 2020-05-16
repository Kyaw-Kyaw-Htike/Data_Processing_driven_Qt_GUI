# Data_Processing_driven_Qt_GUI
Data_Processing_driven_Qt_GUI

Normally, Qt Guis are event driven and takes up the main thread. Then all the other things happen (in other worker threads) with the GUI being the one driving the whole story. For video processing applications, and in applications where the data processing (most likely happening in loops) should be in charge, and the GUI should be playing the support role, rather than the one being in charge. Otherwise, what happens is that the data/processor-heavy part being split into many different pieces without any flow and difficult to understand. Moreover, it is hard to convert console-based applications to GUI-based applications. 

To tackle this problem, the following approach is taken:

- The GUI is of course the main thread (this is a must for Qt).
- Start writing the normal code full of loops, etc. inside a method of a class inherited from QObject. Treat this as if it's the main. 
- And if I want to add GUI, simple. Push that the above into a "worker" thread.
- Design GUI and now, from the work thread, send (i.e. emit) signals that will be connected to the slots in the GUI (main) thread.
= Most of the time, the flow is the worker thread to the GUI (than the other way round).

Using this approach, you will find that most of the code the worker thread is very similar to console application with no need to change most of the things. The only thing needed to be done is emit this signal and that signal to update the GUI when needed.

Examples of this approach can be seen in this project.

<https://kyaw.xyz/2020/05/16/data-processing-driven-qt-gui>

Copyright (C) 2020 Kyaw Kyaw Htike @ Ali Abdul Ghafur. All rights reserved.

Dr. Kyaw Kyaw Htike @ Ali Abdul Ghafur

<https://kyaw.xyz>
