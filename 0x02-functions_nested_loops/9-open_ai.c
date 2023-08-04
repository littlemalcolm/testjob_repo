#include "main.h"
#include <math.h>


void times_table(void)
{
	for (int i = 0; i <= limit; i++)
	{
		int product = 9 * i;

		// Printing the 9 times table for i using putchar
		        _putchar('9');
			        _putchar(' ');
				        _putchar('x');
					        _putchar(' ');
						        _putchar(i + '0'); // Convert the digit to a character and print
							        _putchar(' ');
								        _putchar('=');
									        _putchar(' ');
										        if (product == 0) {
												_putchar('0');
												        } else {
														            // Print each digit of the product
														            int temp = product;
															                int numDigits = 0;
																	            while (temp > 0) {
																			                    numDigits++;
																					                    temp /= 10;
																							                }
																		    temp = product;
																		                while (numDigits > 0) {
																					                int digit = temp / pow(10, numDigits - 1);
																							                _putchar(digit + '0');
																									                temp %= (int)pow(10, numDigits - 1);
																											                numDigits--;
																													            }
																				        }
											        _putchar('\n');
												    }
}
