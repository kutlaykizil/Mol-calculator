/*
* MIT License

* Copyright (c) 2020 Kutlay KIZIL

* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:

* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#include <stdio.h>
#define R 0.082057366080960
#define T 273.15
// The units used in this formula is; (L ⋅ atm ⋅ K^-1 ⋅ mol^-1)
float calc(float pressure, float volume);
int main(void)
{
  float c, pr, vo;
  printf("\nHi, this program calculates the amount of substance(mol) of any gas at 20 degrees celsius.\n\nNow please enter values of Pressure(Atm) and Volume(Litre) for your gas of choice.\n\n");

  printf("Pressure is: ");
  scanf("%f", &pr);

  printf("Volume is: ");
  scanf("%f", &vo);

  c=calc(pr, vo);
  printf ("\nThe amount of substance in your gas is %f moles\n", c);
  return 0;
}
float calc(float pressure, float volume)
{
  float c;
  c = (pressure*volume)/(R*T);
  return c;
}