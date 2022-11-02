/**
 * \file            first_in_first_out.c
 * \brief           first_in_first_out source file
 */

/*
 * Copyright (c) 2022 ZendyShervyl FULLIDO
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of my_library.
 *
 * Author:          ZendyShervyl FULLIDO <zenfullido@gmail.com>
 * Version:         v1.y.z
 */
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;

void setup(){
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led5, OUTPUT);
  pinMode (led6, OUTPUT);
}
void loop(){
  digitalWrite (led1, HIGH);
  delay (10000); /* Delay time for 10 seconds */
  digitalWrite (led1, LOW);
  digitalWrite (led2, HIGH);
  delay (5000); /* Delay time for 5 seconds */
  digitalWrite (led2, LOW);
  digitalWrite (led3, HIGH);
  delay (8000); /* Delay time for 8 seconds */
  digitalWrite (led3, LOW);
  digitalWrite (led4, HIGH);
  delay (4000); /* Delay time for 4 seconds */
  digitalWrite (led4, LOW);
  digitalWrite (led5, HIGH);
  delay (1000); /* Delay time for 1 seconds */
  digitalWrite (led5, LOW);
  digitalWrite (led6, HIGH);
  delay (2000); /* Delay time for 2 seconds */
  digitalWrite (led6, LOW);
}
