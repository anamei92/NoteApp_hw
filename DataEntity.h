//
//  DataEntity.h
//  NoteApp
//
//  Created by Ana Mei on 3/25/13.
//  Copyright (c) 2013 Ana Mei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface DataEntity : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) NSDate * created;

@end
