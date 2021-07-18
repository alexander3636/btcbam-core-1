// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_TEST_PAYMENTREQUESTDATA_H
#define BITCOIN_QT_TEST_PAYMENTREQUESTDATA_H

//
// Data for paymentservertests.cpp
//

// Base64/DER-encoded fake certificate authority certificates.
// Convert pem to base64/der with:
// openssl x509 -in cert.pem -inform PEM -outform DER | openssl enc -base64

// Serial Number: 10302349811211485352 (0x8ef94c91b112c0a8)
// Issuer: CN=PaymentRequest Test CA
// Subject: CN=PaymentRequest Test CA
// Not Valid After : Dec  8 16:37:24 2022 GMT
//
const char* caCert1_BASE64 =
"\
MIIC1TCCAb2gAwIBAgIJAIssJS74+pjhMA0GCSqGSIb3DQEBCwUAMCExHzAdBgNV\
BAMMFlBheW1lbnRSZXF1ZXN0IFRlc3QgQ0EwHhcNMTcxMTA5MTg1MTAyWhcNMjcx\
MTA3MTg1MTAyWjAhMR8wHQYDVQQDDBZQYXltZW50UmVxdWVzdCBUZXN0IENBMIIB\
IjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA1V56xVrtutY56bFR2+a7ki3r\
WUpPZJWbi3Ymy6/gBDFbmUoKx9Adfak/REnkbkQ1UowtF6hQZoWgjMaSboR5tPCZ\
KMIpE0Zn0OOcTqGc1vPPu2Bo+zc9/L1XaIOpZDyeSkRfS+uzjJNKFJz6YSb0IzKQ\
jLQNI1ZdbVR7CiY86Es35wKdbRHkwjyJwGmQEG+1YLqLDlxIjGz32SQFCdcCBZb5\
xcx7VtQXb86z6UOcUp6r+LccxiW3sVLJJ6bo9PhD4B9tAwiM7e48VGujI2QZpBT7\
9T7yZ/HguOUiH13/NUIj9OxRgg0u5fGu3xq+DU+NVN73RO+T1gj4O2Ium7OxgQID\
AQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IBAQDOuwiMhCVL\
mSqEvk7vcqldXoec9/a7Tw+7WEGjJGycbtZrmC1oFNOEk7uuctDj4vXs1KU8nE7X\
e/pZxfb/vsoVNoZSRdyRz2nxLlARZ1ZLFq/46lQrxCidIJPikIxM1r3asvRJyRJF\
9rBnEub4SDcK0Hd2nc+WYQ4sdTmngyCgcbbf5zfec2mR+lE47Cw7HsV+kGFuLlFq\
MO3KiN7fC4NUN3bknTUKQRTa/66ja6ojls2gYKIKVAA5xShQ8AKP7qzIOCGtwfWN\
H7iFISfniuC75tY9g0PWp5beHonXA2klUr0JszU4iljCgYS8q+UP8y7p+MhapNcN\
uos3kDQGLvDy\
";

// Serial Number: f0:da:97:e4:38:d7:64:16
// Issuer: CN=PaymentRequest Test CA
// Subject: CN=PaymentRequest Test CA
// Not Valid After : Jan  8 18:21:06 2025 GMT
//
const char* caCert2_BASE64 =
"\
MIIC1TCCAb2gAwIBAgIJAPDal+Q412QWMA0GCSqGSIb3DQEBCwUAMCExHzAdBgNV\
BAMMFlBheW1lbnRSZXF1ZXN0IFRlc3QgQ0EwHhcNMTUwMTExMTgyMTA2WhcNMjUw\
MTA4MTgyMTA2WjAhMR8wHQYDVQQDDBZQYXltZW50UmVxdWVzdCBUZXN0IENBMIIB\
IjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA1S9wVLfTplJuT/1OaaBgl/Mb\
I392v8S9kHbzYz7B4OTMslaO7piz0v3SO3TKMh0dswjiRdHrIgpO7XdIUQiU/ugg\
xDw0kuNehfz1ycaGedlFFtFHTNXqLyIUF3dlwHhQwaomM6RXoJmxLny5BhYHEcmk\
yWwr3Cdjd9gAZpblugVJB9C1e40uyL8ao4PHdLzOqO27iSe6riP8SwwisJZEbMaz\
AZpgNEEMbIXPJEFvm5HTRXSMtQCOTSZYMFF0M2yrtmlECnz7hWP19b9bcoDzZQB4\
ylIsFG/7q2jV7MC/e2STZv+niJiHL08RUdoFpAgzaxMgqj63C7B55HgNDNHJYQID\
AQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IBAQBGejPxLxj9\
+crv6gUeEBMZPiUx7pUgcI22Wm5yymP96B4fwI3Y0DBehq20d76vbWGPN17Z6pH3\
ge7PVY1SYqXtS6hXTo4olCm/BZADli+2Bs2xCiaa+Ltve4ufVej+bKJXN/YnrhvO\
Kq+klQkuuHywU+GJV/NQeBqToIrSOBgi477NgLFCCCmmx2QWsxHoCFGfuRCBVseT\
z2k/tMuALCDXGeZBRPTsGHu1y4cj84swAeoDK5QSQcI+Ub7GKc+zkoj02sdDLiMo\
3wokYPcIy47oclhmb4xubHc+y7nF610yZBoC/zgbhbawnZ65hDDWkdQ/SVAnWZD7\
9PFfmNnYPTQH\
";

//
// This payment request validates directly against the
// caCert1 certificate authority.
//
const char* paymentrequest1_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1NhryBArvBDCCAmswggFToAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNzExMDkx\
ODUxMDJaFw0yNzExMDcxODUxMDJaMEMxGTAXBgNVBAMMEHRlc3RtZXJjaGFudC5v\
cmcxJjAkBgNVBAoMHVBheW1lbnQgUmVxdWVzdCBUZXN0IE1lcmNoYW50MIGfMA0G\
CSqGSIb3DQEBAQUAA4GNADCBiQKBgQDTYfGnKaHggBXCxgqxa2IJvKZVPalBo8Vo\
OYFRFK5BaGnnRnUc5EQsNPvxmPy+OlLLlzVzpw6YN0Pt/CSNDPBkCJrPYutSYxpS\
YYUt1vQ4qcd2GJh5Z1f8RhM8GNLzcJ/da+bauAxIb9kI5S1niSzIPPeyzhmd2bBA\
KxTa2j8EpQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IB\
AQBRRzl42iQqU1tkC5y/BcUJJZhDzPYFhxV0s7vLrbS/5Oqm4fMf0ZX+l+bZVC2S\
iaLDskffDB+N/hgQjKJec89K6FyPp9sEGUsACxIeD/Grb4yAxrosT7AVISyQo29V\
njmYKmsBytuCQJYY+i4WMA4Fvle8OXiJpWoETHlDGhOWsA+rK/W/Lji43DVFhlbd\
JLMlHsncUkT2IJONwBGsz+1uvf7FY2L+dJiGJ6FfYdYelgtL/ziW9yP1nKi2X7wd\
YCArdwlUyzr6royWuWlWHtHQIOSK78o2oKEuB+RtJazVhKPd6meL6F52edSomxRX\
sNdnQe7O/CGw2irSDvhDEmnsIjcSIQiA1sKMBBIZdqkUSjs2ak4xF8qxhkupKSsN\
lU4hZhiIrBib0pXQBSoMSnVzdCBUZXN0aW5nKoABgpYRlzrPFJirWy8VDEpfYDkS\
b0QGOj0FJzG16rWynmP6LXe3QjfsMT6sOv+3r++/QULvbRnzdu8C1L01pxcFbr+c\
tlaRTy0UIZA8nDhivg0T2rXbiCAi8j+1A1OBTwKvguc2i99QQqPcd59fDYi6SVa4\
Sj4GB2eFsLQFncS3akM=\
";

//
// Signed, but expired, merchant cert in the request
//
const char* paymentrequest2_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1NhryBArvBDCCAmswggFToAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNzExMDkx\
ODUxMDJaFw0yNzExMDcxODUxMDJaMEMxGTAXBgNVBAMMEHRlc3RtZXJjaGFudC5v\
cmcxJjAkBgNVBAoMHVBheW1lbnQgUmVxdWVzdCBUZXN0IE1lcmNoYW50MIGfMA0G\
CSqGSIb3DQEBAQUAA4GNADCBiQKBgQDTYfGnKaHggBXCxgqxa2IJvKZVPalBo8Vo\
OYFRFK5BaGnnRnUc5EQsNPvxmPy+OlLLlzVzpw6YN0Pt/CSNDPBkCJrPYutSYxpS\
YYUt1vQ4qcd2GJh5Z1f8RhM8GNLzcJ/da+bauAxIb9kI5S1niSzIPPeyzhmd2bBA\
KxTa2j8EpQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IB\
AQBRRzl42iQqU1tkC5y/BcUJJZhDzPYFhxV0s7vLrbS/5Oqm4fMf0ZX+l+bZVC2S\
iaLDskffDB+N/hgQjKJec89K6FyPp9sEGUsACxIeD/Grb4yAxrosT7AVISyQo29V\
njmYKmsBytuCQJYY+i4WMA4Fvle8OXiJpWoETHlDGhOWsA+rK/W/Lji43DVFhlbd\
JLMlHsncUkT2IJONwBGsz+1uvf7FY2L+dJiGJ6FfYdYelgtL/ziW9yP1nKi2X7wd\
YCArdwlUyzr6royWuWlWHtHQIOSK78o2oKEuB+RtJazVhKPd6meL6F52edSomxRX\
sNdnQe7O/CGw2irSDvhDEmnsIj0SIQiA1sKMBBIZdqkUSjs2ak4xF8qxhkupKSsN\
lU4hZhiIrBjA8JbQBSC80bfCBSoMSnVzdCBUZXN0aW5nKoABLDxOzjSdfFYi53cG\
nLJOtknWI5qqMnc8955p/a/jwvUkkHzpILvPmTQNrshP9E41JG9U2M++MsEb9PJg\
FnlP9VSJmgoBt4HTRBE2Bqf7W1lELm1TcBbf2fRfQkIPWIpe6/1Eis+QICaBOmXf\
FHrHPReZ8kDCMuIjKRRP1fdlqUQ=\
";

//
// 10-long certificate chain, all intermediates valid
//
const char* paymentrequest3_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1Nhq9JQr/AzCCAfswggFkoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwPzEUMBIGA1UEAwwLdGVzdGNhOC5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVx\
dWVzdCBJbnRlcm1lZGlhdGUgODAeFw0xNzExMDkxODUxMjBaFw0yNzExMDcxODUx\
MjBaMDYxGjAYBgNVBAMMEXRlc3RtZXJjaGFudDgub3JnMRgwFgYDVQQKDA9UZXN0\
IE1lcmNoYW50IDgwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBANMbrsZ3KhTU\
fPlPjYscoLIfnlh3R6M5tIza6uR1TIVAH6FJ+TYbBOh6QgHsJWOWwP3HTXtjwsIu\
IyAcAe5A7L3SBQ678J2sVYhKru/+ezJYiArhlht+w1y30fRWyTX6MtmmLOr5VAZ9\
B5MnONvbIMAeTuYb5cmmzvt/d7DLzvklAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8w\
DQYJKoZIhvcNAQELBQADgYEAA9sjW/e8pX1GAEKuYwTw8r+xVn/qP+wm4eeC/D44\
XfEgewflUfa61fvAT6zbtWou+WC9EU8lCULSuwBD9029IBVr8cpNrCsb9+firV4w\
lz0fHEQc5y2nmC6HfEAhmy8zGhv1t4FnfE0xFTyALkUjTiHWXpSh+Va7z23ht6yk\
4QoKiAQwggIEMIIBbaADAgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMM\
C3Rlc3RjYTcub3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRp\
YXRlIDcwHhcNMTcxMTA5MTg1MTIwWhcNMjcxMTA3MTg1MTIwWjA/MRQwEgYDVQQD\
DAt0ZXN0Y2E4Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVk\
aWF0ZSA4MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQClEyZbE8mfsoc43hlx\
PqjGPY3f0fgCzygglkDbPDiXr0parsx7LiXTFPWcZ2r3GwW+cxw1RSo+oxBeKzzP\
beUldiEcbKiIxVdOlzf/W6ucxpsDoNvI/B7OsPmTyywVKW+Eb0jc7Ri9O2D1+Gib\
FJf65Wqub8Oq2V1wBubaEM8q/wIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqG\
SIb3DQEBCwUAA4GBABbqBsm+J4mguCdqBV04eH1A0Tpem1OJNRf/syZ88O0xvXAS\
H8Tf5HFUBKkmaB0zQ2yf2mtWJME0Vn1bT2RxmILm4M7d7rYowVFVYnMWntupbkCw\
fRrv1ZRMLC7SVoBMKw/5U4lgLJ4zZxhTQfCDRXwErsmXExESJBvFBSyn3CKgCogE\
MIICBDCCAW2gAwIBAgIBAjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0\
Y2E2Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA2\
MB4XDTE3MTEwOTE4NTEyMFoXDTI3MTEwNzE4NTEyMFowPzEUMBIGA1UEAwwLdGVz\
dGNhNy5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUg\
NzCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAypxWGDus/D0ka+MWd9X//gYb\
B7Qdl4o3rEB++ZwigSj527fNeKQjn2i805EUkHJofBQUVgsTbp6LJTmcugtq9ehD\
QW7IY0Gzk7kzfoBJV6FR1R00pqXN8Z3+Ep0C2bfeRUeJg9JoWVPw2Vt/i06wyX2+\
f8f1u6QicJUAqB72QD0CAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0B\
AQsFAAOBgQA/tHa7baL4Cg7+4uzDHdwIY1eu2s/IlGQzWE0sdUY3OYv4v+SdYXGP\
NjxWinDH4WrcP2ENRq+Rb5A65fPxwVnPFAS5aNb3vNBSwSwOjS3HCH/N+F7sQ8yw\
1OYCtK6Y25BHu/C562cSbNVuCwmrMP4BKs/oX88vh7205L+OaoAgHgqIBDCCAgQw\
ggFtoAMCAQICAQIwDQYJKoZIhvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNhNS5v\
cmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgNTAeFw0x\
NzExMDkxODUxMjBaFw0yNzExMDcxODUxMjBaMD8xFDASBgNVBAMMC3Rlc3RjYTYu\
b3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDYwgZ8w\
DQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBALqx+H11W38gp24V91Un71/LpzdNCtYN\
CMwoqA33Y3t71U6qYR3htWrvqSrbag21jRKF6vzXizFLQDHaS73LMpxK+ybTkqwr\
7ofOaMQPPEPRg4HFA0dMJXy8oioOh/brSyVBj+gi3ni30TOsFavf8MPk/+c5Qkp/\
Jn4jgaGB/4UxAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQAD\
gYEALbfUwxpeTuyiTlu11SO0lB8gn+s0pSblKACEfkLhmsuPmEcB0uIfxUtT5P/W\
e+tzN9gjxF9m3evwnfofv9m1Q5ikbinXPGWCTT/CQffabTzWlXJH0FV+41xvsOmd\
LK3c8xjcQcr7EjBW5gkiEUc3ObBEZhEQFx3EvFNnkJybJbIKiAQwggIEMIIBbaAD\
AgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMMC3Rlc3RjYTQub3JnMScw\
JQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDQwHhcNMTcxMTA5\
MTg1MTIwWhcNMjcxMTA3MTg1MTIwWjA/MRQwEgYDVQQDDAt0ZXN0Y2E1Lm9yZzEn\
MCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA1MIGfMA0GCSqG\
SIb3DQEBAQUAA4GNADCBiQKBgQDGepC39nbexyVhZeuTk1uJ/UgYFtYanMPzex/M\
NfvMfy4YOFCdws0ambpa5yztV0uwRNhRzXFZDd9ya1Nlvm+qn3FYNaU/groDZhcs\
06nKpHpJc9gUwwm+ollKcDpV8hWs7pGweDe00eaNF0ahdRVV/OmLNmEi58YaMHfX\
wRILxwIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GBAFLW\
IwYyLAwUto0CyigqgW8MDb43i0QDMWXpgTYxA80QsaH0M4D2RkUeNNGTJCZgAbir\
54QbSDxZmXohM80lv5uwGAUvDLls96XYlTdIP/kjzsnTBLHLLNLN+8oYEBmx0bIn\
VPKl9PHkPqhMWkSq1ZZ40K7okR9240+WZ0TFw55NCogEMIICBDCCAW2gAwIBAgIB\
AjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0Y2EzLm9yZzEnMCUGA1UE\
CgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSAzMB4XDTE3MTEwOTE4NTEy\
MFoXDTI3MTEwNzE4NTEyMFowPzEUMBIGA1UEAwwLdGVzdGNhNC5vcmcxJzAlBgNV\
BAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgNDCBnzANBgkqhkiG9w0B\
AQEFAAOBjQAwgYkCgYEAwIvMyhVOR5oP3FXAb0YISMnncs0kXuSVQVbwSRIzM1v7\
6LTbEt85KEvX7cN1McBTXPfzhra4sYNHGNc+YeVxD1wB3wccwCycjIKOCAIS3/Mm\
AcDqszrNto6tgB+259KRLMw4ETrSDQdYj8m9820G8yZK3J0tOzTcFdGfn3PYcC0C\
AwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQsFAAOBgQBT+sIDiA0q\
el/4+iCi2l8UOiVAJDW8jRXMasvZ5IbCGDO4EPYBffhI2rpr4jJN1MO/bdNea3LH\
xK/qx21hE+1iJ5WRwsImTzGAPdzV7PEB1DWWfgV/6u+7HQBDZrKrqQpi4+VEJgbH\
gQiF7bmde3BksuSxhpGtYl7S0YMfVqqHKQqIBDCCAgQwggFtoAMCAQICAQIwDQYJ\
KoZIhvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNhMi5vcmcxJzAlBgNVBAoMHlBh\
eW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgMjAeFw0xNzExMDkxODUxMjBaFw0y\
NzExMDcxODUxMjBaMD8xFDASBgNVBAMMC3Rlc3RjYTMub3JnMScwJQYDVQQKDB5Q\
YXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDMwgZ8wDQYJKoZIhvcNAQEBBQAD\
gY0AMIGJAoGBAL1LXPZDfC1n1NO9Fhb3sO+/0LzZIhqVSaA1mnUM/6fGNRc1Jk9n\
rUEvWcOBME6OOnVsu8nZddXtIG72fZ6zpmQxKPU4rvSFNGLaysmBoTC0YgYb/qyb\
fiVRMlLjopptAxH12iFfzMnCx/y4FX7sdaaFlIVzacuDXinyttiApyBZAgMBAAGj\
EDAOMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQADgYEAxd2Sh9LuSkc0Dg7K\
QnNEFUlE5m0GfB3ntiDvRwM5iomF0N8fnLJVk5VaO4IrzWSUhYMQZqyOWfSfR3e7\
g7RJ92dvbhR1eNTXhIqkFRPfQJGY6LAbvNvcxswwNCiyABIspNj6+yRdXlmVxWs7\
mI6k79WxOK6Ef+ribdsQ0QmEbzkKiAQwggIEMIIBbaADAgECAgECMA0GCSqGSIb3\
DQEBCwUAMD8xFDASBgNVBAMMC3Rlc3RjYTEub3JnMScwJQYDVQQKDB5QYXltZW50\
IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDEwHhcNMTcxMTA5MTg1MTIwWhcNMjcxMTA3\
MTg1MTIwWjA/MRQwEgYDVQQDDAt0ZXN0Y2EyLm9yZzEnMCUGA1UECgweUGF5bWVu\
dCBSZXF1ZXN0IEludGVybWVkaWF0ZSAyMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCB\
iQKBgQDGo756D8AjsGNfBztcDjm1UiZVDwvJDR1fYf6bbr22LdW/gO5uR/GVc22t\
HZpar7mlQp6Afnd5Qd4wtrBEQFuPNobXbjRggEfcJDLjoZ4QjJMjzKa+uxh55FOj\
DfGKMqEjGn/EU4r4t61H1JKYuoVeKi57XpoDSvjuMh78E+nm5wIDAQABoxAwDjAM\
BgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GBAHfLE3anI2gjF+po6UJFGUXC\
d+DU+tqHXLMzWLXFpafAdGQ9f/mh0P6aeLRsWi2bhDTAFbqUWuMl+hMDrTxb1zci\
gfXy3D6QmIZ1dm/76lrHAcmF/lAtPPu3uR/g80q3Oj9vjUuLgMLVZKmx6LJuNAmE\
45HFGiaXoVgQx6QjT53vCusEMIICZzCCAU+gAwIBAgIBAjANBgkqhkiG9w0BAQsF\
ADAhMR8wHQYDVQQDDBZQYXltZW50UmVxdWVzdCBUZXN0IENBMB4XDTE3MTEwOTE4\
NTEyMFoXDTI3MTEwNzE4NTEyMFowPzEUMBIGA1UEAwwLdGVzdGNhMS5vcmcxJzAl\
BgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgMTCBnzANBgkqhkiG\
9w0BAQEFAAOBjQAwgYkCgYEAugKBQp8fRe4FzVrsoHVUoygRqSXi8n62pTC7zv37\
Cxx7nz9OuODxUcmA/WiCW63t8sH7xqmJdfP+i8CspbX/acQ1opVD9G1aNt8LpPrG\
PDRC702RrPqKuFJYHP1pZ5Zpg9J45g1a9gP90AFL1cdATlmuSH7xQWEThMAV8ZEJ\
IFUCAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQsFAAOCAQEAXeO9\
o/e3o9TdQvP4hSttj4shS09t0CstUYDnhYQsE2YGRZRe/1vmPLqe/mhR8ufWiaXz\
hKCJqf/gftD6Ew8uH9aXl9HTufG4F+5A98SIaNZOCoRKyepNHWUuUoWnJSizY62y\
lUbq/+qKooUVXLywhbkme4fD+o3MVCgE2ZbUkkNAXLHOCPfIlljiiPs2nK5rpQey\
avgu22ajPHpVx3/0S/44BCUnvSqKPaXzUg2JeHPUTxG9Hbd02rT6GIJgs5qyT3Hg\
fN4+mjS5czZagcw/EM6l3pWk6rbaI1O4axfw9bX1k8xXijf77cdYeBKX00JXwi/T\
wUQ6nDB4K1Htr+toqyI3EiEIgNbCjAQSGXapFEo7NmpOMRfKsYZLqSkrDZVOIWYY\
iKwY98yV0AUqDEp1c3QgVGVzdGluZyqAARN8u7unurouhN+Qaj+uIV4Im37XAGCx\
NUtuZhzRHPAIvUhLKyFbZktP56cy6KabHZSEvNSSEZ87xxVzPM9ijCgLGtfalI9p\
wOEBUo4RdY8aUXjN+JmcUME7g+fathVDX/Prk3z+ky9HcbwDyrPvhXwhDypfy9V2\
LEHCyoXD0Pan\
";

//
// Long certificate chain, with an expired certificate in the middle
//
const char* paymentrequest4_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1Nhq/JQr/AzCCAfswggFkoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwPzEUMBIGA1UEAwwLdGVzdGNhOC5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVx\
dWVzdCBJbnRlcm1lZGlhdGUgODAeFw0xNzExMTAxNTMzNDNaFw0yNzExMDgxNTMz\
NDNaMDYxGjAYBgNVBAMMEXRlc3RtZXJjaGFudDgub3JnMRgwFgYDVQQKDA9UZXN0\
IE1lcmNoYW50IDgwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAKwkeknssKiq\
YFXG0u4mg/XErkud3sdq+sO3tOiQmb6eqgMxw9eeQE2eeILEXp4TBbG1eeocpKQI\
H/cWGrCTa0ohtLwf1QN+MB5+3wig96+58IdG/g7Lj0QMkJhw6eH50J6RjK2EdC45\
lxF6SUpbsY4T75zPAzWPMs/TgRggBILxAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8w\
DQYJKoZIhvcNAQELBQADgYEAotXHtSnOve8vnthKQ7w7ZQO8nIyFtzaO680yMWhR\
Ihj1T6ehMoJYN1yAnF/8gBDuP6lQXMXgSHs6t4JDQl4ma1wJ73AwBSYNArJzWDcv\
bScSq1rwUi4MjlkinJ8sHsOlKIP/PedSv5jKp2wXHaadf5+gIWXsNG+XGBabRLfi\
eGkKiAQwggIEMIIBbaADAgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMM\
C3Rlc3RjYTcub3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRp\
YXRlIDcwHhcNMTcxMTEwMTUzMzQzWhcNMjcxMTA4MTUzMzQzWjA/MRQwEgYDVQQD\
DAt0ZXN0Y2E4Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVk\
aWF0ZSA4MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDaEHzH+p1ihk7uTUue\
ACQils0Tti+IU5rf5b+Gcb6WZvWaYz3Xsz1Oyi7NEFXv9dm1zpdiQ8XTDu1cWwAE\
8R5E3EeJe0PvzaUb81aSjKPNU2jCjD0cyKA+Z96jiKUpDA9TtINXRs0zhlFRavvW\
5T/VSxjuTk0eJFvNCo2+uNY+eQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqG\
SIb3DQEBCwUAA4GBABORB9V6iT1xF2f/v7mEnbDRF+7Psa+5W9RQo3ialoL2lbCL\
M7Vd877Xuka5XdSS2gRmAbHT+w3LAVsdRmwtlN8znluJMLWQ1T+xenBew+7jGDij\
lCA6pXRrz8D/Y8it5+QwyoKbmNb6UWHnheLepoZLeFHK+tzwNssIoO7aFlbZCogE\
MIICBDCCAW2gAwIBAgIBAjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0\
Y2E2Lm9yZzEnMCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA2\
MB4XDTE3MTExMDE1MzM0M1oXDTI3MTEwODE1MzM0M1owPzEUMBIGA1UEAwwLdGVz\
dGNhNy5vcmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUg\
NzCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAyUM2PQFsNyzqfMRRFY9NwZVI\
1RK6gq92jv8E2w+1xAC0yURGFnOLj/MU/MU8uhE4hw3mGbLlJFBzpeE2LJnMpi4h\
qYADygbjfHoC7KtDCAr2j9DcLQkMd0Zl4+8nin1PiurXVAzsNtxxEz1bS84lWNmv\
xjuTjMuqb0/E5/Qtrn8CAwEAAaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0B\
AQsFAAOBgQB753o3d/YvIojUSlMud4UXDDyGu2YZj+Yu6cZkTeTJD2I8kiSON3qK\
8xuBH2CJQCHNq8nZiroUmr02i3AQn8C7Ee2kfL7CaGI6qQqwQKLALZp/4q39lrfT\
r8P8zPhhXAuf+28mMj60i1EhNM8P2JadgRtWcscozmlBdxK8PwDOEwqIBDCCAgQw\
ggFtoAMCAQICAQIwDQYJKoZIhvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNhNS5v\
cmcxJzAlBgNVBAoMHlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgNTAeFw0x\
NzExMTAxNTMzNDNaFw0yNzExMDgxNTMzNDNaMD8xFDASBgNVBAMMC3Rlc3RjYTYu\
b3JnMScwJQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDYwgZ8w\
DQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAL6CfGgNmh89RtPlOcQHjhPdeOKxCf2c\
klCEGMGlmBJNT4fWWcZN0+teI0gQJA4m4IiHXKD/TrxtyZsPZtTBEh1UmeXlHMvm\
Ms+LSGv+lnDsLqRTPjpN74Q/z32urxSSqwU0olqblO9RqQz+ZDbRZFfpR+rgKNbI\
albtrQWhiT5zAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQAD\
gYEAjGXWYH+OMtgutsq0tAQ82vC8AsqZV/XSQxdZOCpeHUr+Yh1ntyInoR5E6ddX\
lbUaCaqWN0iubUU4io+xLdZ6nwAWUbdQ2U7GxbtF5OEsD4ZQEi1fTVzNnZhwpc5Y\
taj3sS40VWcYDxuqAmnKSD/OsDQGWBWxP7f+0Qu0ZaOGkDwKiAQwggIEMIIBbaAD\
AgECAgECMA0GCSqGSIb3DQEBCwUAMD8xFDASBgNVBAMMC3Rlc3RjYTQub3JnMScw\
JQYDVQQKDB5QYXltZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDQwHhcNMTcxMTEw\
MTUzMzQzWhcNMjcxMTA4MTUzMzQzWjA/MRQwEgYDVQQDDAt0ZXN0Y2E1Lm9yZzEn\
MCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA1MIGfMA0GCSqG\
SIb3DQEBAQUAA4GNADCBiQKBgQDE95wb0Xxkv8HXsig+tRyuG5uMsiSyvWtApwER\
BnEIXVepeXmP/4X4bDuKpSMeNQs5QMbxpzlMgQSDDvUqPMsh6avo9sck3srIRAlk\
kS/Sdp0qcAUJgQQuq7aM97IFFYPV9TLtH4NTyDAWIwKMJIQdheWCfyTsnMsl/AJ5\
Qf0muwIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GBAH5F\
d0FQStphuatf5dHvhB8av/LiLEsPTamcawZW202DNdcxl0eyTSl8QwBoI46xkXyu\
FW0nKDdRAUPEAvXGmJiZSy4ht7GXXRBlYmI9/GKuTOGMxvlufLcueKTcRl3k+82P\
gcnVo2sXt3huwYsitIWsosEJBNVm6O5bmBXkH73nCooEMIICBjCCAW+gAwIBAgIB\
AjANBgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0Y2EzLm9yZzEnMCUGA1UE\
CgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSAzMCAXDTE3MTExMDE1MzM0\
M1oYDzIwMTYwMjE0MTIwMDAwWjA/MRQwEgYDVQQDDAt0ZXN0Y2E0Lm9yZzEnMCUG\
A1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSA0MIGfMA0GCSqGSIb3\
DQEBAQUAA4GNADCBiQKBgQDOXplzT6qYYu46wtNb/fEotrLmRViGddemnod+KJfL\
NXlgZDpbMoZUjytlxukP8CNiXb0RZHfyRZqZUPOcXAmyPnD5Eu9pbI5UEFJE/q+V\
gz/EPNFidEpmMsIFpzAz3zl/9ioOPEV5vyzsh4Uj3IPKOYtdn+nI+hsFA9YKjODG\
QQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GBAEZ5fGam\
9MriqGpGmwrPH/K7mQCICn4w3ErHyKxmkIcWl0c9v1SqhSK8K8yfKbmZ2E6DLj+1\
5nDNMuYdHp5+naV65ZmgflP8VCSnbeZHhTTaRLhkYV6wMiTIambwd5hmR7YTy+cw\
5KTVMEw+YjtvsZkec5C2SqSWn2syMS9AbQcrCogEMIICBDCCAW2gAwIBAgIBAjAN\
BgkqhkiG9w0BAQsFADA/MRQwEgYDVQQDDAt0ZXN0Y2EyLm9yZzEnMCUGA1UECgwe\
UGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSAyMB4XDTE3MTExMDE1MzM0M1oX\
DTI3MTEwODE1MzM0M1owPzEUMBIGA1UEAwwLdGVzdGNhMy5vcmcxJzAlBgNVBAoM\
HlBheW1lbnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgMzCBnzANBgkqhkiG9w0BAQEF\
AAOBjQAwgYkCgYEA1lbTut3RWNicrm8ZsTF2vfgSbLtxwlVVYTIkcB8wpy+urPUJ\
ipW1zSTNKRtfv8t1bHUDVulb4bF7BM/ium5ftLKl20PSa2AKZjlzdS9/3MW8ov4s\
5+hmBTyeqtenS8/x3d2eIc8qSh/1rQxzrRnE/EvIiwasZ9KnMu9Yb7aJGeMCAwEA\
AaMQMA4wDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQsFAAOBgQCC6pBsdxqm2JrF\
jCZsrv7N+/uUs04BjYgH2SBZgDunzUfpj4IuCDE5LKnxEFGJlFULcnqfxsl+2GBF\
zkZ/Idwt1WsfWTQwFNjSjshFo0VTCut7GQkYX0aodKoLQJ8We6vbhx4AP37/UXhx\
1ud8ZrLvbrW6iYCHWY3IOjKnDyYxywqIBDCCAgQwggFtoAMCAQICAQIwDQYJKoZI\
hvcNAQELBQAwPzEUMBIGA1UEAwwLdGVzdGNhMS5vcmcxJzAlBgNVBAoMHlBheW1l\
bnQgUmVxdWVzdCBJbnRlcm1lZGlhdGUgMTAeFw0xNzExMTAxNTMzNDNaFw0yNzEx\
MDgxNTMzNDNaMD8xFDASBgNVBAMMC3Rlc3RjYTIub3JnMScwJQYDVQQKDB5QYXlt\
ZW50IFJlcXVlc3QgSW50ZXJtZWRpYXRlIDIwgZ8wDQYJKoZIhvcNAQEBBQADgY0A\
MIGJAoGBAOESsjk2c+rU6SXWUEGcUBfUk0LXbqnVYogpMN3un1XqW4qaRFppzi2c\
bJ+klCXPuzoRXUQicPcXh0myvokXn1d+YeGHmERgZoJZTnjmOklzt0qMDY0bdkiG\
TsaBOa7qq69eWyyvvZhrn5erOHVdO62K2xN67RChG2E+z23OlkHzAgMBAAGjEDAO\
MAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQADgYEAySvtYh8wQzhpEzbSpUv/\
/Ab7NYjlr/ONaibKWt2k3TTOgmc09TM/kI1HSLDzQKaJ3I41Vwh2Re8ba9QSQ7or\
o4yMz1hRXq8Y1lAqhBtiVdcge0NUNz4BT04VifRDiRU4wzygIe/K8T+fpZDMTsQ+\
EBiFCowztujAWP2mxJncyqIK6wQwggJnMIIBT6ADAgECAgECMA0GCSqGSIb3DQEB\
CwUAMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0IFRlc3QgQ0EwHhcNMTcxMTEw\
MTUzMzQzWhcNMjcxMTA4MTUzMzQzWjA/MRQwEgYDVQQDDAt0ZXN0Y2ExLm9yZzEn\
MCUGA1UECgweUGF5bWVudCBSZXF1ZXN0IEludGVybWVkaWF0ZSAxMIGfMA0GCSqG\
SIb3DQEBAQUAA4GNADCBiQKBgQDe8o8xMKG63hjPU76/oF7/GQt3/SoMnIw7EwJk\
rfn9Fsb+SorMC1jLim0+4FwRWjUTcWRt6jCB7d8WrSSDyIo7spN0SenX3gTHQogH\
VnyphPs5UZf7wNWI9ZzwFVxL2XT6gLJbeOKrsD3pYuT7qHL3SRxIoUkdFZyJUWKz\
f/d3qQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IBAQBP\
/m0/pj93bBOIpCLHNbgBoy+a65HgmTXrBS/asxwkn1Krp9CNrXUWMMOu0oPtUrns\
Kq5mOEzQaIsloOthOYlLgJtfiNCfy0kXXdTheI504uIffz8P6Y780B4rKBW54oY3\
lrq6Ofj5QHDjehczd9KjOqdVKUvub4Q63lr9NWO+7PB0sCYmLJorzfePW00Hxz0o\
yka8nzs3TpgkqFGd2HbFBXV+E5jLJLeXdnuMPDXHZytNqpTcMLnjkRJt1y+L+yIU\
zNWQ0h6RXB+ZWe46+4W6iHl3Wugk0ZD2SuAMwDmSruNUc7ze+sF60Y0WNqBHNdmW\
oPoriTTN2lt5/JKB66ohIjcSIQiA1sKMBBIZdqkUSjs2ak4xF8qxhkupKSsNlU4h\
ZhiIrBiDjpfQBSoMSnVzdCBUZXN0aW5nKoABL4gKsF2FJF8TWi+HDZLNcKtGfpoi\
nV9KV8+ra/I/Vl4zp3/QVkHYz9A1CqfrA7E4wngCUmmYsAFf6QYBJ78kL6/L1BKk\
TDm910qaYuW2QClzCl1O/tpI0AaH+jq4e/r4r8i+y9TK2a+fOgwnPWah/wbO4mxh\
ooTP445AbHOO2uQ=\
";

//
// Validly signed, but by a CA not in our root CA list
//
const char* paymentrequest5_cert1_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrxAwruAzCCAeowggFToAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAxMWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xMzA0MTkx\
NzIwMDZaFw0yMzA0MTcxNzIwMDZaMEMxGTAXBgNVBAMMEHRlc3RtZXJjaGFudC5v\
cmcxJjAkBgNVBAoMHVBheW1lbnQgUmVxdWVzdCBUZXN0IE1lcmNoYW50MIGfMA0G\
CSqGSIb3DQEBAQUAA4GNADCBiQKBgQDhV6Yn47aEEmbl50YLvXoqGEJA51I/40wr\
Z6VQGdXYaRqYktagrWDlgYY9h0JQ1bQhm8HgW7ju0R4NaDTXUqxg4HjprF0z3Mfm\
/6mmebkLOOptfkVD7ceAteNI7cyuqWGIAZA7D9mV97mXoCAtTlBUycvkmoiClCCS\
h0EpF/UTaQIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4GB\
AGIRwW7I0QvLga+RnJoJSZNZQbtu4rQW3xmoz8WfZMBYXX3QBYg5ftycbdK+/IbP\
qozfjGW2AS6DNArvpveSPDTK9+GJBNo1paiNtVqwXkC3Ddscv5AIms1eZGiIOQNC\
mUvdLkpoXo48WAer3EGsZ3B15GyNEELc0q9W5yUebba1IjUSHwiw2wYSGXapFJVg\
igPI+6XpExtNLO/i1WFV8ZmoiKwYuPvFiwUqDFVuaXRUZXN0Rml2ZSqAAXdsMgdG\
ssymvca1S/1KeM3n8Ydi2fi1JUzAAr59xPvNJRUeqCLP9upHn5z7br3P12Oz9A20\
5/4wL4ClPRPVnOHgij0bEg+y0tGESqmF1rfOfXDszlo2U92wCxS07kq79YAZJ1Zo\
XYh860/Q4wvc7lfiTe+dXBzPKAKhMy91yETY\
";

//
// Contains a testnet paytoaddress, so payment request network doesn't match client network
//
const char* paymentrequest1_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iPQoEdGVzdBIhCIDWwowE\
Ehl2qRQErGqUUwSsaMpDvWIaGnJGNQqi8oisGNeMy6UFKgxKdXN0IFRlc3Rpbmcq\
gAFwThsozZxkZxzCn4R8WxNiLFV6m0ye9fEtSbolfaW+EjBMpO03lr/dwNnrclhg\
ew+A05xfZztrAt16XKEY7qKJ/eY2nLd0fVAIu/nIt+7/VYVXT83zLrWc150aRS7W\
AdJbL3JOJLs6Eyp5zrPbfI8faRttFAdONKDrJgIpuW1E3g==\
";

//
// Expired payment request (expires is set to 1 = 1970-01-01 00:00:01)
//
const char* paymentrequest2_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iQgoEdGVzdBIgCICt4gQS\
GXapFASsapRTBKxoykO9YhoackY1CqLyiKwYiNLUpQUgASoQVGVzdGluZyB0ZXN0\
bmV0ISqAATXq9A5nmJgtmee/bQTeHeif4w1YYFPBlKghwx6qbVgXTWnwBJtOQhhV\
sZdzbTl95ENR7/Y7VJupW9kDWobCK7zUUhLAzUlwmLlcx6itHw8LTUF5HK+AwsZm\
Zs85lISGvOS0NZW/ENa6l+oQRnL87oqVZr/EDGiuqjz6T0ThQi0l\
";

//
// Unexpired payment request (expires is set to 0x7FFFFFFFFFFFFFFF = max. int64_t)
//
const char* paymentrequest3_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iSgoEdGVzdBIgCICt4gQS\
GXapFASsapRTBKxoykO9YhoackY1CqLyiKwYyNfZpQUg//////////9/KhBUZXN0\
aW5nIHRlc3RuZXQhKoABNwi8WnMW4aMvbmvorTiiWJLFhofLFnsoWCJnj3rWLnLh\
n3w6q/fZ26p50ERL/noxdTUfeFsKnlECkUu/fOcOrqyYDiwvxI0SZ034DleVyFU1\
Z3T+X0zcL8oe7bX01Yf+s2V+5JXQXarKnKBrZCGgv2ARjFNSZe7E7vGg5K4Q6Q8=\
";

//
// Unexpired payment request (expires is set to 0x8000000000000000 > max. int64_t, allowed uint64)
//
const char* paymentrequest4_cert2_BASE64 =
"\
Egt4NTA5K3NoYTI1NhrQBArNBDCCAkkwggExoAMCAQICAQEwDQYJKoZIhvcNAQEL\
BQAwITEfMB0GA1UEAwwWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNTAxMTEx\
ODIxMDhaFw0yNTAxMDgxODIxMDhaMCExHzAdBgNVBAMMFlBheW1lbnRSZXF1ZXN0\
IFRlc3QgQ0EwgZ8wDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMsZqzkzeBGo+i2N\
mUak3Ciodr1V7S062VOy7N0OQYNDQHYkgDFAUET7cEb5VJaHPv5m3ppTBpU9xBcf\
wbHHUt4VjA+mhRmYrl1khjvZM+X8kEqvWn20BtcM9R6r0yIYec8UERDDHBleL/P8\
RkxEnVLjYTV9zigCXfMsgYb3EQShAgMBAAGjEDAOMAwGA1UdEwQFMAMBAf8wDQYJ\
KoZIhvcNAQELBQADggEBABUJpl3QCqsoDSxAsQdV6zKT4VGV76AzoGj7etQsQY+r\
+S26VfWh/fMobEzuxFChr0USgLJ6FoK78hAtoZvt1lrye9yqFv/ig3WLWsJKWHHb\
3RT6oR03CIwZXFSUasi08QDVLxafwsU5OMcPLucF3a1lRL1ccYrNgVCCx1+X7Bos\
tIgDGRQQ4AyoHTcfVd2hEGeUv7k14mOxFsAp6851yosHq9Q2kwmdH+rHEJbjof87\
yyKLagc4owyXBZYkQmkeHWCNqnuRmO5vUsfVb0UUrkD64o7Th/NjwooA7SCiUXl6\
dfygT1b7ggpx7GC+sP2DsIM47IAZ55drjqX5u2f+Ba0iSwoEdGVzdBIgCICt4gQS\
GXapFASsapRTBKxoykO9YhoackY1CqLyiKwYt+HZpQUggICAgICAgICAASoQVGVz\
dGluZyB0ZXN0bmV0ISqAAXSQG8+GFA18VaKarlYrOz293rNMIub0swKGcQm8jAGX\
HSLaRgHfUDeEPr4hydy4dtfu59KNwe2xsHOHu/SpO4L8SrA4Dm9A7SlNBVWdcLbw\
d2hj739GDLz0b5KuJ2SG6VknMRQM976w/m2qlq0ccVGaaZ2zMIGfpzL3p6adwx/5\
";

//
// Payment request with amount overflow (amount is set to 107822406.26 BTCBAM)
//
const char* paymentrequest5_cert2_BASE64 =
"Egt4NTA5K3NoYTI1NhryBArvBDCCAmswggFToAMCAQICAQEwDQYJKoZIhvcNAQELBQAwITEfMB0G\
A1UEAxMWUGF5bWVudFJlcXVlc3QgVGVzdCBDQTAeFw0xNzA0MjAwNjE2MTNaFw0yNzA0MTgwNjE2\
MTNaMEMxGTAXBgNVBAMMEHRlc3RtZXJjaGFudC5vcmcxJjAkBgNVBAoMHVBheW1lbnQgUmVxdWVz\
dCBUZXN0IE1lcmNoYW50MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCuD6N7U8t5bGgP4XYf\
JsZam544iEELjTWe86/spIp9GGq3iffagz7qWHH6FP+4V+EZWfQDYUlDFDjVcrfWvG4fq9kK0fH/\
MkwNDADimd5iq7NOh3WMQIbc+3EUI28AzFVetNRjc/F/CEllAyzv+c5b3PsRPlGkTTsCk1bLm35J\
awIDAQABoxAwDjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IBAQCFQhPL8FgEcJ3M2kgC\
q8kwLdan9KcO/TXyrdvjAygRBA0kwv1Zco1+0ZD583cLh1riK8kiBUDjIJJ1SOv+MKjBwkSGeZJ/\
s0sOLur8BT0+bXU9Q+uYhCEKi8M5TUfNOa5T6wbk12RV+Rdj8/IALe3D+CN6oWo+va6B8ZmrMdY+\
2PQ4qOGhEgIqjtesxqQKTNhrm6/aZ6bYn4KThJyRVj0oxHtDgHCrVXrwF1HlAPAgXTn4znUVxT8h\
COBzMXX7Y+xczcVpg7tp3ThbO2d0Qcgeq01CU4GPQqADFiG7t9hVW0xFgkd3ydgalk2spYii3xwe\
tYuqV5tXSuaNYfx04W++Ii4SJAiAgZWzwMyTExIZdqkUEPQG/jXuVKaLF0rH0wOfayIk74aIrBi7\
zOHHBSoAKoABg1l5FGBRmbyvqBREKkATBA5QGcguG8Iw/iJQpfMKRlpOW3o6sSVJ7CgmZkZobQYr\
OegVQj5qNLJh6uL5Aov8V4ztufpiVLAYIdosjYYDNrlNXM2tTcVEfjXyKP+kVAUsjGmx4S7lDwcg\
ZsuHrJQPssyVc6/sW7rKpvOXi38jVMA=";
#endif // BITCOIN_QT_TEST_PAYMENTREQUESTDATA_H
