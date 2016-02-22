# Cucumbersome (in early development)
Simple cross-platform desktop Pomodoro timer.

I'm building a desktop Pomodoro timer program that should be cross-platform. It will remind you to take breaks every 25 minutes, show you how much time is left nicely (I guess in the system tray area). I aim for it to be very simple to use yet useful and lovely and happy.

## Development

I use **wxWidgets 3.0**. I build with **CMake 3.5**. You might be able to use a lower version of CMake, it just didn't work well with the Visual Studio 2015 I'm developing on. Also I use **wxFormBuilder** as my GUI designer, that feels awkward but nice so far.

Yes, I'm sadly buidling this on Windows, but with CMake it should be easy to build it under Linux and Mac. Hmm, maybe tomorrow at work I'll try to compile it on my Linux workstation.
