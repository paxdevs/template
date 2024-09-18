# Template project for PAX devices
A template project to base your project on.

## Modifying
- Change all occurences of `paxtemplate` to your desired name in `CMakeLists.txt`
- Put your code in the function `app_start` in `main.cpp`
- Add any additional files to `add_library` in `CMakeLists.txt`

## Prerequisites
Install docker for the build environment.

## Building
Run `./docker-build.sh` to build. The output file will be at `build/libyour_project_name.so`

## Documentation
You may wish to consult [this](https://github.com/paxdevs/s920docs) in case you run into issues.

## Connecting to the device

### USB
Connect the USB cable to your computer. In the Main Menu, set the XCB mode to USB
### WiFi
Use the menu to connect to a WiFi network. In the Main Menu, set the XCB mode to WiFi. You will need to change the commands below to use ADB over WiFi instead.

## Uploading the program

Before uploading the program, you may wish to backup the original libosal.so file like so:
```
python3 prolin-xcb-client/client.py ACM0 pull /data/app/MAINAPP/lib/libosal.so libosal-original.so
```

Then, run these commands to upload the required files. Remember to change libpaxtemplate to your project name
```
python3 prolin-xcb-client/client.py ACM0 push build/libpaxtemplate.so /data/app/MAINAPP/lib/libosal.so
```

Either restart the device of press X on the main menu to execute the program.

