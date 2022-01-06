echo Building...
g++ -Ofast -march=native -mtune=native -I /boot/system/develop/headers/private/system/arch/ -I /boot/system/develop/headers/private/system/arch/x86_64/ -I /boot/system/develop/headers/private/system/ reboot.cpp reboot -lbe
echo Stripping...
strip -s reboot
echo Copying to /boot/system/non-packaged/bin
cp reboot /boot/system/non-packaged/bin/
echo Done!

