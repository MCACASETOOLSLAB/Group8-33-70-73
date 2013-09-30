This software is intended to provide small working example of PROCESS SYNCRONIZATION.This is explained here diagramatically. The modules strive to be simple, well documented and modification friendly to help users to quickly learn the basic concept of process syncronization-critical section, semaphore, busy waiting, spinlock, etc., with a little reading and idea.

This software had been developed in DOS BOX TurboC++.

In this application, I'm using two process,which is of shape car.Intially its started form their respective entry section but only one getting into critical section. After few quantum, one process leaving its critcal section, meanwhile other process enter into the critical section. For this I'm using BINARY SEMPHORE, which mutex variable intialized with 1.

Now you can read the code and its comments and see the result,do experiment with it, and hopefully quickly grasp how things work.

If you find any problem, incorrect comment, obsolete or improper code or such, please let me know

Deepak +91-9488028247

