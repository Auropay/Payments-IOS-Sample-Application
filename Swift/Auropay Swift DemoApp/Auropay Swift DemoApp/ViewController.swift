//
//  ViewController.swift
//  Auropay Swift DemoApp
//
//  Created by AuroPay on 04/07/23.
//

import UIKit
import AuroPayPayments

class ViewController: UIViewController {

    //MARK: - IBOutlets
    @IBOutlet weak var textFieldAmount: UITextField!{
        didSet{
            guard let textField = textFieldAmount else { return }
            textField.leftView = UIView(frame: CGRect(x: 0, y: 0, width: 15, height: textField.frame.height))
            textField.leftViewMode = .always
        }
    }
    
    @IBOutlet weak var textFieldFirstName: UITextField!{
        didSet{
            guard let textField = textFieldFirstName else { return }
            textField.leftView = UIView(frame: CGRect(x: 0, y: 0, width: 15, height: textField.frame.height))
            textField.leftViewMode = .always
        }
    }
    
    @IBOutlet weak var textFieldLastName: UITextField!{
        didSet{
            guard let textField = textFieldLastName else { return }
            textField.leftView = UIView(frame: CGRect(x: 0, y: 0, width: 15, height: textField.frame.height))
            textField.leftViewMode = .always
        }
    }
    
    @IBOutlet weak var textFieldEmail: UITextField!{
        didSet{
            guard let textField = textFieldEmail else { return }
            textField.leftView = UIView(frame: CGRect(x: 0, y: 0, width: 15, height: textField.frame.height))
            textField.leftViewMode = .always
        }
    }
    
    @IBOutlet weak var textFieldPhone: UITextField!{
        didSet{
            guard let textField = textFieldPhone else { return }
            textField.leftView = UIView(frame: CGRect(x: 0, y: 0, width: 15, height: textField.frame.height))
            textField.leftViewMode = .always
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func onTapPay(_ sender: UIButton) {
        
        //Create Theme
        let theme = APTheme(primaryColor: UIColor.init(hexString: "#236C6C"), primaryTextColor: .white, secondaryColor: .red, secondaryTextColor: .white)
        
        //Initilize the AuropayBuilder with subdomain Id, accessKey and secretKey
        let apb = AuroPayBuilder()
            .merchantID("Your Subdomain ID")
            .accessKey("Your Access Key")
            .secretKey("Your Secret Key")
            .customerProfile(self.getCustomerProfile())
            .theme(theme)
            .showReceipt(true)
            .allowCardScan(true)
            .build()
        
        //Initiate payment
        if let amount = self.textFieldAmount.text, !amount.isEmpty{
            apb.doPayment(displayViewController: self, amount: (amount as NSString).doubleValue, andDelegate: self)
        }
        
    }
 
    
    //Create customer profile
    private func getCustomerProfile() -> CustomerProfile{
        let cp = CustomerProfile(title: "Some Title", firstName: self.textFieldFirstName.text ?? "", middleName: "", lastName: self.textFieldLastName.text ?? "", phone: self.textFieldPhone.text ?? "", email: self.textFieldEmail.text ?? "")
        return cp
    }
}

//Delegate methods to receive callbacks and events
extension ViewController : APPaymentCompletionProtocol{
    func onPaymentSuccess(_ orderId: String, transactionStatus: Int, transactionId: String) {
        print("orderId:- \(orderId)")
        print("transactionStatus:- \(transactionStatus)")
        print("transactionId:- \(transactionId)")
    }
    
    func onPaymentError(_ message: String) {
        print("Error:- \(message)")
    }
}




extension UIColor {
    convenience init(hexString: String) {
            let hex = hexString.trimmingCharacters(in: CharacterSet.alphanumerics.inverted)
            var int = UInt64()
            Scanner(string: hex).scanHexInt64(&int)
            let a, r, g, b: UInt64
            switch hex.count {
            case 3: // RGB (12-bit)
                (a, r, g, b) = (255, (int >> 8) * 17, (int >> 4 & 0xF) * 17, (int & 0xF) * 17)
            case 6: // RGB (24-bit)
                (a, r, g, b) = (255, int >> 16, int >> 8 & 0xFF, int & 0xFF)
            case 8: // ARGB (32-bit)
                (a, r, g, b) = (int >> 24, int >> 16 & 0xFF, int >> 8 & 0xFF, int & 0xFF)
            default:
                (a, r, g, b) = (255, 0, 0, 0)
            }
            self.init(red: CGFloat(r) / 255, green: CGFloat(g) / 255, blue: CGFloat(b) / 255, alpha: CGFloat(a) / 255)
        }
}
