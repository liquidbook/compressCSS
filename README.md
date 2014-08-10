compressCSS
===========

CSS Compression class that takes a string and removes the comments, and spaces.

I use this class in my private WordPress plugin. For CSS that is being written into the page. One example is I have a custom field that lets the user add CSS to a given page. The CSS is compressed when the page is called. This leaves the original CSS readable and the output CSS compressed. 

How to Use
==========
```php

/** class the class file */
require_once( plugin_dir_url(__FILE__) . 'folder_name/class.compressCSS.inc' );


/** create an instance */
$compress = new compressCSS();

/** function take a string and returns a string */
$myCompressedCSS = $compress->compress($myUnCompressedCSS);

```

Notes:
======

All the class functions are public - nothing here needs to be private.
you could also use.
```php
$myString = $compress->removeComments($myString);
$myString = $compress->removeSpaces($myString);
$myString = $compress->removeWhiteSpace($myString);
```
