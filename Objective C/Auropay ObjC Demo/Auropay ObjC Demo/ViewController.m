//
//  ViewController.m
//  Auropay ObjC Demo
//
//  Created by AuroPay on 05/07/23.
//

#import "ViewController.h"
#import <AuroPayPayments/AuroPayPayments-Swift.h>

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UITextField *textFieldAmount;

@property (weak, nonatomic) IBOutlet UITextField *textFieldFirstName;

@property (weak, nonatomic) IBOutlet UITextField *textFieldLastName;

@property (weak, nonatomic) IBOutlet UITextField *textFieldEmail;

@property (weak, nonatomic) IBOutlet UITextField *textFieldPhone;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    _textFieldAmount.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 15, _textFieldAmount.frame.size.height)];
    _textFieldAmount.leftViewMode = UITextFieldViewModeAlways;
    
    _textFieldFirstName.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 15, _textFieldFirstName.frame.size.height)];
    _textFieldFirstName.leftViewMode = UITextFieldViewModeAlways;
    
    _textFieldLastName.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 15, _textFieldLastName.frame.size.height)];
    _textFieldLastName.leftViewMode = UITextFieldViewModeAlways;
    
    _textFieldEmail.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 15, _textFieldEmail.frame.size.height)];
    _textFieldEmail.leftViewMode = UITextFieldViewModeAlways;
    
    _textFieldPhone.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 15, _textFieldPhone.frame.size.height)];
    _textFieldPhone.leftViewMode = UITextFieldViewModeAlways;
    
}


- (IBAction)onTapPay:(UIButton *)sender {
    
    //Create Theme
    APTheme *theme = [[APTheme alloc] initWithPrimaryColor:[self colorFromHexString:@"#236C6C"]
                     primaryTextColor:[UIColor whiteColor]
                     secondaryColor:[UIColor redColor]
                     secondaryTextColor:[UIColor whiteColor]];
    
    //Initilize the AuropayBuilder with subdomain Id, accessKey and secretKey
    Auropay * apb = [[[[[[[[[AuroPayBuilder alloc]
                            merchantID:@"Your Subdomain ID"]
                            accessKey:@"Your Access Key"]
                            secretKey:@"Your Secret Key"]
                            customerProfile:[self getCustomerProfile]]
                            theme:theme]
                            showReceipt:YES]
                            allowCardScan:YES]
                            build];

    //Initiate payment
    if (_textFieldAmount.text && _textFieldAmount.text.length > 0){
        [apb doPaymentWithDisplayViewController:self amount:[_textFieldAmount.text doubleValue] andDelegate:self orderId:@""];
    }
}


//Create customer profile
-(CustomerProfile *)getCustomerProfile{
    CustomerProfile *cp = [[CustomerProfile alloc] initWithTitle:@"Some Title" firstName:self.textFieldFirstName.text middleName:@"" lastName:self.textFieldLastName.text phone:self.textFieldPhone.text email:self.textFieldEmail.text];
    return  cp;
}


//Delegate methods to receive callbacks and events
-(void)onPaymentSuccess:(NSString *)orderId transactionStatus:(NSInteger)transactionStatus transactionId:(NSString *)transactionId{
    NSLog(@"orderId:- %@",orderId);
    NSLog(@"transactionStatus:- %ld",(long)transactionStatus);
    NSLog(@"transactionId:- %@",transactionId);
}

- (void)onPaymentError:(NSString *)message{
    NSLog(@"%@",message);
}


///UIColor hex to color
-(UIColor *)colorFromHexString:(NSString *)hexString {
    unsigned rgbValue = 0;
    NSScanner *scanner = [NSScanner scannerWithString:hexString];
    [scanner setScanLocation:1]; // bypass '#' character
    [scanner scanHexInt:&rgbValue];
    return [UIColor colorWithRed:((rgbValue & 0xFF0000) >> 16)/255.0 green:((rgbValue & 0xFF00) >> 8)/255.0 blue:(rgbValue & 0xFF)/255.0 alpha:1.0];
}

@end
