//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class VSMessagePortFeature;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationTemplateElement : IKViewElement
{
    VSMessagePortFeature *_messagePort;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(readonly, nonatomic) VSMessagePortFeature *messagePort; // @synthesize messagePort=_messagePort;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

