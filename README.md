# IMEI Module - Android

Titanium native module for getting a device's IMEI

## Usage

First, download a binary release from https://github.com/mihaiblaga89/ro.mihaiblaga.imei/blob/master/dist/ro.mihaiblaga.imei-android-1.0.0.zip

Then, put the ZIP file in the [Resources
directory](http://docs.appcelerator.com/titanium/3.0/#!/guide/Using_a_Module-section-30082372_UsingaModule-Installingamoduleforasingleproject).

Add the following to your project's `tiapp.xml`:

    ...
    <modules>
      <module platform="android">ro.mihaiblaga.imei</module>
    </modules>
    ...
    
then

```javascript

var imeiModule = require('ro.mihaiblaga.imei');

var imei = imeiModule.getImei();

Ti.API.info(imei);

```
