# IMEI Module - Android [![gitTio](http://gitt.io/badge.svg)](http://gitt.io/component/ro.mihaiblaga.imei)

Titanium native module for getting a device's IMEI

## Usage

First, download a binary release from https://github.com/mihaiblaga89/ro.mihaiblaga.imei/blob/master/dist/ro.mihaiblaga.imei-android-1.1.0.zip

Then, put the ZIP file in the [Resources
directory](http://docs.appcelerator.com/titanium/3.0/#!/guide/Using_a_Module-section-30082372_UsingaModule-Installingamoduleforasingleproject).

or

Simply use the [gitTio CLI](http://gitt.io/cli):

`$ gittio install ro.mihaiblaga.imei`

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

**_Note :_** On simulator it returns ```null ```

## isDateAutomatic()
Returns the status of the automatic date checkbox from settings.

**_I know this module is named IMEI, that was it's main purpose. Later I needed the automatic date check as well. When i'll have more time i'll rename the module or separate them_**


```javascript
var imeiModule = require('ro.mihaiblaga.imei');

Ti.API.info(imeiModule.isDateAutomatic());
```

## About
* Me: [Mihai Blaga](http://www.mihaiblaga.ro) 
* Twitter: [@blaga_mihai](https://twitter.com/blaga_mihai)
* Work: [AG Prime](http://www.ag-prime.com/)

## License
Apache License
Version 2.0
