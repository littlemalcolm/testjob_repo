#include "main.h"


void putcharDigit(int digit) {
	    putchar(digit + '0');
}

void times_table(void) {
	    for (int i = 0; i <= 9; i++) {
		            for (int j = 0; j <= 9; j++) {
				                int product = i * j;

						            // Print the 9 times table for i * j using putchar
						            putcharDigit(i);
							                putchar(' ');
									            putchar('x');
										                putchar(' ');
												            putcharDigit(j);
													                putchar(' ');
															            putchar('=');
																                putchar(' ');

																		            if (product == 0) {
																				                    putcharDigit(0);
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
																																						                        putcharDigit(digit);
																																									                    temp %= (int)pow(10, numDigits - 1);
																																											                        numDigits--;
																																														                }
																																			            }
																			                putchar('\n');
																					        }
			        }
}
