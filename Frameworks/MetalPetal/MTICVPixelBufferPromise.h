//
//  MTICVPixelBufferPromise.h
//  Pods
//
//  Created by YuAo on 21/07/2017.
//
//

#import <Foundation/Foundation.h>
#import "MTIImagePromise.h"

@interface MTICVPixelBufferPromise : NSObject <MTIImagePromise>

@property (nonatomic,copy,readonly) MTITextureDescriptor *textureDescriptor;

- (instancetype)initWithCVPixelBuffer:(CVPixelBufferRef)pixelBuffer;

@end
