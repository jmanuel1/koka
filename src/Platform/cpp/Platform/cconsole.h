/* 
   Copyright 2012-2021, Microsoft Research, Daan Leijen.

   This is free software; you can redistribute it and/or modify it under the
   terms of the Apache License, Version 2.0. A copy of the License can be
   found in the LICENSE file at the root of this distribution.
*/

int consoleInit( void );
void consoleDone( void );
void consoleSetColor( int color );
void consoleSetBackColor( int color );
void consoleSetReverse( int rev );
void consoleSetUnderline( int underline );
int consoleGetState( void );
void consoleSetState( int state );
const char* consoleGetProgramPath();
