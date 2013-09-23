//
//  Copyright © 2012 Yuri Kotov
//  Licensed under the MIT license: http://opensource.org/licenses/MIT
//  Latest version can be found at http://github.com/advantis/ADVUserDefaults
//


#import <Foundation/Foundation.h>

@interface ADVUserDefaults : NSObject

@property (readonly, nonatomic) NSUserDefaults *defaults;

+ (NSString *) defaultsKeyForPropertyNamed:(char const *)propertyName;

+ (void) initialize __attribute__((objc_requires_super));

@end
