//
//  ToDoItem.h
//  ToDoList
//
//  Created by Ken Hom on 6/3/14.
//  Copyright (c) 2014 Ken Hom. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
