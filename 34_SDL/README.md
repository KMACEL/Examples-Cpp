Method 1: Source code archive
    Now you can go to the libsdl download page and download SDL2-2.0.0.tar.gz, extract the archive (you can extract the archive using tar: tar -xvzf SDL2-2.0.0.tar.gz), cd into the directory created, and run the following commands (don't forget to install the dependencies mentioned above, before starting to compile):

   ./configure
    make
    sudo make install

   Method 2: Mercurial repository
    Another way to install SDL2 is to download SDL from the mercurial repository online. In order to do this you have to install mercurial first:

   sudo apt-get install mercurial

   then download SDL (SDL will be downloaded into the directory you're using the terminal)

   hg clone http://hg.libsdl.org/SDL

   now go into the downloaded SDL directory and build & install (don't forget to install the dependencies mentioned above, before starting to compile) the libs by running:

   cd SDL
   ./configure
    make
    sudo make install

Don't forget to run:

sudo ldconfig

to update the necessary links and cache to the libraries.

Code::Blocks
Add to
Project > Build options > Compiler settings > Other options > -lSDL2

and to
Project > Build options > Linker settings > Other linker options -lSDL2

Remember to add these to the Project options and not only to Debug or Release settings. Also, if you've already wrongly compiled the sources, remember to Rebuild it (CTRL + F11)



-------------------------------------------------------------------
sudo apt-get install libsdl2-2.0-0 

Eclipse Project File  Riht Click -> Properties -> C/C++ Build -> Settings -> GCC C++ Compiler -> Includes -> Include Pats -> Add (/usr/local/include/SDL2) 

Eclipse Project File  Riht Click -> Properties -> C/C++ Build -> Settings -> GCC C++ Linker -> Libraries -> Liblaries (SDL2)

Eclipse Project File  Riht Click -> Properties -> C/C++ Build -> Settings -> GCC C++ Linker -> Libraries -> Liblaries search path (/usr/local/lib) 


sudo apt-get install libdbus-glib-1-dev
sudo apt-get install libibus-1.0-dev 
sudo apt-get install libsamplerate0-dev
sudo apt-get install libudev-dev
sudo apt-get install fcitx-libs-dev 