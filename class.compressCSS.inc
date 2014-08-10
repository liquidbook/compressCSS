<?php
/**
 * CSS Compression class that take a string and removes comments, whitespace, and spaces.
 *
 * The MIT License (MIT)
 * http://en.wikipedia.org/wiki/MIT_License
 * Copyright (c) 2014 liquidbook
 */

/**
 * compressCSS class.
 */
class compressCSS
{
  
/**
 * compress function.
 * 
 * @access public
 * @param mixed $myCSS
 * @return void
 */
public function compress($myCSS) 
	{
		$myCSS = $this->removeComments($myCSS); 
		$myCSS = $this->removeSpaces($myCSS); 
		$myCSS = $this->removeWhiteSpace($myCSS); 	
		return $myCSS;
	}
	
/**
 * removeComments function.
 * 
 * @access public
 * @param mixed $myString
 * @return void
 */
public function removeComments($myString) 
	{
	// Remove comments
	$myString = preg_replace('!/\*[^*]*\*+([^/][^*]*\*+)*/!','',$myString);
	 return $myString;
	}

/**
 * removeSpaces function.
 * 
 * @access public
 * @param mixed $myString
 * @return void
 */
public function removeSpaces($myString) 
	{
	// Remove spaces
	$myString = str_replace(': ',':',$myString);
	 return $myString;
	}
	
/**
 * removeWhiteSpace function.
 * 
 * @access public
 * @param mixed $myString
 * @return void
 */
public function removeWhiteSpace($myString) 
	{
	// Remove whitespace
	$myString = str_replace(array("\r\n","\r","\n","\t",'  ','    ','    '),'',$myString);
	 return $myString;
	}		
}


?>
