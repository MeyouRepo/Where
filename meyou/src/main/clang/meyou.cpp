// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("main");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("main")
//      }
//    }

#include "include/simple.h"
#include <android/log.h>
#include <vector>

static const string MEYOU = "MEYOU/";

extern "C" {

JNIEXPORT void JNICALL
Java_com_meyou_Me_le(JNIEnv * env , jclass type,
        jstring
tag_ , jstring message_,
        jboolean
debug ) {
if ( debug == JNI_TRUE )
__android_log_print(ANDROID_LOG_ERROR,
(MEYOU + jStrToCStr(env, tag_ )) . c_str(), "%s" ,
jStrToChars(env, message_ )) ;
}

JNIEXPORT void JNICALL
Java_com_meyou_Me_ld(JNIEnv
*env,
jclass type,
        jstring
tag_,
jstring message_,
        jboolean
debug) {
if (debug == JNI_TRUE)
__android_log_print(ANDROID_LOG_DEBUG,
(MEYOU
+
jStrToCStr(env, tag_
)).

c_str(),

"%s",
jStrToChars(env, message_
));
}

JNIEXPORT void JNICALL
Java_com_meyou_Me_li(JNIEnv
*env,
jclass type,
        jstring
tag_,
jstring message_,
        jboolean
debug) {
if (debug == JNI_TRUE)
__android_log_print(ANDROID_LOG_INFO,
(MEYOU
+
jStrToCStr(env, tag_
)).

c_str(),

"%s",
jStrToChars(env, message_
));
}

JNIEXPORT void JNICALL
Java_com_meyou_Me_lt(JNIEnv
*env,
jclass type,
        jstring
tag_,
jstring methodName_,
        jstring
exceptionName_,
jboolean debug
) {
string throwInfo = "Method " + jStrToCStr(env, methodName_) + " with " +
                   jStrToCStr(env, exceptionName_) + "!";
Java_com_meyou_Me_le(env, type, tag_, cStrToJStr(env, throwInfo), debug
);
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_subWithLastIndex(
        JNIEnv * env, jclass
type,
jstring string_, jstring
ch_,
jint moveRight
) {

return
cStrToJStr(env, subWithLastIndex(jStrToCStr(env, string_),
                                 jStrToCStr(env, ch_), moveRight)
);
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_getTypeByName(JNIEnv * env,
                                        jclass
type,
jstring name_
) {
return
Java_com_meyou_Me_subWithLastIndex(env, type, name_,
        cStrToJStr(env, "."),
1);
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_getMimeByName(JNIEnv * env,
                                        jclass
type,
jstring name_
) {

vector <vector<string>> mime;

vector <string> item_1;
item_1.emplace_back("123");
item_1.emplace_back("application/vnd.lotus-1-2-3");
mime.
emplace_back(item_1);

vector <string> item_2;
item_2.emplace_back("3dml");
item_2.emplace_back("text/vnd.in3d.3dml");
mime.
emplace_back(item_2);

vector <string> item_3;
item_3.emplace_back("3ds");
item_3.emplace_back("image/x-3ds");
mime.
emplace_back(item_3);

vector <string> item_4;
item_4.emplace_back("3g2");
item_4.emplace_back("video/3gpp2");
mime.
emplace_back(item_4);

vector <string> item_5;
item_5.emplace_back("3gp");
item_5.emplace_back("video/3gpp");
mime.
emplace_back(item_5);

vector <string> item_6;
item_6.emplace_back("7z");
item_6.emplace_back("application/x-7z-compressed");
mime.
emplace_back(item_6);

vector <string> item_7;
item_7.emplace_back("aab");
item_7.emplace_back("application/x-authorware-bin");
mime.
emplace_back(item_7);

vector <string> item_8;
item_8.emplace_back("aac");
item_8.emplace_back("audio/x-aac");
mime.
emplace_back(item_8);

vector <string> item_9;
item_9.emplace_back("aam");
item_9.emplace_back("application/x-authorware-map");
mime.
emplace_back(item_9);

vector <string> item_10;
item_10.emplace_back("aas");
item_10.emplace_back("application/x-authorware-seg");
mime.
emplace_back(item_10);

vector <string> item_11;
item_11.emplace_back("abs");
item_11.emplace_back("audio/x-mpeg");
mime.
emplace_back(item_11);

vector <string> item_12;
item_12.emplace_back("abw");
item_12.emplace_back("application/x-abiword");
mime.
emplace_back(item_12);

vector <string> item_13;
item_13.emplace_back("ac");
item_13.emplace_back("application/pkix-attr-cert");
mime.
emplace_back(item_13);

vector <string> item_14;
item_14.emplace_back("acc");
item_14.emplace_back("application/vnd.americandynamics.acc");
mime.
emplace_back(item_14);

vector <string> item_15;
item_15.emplace_back("ace");
item_15.emplace_back("application/x-ace-compressed");
mime.
emplace_back(item_15);

vector <string> item_16;
item_16.emplace_back("acu");
item_16.emplace_back("application/vnd.acucobol");
mime.
emplace_back(item_16);

vector <string> item_17;
item_17.emplace_back("acutc");
item_17.emplace_back("application/vnd.acucorp");
mime.
emplace_back(item_17);

vector <string> item_18;
item_18.emplace_back("adp");
item_18.emplace_back("audio/adpcm");
mime.
emplace_back(item_18);

vector <string> item_19;
item_19.emplace_back("aep");
item_19.emplace_back("application/vnd.audiograph");
mime.
emplace_back(item_19);

vector <string> item_20;
item_20.emplace_back("afm");
item_20.emplace_back("application/x-font-type1");
mime.
emplace_back(item_20);

vector <string> item_21;
item_21.emplace_back("afp");
item_21.emplace_back("application/vnd.ibm.modcap");
mime.
emplace_back(item_21);

vector <string> item_22;
item_22.emplace_back("ahead");
item_22.emplace_back("application/vnd.ahead.space");
mime.
emplace_back(item_22);

vector <string> item_23;
item_23.emplace_back("ai");
item_23.emplace_back("application/postscript");
mime.
emplace_back(item_23);

vector <string> item_24;
item_24.emplace_back("aif");
item_24.emplace_back("audio/x-aiff");
mime.
emplace_back(item_24);

vector <string> item_25;
item_25.emplace_back("aifc");
item_25.emplace_back("audio/x-aiff");
mime.
emplace_back(item_25);

vector <string> item_26;
item_26.emplace_back("aiff");
item_26.emplace_back("audio/x-aiff");
mime.
emplace_back(item_26);

vector <string> item_27;
item_27.emplace_back("aim");
item_27.emplace_back("application/x-aim");
mime.
emplace_back(item_27);

vector <string> item_28;
item_28.emplace_back("air");
item_28.emplace_back(
"application/vnd.adobe.air-application-installer-package+zip");
mime.
emplace_back(item_28);

vector <string> item_29;
item_29.emplace_back("ait");
item_29.emplace_back("application/vnd.dvb.ait");
mime.
emplace_back(item_29);

vector <string> item_30;
item_30.emplace_back("ami");
item_30.emplace_back("application/vnd.amiga.ami");
mime.
emplace_back(item_30);

vector <string> item_31;
item_31.emplace_back("anx");
item_31.emplace_back("application/annodex");
mime.
emplace_back(item_31);

vector <string> item_32;
item_32.emplace_back("apk");
item_32.emplace_back("application/vnd.android.package-archive");
mime.
emplace_back(item_32);

vector <string> item_33;
item_33.emplace_back("appcache");
item_33.emplace_back("text/cache-manifest");
mime.
emplace_back(item_33);

vector <string> item_34;
item_34.emplace_back("application");
item_34.emplace_back("application/x-ms-application");
mime.
emplace_back(item_34);

vector <string> item_35;
item_35.emplace_back("apr");
item_35.emplace_back("application/vnd.lotus-approach");
mime.
emplace_back(item_35);

vector <string> item_36;
item_36.emplace_back("arc");
item_36.emplace_back("application/x-freearc");
mime.
emplace_back(item_36);

vector <string> item_37;
item_37.emplace_back("art");
item_37.emplace_back("image/x-jg");
mime.
emplace_back(item_37);

vector <string> item_38;
item_38.emplace_back("asc");
item_38.emplace_back("application/pgp-signature");
mime.
emplace_back(item_38);

vector <string> item_39;
item_39.emplace_back("asf");
item_39.emplace_back("video/x-ms-asf");
mime.
emplace_back(item_39);

vector <string> item_40;
item_40.emplace_back("asm");
item_40.emplace_back("text/x-asm");
mime.
emplace_back(item_40);

vector <string> item_41;
item_41.emplace_back("aso");
item_41.emplace_back("application/vnd.accpac.simply.aso");
mime.
emplace_back(item_41);

vector <string> item_42;
item_42.emplace_back("asx");
item_42.emplace_back("video/x-ms-asf");
mime.
emplace_back(item_42);

vector <string> item_43;
item_43.emplace_back("atc");
item_43.emplace_back("application/vnd.acucorp");
mime.
emplace_back(item_43);

vector <string> item_44;
item_44.emplace_back("atom");
item_44.emplace_back("application/atom+xml");
mime.
emplace_back(item_44);

vector <string> item_45;
item_45.emplace_back("atomcat");
item_45.emplace_back("application/atomcat+xml");
mime.
emplace_back(item_45);

vector <string> item_46;
item_46.emplace_back("atomsvc");
item_46.emplace_back("application/atomsvc+xml");
mime.
emplace_back(item_46);

vector <string> item_47;
item_47.emplace_back("atx");
item_47.emplace_back("application/vnd.antix.game-component");
mime.
emplace_back(item_47);

vector <string> item_48;
item_48.emplace_back("au");
item_48.emplace_back("audio/basic");
mime.
emplace_back(item_48);

vector <string> item_49;
item_49.emplace_back("avi");
item_49.emplace_back("video/x-msvideo");
mime.
emplace_back(item_49);

vector <string> item_50;
item_50.emplace_back("avx");
item_50.emplace_back("video/x-rad-screenplay");
mime.
emplace_back(item_50);

vector <string> item_51;
item_51.emplace_back("aw");
item_51.emplace_back("application/applixware");
mime.
emplace_back(item_51);

vector <string> item_52;
item_52.emplace_back("axa");
item_52.emplace_back("audio/annodex");
mime.
emplace_back(item_52);

vector <string> item_53;
item_53.emplace_back("axv");
item_53.emplace_back("video/annodex");
mime.
emplace_back(item_53);

vector <string> item_54;
item_54.emplace_back("azf");
item_54.emplace_back("application/vnd.airzip.filesecure.azf");
mime.
emplace_back(item_54);

vector <string> item_55;
item_55.emplace_back("azs");
item_55.emplace_back("application/vnd.airzip.filesecure.azs");
mime.
emplace_back(item_55);

vector <string> item_56;
item_56.emplace_back("azw");
item_56.emplace_back("application/vnd.amazon.ebook");
mime.
emplace_back(item_56);

vector <string> item_57;
item_57.emplace_back("bat");
item_57.emplace_back("application/x-msdownload");
mime.
emplace_back(item_57);

vector <string> item_58;
item_58.emplace_back("bcpio");
item_58.emplace_back("application/x-bcpio");
mime.
emplace_back(item_58);

vector <string> item_59;
item_59.emplace_back("bdf");
item_59.emplace_back("application/x-font-bdf");
mime.
emplace_back(item_59);

vector <string> item_60;
item_60.emplace_back("bdm");
item_60.emplace_back("application/vnd.syncml.dm+wbxml");
mime.
emplace_back(item_60);

vector <string> item_61;
item_61.emplace_back("bed");
item_61.emplace_back("application/vnd.realvnc.bed");
mime.
emplace_back(item_61);

vector <string> item_62;
item_62.emplace_back("bh2");
item_62.emplace_back("application/vnd.fujitsu.oasysprs");
mime.
emplace_back(item_62);

vector <string> item_63;
item_63.emplace_back("bin");
item_63.emplace_back("application/octet-stream");
mime.
emplace_back(item_63);

vector <string> item_64;
item_64.emplace_back("blb");
item_64.emplace_back("application/x-blorb");
mime.
emplace_back(item_64);

vector <string> item_65;
item_65.emplace_back("blorb");
item_65.emplace_back("application/x-blorb");
mime.
emplace_back(item_65);

vector <string> item_66;
item_66.emplace_back("bmi");
item_66.emplace_back("application/vnd.bmi");
mime.
emplace_back(item_66);

vector <string> item_67;
item_67.emplace_back("bmp");
item_67.emplace_back("image/bmp");
mime.
emplace_back(item_67);

vector <string> item_68;
item_68.emplace_back("body");
item_68.emplace_back("text/html");
mime.
emplace_back(item_68);

vector <string> item_69;
item_69.emplace_back("book");
item_69.emplace_back("application/vnd.framemaker");
mime.
emplace_back(item_69);

vector <string> item_70;
item_70.emplace_back("box");
item_70.emplace_back("application/vnd.previewsystems.box");
mime.
emplace_back(item_70);

vector <string> item_71;
item_71.emplace_back("boz");
item_71.emplace_back("application/x-bzip2");
mime.
emplace_back(item_71);

vector <string> item_72;
item_72.emplace_back("bpk");
item_72.emplace_back("application/octet-stream");
mime.
emplace_back(item_72);

vector <string> item_73;
item_73.emplace_back("btif");
item_73.emplace_back("image/prs.btif");
mime.
emplace_back(item_73);

vector <string> item_74;
item_74.emplace_back("bz");
item_74.emplace_back("application/x-bzip");
mime.
emplace_back(item_74);

vector <string> item_75;
item_75.emplace_back("bz2");
item_75.emplace_back("application/x-bzip2");
mime.
emplace_back(item_75);

vector <string> item_76;
item_76.emplace_back("c");
item_76.emplace_back("text/x-c");
mime.
emplace_back(item_76);

vector <string> item_77;
item_77.emplace_back("c11amc");
item_77.emplace_back("application/vnd.cluetrust.cartomobile-config");
mime.
emplace_back(item_77);

vector <string> item_78;
item_78.emplace_back("c11amz");
item_78.emplace_back("application/vnd.cluetrust.cartomobile-config-pkg");
mime.
emplace_back(item_78);

vector <string> item_79;
item_79.emplace_back("c4d");
item_79.emplace_back("application/vnd.clonk.c4group");
mime.
emplace_back(item_79);

vector <string> item_80;
item_80.emplace_back("c4f");
item_80.emplace_back("application/vnd.clonk.c4group");
mime.
emplace_back(item_80);

vector <string> item_81;
item_81.emplace_back("c4g");
item_81.emplace_back("application/vnd.clonk.c4group");
mime.
emplace_back(item_81);

vector <string> item_82;
item_82.emplace_back("c4p");
item_82.emplace_back("application/vnd.clonk.c4group");
mime.
emplace_back(item_82);

vector <string> item_83;
item_83.emplace_back("c4u");
item_83.emplace_back("application/vnd.clonk.c4group");
mime.
emplace_back(item_83);

vector <string> item_84;
item_84.emplace_back("cab");
item_84.emplace_back("application/vnd.ms-cab-compressed");
mime.
emplace_back(item_84);

vector <string> item_85;
item_85.emplace_back("caf");
item_85.emplace_back("audio/x-caf");
mime.
emplace_back(item_85);

vector <string> item_86;
item_86.emplace_back("cap");
item_86.emplace_back("application/vnd.tcpdump.pcap");
mime.
emplace_back(item_86);

vector <string> item_87;
item_87.emplace_back("car");
item_87.emplace_back("application/vnd.curl.car");
mime.
emplace_back(item_87);

vector <string> item_88;
item_88.emplace_back("cat");
item_88.emplace_back("application/vnd.ms-pki.seccat");
mime.
emplace_back(item_88);

vector <string> item_89;
item_89.emplace_back("cb7");
item_89.emplace_back("application/x-cbr");
mime.
emplace_back(item_89);

vector <string> item_90;
item_90.emplace_back("cba");
item_90.emplace_back("application/x-cbr");
mime.
emplace_back(item_90);

vector <string> item_91;
item_91.emplace_back("cbr");
item_91.emplace_back("application/x-cbr");
mime.
emplace_back(item_91);

vector <string> item_92;
item_92.emplace_back("cbt");
item_92.emplace_back("application/x-cbr");
mime.
emplace_back(item_92);

vector <string> item_93;
item_93.emplace_back("cbz");
item_93.emplace_back("application/x-cbr");
mime.
emplace_back(item_93);

vector <string> item_94;
item_94.emplace_back("cc");
item_94.emplace_back("text/x-c");
mime.
emplace_back(item_94);

vector <string> item_95;
item_95.emplace_back("cct");
item_95.emplace_back("application/x-director");
mime.
emplace_back(item_95);

vector <string> item_96;
item_96.emplace_back("ccxml");
item_96.emplace_back("application/ccxml+xml");
mime.
emplace_back(item_96);

vector <string> item_97;
item_97.emplace_back("cdbcmsg");
item_97.emplace_back("application/vnd.contact.cmsg");
mime.
emplace_back(item_97);

vector <string> item_98;
item_98.emplace_back("cdf");
item_98.emplace_back("application/x-cdf");
mime.
emplace_back(item_98);

vector <string> item_99;
item_99.emplace_back("cdkey");
item_99.emplace_back("application/vnd.mediastation.cdkey");
mime.
emplace_back(item_99);

vector <string> item_100;
item_100.emplace_back("cdmia");
item_100.emplace_back("application/cdmi-capability");
mime.
emplace_back(item_100);

vector <string> item_101;
item_101.emplace_back("cdmic");
item_101.emplace_back("application/cdmi-container");
mime.
emplace_back(item_101);

vector <string> item_102;
item_102.emplace_back("cdmid");
item_102.emplace_back("application/cdmi-domain");
mime.
emplace_back(item_102);

vector <string> item_103;
item_103.emplace_back("cdmio");
item_103.emplace_back("application/cdmi-object");
mime.
emplace_back(item_103);

vector <string> item_104;
item_104.emplace_back("cdmiq");
item_104.emplace_back("application/cdmi-queue");
mime.
emplace_back(item_104);

vector <string> item_105;
item_105.emplace_back("cdx");
item_105.emplace_back("chemical/x-cdx");
mime.
emplace_back(item_105);

vector <string> item_106;
item_106.emplace_back("cdxml");
item_106.emplace_back("application/vnd.chemdraw+xml");
mime.
emplace_back(item_106);

vector <string> item_107;
item_107.emplace_back("cdy");
item_107.emplace_back("application/vnd.cinderella");
mime.
emplace_back(item_107);

vector <string> item_108;
item_108.emplace_back("cer");
item_108.emplace_back("application/pkix-cert");
mime.
emplace_back(item_108);

vector <string> item_109;
item_109.emplace_back("cfs");
item_109.emplace_back("application/x-cfs-compressed");
mime.
emplace_back(item_109);

vector <string> item_110;
item_110.emplace_back("cgm");
item_110.emplace_back("image/cgm");
mime.
emplace_back(item_110);

vector <string> item_111;
item_111.emplace_back("chat");
item_111.emplace_back("application/x-chat");
mime.
emplace_back(item_111);

vector <string> item_112;
item_112.emplace_back("chm");
item_112.emplace_back("application/vnd.ms-htmlhelp");
mime.
emplace_back(item_112);

vector <string> item_113;
item_113.emplace_back("chrt");
item_113.emplace_back("application/vnd.kde.kchart");
mime.
emplace_back(item_113);

vector <string> item_114;
item_114.emplace_back("cif");
item_114.emplace_back("chemical/x-cif");
mime.
emplace_back(item_114);

vector <string> item_115;
item_115.emplace_back("cii");
item_115.emplace_back(
"application/vnd.anser-web-certificate-issue-initiation");
mime.
emplace_back(item_115);

vector <string> item_116;
item_116.emplace_back("cil");
item_116.emplace_back("application/vnd.ms-artgalry");
mime.
emplace_back(item_116);

vector <string> item_117;
item_117.emplace_back("cla");
item_117.emplace_back("application/vnd.claymore");
mime.
emplace_back(item_117);

vector <string> item_118;
item_118.emplace_back("class");
item_118.emplace_back("application/java");
mime.
emplace_back(item_118);

vector <string> item_119;
item_119.emplace_back("clkk");
item_119.emplace_back("application/vnd.crick.clicker.keyboard");
mime.
emplace_back(item_119);

vector <string> item_120;
item_120.emplace_back("clkp");
item_120.emplace_back("application/vnd.crick.clicker.palette");
mime.
emplace_back(item_120);

vector <string> item_121;
item_121.emplace_back("clkt");
item_121.emplace_back("application/vnd.crick.clicker.template");
mime.
emplace_back(item_121);

vector <string> item_122;
item_122.emplace_back("clkw");
item_122.emplace_back("application/vnd.crick.clicker.wordbank");
mime.
emplace_back(item_122);

vector <string> item_123;
item_123.emplace_back("clkx");
item_123.emplace_back("application/vnd.crick.clicker");
mime.
emplace_back(item_123);

vector <string> item_124;
item_124.emplace_back("clp");
item_124.emplace_back("application/x-msclip");
mime.
emplace_back(item_124);

vector <string> item_125;
item_125.emplace_back("cmc");
item_125.emplace_back("application/vnd.cosmocaller");
mime.
emplace_back(item_125);

vector <string> item_126;
item_126.emplace_back("cmdf");
item_126.emplace_back("chemical/x-cmdf");
mime.
emplace_back(item_126);

vector <string> item_127;
item_127.emplace_back("cml");
item_127.emplace_back("chemical/x-cml");
mime.
emplace_back(item_127);

vector <string> item_128;
item_128.emplace_back("cmp");
item_128.emplace_back("application/vnd.yellowriver-custom-menu");
mime.
emplace_back(item_128);

vector <string> item_129;
item_129.emplace_back("cmx");
item_129.emplace_back("image/x-cmx");
mime.
emplace_back(item_129);

vector <string> item_130;
item_130.emplace_back("cod");
item_130.emplace_back("application/vnd.rim.cod");
mime.
emplace_back(item_130);

vector <string> item_131;
item_131.emplace_back("com");
item_131.emplace_back("application/x-msdownload");
mime.
emplace_back(item_131);

vector <string> item_132;
item_132.emplace_back("conf");
item_132.emplace_back("text/plain");
mime.
emplace_back(item_132);

vector <string> item_133;
item_133.emplace_back("cpio");
item_133.emplace_back("application/x-cpio");
mime.
emplace_back(item_133);

vector <string> item_134;
item_134.emplace_back("cpp");
item_134.emplace_back("text/x-c");
mime.
emplace_back(item_134);

vector <string> item_135;
item_135.emplace_back("cpt");
item_135.emplace_back("application/mac-compactpro");
mime.
emplace_back(item_135);

vector <string> item_136;
item_136.emplace_back("crd");
item_136.emplace_back("application/x-mscardfile");
mime.
emplace_back(item_136);

vector <string> item_137;
item_137.emplace_back("crl");
item_137.emplace_back("application/pkix-crl");
mime.
emplace_back(item_137);

vector <string> item_138;
item_138.emplace_back("crt");
item_138.emplace_back("application/x-x509-ca-cert");
mime.
emplace_back(item_138);

vector <string> item_139;
item_139.emplace_back("cryptonote");
item_139.emplace_back("application/vnd.rig.cryptonote");
mime.
emplace_back(item_139);

vector <string> item_140;
item_140.emplace_back("csh");
item_140.emplace_back("application/x-csh");
mime.
emplace_back(item_140);

vector <string> item_141;
item_141.emplace_back("csml");
item_141.emplace_back("chemical/x-csml");
mime.
emplace_back(item_141);

vector <string> item_142;
item_142.emplace_back("csp");
item_142.emplace_back("application/vnd.commonspace");
mime.
emplace_back(item_142);

vector <string> item_143;
item_143.emplace_back("css");
item_143.emplace_back("text/css");
mime.
emplace_back(item_143);

vector <string> item_144;
item_144.emplace_back("cst");
item_144.emplace_back("application/x-director");
mime.
emplace_back(item_144);

vector <string> item_145;
item_145.emplace_back("csv");
item_145.emplace_back("text/csv");
mime.
emplace_back(item_145);

vector <string> item_146;
item_146.emplace_back("cu");
item_146.emplace_back("application/cu-seeme");
mime.
emplace_back(item_146);

vector <string> item_147;
item_147.emplace_back("curl");
item_147.emplace_back("text/vnd.curl");
mime.
emplace_back(item_147);

vector <string> item_148;
item_148.emplace_back("cww");
item_148.emplace_back("application/prs.cww");
mime.
emplace_back(item_148);

vector <string> item_149;
item_149.emplace_back("cxt");
item_149.emplace_back("application/x-director");
mime.
emplace_back(item_149);

vector <string> item_150;
item_150.emplace_back("cxx");
item_150.emplace_back("text/x-c");
mime.
emplace_back(item_150);

vector <string> item_151;
item_151.emplace_back("dae");
item_151.emplace_back("model/vnd.collada+xml");
mime.
emplace_back(item_151);

vector <string> item_152;
item_152.emplace_back("daf");
item_152.emplace_back("application/vnd.mobius.daf");
mime.
emplace_back(item_152);

vector <string> item_153;
item_153.emplace_back("dart");
item_153.emplace_back("application/vnd.dart");
mime.
emplace_back(item_153);

vector <string> item_154;
item_154.emplace_back("dataless");
item_154.emplace_back("application/vnd.fdsn.seed");
mime.
emplace_back(item_154);

vector <string> item_155;
item_155.emplace_back("davmount");
item_155.emplace_back("application/davmount+xml");
mime.
emplace_back(item_155);

vector <string> item_156;
item_156.emplace_back("dbk");
item_156.emplace_back("application/docbook+xml");
mime.
emplace_back(item_156);

vector <string> item_157;
item_157.emplace_back("dcr");
item_157.emplace_back("application/x-director");
mime.
emplace_back(item_157);

vector <string> item_158;
item_158.emplace_back("dcurl");
item_158.emplace_back("text/vnd.curl.dcurl");
mime.
emplace_back(item_158);

vector <string> item_159;
item_159.emplace_back("dd2");
item_159.emplace_back("application/vnd.oma.dd2+xml");
mime.
emplace_back(item_159);

vector <string> item_160;
item_160.emplace_back("ddd");
item_160.emplace_back("application/vnd.fujixerox.ddd");
mime.
emplace_back(item_160);

vector <string> item_161;
item_161.emplace_back("deb");
item_161.emplace_back("application/x-debian-package");
mime.
emplace_back(item_161);

vector <string> item_162;
item_162.emplace_back("def");
item_162.emplace_back("text/plain");
mime.
emplace_back(item_162);

vector <string> item_163;
item_163.emplace_back("deploy");
item_163.emplace_back("application/octet-stream");
mime.
emplace_back(item_163);

vector <string> item_164;
item_164.emplace_back("der");
item_164.emplace_back("application/x-x509-ca-cert");
mime.
emplace_back(item_164);

vector <string> item_165;
item_165.emplace_back("dfac");
item_165.emplace_back("application/vnd.dreamfactory");
mime.
emplace_back(item_165);

vector <string> item_166;
item_166.emplace_back("dgc");
item_166.emplace_back("application/x-dgc-compressed");
mime.
emplace_back(item_166);

vector <string> item_167;
item_167.emplace_back("dib");
item_167.emplace_back("image/bmp");
mime.
emplace_back(item_167);

vector <string> item_168;
item_168.emplace_back("dic");
item_168.emplace_back("text/x-c");
mime.
emplace_back(item_168);

vector <string> item_169;
item_169.emplace_back("dir");
item_169.emplace_back("application/x-director");
mime.
emplace_back(item_169);

vector <string> item_170;
item_170.emplace_back("dis");
item_170.emplace_back("application/vnd.mobius.dis");
mime.
emplace_back(item_170);

vector <string> item_171;
item_171.emplace_back("dist");
item_171.emplace_back("application/octet-stream");
mime.
emplace_back(item_171);

vector <string> item_172;
item_172.emplace_back("distz");
item_172.emplace_back("application/octet-stream");
mime.
emplace_back(item_172);

vector <string> item_173;
item_173.emplace_back("djv");
item_173.emplace_back("image/vnd.djvu");
mime.
emplace_back(item_173);

vector <string> item_174;
item_174.emplace_back("djvu");
item_174.emplace_back("image/vnd.djvu");
mime.
emplace_back(item_174);

vector <string> item_175;
item_175.emplace_back("dll");
item_175.emplace_back("application/x-msdownload");
mime.
emplace_back(item_175);

vector <string> item_176;
item_176.emplace_back("dmg");
item_176.emplace_back("application/x-apple-diskimage");
mime.
emplace_back(item_176);

vector <string> item_177;
item_177.emplace_back("dmp");
item_177.emplace_back("application/vnd.tcpdump.pcap");
mime.
emplace_back(item_177);

vector <string> item_178;
item_178.emplace_back("dms");
item_178.emplace_back("application/octet-stream");
mime.
emplace_back(item_178);

vector <string> item_179;
item_179.emplace_back("dna");
item_179.emplace_back("application/vnd.dna");
mime.
emplace_back(item_179);

vector <string> item_180;
item_180.emplace_back("doc");
item_180.emplace_back("application/msword");
mime.
emplace_back(item_180);

vector <string> item_181;
item_181.emplace_back("docm");
item_181.emplace_back("application/vnd.ms-word.document.macroenabled.12");
mime.
emplace_back(item_181);

vector <string> item_182;
item_182.emplace_back("docx");
item_182.emplace_back(
"application/"
"vnd.openxmlformats-officedocument.wordprocessingml.document");
mime.
emplace_back(item_182);

vector <string> item_183;
item_183.emplace_back("dot");
item_183.emplace_back("application/msword");
mime.
emplace_back(item_183);

vector <string> item_184;
item_184.emplace_back("dotm");
item_184.emplace_back("application/vnd.ms-word.template.macroenabled.12");
mime.
emplace_back(item_184);

vector <string> item_185;
item_185.emplace_back("dotx");
item_185.emplace_back(
"application/"
"vnd.openxmlformats-officedocument.wordprocessingml.template");
mime.
emplace_back(item_185);

vector <string> item_186;
item_186.emplace_back("dp");
item_186.emplace_back("application/vnd.osgi.dp");
mime.
emplace_back(item_186);

vector <string> item_187;
item_187.emplace_back("dpg");
item_187.emplace_back("application/vnd.dpgraph");
mime.
emplace_back(item_187);

vector <string> item_188;
item_188.emplace_back("dra");
item_188.emplace_back("audio/vnd.dra");
mime.
emplace_back(item_188);

vector <string> item_189;
item_189.emplace_back("dsc");
item_189.emplace_back("text/prs.lines.tag");
mime.
emplace_back(item_189);

vector <string> item_190;
item_190.emplace_back("dssc");
item_190.emplace_back("application/dssc+der");
mime.
emplace_back(item_190);

vector <string> item_191;
item_191.emplace_back("dtb");
item_191.emplace_back("application/x-dtbook+xml");
mime.
emplace_back(item_191);

vector <string> item_192;
item_192.emplace_back("dtd");
item_192.emplace_back("application/xml-dtd");
mime.
emplace_back(item_192);

vector <string> item_193;
item_193.emplace_back("dts");
item_193.emplace_back("audio/vnd.dts");
mime.
emplace_back(item_193);

vector <string> item_194;
item_194.emplace_back("dtshd");
item_194.emplace_back("audio/vnd.dts.hd");
mime.
emplace_back(item_194);

vector <string> item_195;
item_195.emplace_back("dump");
item_195.emplace_back("application/octet-stream");
mime.
emplace_back(item_195);

vector <string> item_196;
item_196.emplace_back("dv");
item_196.emplace_back("video/x-dv");
mime.
emplace_back(item_196);

vector <string> item_197;
item_197.emplace_back("dvb");
item_197.emplace_back("video/vnd.dvb.file");
mime.
emplace_back(item_197);

vector <string> item_198;
item_198.emplace_back("dvi");
item_198.emplace_back("application/x-dvi");
mime.
emplace_back(item_198);

vector <string> item_199;
item_199.emplace_back("dwf");
item_199.emplace_back("model/vnd.dwf");
mime.
emplace_back(item_199);

vector <string> item_200;
item_200.emplace_back("dwg");
item_200.emplace_back("image/vnd.dwg");
mime.
emplace_back(item_200);

vector <string> item_201;
item_201.emplace_back("dxf");
item_201.emplace_back("image/vnd.dxf");
mime.
emplace_back(item_201);

vector <string> item_202;
item_202.emplace_back("dxp");
item_202.emplace_back("application/vnd.spotfire.dxp");
mime.
emplace_back(item_202);

vector <string> item_203;
item_203.emplace_back("dxr");
item_203.emplace_back("application/x-director");
mime.
emplace_back(item_203);

vector <string> item_204;
item_204.emplace_back("ecelp4800");
item_204.emplace_back("audio/vnd.nuera.ecelp4800");
mime.
emplace_back(item_204);

vector <string> item_205;
item_205.emplace_back("ecelp7470");
item_205.emplace_back("audio/vnd.nuera.ecelp7470");
mime.
emplace_back(item_205);

vector <string> item_206;
item_206.emplace_back("ecelp9600");
item_206.emplace_back("audio/vnd.nuera.ecelp9600");
mime.
emplace_back(item_206);

vector <string> item_207;
item_207.emplace_back("ecma");
item_207.emplace_back("application/ecmascript");
mime.
emplace_back(item_207);

vector <string> item_208;
item_208.emplace_back("edm");
item_208.emplace_back("application/vnd.novadigm.edm");
mime.
emplace_back(item_208);

vector <string> item_209;
item_209.emplace_back("edx");
item_209.emplace_back("application/vnd.novadigm.edx");
mime.
emplace_back(item_209);

vector <string> item_210;
item_210.emplace_back("efif");
item_210.emplace_back("application/vnd.picsel");
mime.
emplace_back(item_210);

vector <string> item_211;
item_211.emplace_back("ei6");
item_211.emplace_back("application/vnd.pg.osasli");
mime.
emplace_back(item_211);

vector <string> item_212;
item_212.emplace_back("elc");
item_212.emplace_back("application/octet-stream");
mime.
emplace_back(item_212);

vector <string> item_213;
item_213.emplace_back("emf");
item_213.emplace_back("application/x-msmetafile");
mime.
emplace_back(item_213);

vector <string> item_214;
item_214.emplace_back("eml");
item_214.emplace_back("message/rfc822");
mime.
emplace_back(item_214);

vector <string> item_215;
item_215.emplace_back("emma");
item_215.emplace_back("application/emma+xml");
mime.
emplace_back(item_215);

vector <string> item_216;
item_216.emplace_back("emz");
item_216.emplace_back("application/x-msmetafile");
mime.
emplace_back(item_216);

vector <string> item_217;
item_217.emplace_back("eol");
item_217.emplace_back("audio/vnd.digital-winds");
mime.
emplace_back(item_217);

vector <string> item_218;
item_218.emplace_back("eot");
item_218.emplace_back("application/vnd.ms-fontobject");
mime.
emplace_back(item_218);

vector <string> item_219;
item_219.emplace_back("eps");
item_219.emplace_back("application/postscript");
mime.
emplace_back(item_219);

vector <string> item_220;
item_220.emplace_back("epub");
item_220.emplace_back("application/epub+zip");
mime.
emplace_back(item_220);

vector <string> item_221;
item_221.emplace_back("es3");
item_221.emplace_back("application/vnd.eszigno3+xml");
mime.
emplace_back(item_221);

vector <string> item_222;
item_222.emplace_back("esa");
item_222.emplace_back("application/vnd.osgi.subsystem");
mime.
emplace_back(item_222);

vector <string> item_223;
item_223.emplace_back("esf");
item_223.emplace_back("application/vnd.epson.esf");
mime.
emplace_back(item_223);

vector <string> item_224;
item_224.emplace_back("et3");
item_224.emplace_back("application/vnd.eszigno3+xml");
mime.
emplace_back(item_224);

vector <string> item_225;
item_225.emplace_back("etx");
item_225.emplace_back("text/x-setext");
mime.
emplace_back(item_225);

vector <string> item_226;
item_226.emplace_back("eva");
item_226.emplace_back("application/x-eva");
mime.
emplace_back(item_226);

vector <string> item_227;
item_227.emplace_back("evy");
item_227.emplace_back("application/x-envoy");
mime.
emplace_back(item_227);

vector <string> item_228;
item_228.emplace_back("exe");
item_228.emplace_back("application/octet-stream");
mime.
emplace_back(item_228);

vector <string> item_229;
item_229.emplace_back("exi");
item_229.emplace_back("application/exi");
mime.
emplace_back(item_229);

vector <string> item_230;
item_230.emplace_back("ext");
item_230.emplace_back("application/vnd.novadigm.ext");
mime.
emplace_back(item_230);

vector <string> item_231;
item_231.emplace_back("ez");
item_231.emplace_back("application/andrew-inset");
mime.
emplace_back(item_231);

vector <string> item_232;
item_232.emplace_back("ez2");
item_232.emplace_back("application/vnd.ezpix-album");
mime.
emplace_back(item_232);

vector <string> item_233;
item_233.emplace_back("ez3");
item_233.emplace_back("application/vnd.ezpix-package");
mime.
emplace_back(item_233);

vector <string> item_234;
item_234.emplace_back("f");
item_234.emplace_back("text/x-fortran");
mime.
emplace_back(item_234);

vector <string> item_235;
item_235.emplace_back("f4v");
item_235.emplace_back("video/x-f4v");
mime.
emplace_back(item_235);

vector <string> item_236;
item_236.emplace_back("f77");
item_236.emplace_back("text/x-fortran");
mime.
emplace_back(item_236);

vector <string> item_237;
item_237.emplace_back("f90");
item_237.emplace_back("text/x-fortran");
mime.
emplace_back(item_237);

vector <string> item_238;
item_238.emplace_back("fbs");
item_238.emplace_back("image/vnd.fastbidsheet");
mime.
emplace_back(item_238);

vector <string> item_239;
item_239.emplace_back("fcdt");
item_239.emplace_back("application/vnd.adobe.formscentral.fcdt");
mime.
emplace_back(item_239);

vector <string> item_240;
item_240.emplace_back("fcs");
item_240.emplace_back("application/vnd.isac.fcs");
mime.
emplace_back(item_240);

vector <string> item_241;
item_241.emplace_back("fdf");
item_241.emplace_back("application/vnd.fdf");
mime.
emplace_back(item_241);

vector <string> item_242;
item_242.emplace_back("fe_launch");
item_242.emplace_back("application/vnd.denovo.fcselayout-link");
mime.
emplace_back(item_242);

vector <string> item_243;
item_243.emplace_back("fg5");
item_243.emplace_back("application/vnd.fujitsu.oasysgp");
mime.
emplace_back(item_243);

vector <string> item_244;
item_244.emplace_back("fgd");
item_244.emplace_back("application/x-director");
mime.
emplace_back(item_244);

vector <string> item_245;
item_245.emplace_back("fh");
item_245.emplace_back("image/x-freehand");
mime.
emplace_back(item_245);

vector <string> item_246;
item_246.emplace_back("fh4");
item_246.emplace_back("image/x-freehand");
mime.
emplace_back(item_246);

vector <string> item_247;
item_247.emplace_back("fh5");
item_247.emplace_back("image/x-freehand");
mime.
emplace_back(item_247);

vector <string> item_248;
item_248.emplace_back("fh7");
item_248.emplace_back("image/x-freehand");
mime.
emplace_back(item_248);

vector <string> item_249;
item_249.emplace_back("fhc");
item_249.emplace_back("image/x-freehand");
mime.
emplace_back(item_249);

vector <string> item_250;
item_250.emplace_back("fig");
item_250.emplace_back("application/x-xfig");
mime.
emplace_back(item_250);

vector <string> item_251;
item_251.emplace_back("flac");
item_251.emplace_back("audio/flac");
mime.
emplace_back(item_251);

vector <string> item_252;
item_252.emplace_back("fli");
item_252.emplace_back("video/x-fli");
mime.
emplace_back(item_252);

vector <string> item_253;
item_253.emplace_back("flo");
item_253.emplace_back("application/vnd.micrografx.flo");
mime.
emplace_back(item_253);

vector <string> item_254;
item_254.emplace_back("flv");
item_254.emplace_back("video/x-flv");
mime.
emplace_back(item_254);

vector <string> item_255;
item_255.emplace_back("flw");
item_255.emplace_back("application/vnd.kde.kivio");
mime.
emplace_back(item_255);

vector <string> item_256;
item_256.emplace_back("flx");
item_256.emplace_back("text/vnd.fmi.flexstor");
mime.
emplace_back(item_256);

vector <string> item_257;
item_257.emplace_back("fly");
item_257.emplace_back("text/vnd.fly");
mime.
emplace_back(item_257);

vector <string> item_258;
item_258.emplace_back("fm");
item_258.emplace_back("application/vnd.framemaker");
mime.
emplace_back(item_258);

vector <string> item_259;
item_259.emplace_back("fnc");
item_259.emplace_back("application/vnd.frogans.fnc");
mime.
emplace_back(item_259);

vector <string> item_260;
item_260.emplace_back("for");
item_260.emplace_back("text/x-fortran");
mime.
emplace_back(item_260);

vector <string> item_261;
item_261.emplace_back("fpx");
item_261.emplace_back("image/vnd.fpx");
mime.
emplace_back(item_261);

vector <string> item_262;
item_262.emplace_back("frame");
item_262.emplace_back("application/vnd.framemaker");
mime.
emplace_back(item_262);

vector <string> item_263;
item_263.emplace_back("fsc");
item_263.emplace_back("application/vnd.fsc.weblaunch");
mime.
emplace_back(item_263);

vector <string> item_264;
item_264.emplace_back("fst");
item_264.emplace_back("image/vnd.fst");
mime.
emplace_back(item_264);

vector <string> item_265;
item_265.emplace_back("ftc");
item_265.emplace_back("application/vnd.fluxtime.clip");
mime.
emplace_back(item_265);

vector <string> item_266;
item_266.emplace_back("fti");
item_266.emplace_back("application/vnd.anser-web-funds-transfer-initiation");
mime.
emplace_back(item_266);

vector <string> item_267;
item_267.emplace_back("fvt");
item_267.emplace_back("video/vnd.fvt");
mime.
emplace_back(item_267);

vector <string> item_268;
item_268.emplace_back("fxp");
item_268.emplace_back("application/vnd.adobe.fxp");
mime.
emplace_back(item_268);

vector <string> item_269;
item_269.emplace_back("fxpl");
item_269.emplace_back("application/vnd.adobe.fxp");
mime.
emplace_back(item_269);

vector <string> item_270;
item_270.emplace_back("fzs");
item_270.emplace_back("application/vnd.fuzzysheet");
mime.
emplace_back(item_270);

vector <string> item_271;
item_271.emplace_back("g2w");
item_271.emplace_back("application/vnd.geoplan");
mime.
emplace_back(item_271);

vector <string> item_272;
item_272.emplace_back("g3");
item_272.emplace_back("image/g3fax");
mime.
emplace_back(item_272);

vector <string> item_273;
item_273.emplace_back("g3w");
item_273.emplace_back("application/vnd.geospace");
mime.
emplace_back(item_273);

vector <string> item_274;
item_274.emplace_back("gac");
item_274.emplace_back("application/vnd.groove-account");
mime.
emplace_back(item_274);

vector <string> item_275;
item_275.emplace_back("gam");
item_275.emplace_back("application/x-tads");
mime.
emplace_back(item_275);

vector <string> item_276;
item_276.emplace_back("gbr");
item_276.emplace_back("application/rpki-ghostbusters");
mime.
emplace_back(item_276);

vector <string> item_277;
item_277.emplace_back("gca");
item_277.emplace_back("application/x-gca-compressed");
mime.
emplace_back(item_277);

vector <string> item_278;
item_278.emplace_back("gdl");
item_278.emplace_back("model/vnd.gdl");
mime.
emplace_back(item_278);

vector <string> item_279;
item_279.emplace_back("geo");
item_279.emplace_back("application/vnd.dynageo");
mime.
emplace_back(item_279);

vector <string> item_280;
item_280.emplace_back("gex");
item_280.emplace_back("application/vnd.geometry-explorer");
mime.
emplace_back(item_280);

vector <string> item_281;
item_281.emplace_back("ggb");
item_281.emplace_back("application/vnd.geogebra.file");
mime.
emplace_back(item_281);

vector <string> item_282;
item_282.emplace_back("ggt");
item_282.emplace_back("application/vnd.geogebra.tool");
mime.
emplace_back(item_282);

vector <string> item_283;
item_283.emplace_back("ghf");
item_283.emplace_back("application/vnd.groove-help");
mime.
emplace_back(item_283);

vector <string> item_284;
item_284.emplace_back("gif");
item_284.emplace_back("image/gif");
mime.
emplace_back(item_284);

vector <string> item_285;
item_285.emplace_back("gim");
item_285.emplace_back("application/vnd.groove-identity-message");
mime.
emplace_back(item_285);

vector <string> item_286;
item_286.emplace_back("gml");
item_286.emplace_back("application/gml+xml");
mime.
emplace_back(item_286);

vector <string> item_287;
item_287.emplace_back("gmx");
item_287.emplace_back("application/vnd.gmx");
mime.
emplace_back(item_287);

vector <string> item_288;
item_288.emplace_back("gnumeric");
item_288.emplace_back("application/x-gnumeric");
mime.
emplace_back(item_288);

vector <string> item_289;
item_289.emplace_back("gph");
item_289.emplace_back("application/vnd.flographit");
mime.
emplace_back(item_289);

vector <string> item_290;
item_290.emplace_back("gpx");
item_290.emplace_back("application/gpx+xml");
mime.
emplace_back(item_290);

vector <string> item_291;
item_291.emplace_back("gqf");
item_291.emplace_back("application/vnd.grafeq");
mime.
emplace_back(item_291);

vector <string> item_292;
item_292.emplace_back("gqs");
item_292.emplace_back("application/vnd.grafeq");
mime.
emplace_back(item_292);

vector <string> item_293;
item_293.emplace_back("gram");
item_293.emplace_back("application/srgs");
mime.
emplace_back(item_293);

vector <string> item_294;
item_294.emplace_back("gramps");
item_294.emplace_back("application/x-gramps-xml");
mime.
emplace_back(item_294);

vector <string> item_295;
item_295.emplace_back("gre");
item_295.emplace_back("application/vnd.geometry-explorer");
mime.
emplace_back(item_295);

vector <string> item_296;
item_296.emplace_back("grv");
item_296.emplace_back("application/vnd.groove-injector");
mime.
emplace_back(item_296);

vector <string> item_297;
item_297.emplace_back("grxml");
item_297.emplace_back("application/srgs+xml");
mime.
emplace_back(item_297);

vector <string> item_298;
item_298.emplace_back("gsf");
item_298.emplace_back("application/x-font-ghostscript");
mime.
emplace_back(item_298);

vector <string> item_299;
item_299.emplace_back("gtar");
item_299.emplace_back("application/x-gtar");
mime.
emplace_back(item_299);

vector <string> item_300;
item_300.emplace_back("gtm");
item_300.emplace_back("application/vnd.groove-tool-message");
mime.
emplace_back(item_300);

vector <string> item_301;
item_301.emplace_back("gtw");
item_301.emplace_back("model/vnd.gtw");
mime.
emplace_back(item_301);

vector <string> item_302;
item_302.emplace_back("gv");
item_302.emplace_back("text/vnd.graphviz");
mime.
emplace_back(item_302);

vector <string> item_303;
item_303.emplace_back("gxf");
item_303.emplace_back("application/gxf");
mime.
emplace_back(item_303);

vector <string> item_304;
item_304.emplace_back("gxt");
item_304.emplace_back("application/vnd.geonext");
mime.
emplace_back(item_304);

vector <string> item_305;
item_305.emplace_back("gz");
item_305.emplace_back("application/x-gzip");
mime.
emplace_back(item_305);

vector <string> item_306;
item_306.emplace_back("h");
item_306.emplace_back("text/x-c");
mime.
emplace_back(item_306);

vector <string> item_307;
item_307.emplace_back("h261");
item_307.emplace_back("video/h261");
mime.
emplace_back(item_307);

vector <string> item_308;
item_308.emplace_back("h263");
item_308.emplace_back("video/h263");
mime.
emplace_back(item_308);

vector <string> item_309;
item_309.emplace_back("h264");
item_309.emplace_back("video/h264");
mime.
emplace_back(item_309);

vector <string> item_310;
item_310.emplace_back("hal");
item_310.emplace_back("application/vnd.hal+xml");
mime.
emplace_back(item_310);

vector <string> item_311;
item_311.emplace_back("hbci");
item_311.emplace_back("application/vnd.hbci");
mime.
emplace_back(item_311);

vector <string> item_312;
item_312.emplace_back("hdf");
item_312.emplace_back("application/x-hdf");
mime.
emplace_back(item_312);

vector <string> item_313;
item_313.emplace_back("hh");
item_313.emplace_back("text/x-c");
mime.
emplace_back(item_313);

vector <string> item_314;
item_314.emplace_back("hlp");
item_314.emplace_back("application/winhlp");
mime.
emplace_back(item_314);

vector <string> item_315;
item_315.emplace_back("hpgl");
item_315.emplace_back("application/vnd.hp-hpgl");
mime.
emplace_back(item_315);

vector <string> item_316;
item_316.emplace_back("hpid");
item_316.emplace_back("application/vnd.hp-hpid");
mime.
emplace_back(item_316);

vector <string> item_317;
item_317.emplace_back("hps");
item_317.emplace_back("application/vnd.hp-hps");
mime.
emplace_back(item_317);

vector <string> item_318;
item_318.emplace_back("hqx");
item_318.emplace_back("application/mac-binhex40");
mime.
emplace_back(item_318);

vector <string> item_319;
item_319.emplace_back("htc");
item_319.emplace_back("text/x-component");
mime.
emplace_back(item_319);

vector <string> item_320;
item_320.emplace_back("htke");
item_320.emplace_back("application/vnd.kenameaapp");
mime.
emplace_back(item_320);

vector <string> item_321;
item_321.emplace_back("htm");
item_321.emplace_back("text/html");
mime.
emplace_back(item_321);

vector <string> item_322;
item_322.emplace_back("html");
item_322.emplace_back("text/html");
mime.
emplace_back(item_322);

vector <string> item_323;
item_323.emplace_back("hvd");
item_323.emplace_back("application/vnd.yamaha.hv-dic");
mime.
emplace_back(item_323);

vector <string> item_324;
item_324.emplace_back("hvp");
item_324.emplace_back("application/vnd.yamaha.hv-voice");
mime.
emplace_back(item_324);

vector <string> item_325;
item_325.emplace_back("hvs");
item_325.emplace_back("application/vnd.yamaha.hv-script");
mime.
emplace_back(item_325);

vector <string> item_326;
item_326.emplace_back("i2g");
item_326.emplace_back("application/vnd.intergeo");
mime.
emplace_back(item_326);

vector <string> item_327;
item_327.emplace_back("icc");
item_327.emplace_back("application/vnd.iccprofile");
mime.
emplace_back(item_327);

vector <string> item_328;
item_328.emplace_back("ice");
item_328.emplace_back("x-conference/x-cooltalk");
mime.
emplace_back(item_328);

vector <string> item_329;
item_329.emplace_back("icm");
item_329.emplace_back("application/vnd.iccprofile");
mime.
emplace_back(item_329);

vector <string> item_330;
item_330.emplace_back("ico");
item_330.emplace_back("image/x-icon");
mime.
emplace_back(item_330);

vector <string> item_331;
item_331.emplace_back("ics");
item_331.emplace_back("text/calendar");
mime.
emplace_back(item_331);

vector <string> item_332;
item_332.emplace_back("ief");
item_332.emplace_back("image/ief");
mime.
emplace_back(item_332);

vector <string> item_333;
item_333.emplace_back("ifb");
item_333.emplace_back("text/calendar");
mime.
emplace_back(item_333);

vector <string> item_334;
item_334.emplace_back("ifm");
item_334.emplace_back("application/vnd.shana.informed.formdata");
mime.
emplace_back(item_334);

vector <string> item_335;
item_335.emplace_back("iges");
item_335.emplace_back("model/iges");
mime.
emplace_back(item_335);

vector <string> item_336;
item_336.emplace_back("igl");
item_336.emplace_back("application/vnd.igloader");
mime.
emplace_back(item_336);

vector <string> item_337;
item_337.emplace_back("igm");
item_337.emplace_back("application/vnd.insors.igm");
mime.
emplace_back(item_337);

vector <string> item_338;
item_338.emplace_back("igs");
item_338.emplace_back("model/iges");
mime.
emplace_back(item_338);

vector <string> item_339;
item_339.emplace_back("igx");
item_339.emplace_back("application/vnd.micrografx.igx");
mime.
emplace_back(item_339);

vector <string> item_340;
item_340.emplace_back("iif");
item_340.emplace_back("application/vnd.shana.informed.interchange");
mime.
emplace_back(item_340);

vector <string> item_341;
item_341.emplace_back("imp");
item_341.emplace_back("application/vnd.accpac.simply.imp");
mime.
emplace_back(item_341);

vector <string> item_342;
item_342.emplace_back("ims");
item_342.emplace_back("application/vnd.ms-ims");
mime.
emplace_back(item_342);

vector <string> item_343;
item_343.emplace_back("in");
item_343.emplace_back("text/plain");
mime.
emplace_back(item_343);

vector <string> item_344;
item_344.emplace_back("ink");
item_344.emplace_back("application/inkml+xml");
mime.
emplace_back(item_344);

vector <string> item_345;
item_345.emplace_back("inkml");
item_345.emplace_back("application/inkml+xml");
mime.
emplace_back(item_345);

vector <string> item_346;
item_346.emplace_back("install");
item_346.emplace_back("application/x-install-instructions");
mime.
emplace_back(item_346);

vector <string> item_347;
item_347.emplace_back("iota");
item_347.emplace_back("application/vnd.astraea-software.iota");
mime.
emplace_back(item_347);

vector <string> item_348;
item_348.emplace_back("ipfix");
item_348.emplace_back("application/ipfix");
mime.
emplace_back(item_348);

vector <string> item_349;
item_349.emplace_back("ipk");
item_349.emplace_back("application/vnd.shana.informed.package");
mime.
emplace_back(item_349);

vector <string> item_350;
item_350.emplace_back("irm");
item_350.emplace_back("application/vnd.ibm.rights-management");
mime.
emplace_back(item_350);

vector <string> item_351;
item_351.emplace_back("irp");
item_351.emplace_back("application/vnd.irepository.package+xml");
mime.
emplace_back(item_351);

vector <string> item_352;
item_352.emplace_back("iso");
item_352.emplace_back("application/x-iso9660-image");
mime.
emplace_back(item_352);

vector <string> item_353;
item_353.emplace_back("itp");
item_353.emplace_back("application/vnd.shana.informed.formtemplate");
mime.
emplace_back(item_353);

vector <string> item_354;
item_354.emplace_back("ivp");
item_354.emplace_back("application/vnd.immervision-ivp");
mime.
emplace_back(item_354);

vector <string> item_355;
item_355.emplace_back("ivu");
item_355.emplace_back("application/vnd.immervision-ivu");
mime.
emplace_back(item_355);

vector <string> item_356;
item_356.emplace_back("jad");
item_356.emplace_back("text/vnd.sun.j2me.app-descriptor");
mime.
emplace_back(item_356);

vector <string> item_357;
item_357.emplace_back("jam");
item_357.emplace_back("application/vnd.jam");
mime.
emplace_back(item_357);

vector <string> item_358;
item_358.emplace_back("jar");
item_358.emplace_back("application/java-archive");
mime.
emplace_back(item_358);

vector <string> item_359;
item_359.emplace_back("java");
item_359.emplace_back("text/x-java-source");
mime.
emplace_back(item_359);

vector <string> item_360;
item_360.emplace_back("jisp");
item_360.emplace_back("application/vnd.jisp");
mime.
emplace_back(item_360);

vector <string> item_361;
item_361.emplace_back("jlt");
item_361.emplace_back("application/vnd.hp-jlyt");
mime.
emplace_back(item_361);

vector <string> item_362;
item_362.emplace_back("jnlp");
item_362.emplace_back("application/x-java-jnlp-file");
mime.
emplace_back(item_362);

vector <string> item_363;
item_363.emplace_back("joda");
item_363.emplace_back("application/vnd.joost.joda-archive");
mime.
emplace_back(item_363);

vector <string> item_364;
item_364.emplace_back("jpe");
item_364.emplace_back("image/jpeg");
mime.
emplace_back(item_364);

vector <string> item_365;
item_365.emplace_back("jpeg");
item_365.emplace_back("image/jpeg");
mime.
emplace_back(item_365);

vector <string> item_366;
item_366.emplace_back("jpg");
item_366.emplace_back("image/jpeg");
mime.
emplace_back(item_366);

vector <string> item_367;
item_367.emplace_back("jpgm");
item_367.emplace_back("video/jpm");
mime.
emplace_back(item_367);

vector <string> item_368;
item_368.emplace_back("jpgv");
item_368.emplace_back("video/jpeg");
mime.
emplace_back(item_368);

vector <string> item_369;
item_369.emplace_back("jpm");
item_369.emplace_back("video/jpm");
mime.
emplace_back(item_369);

vector <string> item_370;
item_370.emplace_back("js");
item_370.emplace_back("application/javascript");
mime.
emplace_back(item_370);

vector <string> item_371;
item_371.emplace_back("jsf");
item_371.emplace_back("text/plain");
mime.
emplace_back(item_371);

vector <string> item_372;
item_372.emplace_back("json");
item_372.emplace_back("application/json");
mime.
emplace_back(item_372);

vector <string> item_373;
item_373.emplace_back("jsonml");
item_373.emplace_back("application/jsonml+json");
mime.
emplace_back(item_373);

vector <string> item_374;
item_374.emplace_back("jspf");
item_374.emplace_back("text/plain");
mime.
emplace_back(item_374);

vector <string> item_375;
item_375.emplace_back("kar");
item_375.emplace_back("audio/midi");
mime.
emplace_back(item_375);

vector <string> item_376;
item_376.emplace_back("karbon");
item_376.emplace_back("application/vnd.kde.karbon");
mime.
emplace_back(item_376);

vector <string> item_377;
item_377.emplace_back("kfo");
item_377.emplace_back("application/vnd.kde.kformula");
mime.
emplace_back(item_377);

vector <string> item_378;
item_378.emplace_back("kia");
item_378.emplace_back("application/vnd.kidspiration");
mime.
emplace_back(item_378);

vector <string> item_379;
item_379.emplace_back("kml");
item_379.emplace_back("application/vnd.google-earth.kml+xml");
mime.
emplace_back(item_379);

vector <string> item_380;
item_380.emplace_back("kmz");
item_380.emplace_back("application/vnd.google-earth.kmz");
mime.
emplace_back(item_380);

vector <string> item_381;
item_381.emplace_back("kne");
item_381.emplace_back("application/vnd.kinar");
mime.
emplace_back(item_381);

vector <string> item_382;
item_382.emplace_back("knp");
item_382.emplace_back("application/vnd.kinar");
mime.
emplace_back(item_382);

vector <string> item_383;
item_383.emplace_back("kon");
item_383.emplace_back("application/vnd.kde.kontour");
mime.
emplace_back(item_383);

vector <string> item_384;
item_384.emplace_back("kpr");
item_384.emplace_back("application/vnd.kde.kpresenter");
mime.
emplace_back(item_384);

vector <string> item_385;
item_385.emplace_back("kpt");
item_385.emplace_back("application/vnd.kde.kpresenter");
mime.
emplace_back(item_385);

vector <string> item_386;
item_386.emplace_back("kpxx");
item_386.emplace_back("application/vnd.ds-keypoint");
mime.
emplace_back(item_386);

vector <string> item_387;
item_387.emplace_back("ksp");
item_387.emplace_back("application/vnd.kde.kspread");
mime.
emplace_back(item_387);

vector <string> item_388;
item_388.emplace_back("ktr");
item_388.emplace_back("application/vnd.kahootz");
mime.
emplace_back(item_388);

vector <string> item_389;
item_389.emplace_back("ktx");
item_389.emplace_back("image/ktx");
mime.
emplace_back(item_389);

vector <string> item_390;
item_390.emplace_back("ktz");
item_390.emplace_back("application/vnd.kahootz");
mime.
emplace_back(item_390);

vector <string> item_391;
item_391.emplace_back("kwd");
item_391.emplace_back("application/vnd.kde.kword");
mime.
emplace_back(item_391);

vector <string> item_392;
item_392.emplace_back("kwt");
item_392.emplace_back("application/vnd.kde.kword");
mime.
emplace_back(item_392);

vector <string> item_393;
item_393.emplace_back("lasxml");
item_393.emplace_back("application/vnd.las.las+xml");
mime.
emplace_back(item_393);

vector <string> item_394;
item_394.emplace_back("latex");
item_394.emplace_back("application/x-latex");
mime.
emplace_back(item_394);

vector <string> item_395;
item_395.emplace_back("lbd");
item_395.emplace_back("application/vnd.llamagraphics.life-balance.desktop");
mime.
emplace_back(item_395);

vector <string> item_396;
item_396.emplace_back("lbe");
item_396.emplace_back(
"application/vnd.llamagraphics.life-balance.exchange+xml");
mime.
emplace_back(item_396);

vector <string> item_397;
item_397.emplace_back("les");
item_397.emplace_back("application/vnd.hhe.lesson-player");
mime.
emplace_back(item_397);

vector <string> item_398;
item_398.emplace_back("lha");
item_398.emplace_back("application/x-lzh-compressed");
mime.
emplace_back(item_398);

vector <string> item_399;
item_399.emplace_back("link66");
item_399.emplace_back("application/vnd.route66.link66+xml");
mime.
emplace_back(item_399);

vector <string> item_400;
item_400.emplace_back("list");
item_400.emplace_back("text/plain");
mime.
emplace_back(item_400);

vector <string> item_401;
item_401.emplace_back("list3820");
item_401.emplace_back("application/vnd.ibm.modcap");
mime.
emplace_back(item_401);

vector <string> item_402;
item_402.emplace_back("listafp");
item_402.emplace_back("application/vnd.ibm.modcap");
mime.
emplace_back(item_402);

vector <string> item_403;
item_403.emplace_back("lnk");
item_403.emplace_back("application/x-ms-shortcut");
mime.
emplace_back(item_403);

vector <string> item_404;
item_404.emplace_back("log");
item_404.emplace_back("text/plain");
mime.
emplace_back(item_404);

vector <string> item_405;
item_405.emplace_back("lostxml");
item_405.emplace_back("application/lost+xml");
mime.
emplace_back(item_405);

vector <string> item_406;
item_406.emplace_back("lrf");
item_406.emplace_back("application/octet-stream");
mime.
emplace_back(item_406);

vector <string> item_407;
item_407.emplace_back("lrm");
item_407.emplace_back("application/vnd.ms-lrm");
mime.
emplace_back(item_407);

vector <string> item_408;
item_408.emplace_back("ltf");
item_408.emplace_back("application/vnd.frogans.ltf");
mime.
emplace_back(item_408);

vector <string> item_409;
item_409.emplace_back("lvp");
item_409.emplace_back("audio/vnd.lucent.voice");
mime.
emplace_back(item_409);

vector <string> item_410;
item_410.emplace_back("lwp");
item_410.emplace_back("application/vnd.lotus-wordpro");
mime.
emplace_back(item_410);

vector <string> item_411;
item_411.emplace_back("lzh");
item_411.emplace_back("application/x-lzh-compressed");
mime.
emplace_back(item_411);

vector <string> item_412;
item_412.emplace_back("m13");
item_412.emplace_back("application/x-msmediaview");
mime.
emplace_back(item_412);

vector <string> item_413;
item_413.emplace_back("m14");
item_413.emplace_back("application/x-msmediaview");
mime.
emplace_back(item_413);

vector <string> item_414;
item_414.emplace_back("m1v");
item_414.emplace_back("video/mpeg");
mime.
emplace_back(item_414);

vector <string> item_415;
item_415.emplace_back("m21");
item_415.emplace_back("application/mp21");
mime.
emplace_back(item_415);

vector <string> item_416;
item_416.emplace_back("m2a");
item_416.emplace_back("audio/mpeg");
mime.
emplace_back(item_416);

vector <string> item_417;
item_417.emplace_back("m2v");
item_417.emplace_back("video/mpeg");
mime.
emplace_back(item_417);

vector <string> item_418;
item_418.emplace_back("m3a");
item_418.emplace_back("audio/mpeg");
mime.
emplace_back(item_418);

vector <string> item_419;
item_419.emplace_back("m3u");
item_419.emplace_back("audio/x-mpegurl");
mime.
emplace_back(item_419);

vector <string> item_420;
item_420.emplace_back("m3u8");
item_420.emplace_back("application/vnd.apple.mpegurl");
mime.
emplace_back(item_420);

vector <string> item_421;
item_421.emplace_back("m4a");
item_421.emplace_back("audio/mp4");
mime.
emplace_back(item_421);

vector <string> item_422;
item_422.emplace_back("m4b");
item_422.emplace_back("audio/mp4");
mime.
emplace_back(item_422);

vector <string> item_423;
item_423.emplace_back("m4r");
item_423.emplace_back("audio/mp4");
mime.
emplace_back(item_423);

vector <string> item_424;
item_424.emplace_back("m4u");
item_424.emplace_back("video/vnd.mpegurl");
mime.
emplace_back(item_424);

vector <string> item_425;
item_425.emplace_back("m4v");
item_425.emplace_back("video/mp4");
mime.
emplace_back(item_425);

vector <string> item_426;
item_426.emplace_back("ma");
item_426.emplace_back("application/mathematica");
mime.
emplace_back(item_426);

vector <string> item_427;
item_427.emplace_back("mac");
item_427.emplace_back("image/x-macpaint");
mime.
emplace_back(item_427);

vector <string> item_428;
item_428.emplace_back("mads");
item_428.emplace_back("application/mads+xml");
mime.
emplace_back(item_428);

vector <string> item_429;
item_429.emplace_back("mag");
item_429.emplace_back("application/vnd.ecowin.chart");
mime.
emplace_back(item_429);

vector <string> item_430;
item_430.emplace_back("maker");
item_430.emplace_back("application/vnd.framemaker");
mime.
emplace_back(item_430);

vector <string> item_431;
item_431.emplace_back("man");
item_431.emplace_back("text/troff");
mime.
emplace_back(item_431);

vector <string> item_432;
item_432.emplace_back("mar");
item_432.emplace_back("application/octet-stream");
mime.
emplace_back(item_432);

vector <string> item_433;
item_433.emplace_back("mathml");
item_433.emplace_back("application/mathml+xml");
mime.
emplace_back(item_433);

vector <string> item_434;
item_434.emplace_back("mb");
item_434.emplace_back("application/mathematica");
mime.
emplace_back(item_434);

vector <string> item_435;
item_435.emplace_back("mbk");
item_435.emplace_back("application/vnd.mobius.mbk");
mime.
emplace_back(item_435);

vector <string> item_436;
item_436.emplace_back("mbox");
item_436.emplace_back("application/mbox");
mime.
emplace_back(item_436);

vector <string> item_437;
item_437.emplace_back("mc1");
item_437.emplace_back("application/vnd.medcalcdata");
mime.
emplace_back(item_437);

vector <string> item_438;
item_438.emplace_back("mcd");
item_438.emplace_back("application/vnd.mcd");
mime.
emplace_back(item_438);

vector <string> item_439;
item_439.emplace_back("mcurl");
item_439.emplace_back("text/vnd.curl.mcurl");
mime.
emplace_back(item_439);

vector <string> item_440;
item_440.emplace_back("mdb");
item_440.emplace_back("application/x-msaccess");
mime.
emplace_back(item_440);

vector <string> item_441;
item_441.emplace_back("mdi");
item_441.emplace_back("image/vnd.ms-modi");
mime.
emplace_back(item_441);

vector <string> item_442;
item_442.emplace_back("me");
item_442.emplace_back("text/troff");
mime.
emplace_back(item_442);

vector <string> item_443;
item_443.emplace_back("mesh");
item_443.emplace_back("model/mesh");
mime.
emplace_back(item_443);

vector <string> item_444;
item_444.emplace_back("meta4");
item_444.emplace_back("application/metalink4+xml");
mime.
emplace_back(item_444);

vector <string> item_445;
item_445.emplace_back("metalink");
item_445.emplace_back("application/metalink+xml");
mime.
emplace_back(item_445);

vector <string> item_446;
item_446.emplace_back("mets");
item_446.emplace_back("application/mets+xml");
mime.
emplace_back(item_446);

vector <string> item_447;
item_447.emplace_back("mfm");
item_447.emplace_back("application/vnd.mfmp");
mime.
emplace_back(item_447);

vector <string> item_448;
item_448.emplace_back("mft");
item_448.emplace_back("application/rpki-manifest");
mime.
emplace_back(item_448);

vector <string> item_449;
item_449.emplace_back("mgp");
item_449.emplace_back("application/vnd.osgeo.mapguide.package");
mime.
emplace_back(item_449);

vector <string> item_450;
item_450.emplace_back("mgz");
item_450.emplace_back("application/vnd.proteus.magazine");
mime.
emplace_back(item_450);

vector <string> item_451;
item_451.emplace_back("mid");
item_451.emplace_back("audio/midi");
mime.
emplace_back(item_451);

vector <string> item_452;
item_452.emplace_back("midi");
item_452.emplace_back("audio/midi");
mime.
emplace_back(item_452);

vector <string> item_453;
item_453.emplace_back("mie");
item_453.emplace_back("application/x-mie");
mime.
emplace_back(item_453);

vector <string> item_454;
item_454.emplace_back("mif");
item_454.emplace_back("application/x-mif");
mime.
emplace_back(item_454);

vector <string> item_455;
item_455.emplace_back("mime");
item_455.emplace_back("message/rfc822");
mime.
emplace_back(item_455);

vector <string> item_456;
item_456.emplace_back("mj2");
item_456.emplace_back("video/mj2");
mime.
emplace_back(item_456);

vector <string> item_457;
item_457.emplace_back("mjp2");
item_457.emplace_back("video/mj2");
mime.
emplace_back(item_457);

vector <string> item_458;
item_458.emplace_back("mk3d");
item_458.emplace_back("video/x-matroska");
mime.
emplace_back(item_458);

vector <string> item_459;
item_459.emplace_back("mka");
item_459.emplace_back("audio/x-matroska");
mime.
emplace_back(item_459);

vector <string> item_460;
item_460.emplace_back("mks");
item_460.emplace_back("video/x-matroska");
mime.
emplace_back(item_460);

vector <string> item_461;
item_461.emplace_back("mkv");
item_461.emplace_back("video/x-matroska");
mime.
emplace_back(item_461);

vector <string> item_462;
item_462.emplace_back("mlp");
item_462.emplace_back("application/vnd.dolby.mlp");
mime.
emplace_back(item_462);

vector <string> item_463;
item_463.emplace_back("mmd");
item_463.emplace_back("application/vnd.chipnuts.karaoke-mmd");
mime.
emplace_back(item_463);

vector <string> item_464;
item_464.emplace_back("mmf");
item_464.emplace_back("application/vnd.smaf");
mime.
emplace_back(item_464);

vector <string> item_465;
item_465.emplace_back("mmr");
item_465.emplace_back("image/vnd.fujixerox.edmics-mmr");
mime.
emplace_back(item_465);

vector <string> item_466;
item_466.emplace_back("mng");
item_466.emplace_back("video/x-mng");
mime.
emplace_back(item_466);

vector <string> item_467;
item_467.emplace_back("mny");
item_467.emplace_back("application/x-msmoney");
mime.
emplace_back(item_467);

vector <string> item_468;
item_468.emplace_back("mobi");
item_468.emplace_back("application/x-mobipocket-ebook");
mime.
emplace_back(item_468);

vector <string> item_469;
item_469.emplace_back("mods");
item_469.emplace_back("application/mods+xml");
mime.
emplace_back(item_469);

vector <string> item_470;
item_470.emplace_back("mov");
item_470.emplace_back("video/quicktime");
mime.
emplace_back(item_470);

vector <string> item_471;
item_471.emplace_back("movie");
item_471.emplace_back("video/x-sgi-movie");
mime.
emplace_back(item_471);

vector <string> item_472;
item_472.emplace_back("mp1");
item_472.emplace_back("audio/mpeg");
mime.
emplace_back(item_472);

vector <string> item_473;
item_473.emplace_back("mp2");
item_473.emplace_back("audio/mpeg");
mime.
emplace_back(item_473);

vector <string> item_474;
item_474.emplace_back("mp21");
item_474.emplace_back("application/mp21");
mime.
emplace_back(item_474);

vector <string> item_475;
item_475.emplace_back("mp2a");
item_475.emplace_back("audio/mpeg");
mime.
emplace_back(item_475);

vector <string> item_476;
item_476.emplace_back("mp3");
item_476.emplace_back("audio/mpeg");
mime.
emplace_back(item_476);

vector <string> item_477;
item_477.emplace_back("mp4");
item_477.emplace_back("video/mp4");
mime.
emplace_back(item_477);

vector <string> item_478;
item_478.emplace_back("mp4a");
item_478.emplace_back("audio/mp4");
mime.
emplace_back(item_478);

vector <string> item_479;
item_479.emplace_back("mp4s");
item_479.emplace_back("application/mp4");
mime.
emplace_back(item_479);

vector <string> item_480;
item_480.emplace_back("mp4v");
item_480.emplace_back("video/mp4");
mime.
emplace_back(item_480);

vector <string> item_481;
item_481.emplace_back("mpa");
item_481.emplace_back("audio/mpeg");
mime.
emplace_back(item_481);

vector <string> item_482;
item_482.emplace_back("mpc");
item_482.emplace_back("application/vnd.mophun.certificate");
mime.
emplace_back(item_482);

vector <string> item_483;
item_483.emplace_back("mpe");
item_483.emplace_back("video/mpeg");
mime.
emplace_back(item_483);

vector <string> item_484;
item_484.emplace_back("mpeg");
item_484.emplace_back("video/mpeg");
mime.
emplace_back(item_484);

vector <string> item_485;
item_485.emplace_back("mpega");
item_485.emplace_back("audio/x-mpeg");
mime.
emplace_back(item_485);

vector <string> item_486;
item_486.emplace_back("mpg");
item_486.emplace_back("video/mpeg");
mime.
emplace_back(item_486);

vector <string> item_487;
item_487.emplace_back("mpg4");
item_487.emplace_back("video/mp4");
mime.
emplace_back(item_487);

vector <string> item_488;
item_488.emplace_back("mpga");
item_488.emplace_back("audio/mpeg");
mime.
emplace_back(item_488);

vector <string> item_489;
item_489.emplace_back("mpkg");
item_489.emplace_back("application/vnd.apple.installer+xml");
mime.
emplace_back(item_489);

vector <string> item_490;
item_490.emplace_back("mpm");
item_490.emplace_back("application/vnd.blueice.multipass");
mime.
emplace_back(item_490);

vector <string> item_491;
item_491.emplace_back("mpn");
item_491.emplace_back("application/vnd.mophun.application");
mime.
emplace_back(item_491);

vector <string> item_492;
item_492.emplace_back("mpp");
item_492.emplace_back("application/vnd.ms-project");
mime.
emplace_back(item_492);

vector <string> item_493;
item_493.emplace_back("mpt");
item_493.emplace_back("application/vnd.ms-project");
mime.
emplace_back(item_493);

vector <string> item_494;
item_494.emplace_back("mpv2");
item_494.emplace_back("video/mpeg2");
mime.
emplace_back(item_494);

vector <string> item_495;
item_495.emplace_back("mpy");
item_495.emplace_back("application/vnd.ibm.minipay");
mime.
emplace_back(item_495);

vector <string> item_496;
item_496.emplace_back("mqy");
item_496.emplace_back("application/vnd.mobius.mqy");
mime.
emplace_back(item_496);

vector <string> item_497;
item_497.emplace_back("mrc");
item_497.emplace_back("application/marc");
mime.
emplace_back(item_497);

vector <string> item_498;
item_498.emplace_back("mrcx");
item_498.emplace_back("application/marcxml+xml");
mime.
emplace_back(item_498);

vector <string> item_499;
item_499.emplace_back("ms");
item_499.emplace_back("text/troff");
mime.
emplace_back(item_499);

vector <string> item_500;
item_500.emplace_back("mscml");
item_500.emplace_back("application/mediaservercontrol+xml");
mime.
emplace_back(item_500);

vector <string> item_501;
item_501.emplace_back("mseed");
item_501.emplace_back("application/vnd.fdsn.mseed");
mime.
emplace_back(item_501);

vector <string> item_502;
item_502.emplace_back("mseq");
item_502.emplace_back("application/vnd.mseq");
mime.
emplace_back(item_502);

vector <string> item_503;
item_503.emplace_back("msf");
item_503.emplace_back("application/vnd.epson.msf");
mime.
emplace_back(item_503);

vector <string> item_504;
item_504.emplace_back("msh");
item_504.emplace_back("model/mesh");
mime.
emplace_back(item_504);

vector <string> item_505;
item_505.emplace_back("msi");
item_505.emplace_back("application/x-msdownload");
mime.
emplace_back(item_505);

vector <string> item_506;
item_506.emplace_back("msl");
item_506.emplace_back("application/vnd.mobius.msl");
mime.
emplace_back(item_506);

vector <string> item_507;
item_507.emplace_back("msty");
item_507.emplace_back("application/vnd.muvee.style");
mime.
emplace_back(item_507);

vector <string> item_508;
item_508.emplace_back("mts");
item_508.emplace_back("model/vnd.mts");
mime.
emplace_back(item_508);

vector <string> item_509;
item_509.emplace_back("mus");
item_509.emplace_back("application/vnd.musician");
mime.
emplace_back(item_509);

vector <string> item_510;
item_510.emplace_back("musicxml");
item_510.emplace_back("application/vnd.recordare.musicxml+xml");
mime.
emplace_back(item_510);

vector <string> item_511;
item_511.emplace_back("mvb");
item_511.emplace_back("application/x-msmediaview");
mime.
emplace_back(item_511);

vector <string> item_512;
item_512.emplace_back("mwf");
item_512.emplace_back("application/vnd.mfer");
mime.
emplace_back(item_512);

vector <string> item_513;
item_513.emplace_back("mxf");
item_513.emplace_back("application/mxf");
mime.
emplace_back(item_513);

vector <string> item_514;
item_514.emplace_back("mxl");
item_514.emplace_back("application/vnd.recordare.musicxml");
mime.
emplace_back(item_514);

vector <string> item_515;
item_515.emplace_back("mxml");
item_515.emplace_back("application/xv+xml");
mime.
emplace_back(item_515);

vector <string> item_516;
item_516.emplace_back("mxs");
item_516.emplace_back("application/vnd.triscape.mxs");
mime.
emplace_back(item_516);

vector <string> item_517;
item_517.emplace_back("mxu");
item_517.emplace_back("video/vnd.mpegurl");
mime.
emplace_back(item_517);

vector <string> item_518;
item_518.emplace_back("n-gage");
item_518.emplace_back("application/vnd.nokia.n-gage.symbian.install");
mime.
emplace_back(item_518);

vector <string> item_519;
item_519.emplace_back("n3");
item_519.emplace_back("text/n3");
mime.
emplace_back(item_519);

vector <string> item_520;
item_520.emplace_back("nb");
item_520.emplace_back("application/mathematica");
mime.
emplace_back(item_520);

vector <string> item_521;
item_521.emplace_back("nbp");
item_521.emplace_back("application/vnd.wolfram.player");
mime.
emplace_back(item_521);

vector <string> item_522;
item_522.emplace_back("nc");
item_522.emplace_back("application/x-netcdf");
mime.
emplace_back(item_522);

vector <string> item_523;
item_523.emplace_back("ncx");
item_523.emplace_back("application/x-dtbncx+xml");
mime.
emplace_back(item_523);

vector <string> item_524;
item_524.emplace_back("nfo");
item_524.emplace_back("text/x-nfo");
mime.
emplace_back(item_524);

vector <string> item_525;
item_525.emplace_back("ngdat");
item_525.emplace_back("application/vnd.nokia.n-gage.data");
mime.
emplace_back(item_525);

vector <string> item_526;
item_526.emplace_back("nitf");
item_526.emplace_back("application/vnd.nitf");
mime.
emplace_back(item_526);

vector <string> item_527;
item_527.emplace_back("nlu");
item_527.emplace_back("application/vnd.neurolanguage.nlu");
mime.
emplace_back(item_527);

vector <string> item_528;
item_528.emplace_back("nml");
item_528.emplace_back("application/vnd.enliven");
mime.
emplace_back(item_528);

vector <string> item_529;
item_529.emplace_back("nnd");
item_529.emplace_back("application/vnd.noblenet-directory");
mime.
emplace_back(item_529);

vector <string> item_530;
item_530.emplace_back("nns");
item_530.emplace_back("application/vnd.noblenet-sealer");
mime.
emplace_back(item_530);

vector <string> item_531;
item_531.emplace_back("nnw");
item_531.emplace_back("application/vnd.noblenet-web");
mime.
emplace_back(item_531);

vector <string> item_532;
item_532.emplace_back("npx");
item_532.emplace_back("image/vnd.net-fpx");
mime.
emplace_back(item_532);

vector <string> item_533;
item_533.emplace_back("nsc");
item_533.emplace_back("application/x-conference");
mime.
emplace_back(item_533);

vector <string> item_534;
item_534.emplace_back("nsf");
item_534.emplace_back("application/vnd.lotus-notes");
mime.
emplace_back(item_534);

vector <string> item_535;
item_535.emplace_back("ntf");
item_535.emplace_back("application/vnd.nitf");
mime.
emplace_back(item_535);

vector <string> item_536;
item_536.emplace_back("nzb");
item_536.emplace_back("application/x-nzb");
mime.
emplace_back(item_536);

vector <string> item_537;
item_537.emplace_back("oa2");
item_537.emplace_back("application/vnd.fujitsu.oasys2");
mime.
emplace_back(item_537);

vector <string> item_538;
item_538.emplace_back("oa3");
item_538.emplace_back("application/vnd.fujitsu.oasys3");
mime.
emplace_back(item_538);

vector <string> item_539;
item_539.emplace_back("oas");
item_539.emplace_back("application/vnd.fujitsu.oasys");
mime.
emplace_back(item_539);

vector <string> item_540;
item_540.emplace_back("obd");
item_540.emplace_back("application/x-msbinder");
mime.
emplace_back(item_540);

vector <string> item_541;
item_541.emplace_back("obj");
item_541.emplace_back("application/x-tgif");
mime.
emplace_back(item_541);

vector <string> item_542;
item_542.emplace_back("oda");
item_542.emplace_back("application/oda");
mime.
emplace_back(item_542);

vector <string> item_543;
item_543.emplace_back("odb");
item_543.emplace_back("application/vnd.oasis.opendocument.database");
mime.
emplace_back(item_543);

vector <string> item_544;
item_544.emplace_back("odc");
item_544.emplace_back("application/vnd.oasis.opendocument.chart");
mime.
emplace_back(item_544);

vector <string> item_545;
item_545.emplace_back("odf");
item_545.emplace_back("application/vnd.oasis.opendocument.formula");
mime.
emplace_back(item_545);

vector <string> item_546;
item_546.emplace_back("odft");
item_546.emplace_back("application/vnd.oasis.opendocument.formula-template");
mime.
emplace_back(item_546);

vector <string> item_547;
item_547.emplace_back("odg");
item_547.emplace_back("application/vnd.oasis.opendocument.graphics");
mime.
emplace_back(item_547);

vector <string> item_548;
item_548.emplace_back("odi");
item_548.emplace_back("application/vnd.oasis.opendocument.image");
mime.
emplace_back(item_548);

vector <string> item_549;
item_549.emplace_back("odm");
item_549.emplace_back("application/vnd.oasis.opendocument.text-master");
mime.
emplace_back(item_549);

vector <string> item_550;
item_550.emplace_back("odp");
item_550.emplace_back("application/vnd.oasis.opendocument.presentation");
mime.
emplace_back(item_550);

vector <string> item_551;
item_551.emplace_back("ods");
item_551.emplace_back("application/vnd.oasis.opendocument.spreadsheet");
mime.
emplace_back(item_551);

vector <string> item_552;
item_552.emplace_back("odt");
item_552.emplace_back("application/vnd.oasis.opendocument.text");
mime.
emplace_back(item_552);

vector <string> item_553;
item_553.emplace_back("oga");
item_553.emplace_back("audio/ogg");
mime.
emplace_back(item_553);

vector <string> item_554;
item_554.emplace_back("ogg");
item_554.emplace_back("audio/ogg");
mime.
emplace_back(item_554);

vector <string> item_555;
item_555.emplace_back("ogv");
item_555.emplace_back("video/ogg");
mime.
emplace_back(item_555);

vector <string> item_556;
item_556.emplace_back("ogx");
item_556.emplace_back("application/ogg");
mime.
emplace_back(item_556);

vector <string> item_557;
item_557.emplace_back("omdoc");
item_557.emplace_back("application/omdoc+xml");
mime.
emplace_back(item_557);

vector <string> item_558;
item_558.emplace_back("onepkg");
item_558.emplace_back("application/onenote");
mime.
emplace_back(item_558);

vector <string> item_559;
item_559.emplace_back("onetmp");
item_559.emplace_back("application/onenote");
mime.
emplace_back(item_559);

vector <string> item_560;
item_560.emplace_back("onetoc");
item_560.emplace_back("application/onenote");
mime.
emplace_back(item_560);

vector <string> item_561;
item_561.emplace_back("onetoc2");
item_561.emplace_back("application/onenote");
mime.
emplace_back(item_561);

vector <string> item_562;
item_562.emplace_back("opf");
item_562.emplace_back("application/oebps-package+xml");
mime.
emplace_back(item_562);

vector <string> item_563;
item_563.emplace_back("opml");
item_563.emplace_back("text/x-opml");
mime.
emplace_back(item_563);

vector <string> item_564;
item_564.emplace_back("oprc");
item_564.emplace_back("application/vnd.palm");
mime.
emplace_back(item_564);

vector <string> item_565;
item_565.emplace_back("org");
item_565.emplace_back("application/vnd.lotus-organizer");
mime.
emplace_back(item_565);

vector <string> item_566;
item_566.emplace_back("osf");
item_566.emplace_back("application/vnd.yamaha.openscoreformat");
mime.
emplace_back(item_566);

vector <string> item_567;
item_567.emplace_back("osfpvg");
item_567.emplace_back("application/vnd.yamaha.openscoreformat.osfpvg+xml");
mime.
emplace_back(item_567);

vector <string> item_568;
item_568.emplace_back("otc");
item_568.emplace_back("application/vnd.oasis.opendocument.chart-template");
mime.
emplace_back(item_568);

vector <string> item_569;
item_569.emplace_back("otf");
item_569.emplace_back("font/otf");
mime.
emplace_back(item_569);

vector <string> item_570;
item_570.emplace_back("otg");
item_570.emplace_back("application/vnd.oasis.opendocument.graphics-template");
mime.
emplace_back(item_570);

vector <string> item_571;
item_571.emplace_back("oth");
item_571.emplace_back("application/vnd.oasis.opendocument.text-web");
mime.
emplace_back(item_571);

vector <string> item_572;
item_572.emplace_back("oti");
item_572.emplace_back("application/vnd.oasis.opendocument.image-template");
mime.
emplace_back(item_572);

vector <string> item_573;
item_573.emplace_back("otp");
item_573.emplace_back(
"application/vnd.oasis.opendocument.presentation-template");
mime.
emplace_back(item_573);

vector <string> item_574;
item_574.emplace_back("ots");
item_574.emplace_back(
"application/vnd.oasis.opendocument.spreadsheet-template");
mime.
emplace_back(item_574);

vector <string> item_575;
item_575.emplace_back("ott");
item_575.emplace_back("application/vnd.oasis.opendocument.text-template");
mime.
emplace_back(item_575);

vector <string> item_576;
item_576.emplace_back("oxps");
item_576.emplace_back("application/oxps");
mime.
emplace_back(item_576);

vector <string> item_577;
item_577.emplace_back("oxt");
item_577.emplace_back("application/vnd.openofficeorg.extension");
mime.
emplace_back(item_577);

vector <string> item_578;
item_578.emplace_back("p");
item_578.emplace_back("text/x-pascal");
mime.
emplace_back(item_578);

vector <string> item_579;
item_579.emplace_back("p10");
item_579.emplace_back("application/pkcs10");
mime.
emplace_back(item_579);

vector <string> item_580;
item_580.emplace_back("p12");
item_580.emplace_back("application/x-pkcs12");
mime.
emplace_back(item_580);

vector <string> item_581;
item_581.emplace_back("p7b");
item_581.emplace_back("application/x-pkcs7-certificates");
mime.
emplace_back(item_581);

vector <string> item_582;
item_582.emplace_back("p7c");
item_582.emplace_back("application/pkcs7-mime");
mime.
emplace_back(item_582);

vector <string> item_583;
item_583.emplace_back("p7m");
item_583.emplace_back("application/pkcs7-mime");
mime.
emplace_back(item_583);

vector <string> item_584;
item_584.emplace_back("p7r");
item_584.emplace_back("application/x-pkcs7-certreqresp");
mime.
emplace_back(item_584);

vector <string> item_585;
item_585.emplace_back("p7s");
item_585.emplace_back("application/pkcs7-signature");
mime.
emplace_back(item_585);

vector <string> item_586;
item_586.emplace_back("p8");
item_586.emplace_back("application/pkcs8");
mime.
emplace_back(item_586);

vector <string> item_587;
item_587.emplace_back("pas");
item_587.emplace_back("text/x-pascal");
mime.
emplace_back(item_587);

vector <string> item_588;
item_588.emplace_back("paw");
item_588.emplace_back("application/vnd.pawaafile");
mime.
emplace_back(item_588);

vector <string> item_589;
item_589.emplace_back("pbd");
item_589.emplace_back("application/vnd.powerbuilder6");
mime.
emplace_back(item_589);

vector <string> item_590;
item_590.emplace_back("pbm");
item_590.emplace_back("image/x-portable-bitmap");
mime.
emplace_back(item_590);

vector <string> item_591;
item_591.emplace_back("pcap");
item_591.emplace_back("application/vnd.tcpdump.pcap");
mime.
emplace_back(item_591);

vector <string> item_592;
item_592.emplace_back("pcf");
item_592.emplace_back("application/x-font-pcf");
mime.
emplace_back(item_592);

vector <string> item_593;
item_593.emplace_back("pcl");
item_593.emplace_back("application/vnd.hp-pcl");
mime.
emplace_back(item_593);

vector <string> item_594;
item_594.emplace_back("pclxl");
item_594.emplace_back("application/vnd.hp-pclxl");
mime.
emplace_back(item_594);

vector <string> item_595;
item_595.emplace_back("pct");
item_595.emplace_back("image/pict");
mime.
emplace_back(item_595);

vector <string> item_596;
item_596.emplace_back("pcurl");
item_596.emplace_back("application/vnd.curl.pcurl");
mime.
emplace_back(item_596);

vector <string> item_597;
item_597.emplace_back("pcx");
item_597.emplace_back("image/x-pcx");
mime.
emplace_back(item_597);

vector <string> item_598;
item_598.emplace_back("pdb");
item_598.emplace_back("application/vnd.palm");
mime.
emplace_back(item_598);

vector <string> item_599;
item_599.emplace_back("pdf");
item_599.emplace_back("application/pdf");
mime.
emplace_back(item_599);

vector <string> item_600;
item_600.emplace_back("pfa");
item_600.emplace_back("application/x-font-type1");
mime.
emplace_back(item_600);

vector <string> item_601;
item_601.emplace_back("pfb");
item_601.emplace_back("application/x-font-type1");
mime.
emplace_back(item_601);

vector <string> item_602;
item_602.emplace_back("pfm");
item_602.emplace_back("application/x-font-type1");
mime.
emplace_back(item_602);

vector <string> item_603;
item_603.emplace_back("pfr");
item_603.emplace_back("application/font-tdpfr");
mime.
emplace_back(item_603);

vector <string> item_604;
item_604.emplace_back("pfx");
item_604.emplace_back("application/x-pkcs12");
mime.
emplace_back(item_604);

vector <string> item_605;
item_605.emplace_back("pgm");
item_605.emplace_back("image/x-portable-graymap");
mime.
emplace_back(item_605);

vector <string> item_606;
item_606.emplace_back("pgn");
item_606.emplace_back("application/x-chess-pgn");
mime.
emplace_back(item_606);

vector <string> item_607;
item_607.emplace_back("pgp");
item_607.emplace_back("application/pgp-encrypted");
mime.
emplace_back(item_607);

vector <string> item_608;
item_608.emplace_back("pic");
item_608.emplace_back("image/pict");
mime.
emplace_back(item_608);

vector <string> item_609;
item_609.emplace_back("pict");
item_609.emplace_back("image/pict");
mime.
emplace_back(item_609);

vector <string> item_610;
item_610.emplace_back("pkg");
item_610.emplace_back("application/octet-stream");
mime.
emplace_back(item_610);

vector <string> item_611;
item_611.emplace_back("pki");
item_611.emplace_back("application/pkixcmp");
mime.
emplace_back(item_611);

vector <string> item_612;
item_612.emplace_back("pkipath");
item_612.emplace_back("application/pkix-pkipath");
mime.
emplace_back(item_612);

vector <string> item_613;
item_613.emplace_back("plb");
item_613.emplace_back("application/vnd.3gpp.pic-bw-large");
mime.
emplace_back(item_613);

vector <string> item_614;
item_614.emplace_back("plc");
item_614.emplace_back("application/vnd.mobius.plc");
mime.
emplace_back(item_614);

vector <string> item_615;
item_615.emplace_back("plf");
item_615.emplace_back("application/vnd.pocketlearn");
mime.
emplace_back(item_615);

vector <string> item_616;
item_616.emplace_back("pls");
item_616.emplace_back("audio/x-scpls");
mime.
emplace_back(item_616);

vector <string> item_617;
item_617.emplace_back("pml");
item_617.emplace_back("application/vnd.ctc-posml");
mime.
emplace_back(item_617);

vector <string> item_618;
item_618.emplace_back("png");
item_618.emplace_back("image/png");
mime.
emplace_back(item_618);

vector <string> item_619;
item_619.emplace_back("pnm");
item_619.emplace_back("image/x-portable-anymap");
mime.
emplace_back(item_619);

vector <string> item_620;
item_620.emplace_back("pnt");
item_620.emplace_back("image/x-macpaint");
mime.
emplace_back(item_620);

vector <string> item_621;
item_621.emplace_back("portpkg");
item_621.emplace_back("application/vnd.macports.portpkg");
mime.
emplace_back(item_621);

vector <string> item_622;
item_622.emplace_back("pot");
item_622.emplace_back("application/vnd.ms-powerpoint");
mime.
emplace_back(item_622);

vector <string> item_623;
item_623.emplace_back("potm");
item_623.emplace_back(
"application/vnd.ms-powerpoint.template.macroenabled.12");
mime.
emplace_back(item_623);

vector <string> item_624;
item_624.emplace_back("potx");
item_624.emplace_back(
"application/"
"vnd.openxmlformats-officedocument.presentationml.template");
mime.
emplace_back(item_624);

vector <string> item_625;
item_625.emplace_back("ppam");
item_625.emplace_back("application/vnd.ms-powerpoint.addin.macroenabled.12");
mime.
emplace_back(item_625);

vector <string> item_626;
item_626.emplace_back("ppd");
item_626.emplace_back("application/vnd.cups-ppd");
mime.
emplace_back(item_626);

vector <string> item_627;
item_627.emplace_back("ppm");
item_627.emplace_back("image/x-portable-pixmap");
mime.
emplace_back(item_627);

vector <string> item_628;
item_628.emplace_back("pps");
item_628.emplace_back("application/vnd.ms-powerpoint");
mime.
emplace_back(item_628);

vector <string> item_629;
item_629.emplace_back("ppsm");
item_629.emplace_back(
"application/vnd.ms-powerpoint.slideshow.macroenabled.12");
mime.
emplace_back(item_629);

vector <string> item_630;
item_630.emplace_back("ppsx");
item_630.emplace_back(
"application/"
"vnd.openxmlformats-officedocument.presentationml.slideshow");
mime.
emplace_back(item_630);

vector <string> item_631;
item_631.emplace_back("ppt");
item_631.emplace_back("application/vnd.ms-powerpoint");
mime.
emplace_back(item_631);

vector <string> item_632;
item_632.emplace_back("pptm");
item_632.emplace_back(
"application/vnd.ms-powerpoint.presentation.macroenabled.12");
mime.
emplace_back(item_632);

vector <string> item_633;
item_633.emplace_back("pptx");
item_633.emplace_back(
"application/"
"vnd.openxmlformats-officedocument.presentationml.presentation");
mime.
emplace_back(item_633);

vector <string> item_634;
item_634.emplace_back("pqa");
item_634.emplace_back("application/vnd.palm");
mime.
emplace_back(item_634);

vector <string> item_635;
item_635.emplace_back("prc");
item_635.emplace_back("application/x-mobipocket-ebook");
mime.
emplace_back(item_635);

vector <string> item_636;
item_636.emplace_back("pre");
item_636.emplace_back("application/vnd.lotus-freelance");
mime.
emplace_back(item_636);

vector <string> item_637;
item_637.emplace_back("prf");
item_637.emplace_back("application/pics-rules");
mime.
emplace_back(item_637);

vector <string> item_638;
item_638.emplace_back("ps");
item_638.emplace_back("application/postscript");
mime.
emplace_back(item_638);

vector <string> item_639;
item_639.emplace_back("psb");
item_639.emplace_back("application/vnd.3gpp.pic-bw-small");
mime.
emplace_back(item_639);

vector <string> item_640;
item_640.emplace_back("psd");
item_640.emplace_back("image/vnd.adobe.photoshop");
mime.
emplace_back(item_640);

vector <string> item_641;
item_641.emplace_back("psf");
item_641.emplace_back("application/x-font-linux-psf");
mime.
emplace_back(item_641);

vector <string> item_642;
item_642.emplace_back("pskcxml");
item_642.emplace_back("application/pskc+xml");
mime.
emplace_back(item_642);

vector <string> item_643;
item_643.emplace_back("ptid");
item_643.emplace_back("application/vnd.pvi.ptid1");
mime.
emplace_back(item_643);

vector <string> item_644;
item_644.emplace_back("pub");
item_644.emplace_back("application/x-mspublisher");
mime.
emplace_back(item_644);

vector <string> item_645;
item_645.emplace_back("pvb");
item_645.emplace_back("application/vnd.3gpp.pic-bw-var");
mime.
emplace_back(item_645);

vector <string> item_646;
item_646.emplace_back("pwn");
item_646.emplace_back("application/vnd.3m.post-it-notes");
mime.
emplace_back(item_646);

vector <string> item_647;
item_647.emplace_back("pya");
item_647.emplace_back("audio/vnd.ms-playready.media.pya");
mime.
emplace_back(item_647);

vector <string> item_648;
item_648.emplace_back("pyv");
item_648.emplace_back("video/vnd.ms-playready.media.pyv");
mime.
emplace_back(item_648);

vector <string> item_649;
item_649.emplace_back("qam");
item_649.emplace_back("application/vnd.epson.quickanime");
mime.
emplace_back(item_649);

vector <string> item_650;
item_650.emplace_back("qbo");
item_650.emplace_back("application/vnd.intu.qbo");
mime.
emplace_back(item_650);

vector <string> item_651;
item_651.emplace_back("qfx");
item_651.emplace_back("application/vnd.intu.qfx");
mime.
emplace_back(item_651);

vector <string> item_652;
item_652.emplace_back("qps");
item_652.emplace_back("application/vnd.publishare-delta-tree");
mime.
emplace_back(item_652);

vector <string> item_653;
item_653.emplace_back("qt");
item_653.emplace_back("video/quicktime");
mime.
emplace_back(item_653);

vector <string> item_654;
item_654.emplace_back("qti");
item_654.emplace_back("image/x-quicktime");
mime.
emplace_back(item_654);

vector <string> item_655;
item_655.emplace_back("qtif");
item_655.emplace_back("image/x-quicktime");
mime.
emplace_back(item_655);

vector <string> item_656;
item_656.emplace_back("qwd");
item_656.emplace_back("application/vnd.quark.quarkxpress");
mime.
emplace_back(item_656);

vector <string> item_657;
item_657.emplace_back("qwt");
item_657.emplace_back("application/vnd.quark.quarkxpress");
mime.
emplace_back(item_657);

vector <string> item_658;
item_658.emplace_back("qxb");
item_658.emplace_back("application/vnd.quark.quarkxpress");
mime.
emplace_back(item_658);

vector <string> item_659;
item_659.emplace_back("qxd");
item_659.emplace_back("application/vnd.quark.quarkxpress");
mime.
emplace_back(item_659);

vector <string> item_660;
item_660.emplace_back("qxl");
item_660.emplace_back("application/vnd.quark.quarkxpress");
mime.
emplace_back(item_660);

vector <string> item_661;
item_661.emplace_back("qxt");
item_661.emplace_back("application/vnd.quark.quarkxpress");
mime.
emplace_back(item_661);

vector <string> item_662;
item_662.emplace_back("ra");
item_662.emplace_back("audio/x-pn-realaudio");
mime.
emplace_back(item_662);

vector <string> item_663;
item_663.emplace_back("ram");
item_663.emplace_back("audio/x-pn-realaudio");
mime.
emplace_back(item_663);

vector <string> item_664;
item_664.emplace_back("rar");
item_664.emplace_back("application/x-rar-compressed");
mime.
emplace_back(item_664);

vector <string> item_665;
item_665.emplace_back("ras");
item_665.emplace_back("image/x-cmu-raster");
mime.
emplace_back(item_665);

vector <string> item_666;
item_666.emplace_back("rcprofile");
item_666.emplace_back("application/vnd.ipunplugged.rcprofile");
mime.
emplace_back(item_666);

vector <string> item_667;
item_667.emplace_back("rdf");
item_667.emplace_back("application/rdf+xml");
mime.
emplace_back(item_667);

vector <string> item_668;
item_668.emplace_back("rdz");
item_668.emplace_back("application/vnd.data-vision.rdz");
mime.
emplace_back(item_668);

vector <string> item_669;
item_669.emplace_back("rep");
item_669.emplace_back("application/vnd.businessobjects");
mime.
emplace_back(item_669);

vector <string> item_670;
item_670.emplace_back("res");
item_670.emplace_back("application/x-dtbresource+xml");
mime.
emplace_back(item_670);

vector <string> item_671;
item_671.emplace_back("rgb");
item_671.emplace_back("image/x-rgb");
mime.
emplace_back(item_671);

vector <string> item_672;
item_672.emplace_back("rif");
item_672.emplace_back("application/reginfo+xml");
mime.
emplace_back(item_672);

vector <string> item_673;
item_673.emplace_back("rip");
item_673.emplace_back("audio/vnd.rip");
mime.
emplace_back(item_673);

vector <string> item_674;
item_674.emplace_back("ris");
item_674.emplace_back("application/x-research-info-systems");
mime.
emplace_back(item_674);

vector <string> item_675;
item_675.emplace_back("rl");
item_675.emplace_back("application/resource-lists+xml");
mime.
emplace_back(item_675);

vector <string> item_676;
item_676.emplace_back("rlc");
item_676.emplace_back("image/vnd.fujixerox.edmics-rlc");
mime.
emplace_back(item_676);

vector <string> item_677;
item_677.emplace_back("rld");
item_677.emplace_back("application/resource-lists-diff+xml");
mime.
emplace_back(item_677);

vector <string> item_678;
item_678.emplace_back("rm");
item_678.emplace_back("application/vnd.rn-realmedia");
mime.
emplace_back(item_678);

vector <string> item_679;
item_679.emplace_back("rmi");
item_679.emplace_back("audio/midi");
mime.
emplace_back(item_679);

vector <string> item_680;
item_680.emplace_back("rmp");
item_680.emplace_back("audio/x-pn-realaudio-plugin");
mime.
emplace_back(item_680);

vector <string> item_681;
item_681.emplace_back("rms");
item_681.emplace_back("application/vnd.jcp.javame.midlet-rms");
mime.
emplace_back(item_681);

vector <string> item_682;
item_682.emplace_back("rmvb");
item_682.emplace_back("application/vnd.rn-realmedia-vbr");
mime.
emplace_back(item_682);

vector <string> item_683;
item_683.emplace_back("rnc");
item_683.emplace_back("application/relax-ng-compact-syntax");
mime.
emplace_back(item_683);

vector <string> item_684;
item_684.emplace_back("roa");
item_684.emplace_back("application/rpki-roa");
mime.
emplace_back(item_684);

vector <string> item_685;
item_685.emplace_back("roff");
item_685.emplace_back("text/troff");
mime.
emplace_back(item_685);

vector <string> item_686;
item_686.emplace_back("rp9");
item_686.emplace_back("application/vnd.cloanto.rp9");
mime.
emplace_back(item_686);

vector <string> item_687;
item_687.emplace_back("rpss");
item_687.emplace_back("application/vnd.nokia.radio-presets");
mime.
emplace_back(item_687);

vector <string> item_688;
item_688.emplace_back("rpst");
item_688.emplace_back("application/vnd.nokia.radio-preset");
mime.
emplace_back(item_688);

vector <string> item_689;
item_689.emplace_back("rq");
item_689.emplace_back("application/sparql-query");
mime.
emplace_back(item_689);

vector <string> item_690;
item_690.emplace_back("rs");
item_690.emplace_back("application/rls-services+xml");
mime.
emplace_back(item_690);

vector <string> item_691;
item_691.emplace_back("rsd");
item_691.emplace_back("application/rsd+xml");
mime.
emplace_back(item_691);

vector <string> item_692;
item_692.emplace_back("rss");
item_692.emplace_back("application/rss+xml");
mime.
emplace_back(item_692);

vector <string> item_693;
item_693.emplace_back("rtf");
item_693.emplace_back("application/rtf");
mime.
emplace_back(item_693);

vector <string> item_694;
item_694.emplace_back("rtx");
item_694.emplace_back("text/richtext");
mime.
emplace_back(item_694);

vector <string> item_695;
item_695.emplace_back("s");
item_695.emplace_back("text/x-asm");
mime.
emplace_back(item_695);

vector <string> item_696;
item_696.emplace_back("s3m");
item_696.emplace_back("audio/s3m");
mime.
emplace_back(item_696);

vector <string> item_697;
item_697.emplace_back("saf");
item_697.emplace_back("application/vnd.yamaha.smaf-audio");
mime.
emplace_back(item_697);

vector <string> item_698;
item_698.emplace_back("sbml");
item_698.emplace_back("application/sbml+xml");
mime.
emplace_back(item_698);

vector <string> item_699;
item_699.emplace_back("sc");
item_699.emplace_back("application/vnd.ibm.secure-container");
mime.
emplace_back(item_699);

vector <string> item_700;
item_700.emplace_back("scd");
item_700.emplace_back("application/x-msschedule");
mime.
emplace_back(item_700);

vector <string> item_701;
item_701.emplace_back("scm");
item_701.emplace_back("application/vnd.lotus-screencam");
mime.
emplace_back(item_701);

vector <string> item_702;
item_702.emplace_back("scq");
item_702.emplace_back("application/scvp-cv-request");
mime.
emplace_back(item_702);

vector <string> item_703;
item_703.emplace_back("scs");
item_703.emplace_back("application/scvp-cv-response");
mime.
emplace_back(item_703);

vector <string> item_704;
item_704.emplace_back("scurl");
item_704.emplace_back("text/vnd.curl.scurl");
mime.
emplace_back(item_704);

vector <string> item_705;
item_705.emplace_back("sda");
item_705.emplace_back("application/vnd.stardivision.draw");
mime.
emplace_back(item_705);

vector <string> item_706;
item_706.emplace_back("sdc");
item_706.emplace_back("application/vnd.stardivision.calc");
mime.
emplace_back(item_706);

vector <string> item_707;
item_707.emplace_back("sdd");
item_707.emplace_back("application/vnd.stardivision.impress");
mime.
emplace_back(item_707);

vector <string> item_708;
item_708.emplace_back("sdkd");
item_708.emplace_back("application/vnd.solent.sdkm+xml");
mime.
emplace_back(item_708);

vector <string> item_709;
item_709.emplace_back("sdkm");
item_709.emplace_back("application/vnd.solent.sdkm+xml");
mime.
emplace_back(item_709);

vector <string> item_710;
item_710.emplace_back("sdp");
item_710.emplace_back("application/sdp");
mime.
emplace_back(item_710);

vector <string> item_711;
item_711.emplace_back("sdw");
item_711.emplace_back("application/vnd.stardivision.writer");
mime.
emplace_back(item_711);

vector <string> item_712;
item_712.emplace_back("see");
item_712.emplace_back("application/vnd.seemail");
mime.
emplace_back(item_712);

vector <string> item_713;
item_713.emplace_back("seed");
item_713.emplace_back("application/vnd.fdsn.seed");
mime.
emplace_back(item_713);

vector <string> item_714;
item_714.emplace_back("sema");
item_714.emplace_back("application/vnd.sema");
mime.
emplace_back(item_714);

vector <string> item_715;
item_715.emplace_back("semd");
item_715.emplace_back("application/vnd.semd");
mime.
emplace_back(item_715);

vector <string> item_716;
item_716.emplace_back("semf");
item_716.emplace_back("application/vnd.semf");
mime.
emplace_back(item_716);

vector <string> item_717;
item_717.emplace_back("ser");
item_717.emplace_back("application/java-serialized-object");
mime.
emplace_back(item_717);

vector <string> item_718;
item_718.emplace_back("setpay");
item_718.emplace_back("application/set-payment-initiation");
mime.
emplace_back(item_718);

vector <string> item_719;
item_719.emplace_back("setreg");
item_719.emplace_back("application/set-registration-initiation");
mime.
emplace_back(item_719);

vector <string> item_720;
item_720.emplace_back("sfd-hdstx");
item_720.emplace_back("application/vnd.hydrostatix.sof-data");
mime.
emplace_back(item_720);

vector <string> item_721;
item_721.emplace_back("sfs");
item_721.emplace_back("application/vnd.spotfire.sfs");
mime.
emplace_back(item_721);

vector <string> item_722;
item_722.emplace_back("sfv");
item_722.emplace_back("text/x-sfv");
mime.
emplace_back(item_722);

vector <string> item_723;
item_723.emplace_back("sgi");
item_723.emplace_back("image/sgi");
mime.
emplace_back(item_723);

vector <string> item_724;
item_724.emplace_back("sgl");
item_724.emplace_back("application/vnd.stardivision.writer-global");
mime.
emplace_back(item_724);

vector <string> item_725;
item_725.emplace_back("sgm");
item_725.emplace_back("text/sgml");
mime.
emplace_back(item_725);

vector <string> item_726;
item_726.emplace_back("sgml");
item_726.emplace_back("text/sgml");
mime.
emplace_back(item_726);

vector <string> item_727;
item_727.emplace_back("sh");
item_727.emplace_back("application/x-sh");
mime.
emplace_back(item_727);

vector <string> item_728;
item_728.emplace_back("shar");
item_728.emplace_back("application/x-shar");
mime.
emplace_back(item_728);

vector <string> item_729;
item_729.emplace_back("shf");
item_729.emplace_back("application/shf+xml");
mime.
emplace_back(item_729);

vector <string> item_730;
item_730.emplace_back("sid");
item_730.emplace_back("image/x-mrsid-image");
mime.
emplace_back(item_730);

vector <string> item_731;
item_731.emplace_back("sig");
item_731.emplace_back("application/pgp-signature");
mime.
emplace_back(item_731);

vector <string> item_732;
item_732.emplace_back("sil");
item_732.emplace_back("audio/silk");
mime.
emplace_back(item_732);

vector <string> item_733;
item_733.emplace_back("silo");
item_733.emplace_back("model/mesh");
mime.
emplace_back(item_733);

vector <string> item_734;
item_734.emplace_back("sis");
item_734.emplace_back("application/vnd.symbian.install");
mime.
emplace_back(item_734);

vector <string> item_735;
item_735.emplace_back("sisx");
item_735.emplace_back("application/vnd.symbian.install");
mime.
emplace_back(item_735);

vector <string> item_736;
item_736.emplace_back("sit");
item_736.emplace_back("application/x-stuffit");
mime.
emplace_back(item_736);

vector <string> item_737;
item_737.emplace_back("sitx");
item_737.emplace_back("application/x-stuffitx");
mime.
emplace_back(item_737);

vector <string> item_738;
item_738.emplace_back("skd");
item_738.emplace_back("application/vnd.koan");
mime.
emplace_back(item_738);

vector <string> item_739;
item_739.emplace_back("skm");
item_739.emplace_back("application/vnd.koan");
mime.
emplace_back(item_739);

vector <string> item_740;
item_740.emplace_back("skp");
item_740.emplace_back("application/vnd.koan");
mime.
emplace_back(item_740);

vector <string> item_741;
item_741.emplace_back("skt");
item_741.emplace_back("application/vnd.koan");
mime.
emplace_back(item_741);

vector <string> item_742;
item_742.emplace_back("sldm");
item_742.emplace_back("application/vnd.ms-powerpoint.slide.macroenabled.12");
mime.
emplace_back(item_742);

vector <string> item_743;
item_743.emplace_back("sldx");
item_743.emplace_back(
"application/vnd.openxmlformats-officedocument.presentationml.slide");
mime.
emplace_back(item_743);

vector <string> item_744;
item_744.emplace_back("slt");
item_744.emplace_back("application/vnd.epson.salt");
mime.
emplace_back(item_744);

vector <string> item_745;
item_745.emplace_back("sm");
item_745.emplace_back("application/vnd.stepmania.stepchart");
mime.
emplace_back(item_745);

vector <string> item_746;
item_746.emplace_back("smf");
item_746.emplace_back("application/vnd.stardivision.math");
mime.
emplace_back(item_746);

vector <string> item_747;
item_747.emplace_back("smi");
item_747.emplace_back("application/smil+xml");
mime.
emplace_back(item_747);

vector <string> item_748;
item_748.emplace_back("smil");
item_748.emplace_back("application/smil+xml");
mime.
emplace_back(item_748);

vector <string> item_749;
item_749.emplace_back("smv");
item_749.emplace_back("video/x-smv");
mime.
emplace_back(item_749);

vector <string> item_750;
item_750.emplace_back("smzip");
item_750.emplace_back("application/vnd.stepmania.package");
mime.
emplace_back(item_750);

vector <string> item_751;
item_751.emplace_back("snd");
item_751.emplace_back("audio/basic");
mime.
emplace_back(item_751);

vector <string> item_752;
item_752.emplace_back("snf");
item_752.emplace_back("application/x-font-snf");
mime.
emplace_back(item_752);

vector <string> item_753;
item_753.emplace_back("so");
item_753.emplace_back("application/octet-stream");
mime.
emplace_back(item_753);

vector <string> item_754;
item_754.emplace_back("spc");
item_754.emplace_back("application/x-pkcs7-certificates");
mime.
emplace_back(item_754);

vector <string> item_755;
item_755.emplace_back("spf");
item_755.emplace_back("application/vnd.yamaha.smaf-phrase");
mime.
emplace_back(item_755);

vector <string> item_756;
item_756.emplace_back("spl");
item_756.emplace_back("application/x-futuresplash");
mime.
emplace_back(item_756);

vector <string> item_757;
item_757.emplace_back("spot");
item_757.emplace_back("text/vnd.in3d.spot");
mime.
emplace_back(item_757);

vector <string> item_758;
item_758.emplace_back("spp");
item_758.emplace_back("application/scvp-vp-response");
mime.
emplace_back(item_758);

vector <string> item_759;
item_759.emplace_back("spq");
item_759.emplace_back("application/scvp-vp-request");
mime.
emplace_back(item_759);

vector <string> item_760;
item_760.emplace_back("spx");
item_760.emplace_back("audio/ogg");
mime.
emplace_back(item_760);

vector <string> item_761;
item_761.emplace_back("sql");
item_761.emplace_back("application/x-sql");
mime.
emplace_back(item_761);

vector <string> item_762;
item_762.emplace_back("src");
item_762.emplace_back("application/x-wais-source");
mime.
emplace_back(item_762);

vector <string> item_763;
item_763.emplace_back("srt");
item_763.emplace_back("application/x-subrip");
mime.
emplace_back(item_763);

vector <string> item_764;
item_764.emplace_back("sru");
item_764.emplace_back("application/sru+xml");
mime.
emplace_back(item_764);

vector <string> item_765;
item_765.emplace_back("srx");
item_765.emplace_back("application/sparql-results+xml");
mime.
emplace_back(item_765);

vector <string> item_766;
item_766.emplace_back("ssdl");
item_766.emplace_back("application/ssdl+xml");
mime.
emplace_back(item_766);

vector <string> item_767;
item_767.emplace_back("sse");
item_767.emplace_back("application/vnd.kodak-descriptor");
mime.
emplace_back(item_767);

vector <string> item_768;
item_768.emplace_back("ssf");
item_768.emplace_back("application/vnd.epson.ssf");
mime.
emplace_back(item_768);

vector <string> item_769;
item_769.emplace_back("ssml");
item_769.emplace_back("application/ssml+xml");
mime.
emplace_back(item_769);

vector <string> item_770;
item_770.emplace_back("st");
item_770.emplace_back("application/vnd.sailingtracker.track");
mime.
emplace_back(item_770);

vector <string> item_771;
item_771.emplace_back("stc");
item_771.emplace_back("application/vnd.sun.xml.calc.template");
mime.
emplace_back(item_771);

vector <string> item_772;
item_772.emplace_back("std");
item_772.emplace_back("application/vnd.sun.xml.draw.template");
mime.
emplace_back(item_772);

vector <string> item_773;
item_773.emplace_back("stf");
item_773.emplace_back("application/vnd.wt.stf");
mime.
emplace_back(item_773);

vector <string> item_774;
item_774.emplace_back("sti");
item_774.emplace_back("application/vnd.sun.xml.impress.template");
mime.
emplace_back(item_774);

vector <string> item_775;
item_775.emplace_back("stk");
item_775.emplace_back("application/hyperstudio");
mime.
emplace_back(item_775);

vector <string> item_776;
item_776.emplace_back("stl");
item_776.emplace_back("application/vnd.ms-pki.stl");
mime.
emplace_back(item_776);

vector <string> item_777;
item_777.emplace_back("str");
item_777.emplace_back("application/vnd.pg.format");
mime.
emplace_back(item_777);

vector <string> item_778;
item_778.emplace_back("stw");
item_778.emplace_back("application/vnd.sun.xml.writer.template");
mime.
emplace_back(item_778);

vector <string> item_779;
item_779.emplace_back("sub");
item_779.emplace_back("text/vnd.dvb.subtitle");
mime.
emplace_back(item_779);

vector <string> item_780;
item_780.emplace_back("sus");
item_780.emplace_back("application/vnd.sus-calendar");
mime.
emplace_back(item_780);

vector <string> item_781;
item_781.emplace_back("susp");
item_781.emplace_back("application/vnd.sus-calendar");
mime.
emplace_back(item_781);

vector <string> item_782;
item_782.emplace_back("sv4cpio");
item_782.emplace_back("application/x-sv4cpio");
mime.
emplace_back(item_782);

vector <string> item_783;
item_783.emplace_back("sv4crc");
item_783.emplace_back("application/x-sv4crc");
mime.
emplace_back(item_783);

vector <string> item_784;
item_784.emplace_back("svc");
item_784.emplace_back("application/vnd.dvb.service");
mime.
emplace_back(item_784);

vector <string> item_785;
item_785.emplace_back("svd");
item_785.emplace_back("application/vnd.svd");
mime.
emplace_back(item_785);

vector <string> item_786;
item_786.emplace_back("svg");
item_786.emplace_back("image/svg+xml");
mime.
emplace_back(item_786);

vector <string> item_787;
item_787.emplace_back("svgz");
item_787.emplace_back("image/svg+xml");
mime.
emplace_back(item_787);

vector <string> item_788;
item_788.emplace_back("swa");
item_788.emplace_back("application/x-director");
mime.
emplace_back(item_788);

vector <string> item_789;
item_789.emplace_back("swf");
item_789.emplace_back("application/x-shockwave-flash");
mime.
emplace_back(item_789);

vector <string> item_790;
item_790.emplace_back("swi");
item_790.emplace_back("application/vnd.aristanetworks.swi");
mime.
emplace_back(item_790);

vector <string> item_791;
item_791.emplace_back("sxc");
item_791.emplace_back("application/vnd.sun.xml.calc");
mime.
emplace_back(item_791);

vector <string> item_792;
item_792.emplace_back("sxd");
item_792.emplace_back("application/vnd.sun.xml.draw");
mime.
emplace_back(item_792);

vector <string> item_793;
item_793.emplace_back("sxg");
item_793.emplace_back("application/vnd.sun.xml.writer.global");
mime.
emplace_back(item_793);

vector <string> item_794;
item_794.emplace_back("sxi");
item_794.emplace_back("application/vnd.sun.xml.impress");
mime.
emplace_back(item_794);

vector <string> item_795;
item_795.emplace_back("sxm");
item_795.emplace_back("application/vnd.sun.xml.math");
mime.
emplace_back(item_795);

vector <string> item_796;
item_796.emplace_back("sxw");
item_796.emplace_back("application/vnd.sun.xml.writer");
mime.
emplace_back(item_796);

vector <string> item_797;
item_797.emplace_back("t");
item_797.emplace_back("text/troff");
mime.
emplace_back(item_797);

vector <string> item_798;
item_798.emplace_back("t3");
item_798.emplace_back("application/x-t3vm-image");
mime.
emplace_back(item_798);

vector <string> item_799;
item_799.emplace_back("taglet");
item_799.emplace_back("application/vnd.mynfc");
mime.
emplace_back(item_799);

vector <string> item_800;
item_800.emplace_back("tao");
item_800.emplace_back("application/vnd.tao.intent-module-archive");
mime.
emplace_back(item_800);

vector <string> item_801;
item_801.emplace_back("tar");
item_801.emplace_back("application/x-tar");
mime.
emplace_back(item_801);

vector <string> item_802;
item_802.emplace_back("tcap");
item_802.emplace_back("application/vnd.3gpp2.tcap");
mime.
emplace_back(item_802);

vector <string> item_803;
item_803.emplace_back("tcl");
item_803.emplace_back("application/x-tcl");
mime.
emplace_back(item_803);

vector <string> item_804;
item_804.emplace_back("teacher");
item_804.emplace_back("application/vnd.smart.teacher");
mime.
emplace_back(item_804);

vector <string> item_805;
item_805.emplace_back("tei");
item_805.emplace_back("application/tei+xml");
mime.
emplace_back(item_805);

vector <string> item_806;
item_806.emplace_back("teicorpus");
item_806.emplace_back("application/tei+xml");
mime.
emplace_back(item_806);

vector <string> item_807;
item_807.emplace_back("tex");
item_807.emplace_back("application/x-tex");
mime.
emplace_back(item_807);

vector <string> item_808;
item_808.emplace_back("texi");
item_808.emplace_back("application/x-texinfo");
mime.
emplace_back(item_808);

vector <string> item_809;
item_809.emplace_back("texinfo");
item_809.emplace_back("application/x-texinfo");
mime.
emplace_back(item_809);

vector <string> item_810;
item_810.emplace_back("text");
item_810.emplace_back("text/plain");
mime.
emplace_back(item_810);

vector <string> item_811;
item_811.emplace_back("tfi");
item_811.emplace_back("application/thraud+xml");
mime.
emplace_back(item_811);

vector <string> item_812;
item_812.emplace_back("tfm");
item_812.emplace_back("application/x-tex-tfm");
mime.
emplace_back(item_812);

vector <string> item_813;
item_813.emplace_back("tga");
item_813.emplace_back("image/x-tga");
mime.
emplace_back(item_813);

vector <string> item_814;
item_814.emplace_back("thmx");
item_814.emplace_back("application/vnd.ms-officetheme");
mime.
emplace_back(item_814);

vector <string> item_815;
item_815.emplace_back("tif");
item_815.emplace_back("image/tiff");
mime.
emplace_back(item_815);

vector <string> item_816;
item_816.emplace_back("tiff");
item_816.emplace_back("image/tiff");
mime.
emplace_back(item_816);

vector <string> item_817;
item_817.emplace_back("tmo");
item_817.emplace_back("application/vnd.tmobile-livetv");
mime.
emplace_back(item_817);

vector <string> item_818;
item_818.emplace_back("torrent");
item_818.emplace_back("application/x-bittorrent");
mime.
emplace_back(item_818);

vector <string> item_819;
item_819.emplace_back("tpl");
item_819.emplace_back("application/vnd.groove-tool-template");
mime.
emplace_back(item_819);

vector <string> item_820;
item_820.emplace_back("tpt");
item_820.emplace_back("application/vnd.trid.tpt");
mime.
emplace_back(item_820);

vector <string> item_821;
item_821.emplace_back("tr");
item_821.emplace_back("text/troff");
mime.
emplace_back(item_821);

vector <string> item_822;
item_822.emplace_back("tra");
item_822.emplace_back("application/vnd.trueapp");
mime.
emplace_back(item_822);

vector <string> item_823;
item_823.emplace_back("trm");
item_823.emplace_back("application/x-msterminal");
mime.
emplace_back(item_823);

vector <string> item_824;
item_824.emplace_back("tsd");
item_824.emplace_back("application/timestamped-data");
mime.
emplace_back(item_824);

vector <string> item_825;
item_825.emplace_back("tsv");
item_825.emplace_back("text/tab-separated-values");
mime.
emplace_back(item_825);

vector <string> item_826;
item_826.emplace_back("ttc");
item_826.emplace_back("font/collection");
mime.
emplace_back(item_826);

vector <string> item_827;
item_827.emplace_back("ttf");
item_827.emplace_back("font/ttf");
mime.
emplace_back(item_827);

vector <string> item_828;
item_828.emplace_back("ttl");
item_828.emplace_back("text/turtle");
mime.
emplace_back(item_828);

vector <string> item_829;
item_829.emplace_back("twd");
item_829.emplace_back("application/vnd.simtech-mindmapper");
mime.
emplace_back(item_829);

vector <string> item_830;
item_830.emplace_back("twds");
item_830.emplace_back("application/vnd.simtech-mindmapper");
mime.
emplace_back(item_830);

vector <string> item_831;
item_831.emplace_back("txd");
item_831.emplace_back("application/vnd.genomatix.tuxedo");
mime.
emplace_back(item_831);

vector <string> item_832;
item_832.emplace_back("txf");
item_832.emplace_back("application/vnd.mobius.txf");
mime.
emplace_back(item_832);

vector <string> item_833;
item_833.emplace_back("txt");
item_833.emplace_back("text/plain");
mime.
emplace_back(item_833);

vector <string> item_834;
item_834.emplace_back("u32");
item_834.emplace_back("application/x-authorware-bin");
mime.
emplace_back(item_834);

vector <string> item_835;
item_835.emplace_back("udeb");
item_835.emplace_back("application/x-debian-package");
mime.
emplace_back(item_835);

vector <string> item_836;
item_836.emplace_back("ufd");
item_836.emplace_back("application/vnd.ufdl");
mime.
emplace_back(item_836);

vector <string> item_837;
item_837.emplace_back("ufdl");
item_837.emplace_back("application/vnd.ufdl");
mime.
emplace_back(item_837);

vector <string> item_838;
item_838.emplace_back("ulw");
item_838.emplace_back("audio/basic");
mime.
emplace_back(item_838);

vector <string> item_839;
item_839.emplace_back("ulx");
item_839.emplace_back("application/x-glulx");
mime.
emplace_back(item_839);

vector <string> item_840;
item_840.emplace_back("umj");
item_840.emplace_back("application/vnd.umajin");
mime.
emplace_back(item_840);

vector <string> item_841;
item_841.emplace_back("unityweb");
item_841.emplace_back("application/vnd.unity");
mime.
emplace_back(item_841);

vector <string> item_842;
item_842.emplace_back("uoml");
item_842.emplace_back("application/vnd.uoml+xml");
mime.
emplace_back(item_842);

vector <string> item_843;
item_843.emplace_back("uri");
item_843.emplace_back("text/uri-list");
mime.
emplace_back(item_843);

vector <string> item_844;
item_844.emplace_back("uris");
item_844.emplace_back("text/uri-list");
mime.
emplace_back(item_844);

vector <string> item_845;
item_845.emplace_back("urls");
item_845.emplace_back("text/uri-list");
mime.
emplace_back(item_845);

vector <string> item_846;
item_846.emplace_back("ustar");
item_846.emplace_back("application/x-ustar");
mime.
emplace_back(item_846);

vector <string> item_847;
item_847.emplace_back("utz");
item_847.emplace_back("application/vnd.uiq.theme");
mime.
emplace_back(item_847);

vector <string> item_848;
item_848.emplace_back("uu");
item_848.emplace_back("text/x-uuencode");
mime.
emplace_back(item_848);

vector <string> item_849;
item_849.emplace_back("uva");
item_849.emplace_back("audio/vnd.dece.audio");
mime.
emplace_back(item_849);

vector <string> item_850;
item_850.emplace_back("uvd");
item_850.emplace_back("application/vnd.dece.data");
mime.
emplace_back(item_850);

vector <string> item_851;
item_851.emplace_back("uvf");
item_851.emplace_back("application/vnd.dece.data");
mime.
emplace_back(item_851);

vector <string> item_852;
item_852.emplace_back("uvg");
item_852.emplace_back("image/vnd.dece.graphic");
mime.
emplace_back(item_852);

vector <string> item_853;
item_853.emplace_back("uvh");
item_853.emplace_back("video/vnd.dece.hd");
mime.
emplace_back(item_853);

vector <string> item_854;
item_854.emplace_back("uvi");
item_854.emplace_back("image/vnd.dece.graphic");
mime.
emplace_back(item_854);

vector <string> item_855;
item_855.emplace_back("uvm");
item_855.emplace_back("video/vnd.dece.mobile");
mime.
emplace_back(item_855);

vector <string> item_856;
item_856.emplace_back("uvp");
item_856.emplace_back("video/vnd.dece.pd");
mime.
emplace_back(item_856);

vector <string> item_857;
item_857.emplace_back("uvs");
item_857.emplace_back("video/vnd.dece.sd");
mime.
emplace_back(item_857);

vector <string> item_858;
item_858.emplace_back("uvt");
item_858.emplace_back("application/vnd.dece.ttml+xml");
mime.
emplace_back(item_858);

vector <string> item_859;
item_859.emplace_back("uvu");
item_859.emplace_back("video/vnd.uvvu.mp4");
mime.
emplace_back(item_859);

vector <string> item_860;
item_860.emplace_back("uvv");
item_860.emplace_back("video/vnd.dece.video");
mime.
emplace_back(item_860);

vector <string> item_861;
item_861.emplace_back("uvva");
item_861.emplace_back("audio/vnd.dece.audio");
mime.
emplace_back(item_861);

vector <string> item_862;
item_862.emplace_back("uvvd");
item_862.emplace_back("application/vnd.dece.data");
mime.
emplace_back(item_862);

vector <string> item_863;
item_863.emplace_back("uvvf");
item_863.emplace_back("application/vnd.dece.data");
mime.
emplace_back(item_863);

vector <string> item_864;
item_864.emplace_back("uvvg");
item_864.emplace_back("image/vnd.dece.graphic");
mime.
emplace_back(item_864);

vector <string> item_865;
item_865.emplace_back("uvvh");
item_865.emplace_back("video/vnd.dece.hd");
mime.
emplace_back(item_865);

vector <string> item_866;
item_866.emplace_back("uvvi");
item_866.emplace_back("image/vnd.dece.graphic");
mime.
emplace_back(item_866);

vector <string> item_867;
item_867.emplace_back("uvvm");
item_867.emplace_back("video/vnd.dece.mobile");
mime.
emplace_back(item_867);

vector <string> item_868;
item_868.emplace_back("uvvp");
item_868.emplace_back("video/vnd.dece.pd");
mime.
emplace_back(item_868);

vector <string> item_869;
item_869.emplace_back("uvvs");
item_869.emplace_back("video/vnd.dece.sd");
mime.
emplace_back(item_869);

vector <string> item_870;
item_870.emplace_back("uvvt");
item_870.emplace_back("application/vnd.dece.ttml+xml");
mime.
emplace_back(item_870);

vector <string> item_871;
item_871.emplace_back("uvvu");
item_871.emplace_back("video/vnd.uvvu.mp4");
mime.
emplace_back(item_871);

vector <string> item_872;
item_872.emplace_back("uvvv");
item_872.emplace_back("video/vnd.dece.video");
mime.
emplace_back(item_872);

vector <string> item_873;
item_873.emplace_back("uvvx");
item_873.emplace_back("application/vnd.dece.unspecified");
mime.
emplace_back(item_873);

vector <string> item_874;
item_874.emplace_back("uvvz");
item_874.emplace_back("application/vnd.dece.zip");
mime.
emplace_back(item_874);

vector <string> item_875;
item_875.emplace_back("uvx");
item_875.emplace_back("application/vnd.dece.unspecified");
mime.
emplace_back(item_875);

vector <string> item_876;
item_876.emplace_back("uvz");
item_876.emplace_back("application/vnd.dece.zip");
mime.
emplace_back(item_876);

vector <string> item_877;
item_877.emplace_back("vcard");
item_877.emplace_back("text/vcard");
mime.
emplace_back(item_877);

vector <string> item_878;
item_878.emplace_back("vcd");
item_878.emplace_back("application/x-cdlink");
mime.
emplace_back(item_878);

vector <string> item_879;
item_879.emplace_back("vcf");
item_879.emplace_back("text/x-vcard");
mime.
emplace_back(item_879);

vector <string> item_880;
item_880.emplace_back("vcg");
item_880.emplace_back("application/vnd.groove-vcard");
mime.
emplace_back(item_880);

vector <string> item_881;
item_881.emplace_back("vcs");
item_881.emplace_back("text/x-vcalendar");
mime.
emplace_back(item_881);

vector <string> item_882;
item_882.emplace_back("vcx");
item_882.emplace_back("application/vnd.vcx");
mime.
emplace_back(item_882);

vector <string> item_883;
item_883.emplace_back("vis");
item_883.emplace_back("application/vnd.visionary");
mime.
emplace_back(item_883);

vector <string> item_884;
item_884.emplace_back("viv");
item_884.emplace_back("video/vnd.vivo");
mime.
emplace_back(item_884);

vector <string> item_885;
item_885.emplace_back("vob");
item_885.emplace_back("video/x-ms-vob");
mime.
emplace_back(item_885);

vector <string> item_886;
item_886.emplace_back("vor");
item_886.emplace_back("application/vnd.stardivision.writer");
mime.
emplace_back(item_886);

vector <string> item_887;
item_887.emplace_back("vox");
item_887.emplace_back("application/x-authorware-bin");
mime.
emplace_back(item_887);

vector <string> item_888;
item_888.emplace_back("vrml");
item_888.emplace_back("model/vrml");
mime.
emplace_back(item_888);

vector <string> item_889;
item_889.emplace_back("vsd");
item_889.emplace_back("application/vnd.visio");
mime.
emplace_back(item_889);

vector <string> item_890;
item_890.emplace_back("vsf");
item_890.emplace_back("application/vnd.vsf");
mime.
emplace_back(item_890);

vector <string> item_891;
item_891.emplace_back("vss");
item_891.emplace_back("application/vnd.visio");
mime.
emplace_back(item_891);

vector <string> item_892;
item_892.emplace_back("vst");
item_892.emplace_back("application/vnd.visio");
mime.
emplace_back(item_892);

vector <string> item_893;
item_893.emplace_back("vsw");
item_893.emplace_back("application/vnd.visio");
mime.
emplace_back(item_893);

vector <string> item_894;
item_894.emplace_back("vtu");
item_894.emplace_back("model/vnd.vtu");
mime.
emplace_back(item_894);

vector <string> item_895;
item_895.emplace_back("vxml");
item_895.emplace_back("application/voicexml+xml");
mime.
emplace_back(item_895);

vector <string> item_896;
item_896.emplace_back("w3d");
item_896.emplace_back("application/x-director");
mime.
emplace_back(item_896);

vector <string> item_897;
item_897.emplace_back("wad");
item_897.emplace_back("application/x-doom");
mime.
emplace_back(item_897);

vector <string> item_898;
item_898.emplace_back("wav");
item_898.emplace_back("audio/x-wav");
mime.
emplace_back(item_898);

vector <string> item_899;
item_899.emplace_back("wax");
item_899.emplace_back("audio/x-ms-wax");
mime.
emplace_back(item_899);

vector <string> item_900;
item_900.emplace_back("wbmp");
item_900.emplace_back("image/vnd.wap.wbmp");
mime.
emplace_back(item_900);

vector <string> item_901;
item_901.emplace_back("wbs");
item_901.emplace_back("application/vnd.criticaltools.wbs+xml");
mime.
emplace_back(item_901);

vector <string> item_902;
item_902.emplace_back("wbxml");
item_902.emplace_back("application/vnd.wap.wbxml");
mime.
emplace_back(item_902);

vector <string> item_903;
item_903.emplace_back("wcm");
item_903.emplace_back("application/vnd.ms-works");
mime.
emplace_back(item_903);

vector <string> item_904;
item_904.emplace_back("wdb");
item_904.emplace_back("application/vnd.ms-works");
mime.
emplace_back(item_904);

vector <string> item_905;
item_905.emplace_back("wdp");
item_905.emplace_back("image/vnd.ms-photo");
mime.
emplace_back(item_905);

vector <string> item_906;
item_906.emplace_back("weba");
item_906.emplace_back("audio/webm");
mime.
emplace_back(item_906);

vector <string> item_907;
item_907.emplace_back("webm");
item_907.emplace_back("video/webm");
mime.
emplace_back(item_907);

vector <string> item_908;
item_908.emplace_back("webp");
item_908.emplace_back("image/webp");
mime.
emplace_back(item_908);

vector <string> item_909;
item_909.emplace_back("wg");
item_909.emplace_back("application/vnd.pmi.widget");
mime.
emplace_back(item_909);

vector <string> item_910;
item_910.emplace_back("wgt");
item_910.emplace_back("application/widget");
mime.
emplace_back(item_910);

vector <string> item_911;
item_911.emplace_back("wks");
item_911.emplace_back("application/vnd.ms-works");
mime.
emplace_back(item_911);

vector <string> item_912;
item_912.emplace_back("wm");
item_912.emplace_back("video/x-ms-wm");
mime.
emplace_back(item_912);

vector <string> item_913;
item_913.emplace_back("wma");
item_913.emplace_back("audio/x-ms-wma");
mime.
emplace_back(item_913);

vector <string> item_914;
item_914.emplace_back("wmd");
item_914.emplace_back("application/x-ms-wmd");
mime.
emplace_back(item_914);

vector <string> item_915;
item_915.emplace_back("wmf");
item_915.emplace_back("application/x-msmetafile");
mime.
emplace_back(item_915);

vector <string> item_916;
item_916.emplace_back("wml");
item_916.emplace_back("text/vnd.wap.wml");
mime.
emplace_back(item_916);

vector <string> item_917;
item_917.emplace_back("wmlc");
item_917.emplace_back("application/vnd.wap.wmlc");
mime.
emplace_back(item_917);

vector <string> item_918;
item_918.emplace_back("wmls");
item_918.emplace_back("text/vnd.wap.wmlscript");
mime.
emplace_back(item_918);

vector <string> item_919;
item_919.emplace_back("wmlsc");
item_919.emplace_back("application/vnd.wap.wmlscriptc");
mime.
emplace_back(item_919);

vector <string> item_920;
item_920.emplace_back("wmv");
item_920.emplace_back("video/x-ms-wmv");
mime.
emplace_back(item_920);

vector <string> item_921;
item_921.emplace_back("wmx");
item_921.emplace_back("video/x-ms-wmx");
mime.
emplace_back(item_921);

vector <string> item_922;
item_922.emplace_back("wmz");
item_922.emplace_back("application/x-msmetafile");
mime.
emplace_back(item_922);

vector <string> item_923;
item_923.emplace_back("woff");
item_923.emplace_back("font/woff");
mime.
emplace_back(item_923);

vector <string> item_924;
item_924.emplace_back("woff2");
item_924.emplace_back("font/woff2");
mime.
emplace_back(item_924);

vector <string> item_925;
item_925.emplace_back("wpd");
item_925.emplace_back("application/vnd.wordperfect");
mime.
emplace_back(item_925);

vector <string> item_926;
item_926.emplace_back("wpl");
item_926.emplace_back("application/vnd.ms-wpl");
mime.
emplace_back(item_926);

vector <string> item_927;
item_927.emplace_back("wps");
item_927.emplace_back("application/vnd.ms-works");
mime.
emplace_back(item_927);

vector <string> item_928;
item_928.emplace_back("wqd");
item_928.emplace_back("application/vnd.wqd");
mime.
emplace_back(item_928);

vector <string> item_929;
item_929.emplace_back("wri");
item_929.emplace_back("application/x-mswrite");
mime.
emplace_back(item_929);

vector <string> item_930;
item_930.emplace_back("wrl");
item_930.emplace_back("model/vrml");
mime.
emplace_back(item_930);

vector <string> item_931;
item_931.emplace_back("wsdl");
item_931.emplace_back("application/wsdl+xml");
mime.
emplace_back(item_931);

vector <string> item_932;
item_932.emplace_back("wspolicy");
item_932.emplace_back("application/wspolicy+xml");
mime.
emplace_back(item_932);

vector <string> item_933;
item_933.emplace_back("wtb");
item_933.emplace_back("application/vnd.webturbo");
mime.
emplace_back(item_933);

vector <string> item_934;
item_934.emplace_back("wvx");
item_934.emplace_back("video/x-ms-wvx");
mime.
emplace_back(item_934);

vector <string> item_935;
item_935.emplace_back("x32");
item_935.emplace_back("application/x-authorware-bin");
mime.
emplace_back(item_935);

vector <string> item_936;
item_936.emplace_back("x3d");
item_936.emplace_back("model/x3d+xml");
mime.
emplace_back(item_936);

vector <string> item_937;
item_937.emplace_back("x3db");
item_937.emplace_back("model/x3d+binary");
mime.
emplace_back(item_937);

vector <string> item_938;
item_938.emplace_back("x3dbz");
item_938.emplace_back("model/x3d+binary");
mime.
emplace_back(item_938);

vector <string> item_939;
item_939.emplace_back("x3dv");
item_939.emplace_back("model/x3d+vrml");
mime.
emplace_back(item_939);

vector <string> item_940;
item_940.emplace_back("x3dvz");
item_940.emplace_back("model/x3d+vrml");
mime.
emplace_back(item_940);

vector <string> item_941;
item_941.emplace_back("x3dz");
item_941.emplace_back("model/x3d+xml");
mime.
emplace_back(item_941);

vector <string> item_942;
item_942.emplace_back("xaml");
item_942.emplace_back("application/xaml+xml");
mime.
emplace_back(item_942);

vector <string> item_943;
item_943.emplace_back("xap");
item_943.emplace_back("application/x-silverlight-app");
mime.
emplace_back(item_943);

vector <string> item_944;
item_944.emplace_back("xar");
item_944.emplace_back("application/vnd.xara");
mime.
emplace_back(item_944);

vector <string> item_945;
item_945.emplace_back("xbap");
item_945.emplace_back("application/x-ms-xbap");
mime.
emplace_back(item_945);

vector <string> item_946;
item_946.emplace_back("xbd");
item_946.emplace_back("application/vnd.fujixerox.docuworks.binder");
mime.
emplace_back(item_946);

vector <string> item_947;
item_947.emplace_back("xbm");
item_947.emplace_back("image/x-xbitmap");
mime.
emplace_back(item_947);

vector <string> item_948;
item_948.emplace_back("xdf");
item_948.emplace_back("application/xcap-diff+xml");
mime.
emplace_back(item_948);

vector <string> item_949;
item_949.emplace_back("xdm");
item_949.emplace_back("application/vnd.syncml.dm+xml");
mime.
emplace_back(item_949);

vector <string> item_950;
item_950.emplace_back("xdp");
item_950.emplace_back("application/vnd.adobe.xdp+xml");
mime.
emplace_back(item_950);

vector <string> item_951;
item_951.emplace_back("xdssc");
item_951.emplace_back("application/dssc+xml");
mime.
emplace_back(item_951);

vector <string> item_952;
item_952.emplace_back("xdw");
item_952.emplace_back("application/vnd.fujixerox.docuworks");
mime.
emplace_back(item_952);

vector <string> item_953;
item_953.emplace_back("xenc");
item_953.emplace_back("application/xenc+xml");
mime.
emplace_back(item_953);

vector <string> item_954;
item_954.emplace_back("xer");
item_954.emplace_back("application/patch-ops-error+xml");
mime.
emplace_back(item_954);

vector <string> item_955;
item_955.emplace_back("xfdf");
item_955.emplace_back("application/vnd.adobe.xfdf");
mime.
emplace_back(item_955);

vector <string> item_956;
item_956.emplace_back("xfdl");
item_956.emplace_back("application/vnd.xfdl");
mime.
emplace_back(item_956);

vector <string> item_957;
item_957.emplace_back("xht");
item_957.emplace_back("application/xhtml+xml");
mime.
emplace_back(item_957);

vector <string> item_958;
item_958.emplace_back("xhtml");
item_958.emplace_back("application/xhtml+xml");
mime.
emplace_back(item_958);

vector <string> item_959;
item_959.emplace_back("xhvml");
item_959.emplace_back("application/xv+xml");
mime.
emplace_back(item_959);

vector <string> item_960;
item_960.emplace_back("xif");
item_960.emplace_back("image/vnd.xiff");
mime.
emplace_back(item_960);

vector <string> item_961;
item_961.emplace_back("xla");
item_961.emplace_back("application/vnd.ms-excel");
mime.
emplace_back(item_961);

vector <string> item_962;
item_962.emplace_back("xlam");
item_962.emplace_back("application/vnd.ms-excel.addin.macroenabled.12");
mime.
emplace_back(item_962);

vector <string> item_963;
item_963.emplace_back("xlc");
item_963.emplace_back("application/vnd.ms-excel");
mime.
emplace_back(item_963);

vector <string> item_964;
item_964.emplace_back("xlf");
item_964.emplace_back("application/x-xliff+xml");
mime.
emplace_back(item_964);

vector <string> item_965;
item_965.emplace_back("xlm");
item_965.emplace_back("application/vnd.ms-excel");
mime.
emplace_back(item_965);

vector <string> item_966;
item_966.emplace_back("xls");
item_966.emplace_back("application/vnd.ms-excel");
mime.
emplace_back(item_966);

vector <string> item_967;
item_967.emplace_back("xlsb");
item_967.emplace_back("application/vnd.ms-excel.sheet.binary.macroenabled.12");
mime.
emplace_back(item_967);

vector <string> item_968;
item_968.emplace_back("xlsm");
item_968.emplace_back("application/vnd.ms-excel.sheet.macroenabled.12");
mime.
emplace_back(item_968);

vector <string> item_969;
item_969.emplace_back("xlsx");
item_969.emplace_back(
"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet");
mime.
emplace_back(item_969);

vector <string> item_970;
item_970.emplace_back("xlt");
item_970.emplace_back("application/vnd.ms-excel");
mime.
emplace_back(item_970);

vector <string> item_971;
item_971.emplace_back("xltm");
item_971.emplace_back("application/vnd.ms-excel.template.macroenabled.12");
mime.
emplace_back(item_971);

vector <string> item_972;
item_972.emplace_back("xltx");
item_972.emplace_back(
"application/vnd.openxmlformats-officedocument.spreadsheetml.template");
mime.
emplace_back(item_972);

vector <string> item_973;
item_973.emplace_back("xlw");
item_973.emplace_back("application/vnd.ms-excel");
mime.
emplace_back(item_973);

vector <string> item_974;
item_974.emplace_back("xm");
item_974.emplace_back("audio/xm");
mime.
emplace_back(item_974);

vector <string> item_975;
item_975.emplace_back("xml");
item_975.emplace_back("application/xml");
mime.
emplace_back(item_975);

vector <string> item_976;
item_976.emplace_back("xo");
item_976.emplace_back("application/vnd.olpc-sugar");
mime.
emplace_back(item_976);

vector <string> item_977;
item_977.emplace_back("xop");
item_977.emplace_back("application/xop+xml");
mime.
emplace_back(item_977);

vector <string> item_978;
item_978.emplace_back("xpi");
item_978.emplace_back("application/x-xpinstall");
mime.
emplace_back(item_978);

vector <string> item_979;
item_979.emplace_back("xpl");
item_979.emplace_back("application/xproc+xml");
mime.
emplace_back(item_979);

vector <string> item_980;
item_980.emplace_back("xpm");
item_980.emplace_back("image/x-xpixmap");
mime.
emplace_back(item_980);

vector <string> item_981;
item_981.emplace_back("xpr");
item_981.emplace_back("application/vnd.is-xpr");
mime.
emplace_back(item_981);

vector <string> item_982;
item_982.emplace_back("xps");
item_982.emplace_back("application/vnd.ms-xpsdocument");
mime.
emplace_back(item_982);

vector <string> item_983;
item_983.emplace_back("xpw");
item_983.emplace_back("application/vnd.intercon.formnet");
mime.
emplace_back(item_983);

vector <string> item_984;
item_984.emplace_back("xpx");
item_984.emplace_back("application/vnd.intercon.formnet");
mime.
emplace_back(item_984);

vector <string> item_985;
item_985.emplace_back("xsl");
item_985.emplace_back("application/xml");
mime.
emplace_back(item_985);

vector <string> item_986;
item_986.emplace_back("xslt");
item_986.emplace_back("application/xslt+xml");
mime.
emplace_back(item_986);

vector <string> item_987;
item_987.emplace_back("xsm");
item_987.emplace_back("application/vnd.syncml+xml");
mime.
emplace_back(item_987);

vector <string> item_988;
item_988.emplace_back("xspf");
item_988.emplace_back("application/xspf+xml");
mime.
emplace_back(item_988);

vector <string> item_989;
item_989.emplace_back("xul");
item_989.emplace_back("application/vnd.mozilla.xul+xml");
mime.
emplace_back(item_989);

vector <string> item_990;
item_990.emplace_back("xvm");
item_990.emplace_back("application/xv+xml");
mime.
emplace_back(item_990);

vector <string> item_991;
item_991.emplace_back("xvml");
item_991.emplace_back("application/xv+xml");
mime.
emplace_back(item_991);

vector <string> item_992;
item_992.emplace_back("xwd");
item_992.emplace_back("image/x-xwindowdump");
mime.
emplace_back(item_992);

vector <string> item_993;
item_993.emplace_back("xyz");
item_993.emplace_back("chemical/x-xyz");
mime.
emplace_back(item_993);

vector <string> item_994;
item_994.emplace_back("xz");
item_994.emplace_back("application/x-xz");
mime.
emplace_back(item_994);

vector <string> item_995;
item_995.emplace_back("yang");
item_995.emplace_back("application/yang");
mime.
emplace_back(item_995);

vector <string> item_996;
item_996.emplace_back("yin");
item_996.emplace_back("application/yin+xml");
mime.
emplace_back(item_996);

vector <string> item_997;
item_997.emplace_back("z");
item_997.emplace_back("application/x-compress");
mime.
emplace_back(item_997);

vector <string> item_998;
item_998.emplace_back("Z");
item_998.emplace_back("application/x-compress");
mime.
emplace_back(item_998);

vector <string> item_999;
item_999.emplace_back("z1");
item_999.emplace_back("application/x-zmachine");
mime.
emplace_back(item_999);

vector <string> item_1000;
item_1000.emplace_back("z2");
item_1000.emplace_back("application/x-zmachine");
mime.
emplace_back(item_1000);

vector <string> item_1001;
item_1001.emplace_back("z3");
item_1001.emplace_back("application/x-zmachine");
mime.
emplace_back(item_1001);

vector <string> item_1002;
item_1002.emplace_back("z4");
item_1002.emplace_back("application/x-zmachine");
mime.
emplace_back(item_1002);

vector <string> item_1003;
item_1003.emplace_back("z5");
item_1003.emplace_back("application/x-zmachine");
mime.
emplace_back(item_1003);

vector <string> item_1004;
item_1004.emplace_back("z6");
item_1004.emplace_back("application/x-zmachine");
mime.
emplace_back(item_1004);

vector <string> item_1005;
item_1005.emplace_back("z7");
item_1005.emplace_back("application/x-zmachine");
mime.
emplace_back(item_1005);

vector <string> item_1006;
item_1006.emplace_back("z8");
item_1006.emplace_back("application/x-zmachine");
mime.
emplace_back(item_1006);

vector <string> item_1007;
item_1007.emplace_back("zaz");
item_1007.emplace_back("application/vnd.zzazz.deck+xml");
mime.
emplace_back(item_1007);

vector <string> item_1008;
item_1008.emplace_back("zip");
item_1008.emplace_back("application/zip");
mime.
emplace_back(item_1008);

vector <string> item_1009;
item_1009.emplace_back("zir");
item_1009.emplace_back("application/vnd.zul");
mime.
emplace_back(item_1009);

vector <string> item_1010;
item_1010.emplace_back("zirz");
item_1010.emplace_back("application/vnd.zul");
mime.
emplace_back(item_1010);

vector <string> item_1011;
item_1011.emplace_back("zmm");
item_1011.emplace_back("application/vnd.handheld-entertainment+xml");
mime.
emplace_back(item_1011);

jstring docType = Java_com_meyou_Me_getTypeByName(env, type, name_);

if (docType != nullptr) {
for (
auto &i
: mime) {
if (
jStrToCStr(env, docType
) == i[0])
return
cStrToJStr(env, i[1]
);
}
}

return
cStrToJStr(env,
{
});
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_GET(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"GET");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_POST(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"POST");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_HEAD(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"HEAD");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_PUT(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"PUT");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_DELETE(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"DELETE");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_OPTIONS(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"OPTIONS");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_TRACE(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"TRACE");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_FORM(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"application/x-www-from-urlencoded");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_MULTIPART(JNIEnv * env,
                                    jclass
type) {
return
cStrToJStr(env,
"multipart/form-data");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_ISO88591(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"ISO-8859-1");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_GBK(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"GBK");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_GB2312(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"GB2312");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_UTF16(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"UTF-16");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_UTF8(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"UTF8");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_UNICODE(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"Unicode");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_ASCII(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"ASCII");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_USASCII(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"US-ASCII");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_shareName(JNIEnv * env, jclass
type,
jstring sign_
) {
return
cStrToJStr(env, jStrToCStr(env, sign_)
+ "_SHARE");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_URL9934(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"http://dengjie9934.gz01.bdysite.com");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_URL(JNIEnv * env, jclass
type) {
return
cStrToJStr(env,
"https://bydengjie.com");
}

JNIEXPORT jstring
JNICALL Java_com_meyou_Me_notifyTip(JNIEnv * env,
                                    jclass
type) {
return
cStrToJStr(env,
"请打开显示通知开关");
}
}
