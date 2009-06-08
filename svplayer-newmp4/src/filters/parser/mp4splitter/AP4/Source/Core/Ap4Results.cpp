/*****************************************************************
|
|   Bento4 - Result Code Map
|
|   This file is automatically generated by a script, do not edit!
|
|   Copyright (c) 2002-2009, Axiomatic Systems, LLC.
|   All rights reserved.
|
|   This file is part of Bento4/AP4 (MP4 Atom Processing Library).
|
|   Unless you have obtained Bento4 under a difference license,
|   this version of Bento4 is Bento4|GPL.
|   Bento4|GPL is free software; you can redistribute it and/or modify
|   it under the terms of the GNU General Public License as published by
|   the Free Software Foundation; either version 2, or (at your option)
|   any later version.
|
|   Bento4|GPL is distributed in the hope that it will be useful,
|   but WITHOUT ANY WARRANTY; without even the implied warranty of
|   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
|   GNU General Public License for more details.
|
|   You should have received a copy of the GNU General Public License
|   along with Bento4|GPL; see the file COPYING.  If not, write to the
|   Free Software Foundation, 59 Temple Place - Suite 330, Boston, MA
|   02111-1307, USA.
|
 ****************************************************************/

/*----------------------------------------------------------------------
|   includes
+---------------------------------------------------------------------*/
#include "Ap4Results.h"

/*----------------------------------------------------------------------
|   AP4_ResultText
+---------------------------------------------------------------------*/
const char*
AP4_ResultText(int result)
{
    switch (result) {
        case AP4_SUCCESS:                               return "AP4_SUCCESS";
        case AP4_FAILURE:                               return "AP4_FAILURE";
        case AP4_ERROR_OUT_OF_MEMORY:                   return "AP4_ERROR_OUT_OF_MEMORY";
        case AP4_ERROR_INVALID_PARAMETERS:              return "AP4_ERROR_INVALID_PARAMETERS";
        case AP4_ERROR_NO_SUCH_FILE:                    return "AP4_ERROR_NO_SUCH_FILE";
        case AP4_ERROR_PERMISSION_DENIED:               return "AP4_ERROR_PERMISSION_DENIED";
        case AP4_ERROR_CANNOT_OPEN_FILE:                return "AP4_ERROR_CANNOT_OPEN_FILE";
        case AP4_ERROR_EOS:                             return "AP4_ERROR_EOS";
        case AP4_ERROR_WRITE_FAILED:                    return "AP4_ERROR_WRITE_FAILED";
        case AP4_ERROR_READ_FAILED:                     return "AP4_ERROR_READ_FAILED";
        case AP4_ERROR_INVALID_FORMAT:                  return "AP4_ERROR_INVALID_FORMAT";
        case AP4_ERROR_NO_SUCH_ITEM:                    return "AP4_ERROR_NO_SUCH_ITEM";
        case AP4_ERROR_OUT_OF_RANGE:                    return "AP4_ERROR_OUT_OF_RANGE";
        case AP4_ERROR_INTERNAL:                        return "AP4_ERROR_INTERNAL";
        case AP4_ERROR_INVALID_STATE:                   return "AP4_ERROR_INVALID_STATE";
        case AP4_ERROR_LIST_EMPTY:                      return "AP4_ERROR_LIST_EMPTY";
        case AP4_ERROR_LIST_OPERATION_ABORTED:          return "AP4_ERROR_LIST_OPERATION_ABORTED";
        case AP4_ERROR_INVALID_RTP_CONSTRUCTOR_TYPE:    return "AP4_ERROR_INVALID_RTP_CONSTRUCTOR_TYPE";
        case AP4_ERROR_NOT_SUPPORTED:                   return "AP4_ERROR_NOT_SUPPORTED";
        case AP4_ERROR_INVALID_TRACK_TYPE:              return "AP4_ERROR_INVALID_TRACK_TYPE";
        case AP4_ERROR_INVALID_RTP_PACKET_EXTRA_DATA:   return "AP4_ERROR_INVALID_RTP_PACKET_EXTRA_DATA";
        case AP4_ERROR_BUFFER_TOO_SMALL:                return "AP4_ERROR_BUFFER_TOO_SMALL";
        case AP4_ERROR_NOT_ENOUGH_DATA:                 return "AP4_ERROR_NOT_ENOUGH_DATA";
        default:                                        return "UNKNOWN";
    }
}
