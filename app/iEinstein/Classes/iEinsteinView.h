// ==============================
// File:			iEinsteinView.h
// Project:			Einstein
//
// Copyright 2010 by Matthias Melcher (einstein@matthiasm.com).
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
// ==============================
// $Id$
// ==============================

#import <UIKit/UIKit.h>
#include <K/Defines/KDefinitions.h>

class TScreenManager;

@interface iEinsteinView : UIView {

  TScreenManager*			mScreenManager;
  CGImageRef				mScreenImage;
  //BOOL					mVisible;
  int						mWidth;
  int						mHeight;
  //EOrientation			mOrientation;
  //KUInt32					mPreviousMods;
  
}

- (id)init;

- (void)dealloc;

- (void)setScreenManager:(TScreenManager*)sm;
  
@end
