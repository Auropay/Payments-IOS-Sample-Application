#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef AUROPAYPAYMENTS_SWIFT_H
#define AUROPAYPAYMENTS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AuroPayPayments",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_PROTOCOL("_TtP15AuroPayPayments28AuroPayPaymentResultProtocol_") SWIFT_AVAILABILITY(ios,introduced=13.0)
@protocol AuroPayPaymentResultProtocol
@end

@class NSString;

SWIFT_PROTOCOL("_TtP15AuroPayPayments27APPaymentCompletionProtocol_") SWIFT_AVAILABILITY(ios,introduced=13.0)
@protocol APPaymentCompletionProtocol <AuroPayPaymentResultProtocol>
- (void)onPaymentSuccess:(NSString * _Nonnull)orderId transactionStatus:(NSInteger)transactionStatus transactionId:(NSString * _Nonnull)transactionId;
- (void)onPaymentError:(NSString * _Nonnull)message;
@end

@class PaymentResultData;

SWIFT_PROTOCOL("_TtP15AuroPayPayments35APPaymentCompletionProtocolWithData_") SWIFT_AVAILABILITY(ios,introduced=13.0)
@protocol APPaymentCompletionProtocolWithData <AuroPayPaymentResultProtocol>
- (void)onPaymentSuccess:(PaymentResultData * _Nonnull)paymentData;
- (void)onPaymentError:(NSString * _Nonnull)message :(PaymentResultData * _Nullable)paymentData;
@end

@class UIColor;

SWIFT_CLASS("_TtC15AuroPayPayments7APTheme")
@interface APTheme : NSObject
- (nonnull instancetype)initWithPrimaryColor:(UIColor * _Nonnull)primaryColor primaryTextColor:(UIColor * _Nonnull)primaryTextColor secondaryColor:(UIColor * _Nonnull)secondaryColor secondaryTextColor:(UIColor * _Nonnull)secondaryTextColor OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class CustomerProfile;
enum Country : NSInteger;
@class Auropay;

SWIFT_CLASS("_TtC15AuroPayPayments14AuroPayBuilder") SWIFT_AVAILABILITY(ios,introduced=13.0)
@interface AuroPayBuilder : NSObject
- (AuroPayBuilder * _Nonnull)subDomainId:(NSString * _Nonnull)merchantID SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)accessKey:(NSString * _Nonnull)accessKey SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)secretKey:(NSString * _Nonnull)secretKey SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)customerProfile:(CustomerProfile * _Nonnull)customerProfile SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)addEventListener:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull))eventHandler SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)theme:(APTheme * _Nullable)theme SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)country:(enum Country)country SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)showReceipt:(BOOL)flag SWIFT_WARN_UNUSED_RESULT;
- (AuroPayBuilder * _Nonnull)allowCardScan:(BOOL)flag SWIFT_WARN_UNUSED_RESULT;
- (Auropay * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class UIViewController;

SWIFT_CLASS("_TtC15AuroPayPayments7Auropay") SWIFT_AVAILABILITY(ios,introduced=13.0)
@interface Auropay : NSObject
/// doPayment with APPaymentCompletionProtocol
- (void)doPaymentWithDisplayViewController:(UIViewController * _Nonnull)displayViewController amount:(double)amount andDelegate:(id <APPaymentCompletionProtocol> _Nonnull)delegate referenceNumber:(NSString * _Nullable)referenceNumber askCustomerDetails:(BOOL)askCustomerDetails;
/// doPayment with APPaymentCompletionProtocolWithData
- (void)doPaymentWithDisplayViewController:(UIViewController * _Nonnull)displayViewController amount:(double)amount andDelegateWithData:(id <APPaymentCompletionProtocolWithData> _Nonnull)delegate referenceNumber:(NSString * _Nullable)referenceNumber askCustomerDetails:(BOOL)askCustomerDetails;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end
























typedef SWIFT_ENUM(NSInteger, Country, open) {
  CountryIN = 0,
  CountryUS = 1,
};


SWIFT_CLASS("_TtC15AuroPayPayments15CustomerProfile") SWIFT_AVAILABILITY(ios,introduced=13.0)
@interface CustomerProfile : NSObject
- (nonnull instancetype)initWithTitle:(NSString * _Nonnull)title firstName:(NSString * _Nonnull)firstName middleName:(NSString * _Nonnull)middleName lastName:(NSString * _Nonnull)lastName phone:(NSString * _Nonnull)phone email:(NSString * _Nonnull)email OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end









SWIFT_CLASS("_TtC15AuroPayPayments17PaymentResultData") SWIFT_AVAILABILITY(ios,introduced=13.0)
@interface PaymentResultData : NSObject
@property (nonatomic, copy) NSString * _Nonnull orderId;
@property (nonatomic) NSInteger transactionStatus;
@property (nonatomic, copy) NSString * _Nonnull transactionId;
@property (nonatomic, copy) NSString * _Nonnull transactionDate;
@property (nonatomic, copy) NSString * _Nonnull referenceNo;
@property (nonatomic) NSInteger processMethod;
@property (nonatomic, copy) NSString * _Nonnull reasonMessage;
@property (nonatomic) double amount;
@property (nonatomic) double convenienceFee;
@property (nonatomic) double taxAmount;
@property (nonatomic) double discountAmount;
@property (nonatomic) double captureAmount;
- (nonnull instancetype)initWithOrderId:(NSString * _Nonnull)orderId transactionStatus:(NSInteger)transactionStatus transactionId:(NSString * _Nonnull)transactionId transactionDate:(NSString * _Nonnull)transactionDate referenceNo:(NSString * _Nonnull)referenceNo processMethod:(NSInteger)processMethod reasonMessage:(NSString * _Nonnull)reasonMessage amount:(double)amount convenienceFee:(double)convenienceFee taxAmount:(double)taxAmount discountAmount:(double)discountAmount captureAmount:(double)captureAmount OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end














































SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface UIViewController (SWIFT_EXTENSION(AuroPayPayments))
- (UIViewController * _Nullable)parentIQContainerViewController SWIFT_WARN_UNUSED_RESULT SWIFT_UNAVAILABLE_MSG("'parentIQContainerViewController' has been renamed to 'iq_parentContainerViewController'");
@end


SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface UIViewController (SWIFT_EXTENSION(AuroPayPayments))
/// This method is provided to override by viewController’s
/// if the library lifts a viewController which you doesn’t want to lift.
/// This may happen if you have implemented side menu feature
/// in your app and the library try to lift the side menu controller.
/// Overriding this method in side menu class to return correct controller should fix the problem.
- (UIViewController * _Nullable)iq_parentContainerViewController SWIFT_WARN_UNUSED_RESULT;
@end




#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
