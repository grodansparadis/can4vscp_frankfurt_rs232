// Copyright (C) 2002 Jaroslaw Karwik, 
//   Mente Marine Oy <jaroslaw.karwik@mente-marine.com>
// 
// This file is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation;
// 
// In addition to the permissions in the GNU General Public License, the
// author gives you unlimited permission to link the
// compiled version of this file into combinations with other programs,
// and to distribute those combinations without any restriction coming
// from the use of this file.  (The General Public License restrictions
// do apply in other respects; for example, they cover modification of
// the file, and distribution when not linked into a combine
// executable.)
// 
// This file is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.  
// 



//---------------------------------------------------------------------------
#ifndef CommEngineH
#define CommEngineH
//---------------------------------------------------------------------------


bool  comm_Init(void);
void  comm_Release(void);

bool  comm_Open(int commNr);
bool  comm_Setup(int baudrate,int parity,int stopbits);
bool  comm_Close(void);


bool  comm_WaitForChar(int timeout);
int   comm_Read(char  * lpBlock, int nMaxLength ,int timeout = 100 );
bool  comm_Write(char * lpBlock , int dwBytesToWrite);
bool  comm_CtrlPins(bool rts,bool dtr);
void  comm_Purge(void);

#endif
