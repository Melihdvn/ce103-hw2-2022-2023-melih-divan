/****************************************************************************
 * Copyleft (L) 2021 CENG - All Rights Not Reserved
 * You may use, distribute and modify this code.
 ****************************************************************************/

 /**
  * @file ce103-hw2-lib.c
  * @author Ugur CORUH
  * @date 28 November 2022
  *
  * @brief <b> HW-2 Functions </b>
  *
  * HW-2 Sample Lib Functions
  *
  * @see http://bilgisayar.mmf.erdogan.edu.tr/en/
  *
  */

#include "ce103-hw2-lib.h"

  /**
   @name TestFunction(fnCE103HW2Lib)
	  @brief \b Auto Generated Test Function

	  Auto Generated Test Function Has Doxygen and Plantuml Integration

   Sample Web Page Link
   @see https://www.cplusplus.com/reference/cstring/strcpy/

   Sample Image AES Block Decryption Operation

   @image html aes_enc_dec.png
   @image rtf aes_enc_dec.png
   @image latex aes_enc_dec.png

   Sample Related Function Link
   @see TestFunction (fnCE103HW2Lib)
   <b> Plant UML Sample </b> <BR>
   @image html fnCE103HW2Lib.png
   @image rtf fnCE103HW2Lib.png
   @image latex fnCE103HW2Lib.png

   <!--

	  @startuml fnCE103HW2Lib.png

	  title Servlet Container

	  (*) --> "ClickServlet.handleRequest()"
	  --> "new Page"

	  if "Page.onSecurityCheck" then
		->[true] "Page.onInit()"

		if "isForward?" then
		 ->[no] "Process controls"

		 if "continue processing?" then
		   -->[yes] ===RENDERING===
		 else
		   -->[no] ===REDIRECT_CHECK===
		 endif

		else
		 -->[yes] ===RENDERING===
		endif

		if "is Post?" then
		  -->[yes] "Page.onPost()"
		  --> "Page.onRender()" as render
		  --> ===REDIRECT_CHECK===
		else
		  -->[no] "Page.onGet()"
		  --> render
		endif

	  else
		-->[false] ===REDIRECT_CHECK===
	  endif

	  if "Do redirect?" then
	   ->[yes] "redirect request"
	   --> ==BEFORE_DESTROY===
	  else
	   if "Do Forward?" then
		-left->[yes] "Forward request"
		--> ==BEFORE_DESTROY===
	   else
		-right->[no] "Render page template"
		--> ==BEFORE_DESTROY===
	   endif
	  endif

	  --> "Page.onDestroy()"
	  -->(*)
	  @enduml

   -->

	 @param [in] fia	[\b unsigned char*] Binary Data Input
	 @param [in] fib	[\b int] Binary Data Input Length
	 @param [out] fic	[\b char*] Hex String Output Array

	  @retval [\b int] operation result success 0 fail 1

	  Example Usage :

	   @code
		#include <stdio.h>
		#include <string.h>

		int main (){
		  unsigned char data[]="\x13\x13\x13x\13";
		 int dataLength = 4;
		  char dataHex[40];

		  if(fnCE103HW2Lib(data,dataLength,dataHex)!=0)
		 {
		   printf("Operation Failed!");
		   return -1;
		 }

		printf("Converted Data [%s]",dataHex);

		  return 0;
	   }
	  @endcode
  **/
int fnCE103HW2Lib(unsigned char* fia, int fib, char* fic)
{
	//Empty Body...
	return -1;
}

/**
*
*	  @name   fibonacciNumber (ce103_fibonacciNumber)
*
*	  @brief Fibonacci Number Calculator
*
*	  Calculates the fibonacci number in the given index and return as output
*
*	  @param  [in] fiIndex [\b int]  index of fibonacci number in the serie
*
*	  @retval [\b int] calculated fibonacci number
**/
int ce103_fibonacciNumber(int fiIndex)
{
	int fiIndexp = fiIndex - 1;
	if (fiIndexp <= 1) {
		return fiIndexp;
	}

	int previousFib = 0, currentFib = 1;
	for (int i = 0; i < fiIndexp - 1; i++)
	{
		int newFib = previousFib + currentFib;
		previousFib = currentFib;
		currentFib = newFib;
	}

	return currentFib;
 }
/**
	@name   strrev (ce103_strrev)

	@brief \b Reverse String

	Reverse given string

	@param [in] fiStr [\b char*] The given string which is needed to be reversed.

	@retval [\b char*] This function returns the string after reversing the given string
**/
char* ce103_strrev(char* fiStr)
{
	int i;
	int len = 0;
	char c;
	if (!fiStr)
		return 0;
	while (fiStr[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		c = fiStr[i];
		fiStr[i] = fiStr[len - i - 1];
		fiStr[len - i - 1] = c;
	}
	return fiStr;
}

/**
	@name   strlen (ce103_strlen)
	@brief \b Get string length

	Returns the length of the C string str.

	The length of a C string is determined by the terminating null-character:
	A C string is as long as the number of characters between the beginning of
	the string and the terminating null character
	(without including the terminating null character itself).

	see more <a href="https://en.cppreference.com/w/c/string/byte/strlen">strlen reference 1</a>
	see more <a href="https://www.programiz.com/c-programming/library-function/string.h/strlen">strlen reference 2</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strlen/">strlen reference 3</a>

	@param [in] fiStr [\b const char*] pointer to the null-terminated byte string to be examined

	@retval [\b int] The length of the null-terminated byte string str.
**/
int ce103_strlen(const char* fiStr)
{
	int len = 0;
	while (*fiStr != '\0')
	{
		fiStr++;
		len++;
	}
	return len;
}

/**
	@name   strcat (ce103_strcat)
	@brief \b Concatenate strings

	Appends a copy of the null-terminated byte string pointed to by src to the end of the null-terminated byte string pointed to by dest

	The character src[0] replaces the null terminator at the end of dest. The resulting byte string is null-terminated.

	The behavior is undefined if the destination array is not large enough for the contents of
	both src and dest and the terminating null character. The behavior is undefined if the strings overlap.
	The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcat">strcat reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcat/">strcat reference</a>

	@param  [in] fiDest [\b char*] pointer to the null-terminated byte string to append to
	@param  [in] fiSrc  [\b char*] pointer to the null-terminated byte string to copy from

	@retval [\b char*] returns a copy of dest
**/
char* ce103_strcat(char* fiDest, char* fiSrc)
{
	char* rfiDest = fiDest;

	while (*fiDest)
		fiDest++;
	while (*fiDest++ = *fiSrc++);
	return rfiDest;
}

/**
	@name   strcmp (ce103_strcmp)
	@brief  \b Compare two strings

	Compares two null-terminated byte strings lexicographically.

	The sign of the result is the sign of the difference between
	the values of the first pair of characters (both interpreted as unsigned char)
	that differ in the strings being compared.The behavior is undefined
	if lhs or rhs are not pointers to null-terminated byte strings.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcmp">strcmp reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcmp/">strcmp reference</a>

	@param  [in] fiLhs [\b const char*] pointers to the null-terminated byte strings to compare
	@param  [in] fiRhs [\b const char*] pointers to the null-terminated byte strings to compare

	@retval [\b int] Negative value if lhs appears before rhs in lexicographical order.
			Zero if lhs and rhs compare equal.
			Positive value if lhs appears after rhs in lexicographical order.
**/
int ce103_strcmp(const char* fiLhs, const char* fiRhs)
{
    int i;
    for (i = 0; fiLhs[i] && fiRhs[i]; ++i)
    {
        /* If characters are same or inverting the
           6th bit makes them same */
        if (fiLhs[i] == fiRhs[i] || (fiLhs[i] ^ 32) == fiRhs[i])
           continue;
        else
           break;
    }
 
    /* Compare the last (or first mismatching in
       case of not same) characters */
    if (fiLhs[i] == fiRhs[i])
        return 0;
 
    // Set the 6th bit in both, then compare
    if ((fiLhs[i] | 32) < (fiRhs[i] | 32))
        return -1;
    return 1;
}

/**
*
	@name  strcpy (ce103_strcpy)
	@brief \b Copy string

	Copies the C string pointed by source into the array pointed by destination,
	including the terminating null character (and stopping at that point).

	To avoid overflows, the size of the array pointed by destination shall be long enough to contain
	the same C string as source (including the terminating null character),
	and should not overlap in memory with source.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcpy">strcpy reference 1</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcpy/">strcpy reference 2</a>

	@param [out] foDestination	[\b char*]			Pointer to the destination array where the content is to be copied.
	@param [in]  fiSource		[\b const char*]	C string to be copied.

	@retval returns a copy of dest
**/
char* ce103_strcpy(char* foDestination, const char* fiSource)
{
	char* saved = foDestination;
	while (*fiSource)
	{
		*foDestination++ = *fiSource++;
	}
	*foDestination = 0;
	return saved;
}

/**
 * @name    hex2bin (ce103_hex2bin)
 * @brief   \b Hexadecimal to Binary (BCD)  Conversion
 *
 * Hexadecimal to Binary (BCD)  Conversion
 * Packs hexadecimal string to packed binary array, Example: "AB1234" => 0xAB 0x12 0x34
 * If length of the input string is less than the fiHexLen,remaining bytes is not filled.
 * If odd number of characters processed, last nibble is padded with 0
 *
 * @param   [in]  fiHex    [\b unsigned char*] Ascii hex string.
 * @param   [in]  fiHexLen [\b int]     Ascii data length.
 * @param  [out]  foBin    [\b char*]   Convertion result as binary.
 */
void ce103_hex2bin(char* fiHex, int fiHexLen, unsigned char* foBin)
{
	int c, d;                                                 // Two integer values are defined, named c and d. 
	for (;;)
	{
		c = *fiHex++; if (c == 0) break;                      // Here we match our input to c.

		if (c > 96) c -= 87;								  // If it's a uppercase letter we will substract 87 (A is starting from 96 in ascii)

		else if (c > 64) c -= 55;							  // If it's a lowercase letter we will substract 55 (a is starting from 64 in ascii)

		else c -= 48;                                         // If it's a number we will substract 48 (Numbers are starting from 48 in ascii)

		d = *fiHex++; if (d == 0) { *foBin = c << 4; break; } // Here we take our second input until it overs. 


		if (d > 96) d -= 87;                                  // Same operations

		else if (d > 64) d -= 55;

		else d -= 48;

		*foBin++ = (c << 4) | d;                              // foBin is set to c shifted 1 byte to left and d added to the end.
	}
	return fiHex;                                             // Return the fiHex value.
}

/**
* @name    bin2hex (ce103_bin2hex)
* @brief   \b Binary (BCD) to Hexadecimal Conversion
*
* Unpacks alpha numeric value, Example: 0x12 0x34 = "1234".
*
* @param [in]  fiBin      [\b unsigned char*]    Binary data to be converted.
* @param [in]  fiBinLen   [\b int]				 Binary data length.
* @param [out] foHex      [\b char*]			 Convertion result as ascii. Doubles the binary length.
*
*/
void ce103_bin2hex(unsigned char* fiBin, int fiBinLen, char* foHex)
{

	int c, d, * end = fiBin + fiBinLen;	    // Three integer values are defined, named c, d, and end.
	while (fiBin < end)						// As long as fiBin is less than end
	{
		c = (*fiBin++);						// The value c is being added to the fiBin 
		d = c >> 4;							// d equals after the 4th character of c. 
		*(foHex++) = d + (d > 9 ? 55 : 48); // To convert c and d to HEX code, we add 55 if d is greater than 9 and 48 if not. 
		d = c & 15;						    // d is equal to the addition or subtraction of c and 15.
		*(foHex++) = d + (d > 9 ? 55 : 48); // To convert c and d to HEX code, we add 55 if d is greater than 9 and 48 if not.
	}
	*foHex = 0;                             // foHex set to 0.

	return fiBin;                           // Return the fiBin value

}



/**
* @name    gcd (ce103_gcd)
* @brief   \b Greatest Common Divisor
*
* Calculates the greatest common divisor of two number in iterative way for example GCD of 98 and 56 is 14
*
* @param [in]  fiNum1   [\b int]   First Number
* @param [in]  fiNum2   [\b int]   Second Number
*
* @retval [\b int*]	 GCD of numbers.
*
*/
int ce103_gcd(int fiNum1, int fiNum2)
{
	while (fiNum1 != fiNum2)
	{
		if (fiNum1 > fiNum2)
			fiNum1 -= fiNum2;
		else
			fiNum2 -= fiNum1;
	}

	return fiNum1;
}
