//
//   "Rain Gauge Two.ino" and  
//   variableInput.h library
//   William M. Lucid   10/06/2019   @ 15:02 EDT    
// 

// Replace with your network details  
//const char * host  = "esp32";

// Replace with your network details
//const char * ssid = "R2D2";
//const char * password = "sissy4357";

//Settings pertain to NTP
const int udpPort = 1337;
//NTP Time Servers
const char * udpAddress1 = "us.pool.ntp.org";
const char * udpAddress2 = "time.nist.gov";

//publicIP accessiable over Internet with Port Forwarding; know the risks!!!
//WAN IP Address.  Or use LAN IP Address --same as server ip; no Internet access. 
#define publicIP  "68.50.44.149"  //Part of href link for "GET" requests
String LISTEN_PORT = "8040"; //Part of href link for "GET" requests

String linkAddress = "68.50.44.149:8040";  //publicIP and PORT for URL link

String ip1String = "10.0.0.146";  //Host ip address  

int PORT = 8040;  //Web Server port

//Graphing requires "FREE" "ThingSpeak.com" account..  
//Enter "ThingSpeak.com" data here....
//Example data; enter yout account data..
unsigned long int myChannelNumber = 123456; 
const char * myWriteAPIKey = "E12345";

//Server settings
#define ip {10,0,0,202}
#define subnet {255,255,255,0}
#define gateway {10,0,0,1}
#define dns {10,0,0,1}

float gpslat = 39.760512; 
float gpslng = -85.99406;

#define gpsalt 843


//webInterface --send Data to Domain, hosted web site
const char * sendData = "Replace-with-your-domain-server/collectdata2.php";

//FTP Credentials
const char * ftpUser = "techno";
const char * ftpPassword = "qrzab9nq";
 
//Restricted Access
const char* Restricted = "/ACCESS6100.TXT";  //Can be any filename.  
//Will be used for "GET" request path to pull up client ip list.

///////////////////////////////////////////////////////////
//   "pulicIP/LISTEN_PORT/reset" wiill restart the server
///////////////////////////////////////////////////////////

///////////////// OTA Support //////////////////////////

const char* http_username = "admin";
const char* http_password = "trump";

// xx.xx.xx.xx:yyyy/login will log in; this will allow updating firmware using:
// xx.xx.xx.xx:yyyy/update
//
// xx.xx.xx.xx being publicIP and yyyy being PORT.
//
///////////////////////////////////////////////////////
