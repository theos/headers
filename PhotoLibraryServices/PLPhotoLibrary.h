#import <Foundation/NSObject.h>

@class PLManagedAlbum;

@interface PLPhotoLibrary : NSObject

+ (instancetype)sharedPhotoLibrary;

@property (nonatomic, retain) PLManagedAlbum *allPhotosAlbum;

@end
