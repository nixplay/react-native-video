#import <Foundation/Foundation.h>
#import <React/RCTView.h>
#import <React/RCTConvert.h>

@import Photos;
@interface RNPhotosFrameworkExtension : NSObject
typedef void (^RNPFVIdeoLoadCompleteBlock) (NSDictionary *source, AVPlayerItem *playerItem);

-(NSString *)startLoadingPhotosAsset:(NSDictionary *)source bufferingCallback:(RCTBubblingEventBlock) onVideoBuffer andReactTag:(NSString *)reactTag andCompleteBlock:(RNPFVIdeoLoadCompleteBlock)completeBlock;

@property (nonatomic, strong) NSString *loadedPhotosLocalIdentifier;

@end
