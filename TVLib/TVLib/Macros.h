//
//  Macros.h
//  TVLib
//
//  Created by 谭魏 on 15/10/10.
//  Copyright © 2015年 tinvyhx. All rights reserved.
//

#ifndef Macros_h
#define Macros_h

//use dlog to print while in debug model
#ifdef DEBUG
# define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
# define DLog(...)
#endif


//uicolor

#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 \
alpha:(a)]

//system define

#define iOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define CurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

#define APP_NAME ([[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"])

//device

#define WIDTH ([UIScreen mainScreen].bounds.size.width)
#define HEIGHT ([UIScreen mainScreen].bounds.size.height)

//local string

#define MyLocal(x, ...) NSLocalizedString(x, nil)


//easy to use

#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]

#define IMAGE_NAMED(imageName) [UIImage imageNamed:imageName]

#define ALERTMSG(title,message,buttonTitle) [[UIAlertView alloc] initWithTitle:title message:message delegate:nil cancelButtonTitle:buttonTitle otherButtonTitles:nil]


#endif /* Macros_h */
