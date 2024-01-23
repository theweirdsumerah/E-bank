#include<iostream>
using namespace std;
int main(){
    int options;
    while(1){
    cout<<"  Welcome to E-bank"<<endl;
    cout<<"1.  Send Money "<<endl;
    cout<<"2.  Send Money to Non-Ebank user "<<endl;
    cout<<"3.  Mobile Recharge "<<endl;
    cout<<"4.  Payment "<<endl;
    cout<<"5.  Cash Out "<<endl;
    cout<<"6.  Pay Bill "<<endl;
    cout<<"7.  Micro-finance "<<endl;
    cout<<"8.  User account "<<endl;
    cout<<"9.  Download Our App "<<endl;
    cout<<"10. Pin Reset "<<endl;
    cout<<"0.  Exit App "<<endl;

    cout<<"Enter Option: ";
    cin>>options;
    cout<<endl;

    if (options==1){
        cout<<" SEND MONEY"<<endl;
        cout<<"Enter Reciever's account number: ";
        int recieverAccNo;
        cin>>recieverAccNo;
        cout<<"Enter amount: ";
        float amount;
        cin>>amount;
        cout<<"Enter Reference: ";
        char ref;
        cin>>ref;
        cout<<"Enter Pin Number to confirm: ";
        int pinNo;
        cin>>pinNo;
        cout<<endl;
        cout<<amount<<" BDT has been sent to "<<recieverAccNo<<" successfully. Congratulations!"<<endl;
        cout<<endl;
    }
    else if(options==2){
        cout<<" SEND MONEY TO NON-eBANK USER "<<endl;
        cout<<"Enter Reciever's account number: ";
        int recieverAccNo;
        cin>>recieverAccNo;
        cout<<"Enter amount: ";
        float amount;
        cin>>amount;
        cout<<"Enter Reference: ";
        char ref[100];
        cin>>ref;
        cout<<"Enter Pin Number to confirm: ";
        int pinNo;
        cin>>pinNo;
        cout<<endl;
        cout<<amount<<" BDT has been sent to "<<recieverAccNo<<" successfully. Congratulations!"<<endl;
        cout<<endl;
    }
    else if(options==3){
        cout<<" MOBILE RECHARGE"<<endl;
        cout<<" Operators "<<endl;
        cout<<"1. Robi "<<endl;
        cout<<"2. Airtel "<<endl;
        cout<<"3. Banglalink "<<endl;
        cout<<"4. Grameenphone "<<endl;
        cout<<"5. Teletalk"<<endl;
        cout<<"0. Main menu"<<endl;
        cout<<endl;
        cout<<"Select Operator (1-5): ";
        int operatorSelect;
        cin>>operatorSelect;
        cout<<endl;
        if(operatorSelect>=1 && operatorSelect<=5){
        cout<<" Methods "<<endl;
        cout<<"1. Prepaid "<<endl;
        cout<<"2. Postpaid"<<endl;
        cout<<"3. Auto-Recharge"<<endl;
        cout<<"4. Best offers"<<endl;
        cout<<"5. Internet Packs"<<endl;
        cout<<"6. Voice packs"<<endl;
        cout<<"7. Bundle offers"<<endl;
        cout<<"0. Main menu"<<endl;
        cout<<endl;
        cout<<"Select method (1-7):";
        int methodSelect;
        cin>>methodSelect;
        cout<<endl;
        if(methodSelect>=1 && methodSelect<=7){
        cout<<"Enter Phone Number: ";
        int phnNo;
        cin>>phnNo;
        cout<<"Enter amount: ";
        float amount;
        cin>>amount;
        cout<<"Enter PIN to confirm: ";
        int pinNo;
        cin>>pinNo;
        cout<<endl;
        cout<<"Recharge "<<amount<<" BDT was successful to the number "<<phnNo<<" Congratulations!"<<endl;
        cout<<endl;
        }
        else if(methodSelect==0){
            cout<<endl;
        }
        }
        else if (operatorSelect==0){
            cout<<endl;
        }
    }
    else if(options==4){
        cout<<" PAYMENT "<<endl;
        cout<<"Enter Merchant's account number: ";
        int merchantAccNo;
        cin>>merchantAccNo;
        cout<<"Enter amount: ";
        float amount;
        cin>>amount;
        cout<<"Enter Reference: ";
        char ref;
        cin>>ref;
        cout<<"Enter PIN to confirm: ";
        int pinNo;
        cin>>pinNo;
        cout<<endl;
        cout<<amount<<" BDT has been sent to "<<merchantAccNo<<" successfully. Congratulations!"<<endl;
        cout<<endl;
    }
    else if(options==5){
        
        cout<<" CASH OUT"<<endl;
        cout<<"1. From Agent"<<endl;
        cout<<"2. From ATM"<<endl;
        cout<<"3. Priyo Agent number"<<endl;
        cout<<"4. Set Priyo agent Number"<<endl;
        cout<<"0. Main menu"<<endl;
        cout<<endl;
        cout<<"Enter Method (1-4): ";
        int methodSelect;
        cin>>methodSelect;
        cout<<endl;
        int methodNo;
        if(methodNo==1){
            cout<<"Enter Agent number: ";
            int agentNo;
            cin>>agentNo;
            cout<<"Enter Amount: ";
            int amount;
            cin>>amount;
            cout<<"Enter PIN to confirm: ";
            int pinNo;
            cin>>pinNo;
            cout<<endl;
            cout<<"Cash Out "<<amount<< "BDT to "<<agentNo<<" successful. Congratulations!"<<endl;
            cout<<endl;
        }
        else if (methodNo==2){
            cout<<"Enter ATM number: ";
            int atmNo;
            cin>>atmNo;
            cout<<"Enter Amount: ";
            int amount;
            cin>>amount;
            cout<<"Enter PIN to confirm: ";
            int pinNo;
            cin>>pinNo;
            cout<<endl;
            cout<<"Cash Out "<<amount<< "BDT to "<<atmNo<<" successful. Congratulations!"<<endl;
            cout<<endl;
        }
        else if(methodNo==3){
            cout<<"Enter Priyo Agent number: ";
            int agentNo;
            cin>>agentNo;
            cout<<"Enter Amount: ";
            float amount;
            cin>>amount;
            cout<<"Enter PIN to confirm: ";
            int pinNo;
            cin>>pinNo;
            cout<<endl;
            cout<<"Cash Out "<<amount<< "BDT to "<<agentNo<<" successful. Congratulations!"<<endl;
            cout<<endl;
        }
        else if (methodNo==4){
        cout<<" Set Priyo Agent number "<<endl;
        cout<<"Enter Priyo Agent Number: ";
        int pAgentNo;
        cin>>pAgentNo;
        cout<<"Enter PIN to confirm: ";
        int pinNo;
        cin>>pinNo;
        cout<<"Priyo agent number "<<pAgentNo<<" to your account was Successful. Cash Out from Priyo Agent at 1.50%. "<<endl;
        cout<<endl;
        }
        else if(methodNo==0){
            cout<<endl;
        }
    }
    else if(options==6){
        cout<<"PAY BILL"<<endl;
        cout<<"1. Electricity"<<endl;
        cout<<"2. Gas "<<endl;
        cout<<"3. Water"<<endl;
        cout<<"4. Internet and Phone"<<endl;
        cout<<"5. TV"<<endl;
        cout<<"6. Education"<<endl;
        cout<<"7. City services"<<endl;
        cout<<"8. Financial services"<<endl;
        cout<<"9. Other"<<endl;
        cout<<"0. Main menu"<<endl;
        cout<<endl;
        cout<<"Enter service: ";
        int services;
        cin>>services;
        cout<<endl;
        if(services>=1 && services<=9){
            cout<<"Enter Account Number: ";
            int accNo;
            cin>>accNo;
            cout<<"Enter Phone Number: ";
            int phnNo;
            cin>>phnNo;
            cout<<"Enter amount: ";
            float amount;
            cin>>amount;
            cout<<"Enter Reference: ";
            char ref[100];
            cin>>ref;
            cout<<"Enter PIN to confirm: ";
            int pinNo;
            cin>>pinNo;
            cout<<endl;
            cout<<"Your bill to account number "<<accNo<<" has been made. BILL PAYMENT SUCCESSFUL."<<endl;
            cout<<endl;
        }
        else if(services==0){
            cout<<endl;
        }
    }
    else if(options==7){
        cout<<" MICRO-FINANCE"<<endl;
        cout<<"1. BRAC"<<endl;
        cout<<"2. UDDIPAN"<<endl;
        cout<<"3. SHAKTI"<<endl;
        cout<<"0. Main menu"<<endl;
        cout<<"Select: ";
        int mfOptions;
        cin>>mfOptions;
        cout<<endl;
        if(mfOptions>=1 && mfOptions<=3){
            cout<<" Payment"<<endl;
            cout<<"Enter Account Number: ";
            int accNo;
            cin>>accNo;
            cout<<"Enter Phone Number: ";
            int phnNo;
            cin>>phnNo;
            cout<<"Enter amount: ";
            float amount;
            cin>>amount;
            cout<<"Enter Reference: ";
            char ref[100];
            cin>>ref;
            cout<<"Enter PIN to confirm: ";
            int pinNo;
            cin>>pinNo;
            cout<<endl;
            cout<<"Your donation to the account "<<accNo<<" is Successful. Thank you!"<<endl;
            cout<<endl;
        }
        else if(mfOptions==0){
            cout<<endl;
        }
    }
    else if(options==8){
        cout<<"USER ACCOUNT INFORMATION"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Change PIN"<<endl;
        cout<<"3. Priyo numbers"<<endl;
        cout<<"4. Helpline"<<endl;
        cout<<"0. Main menu"<<endl;
        cout<<"Select: ";
        int userAccInfo;
        cin>>userAccInfo;
        cout<<endl;
        if(userAccInfo==1){
            cout<<"Enter PIN: ";
            int pinNo;
            cin>>pinNo;
            cout<<"Current balance 10,000.00 BDT. Available balance 10,000.00."<<endl;
            cout<<endl;
        }
        else if(userAccInfo==2){
            cout<<"Enter current PIN number: ";
            int pinNo;
            cin>>pinNo;
            cout<<"Enter OTP: ";
            int otpNo;
            cin>>otpNo;
            cout<<"Enter New PIN number: ";
            int newPin;
            cin>>newPin;
            cout<<"New PIN to your account has successfully made. "<<endl;
            cout<<endl;
        }
        else if(userAccInfo==3){
            cout<<" PRIYO NUMBERS "<<endl;
            cout<<"1. Sumerah-01676008999"<<endl;
            cout<<"2. Nabila- 01658159813"<<endl;
            cout<<"3. Ishaan- 01768465365"<<endl;
            cout<<"4. Ishayah-01835343413"<<endl;
            cout<<"5. Ava-01356894728"<<endl;
            cout<<endl;
        }
        else if(userAccInfo==4){
            cout<<"Visit http://ebank.app/helpdesk "<<endl;
            cout<<endl;
        }
        else if(userAccInfo==0){
            cout<<endl;
        }
    }
    else if(options==9){
        cout<<"Visit http://ebank.app/download to download our app."<<endl;
        cout<<endl;
    }
    else if(options==10){
        cout<<"Enter current PIN number: ";
        int pinNo;
        cin>>pinNo;
        cout<<"Enter OTP: ";
        int otpNo;
        cin>>otpNo;
        cout<<"Enter New PIN number: ";
        int newPin;
        cin>>newPin;
        cout<<"New PIN to your account has successfully made. "<<endl;
        cout<<endl;
    }
    else if(options==0){
        cout<<"Exiting the app..."<<endl;
        cout<<endl;
        exit(0);
    }
    else{
        cout<<"Invalid Input. Please try again."<<endl;
        cout<<endl;
    }
    }
    return 0;

}