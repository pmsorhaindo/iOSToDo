//
//  TodoItem.h
//  ToDoList
//
//  Created by Paul-Michael Sorhaindo on 01/02/2015.
//  Copyright (c) 2015 Paul-Michael Sorhaindo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TodoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
