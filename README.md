# Intro

This repository contains example html/javascript files along with spark .ino code for demonstrating
various [spark core][http://spark.io] functionality.

Specifically, there are 3 demos:

* analog - Demonstrates how the browser can read in real-time an analog sensor variable on the spark device and plot it on a chart.
* led - Demonstrates how pressing an html button in the browser can call functions in the spark code to toggle LEDs on the device.
* button - Demonstrates how a button press on the spark device can call a javascript function in the browser.


To run these demos:

* Edit the html file and adjust the deviceId and accessToken to point to your device ID and access token.
* Flash the spark with the corresponding .ino file via spark build.
* Open the .html file in your web browser.


