
/* qcamera::MotExif::convertTagId(unsigned short, unsigned int*) */

undefined4 __thiscall qcamera::MotExif::convertTagId(MotExif *this,ushort param_1,uint *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  switch(param_1) {
  case 0:
    pcVar1 = (char *)0x0;
    break;
  case 1:
    pcVar1 = "ELF\x01\x01\x01";
    break;
  case 2:
    pcVar1 = "\r";
    break;
  case 3:
    pcVar1 = "era3Channel20bokehProcessCallbackEP21mm_camera_super_buf_tPNS_14QCamera3StreamE";
    break;
  case 4:
    pcVar1 = "aChannelC2Ev";
    break;
  case 5:
    pcVar1 = "ZN7qcamera30Parameters_S5K4H7_CapabilitiesEP16cam_capability_t";
    break;
  case 6:
    pcVar1 = "d";
    break;
  case 7:
    pcVar1 = "%d min=%d def=%d\n";
    break;
  case 8:
    pcVar1 = (char *)0x80008;
    break;
  case 9:
    pcVar1 = (char *)0x90009;
    break;
  case 10:
    pcVar1 = (char *)0xa000a;
    break;
  case 0xb:
    pcVar1 = "CxD";
    break;
  case 0xc:
    pcVar1 = (char *)0xc000c;
    break;
  case 0xd:
    pcVar1 = (char *)0xd000d;
    break;
  case 0xe:
    pcVar1 = (char *)0xe000e;
    break;
  case 0xf:
    pcVar1 = (char *)0xf000f;
    break;
  case 0x10:
    pcVar1 = (char *)0x100010;
    break;
  case 0x11:
    pcVar1 = (char *)0x110011;
    break;
  case 0x12:
    pcVar1 = (char *)0x120012;
    break;
  case 0x13:
    pcVar1 = (char *)0x130013;
    break;
  case 0x14:
    pcVar1 = (char *)0x140014;
    break;
  case 0x15:
    pcVar1 = (char *)0x150015;
    break;
  case 0x16:
    pcVar1 = (char *)0x160016;
    break;
  case 0x17:
    pcVar1 = (char *)0x170017;
    break;
  case 0x18:
    pcVar1 = (char *)0x180018;
    break;
  case 0x19:
    pcVar1 = (char *)0x190019;
    break;
  case 0x1a:
    pcVar1 = (char *)0x1a001a;
    break;
  case 0x1b:
    pcVar1 = (char *)0x1b001b;
    break;
  case 0x1c:
    pcVar1 = (char *)0x1c001c;
    break;
  case 0x1d:
    pcVar1 = (char *)0x1d001d;
    break;
  case 0x1e:
    pcVar1 = (char *)0x1e001e;
    break;
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0x104:
  case 0x105:
  case 0x10b:
  case 0x10c:
  case 0x113:
  case 0x114:
  case 0x126:
  case 0x127:
  case 0x12a:
  case 299:
  case 300:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14f:
  case 0x154:
  case 0x155:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 400:
  case 0x191:
  case 0x192:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
  case 0x1a5:
  case 0x1a6:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1aa:
  case 0x1ab:
  case 0x1ac:
  case 0x1ad:
  case 0x1ae:
  case 0x1af:
  case 0x1b0:
  case 0x1b1:
  case 0x1b2:
  case 0x1b3:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f5:
  case 0x1f6:
  case 0x1f7:
  case 0x1f8:
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
  case 0x1fc:
  case 0x1fd:
  case 0x1fe:
  case 0x1ff:
  case 0x202:
  case 0x204:
  case 0x20a:
  case 0x20b:
  case 0x20c:
  case 0x20d:
  case 0x20e:
  case 0x20f:
  case 0x210:
  case 0x215:
  case 0x216:
  case 0x217:
  case 0x218:
  case 0x219:
  case 0x21a:
  case 0x21b:
  case 0x21c:
  case 0x21d:
  case 0x21e:
  case 0x21f:
  case 0x220:
  case 0x221:
  case 0x222:
  case 0x223:
  case 0x224:
  case 0x225:
  case 0x226:
  case 0x227:
  case 0x228:
  case 0x229:
  case 0x22a:
  case 0x22b:
  case 0x22c:
  case 0x22d:
  case 0x22e:
  case 0x22f:
  case 0x230:
  case 0x231:
  case 0x232:
  case 0x233:
  case 0x234:
  case 0x235:
  case 0x236:
  case 0x237:
  case 0x238:
  case 0x239:
  case 0x23a:
  case 0x23b:
  case 0x23c:
  case 0x23d:
  case 0x23e:
  case 0x23f:
  case 0x240:
  case 0x241:
  case 0x242:
  case 0x243:
  case 0x244:
  case 0x245:
  case 0x246:
  case 0x247:
  case 0x248:
  case 0x249:
  case 0x24a:
  case 0x24b:
  case 0x24c:
  case 0x24d:
  case 0x24e:
  case 0x24f:
  case 0x250:
  case 0x251:
  case 0x252:
  case 0x253:
  case 0x254:
  case 0x255:
  case 0x256:
  case 599:
  case 600:
  case 0x259:
  case 0x25a:
  case 0x25b:
  case 0x25c:
  case 0x25d:
  case 0x25e:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x262:
  case 0x263:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x268:
  case 0x269:
  case 0x26a:
  case 0x26b:
  case 0x26c:
  case 0x26d:
  case 0x26e:
  case 0x26f:
  case 0x270:
  case 0x271:
  case 0x272:
  case 0x273:
  case 0x274:
  case 0x275:
  case 0x276:
  case 0x277:
  case 0x278:
  case 0x279:
  case 0x27a:
  case 0x27b:
  case 0x27c:
  case 0x27d:
  case 0x27e:
  case 0x27f:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
  case 0x284:
  case 0x285:
  case 0x286:
  case 0x287:
  case 0x288:
  case 0x289:
  case 0x28a:
  case 0x28b:
  case 0x28c:
  case 0x28d:
  case 0x28e:
  case 0x28f:
  case 0x290:
  case 0x291:
  case 0x292:
  case 0x293:
  case 0x294:
  case 0x295:
  case 0x296:
  case 0x297:
  case 0x298:
  case 0x299:
  case 0x29a:
  case 0x29b:
  case 0x29c:
  case 0x29d:
  case 0x29e:
  case 0x29f:
  case 0x2a0:
  case 0x2a1:
  case 0x2a2:
  case 0x2a3:
  case 0x2a4:
  case 0x2a5:
  case 0x2a6:
  case 0x2a7:
  case 0x2a8:
  case 0x2a9:
  case 0x2aa:
  case 0x2ab:
  case 0x2ac:
  case 0x2ad:
  case 0x2ae:
  case 0x2af:
  case 0x2b0:
  case 0x2b1:
  case 0x2b2:
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
  case 0x2bd:
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
  case 0x2c6:
  case 0x2c7:
  case 0x2c8:
  case 0x2c9:
  case 0x2ca:
  case 0x2cb:
  case 0x2cc:
  case 0x2cd:
  case 0x2ce:
  case 0x2cf:
  case 0x2d0:
  case 0x2d1:
  case 0x2d2:
  case 0x2d3:
  case 0x2d4:
  case 0x2d5:
  case 0x2d6:
  case 0x2d7:
  case 0x2d8:
  case 0x2d9:
  case 0x2da:
  case 0x2db:
  case 0x2dc:
  case 0x2dd:
  case 0x2de:
  case 0x2df:
  case 0x2e0:
  case 0x2e1:
  case 0x2e2:
  case 0x2e3:
  case 0x2e4:
  case 0x2e5:
  case 0x2e6:
  case 0x2e7:
  case 0x2e8:
  case 0x2e9:
  case 0x2ea:
  case 0x2eb:
  case 0x2ec:
  case 0x2ed:
  case 0x2ee:
  case 0x2ef:
  case 0x2f0:
  case 0x2f1:
  case 0x2f2:
  case 0x2f3:
  case 0x2f4:
  case 0x2f5:
  case 0x2f6:
  case 0x2f7:
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
  case 0x300:
  case 0x304:
  case 0x305:
  case 0x306:
  case 0x307:
  case 0x308:
  case 0x309:
  case 0x30a:
  case 0x30b:
  case 0x30c:
  case 0x30d:
  case 0x30e:
  case 0x30f:
  case 0x310:
  case 0x311:
  case 0x312:
  case 0x313:
  case 0x314:
  case 0x315:
  case 0x316:
  case 0x317:
  case 0x318:
  case 0x319:
  case 0x31a:
  case 0x31b:
  case 0x31c:
  case 0x31d:
  case 0x31e:
  case 799:
    goto switchD_0010636a_caseD_8823;
  case 0xfe:
    pcVar1 = (char *)0x1f00fe;
    break;
  case 0xff:
    iVar2 = 0x1f00fe;
    goto LAB_00106afe;
  case 0x100:
    pcVar1 = (char *)0x210100;
    break;
  case 0x101:
    pcVar1 = (char *)0x220101;
    break;
  case 0x102:
    pcVar1 = (char *)0x230102;
    break;
  case 0x103:
    pcVar1 = (char *)0x240103;
    break;
  case 0x106:
    pcVar1 = (char *)0x250106;
    break;
  case 0x107:
    iVar2 = 0x250106;
    goto LAB_00106afe;
  case 0x108:
    pcVar1 = (char *)0x270108;
    break;
  case 0x109:
    pcVar1 = (char *)0x280109;
    break;
  case 0x10a:
    pcVar1 = (char *)0x29010a;
    break;
  case 0x10d:
    pcVar1 = (char *)0x2a010d;
    break;
  case 0x10e:
    iVar2 = 0x2a010d;
    goto LAB_00106afe;
  case 0x10f:
    pcVar1 = (char *)0x2c010f;
    break;
  case 0x110:
    pcVar1 = (char *)0x2d0110;
    break;
  case 0x111:
    pcVar1 = (char *)0x2e0111;
    break;
  case 0x112:
    pcVar1 = (char *)0x2f0112;
    break;
  case 0x115:
    pcVar1 = (char *)0x300115;
    break;
  case 0x116:
    iVar2 = 0x300115;
    goto LAB_00106afe;
  case 0x117:
    pcVar1 = (char *)0x320117;
    break;
  case 0x118:
    pcVar1 = (char *)0x330118;
    break;
  case 0x119:
    pcVar1 = (char *)0x340119;
    break;
  case 0x11a:
    pcVar1 = (char *)0x35011a;
    break;
  case 0x11b:
    pcVar1 = (char *)0x36011b;
    break;
  case 0x11c:
    pcVar1 = (char *)0x37011c;
    break;
  case 0x11d:
    pcVar1 = (char *)0x38011d;
    break;
  case 0x11e:
    pcVar1 = (char *)0x39011e;
    break;
  case 0x11f:
    pcVar1 = (char *)0x3a011f;
    break;
  case 0x120:
    pcVar1 = (char *)0x3b0120;
    break;
  case 0x121:
    pcVar1 = (char *)0x3c0121;
    break;
  case 0x122:
    pcVar1 = (char *)0x3d0122;
    break;
  case 0x123:
    pcVar1 = (char *)0x3e0123;
    break;
  case 0x124:
    pcVar1 = (char *)0x3f0124;
    break;
  case 0x125:
    pcVar1 = (char *)0x400125;
    break;
  case 0x128:
    pcVar1 = (char *)0x410128;
    break;
  case 0x129:
    iVar2 = 0x410128;
    goto LAB_00106afe;
  case 0x12d:
    pcVar1 = (char *)0x43012d;
    break;
  case 0x131:
    pcVar1 = (char *)0x440131;
    break;
  case 0x132:
    iVar2 = 0x440131;
    goto LAB_00106afe;
  case 0x13b:
    pcVar1 = (char *)0x46013b;
    break;
  case 0x13c:
    iVar2 = 0x46013b;
    goto LAB_00106afe;
  case 0x13d:
    pcVar1 = (char *)0x48013d;
    break;
  case 0x13e:
    pcVar1 = (char *)0x49013e;
    break;
  case 0x13f:
    pcVar1 = (char *)0x4a013f;
    break;
  case 0x140:
    pcVar1 = (char *)0x4b0140;
    break;
  case 0x141:
    pcVar1 = (char *)0x4c0141;
    break;
  case 0x142:
    pcVar1 = (char *)0x4d0142;
    break;
  case 0x143:
    pcVar1 = (char *)0x4e0143;
    break;
  case 0x144:
    pcVar1 = (char *)0x4f0144;
    break;
  case 0x145:
    pcVar1 = (char *)0x500145;
    break;
  case 0x14c:
    pcVar1 = (char *)0x51014c;
    break;
  case 0x14d:
    iVar2 = 0x51014c;
    goto LAB_00106afe;
  case 0x14e:
    pcVar1 = (char *)0x53014e;
    break;
  case 0x150:
    pcVar1 = (char *)0x540150;
    break;
  case 0x151:
    iVar2 = 0x540150;
    goto LAB_00106afe;
  case 0x152:
    pcVar1 = (char *)0x560152;
    break;
  case 0x153:
    pcVar1 = (char *)0x570153;
    break;
  case 0x156:
    pcVar1 = (char *)0x580156;
    break;
  case 0x200:
    pcVar1 = (char *)0x590200;
    break;
  case 0x201:
    iVar2 = 0x590200;
    goto LAB_00106afe;
  case 0x203:
    pcVar1 = (char *)0x5c0203;
    break;
  case 0x205:
    pcVar1 = (char *)0x5d0205;
    break;
  case 0x206:
    iVar2 = 0x5d0205;
    goto LAB_00106afe;
  case 0x207:
    pcVar1 = (char *)0x5f0207;
    break;
  case 0x208:
    pcVar1 = (char *)0x600208;
    break;
  case 0x209:
    pcVar1 = (char *)0x610209;
    break;
  case 0x211:
    pcVar1 = (char *)0x620211;
    break;
  case 0x212:
    iVar2 = 0x620211;
    goto LAB_00106afe;
  case 0x213:
    pcVar1 = (char *)0x640213;
    break;
  case 0x214:
    pcVar1 = (char *)0x650214;
    break;
  case 0x301:
    pcVar1 = (char *)0x660301;
    break;
  case 0x302:
    iVar2 = 0x660301;
LAB_00106afe:
    pcVar1 = (char *)(iVar2 + 0x10001);
    break;
  case 0x303:
    pcVar1 = (char *)0x680303;
    break;
  case 800:
    pcVar1 = (char *)0x690320;
    break;
  case 0xbad1abe1:
    if (param_1 == 0x8298) {
      pcVar1 = (char *)0x6a8298;
    }
    else {
      if (param_1 != 0x829a) goto switchD_0010636a_caseD_8823;
      pcVar1 = (char *)0x8c829a;
    }
    break;
  default:
    if (param_1 < 0xa000) {
      if (param_1 < 0x9004) {
        switch(param_1) {
        case 0x8822:
          pcVar1 = (char *)0x8e8822;
          break;
        case 0x8823:
        case 0x8826:
          goto switchD_0010636a_caseD_8823;
        case 0x8824:
          pcVar1 = (char *)0x8f8824;
          break;
        case 0x8825:
          pcVar1 = (char *)0x6d8825;
          break;
        case 0x8827:
          pcVar1 = (char *)0x908827;
          break;
        case 0x8828:
          iVar2 = 0x908827;
          goto LAB_00106afe;
        case 0xbad1abe1:
          if (param_1 == 0x9000) {
            pcVar1 = (char *)0x929000;
          }
          else {
            if (param_1 != 0x9003) goto switchD_0010636a_caseD_8823;
            pcVar1 = (char *)0x939003;
          }
          break;
        default:
          if (param_1 == 0x829d) {
            pcVar1 = (char *)0x8d829d;
          }
          else if (param_1 == 0x8769) {
            pcVar1 = (char *)0x6b8769;
          }
          else {
            if (param_1 != 0x8773) goto switchD_0010636a_caseD_8823;
            pcVar1 = (char *)0x6c8773;
          }
        }
        break;
      }
      switch(param_1) {
      case 0x9201:
        pcVar1 = (char *)0x979201;
        break;
      case 0x9202:
        iVar2 = 0x979201;
        goto LAB_00106afe;
      case 0x9203:
        pcVar1 = (char *)0x999203;
        break;
      case 0x9204:
        pcVar1 = (char *)0x9a9204;
        break;
      case 0x9205:
        pcVar1 = (char *)0x9b9205;
        break;
      case 0x9206:
        pcVar1 = (char *)0x9c9206;
        break;
      case 0x9207:
        pcVar1 = (char *)0x9d9207;
        break;
      case 0x9208:
        pcVar1 = (char *)0x9e9208;
        break;
      case 0x9209:
        pcVar1 = (char *)0x9f9209;
        break;
      case 0x920a:
        pcVar1 = (char *)0xa0920a;
        break;
      case 0x920b:
      case 0x920c:
      case 0x920d:
      case 0x920e:
      case 0x920f:
      case 0x9210:
      case 0x9211:
      case 0x9212:
      case 0x9213:
      case 0x9215:
      case 0x9216:
      case 0x9217:
      case 0x9218:
      case 0x9219:
      case 0x921a:
      case 0x921b:
      case 0x921c:
      case 0x921d:
      case 0x921e:
      case 0x921f:
      case 0x9220:
      case 0x9221:
      case 0x9222:
      case 0x9223:
      case 0x9224:
      case 0x9225:
      case 0x9226:
      case 0x9227:
      case 0x9228:
      case 0x9229:
      case 0x922a:
      case 0x922b:
      case 0x922c:
      case 0x922d:
      case 0x922e:
      case 0x922f:
      case 0x9230:
      case 0x9231:
      case 0x9232:
      case 0x9233:
      case 0x9234:
      case 0x9235:
      case 0x9236:
      case 0x9237:
      case 0x9238:
      case 0x9239:
      case 0x923a:
      case 0x923b:
      case 0x923c:
      case 0x923d:
      case 0x923e:
      case 0x923f:
      case 0x9240:
      case 0x9241:
      case 0x9242:
      case 0x9243:
      case 0x9244:
      case 0x9245:
      case 0x9246:
      case 0x9247:
      case 0x9248:
      case 0x9249:
      case 0x924a:
      case 0x924b:
      case 0x924c:
      case 0x924d:
      case 0x924e:
      case 0x924f:
      case 0x9250:
      case 0x9251:
      case 0x9252:
      case 0x9253:
      case 0x9254:
      case 0x9255:
      case 0x9256:
      case 0x9257:
      case 0x9258:
      case 0x9259:
      case 0x925a:
      case 0x925b:
      case 0x925c:
      case 0x925d:
      case 0x925e:
      case 0x925f:
      case 0x9260:
      case 0x9261:
      case 0x9262:
      case 0x9263:
      case 0x9264:
      case 0x9265:
      case 0x9266:
      case 0x9267:
      case 0x9268:
      case 0x9269:
      case 0x926a:
      case 0x926b:
      case 0x926c:
      case 0x926d:
      case 0x926e:
      case 0x926f:
      case 0x9270:
      case 0x9271:
      case 0x9272:
      case 0x9273:
      case 0x9274:
      case 0x9275:
      case 0x9276:
      case 0x9277:
      case 0x9278:
      case 0x9279:
      case 0x927a:
      case 0x927b:
      case 0x927d:
      case 0x927e:
      case 0x927f:
      case 0x9280:
      case 0x9281:
      case 0x9282:
      case 0x9283:
      case 0x9284:
      case 0x9285:
      case 0x9287:
      case 0x9288:
      case 0x9289:
      case 0x928a:
      case 0x928b:
      case 0x928c:
      case 0x928d:
      case 0x928e:
      case 0x928f:
        goto switchD_0010636a_caseD_8823;
      case 0x9214:
        pcVar1 = (char *)0xa19214;
        break;
      case 0x927c:
        pcVar1 = (char *)0xa2927c;
        break;
      case 0x9286:
        pcVar1 = (char *)0xa39286;
        break;
      case 0x9290:
        pcVar1 = (char *)0xa49290;
        break;
      case 0x9291:
        iVar2 = 0xa49290;
        goto LAB_00106afe;
      case 0x9292:
        pcVar1 = (char *)0xa69292;
        break;
      default:
        if (param_1 != 0x9004) {
          if (param_1 != 0x9101) goto switchD_0010636a_caseD_8823;
          pcVar1 = (char *)0x959101;
          break;
        }
        iVar2 = 0x939003;
        goto LAB_00106afe;
      }
      break;
    }
    if (0xa300 < param_1) {
      if (0xa400 < param_1) {
        switch(param_1) {
        case 0xa401:
          pcVar1 = (char *)0xb8a401;
          break;
        case 0xa402:
          iVar2 = 0xb8a401;
          goto LAB_00106afe;
        case 0xa403:
          pcVar1 = (char *)0xbaa403;
          break;
        case 0xa404:
          pcVar1 = (char *)0xbba404;
          break;
        case 0xa405:
          pcVar1 = (char *)0xbca405;
          break;
        case 0xa406:
          pcVar1 = (char *)0xbda406;
          break;
        case 0xa407:
          pcVar1 = (char *)0xbea407;
          break;
        case 0xa408:
          pcVar1 = (char *)0xbfa408;
          break;
        case 0xa409:
          pcVar1 = (char *)0xc0a409;
          break;
        case 0xa40a:
          pcVar1 = (char *)0xc1a40a;
          break;
        case 0xa40b:
          pcVar1 = (char *)0xc2a40b;
          break;
        case 0xa40c:
          pcVar1 = (char *)0xc3a40c;
          break;
        case 0xa40d:
        case 0xa40e:
        case 41999:
        case 42000:
        case 0xa411:
        case 0xa412:
        case 0xa413:
        case 0xa414:
        case 0xa415:
        case 0xa416:
        case 0xa417:
        case 0xa418:
        case 0xa419:
        case 0xa41a:
        case 0xa41b:
        case 0xa41c:
        case 0xa41d:
        case 0xa41e:
        case 0xa41f:
switchD_0010636a_caseD_8823:
          __android_log_print(6,0,DAT_001067ec + 0x1064ae,DAT_001067f0 + 0x1064b0,param_1);
          return 0;
        case 0xa420:
          pcVar1 = (char *)0xc4a420;
          break;
        default:
          if (param_1 != 0xc4a5) goto switchD_0010636a_caseD_8823;
          pcVar1 = (char *)0xc5c4a5;
        }
        break;
      }
      if (param_1 != 0xa301) {
        if (param_1 != 0xa302) goto switchD_0010636a_caseD_8823;
        pcVar1 = (char *)0xb7a302;
        break;
      }
      iVar2 = 0xb5a300;
      goto LAB_00106afe;
    }
    switch(param_1) {
    case 0xa20b:
      pcVar1 = (char *)0xada20b;
      break;
    case 0xa20c:
      iVar2 = 0xada20b;
      goto LAB_00106afe;
    case 0xa20d:
    case 0xa211:
    case 0xa212:
    case 0xa213:
    case 0xa216:
      goto switchD_0010636a_caseD_8823;
    case 0xa20e:
      pcVar1 = (char *)0xafa20e;
      break;
    case 0xa20f:
      iVar2 = 0xafa20e;
      goto LAB_00106afe;
    case 0xa210:
      pcVar1 = (char *)0xb1a210;
      break;
    case 0xa214:
      pcVar1 = (char *)0xb2a214;
      break;
    case 0xa215:
      iVar2 = 0xb2a214;
      goto LAB_00106afe;
    case 0xa217:
      pcVar1 = (char *)0xb4a217;
      break;
    default:
      switch(param_1) {
      case 0xa000:
        pcVar1 = (char *)0xa7a000;
        break;
      case 0xa001:
        iVar2 = 0xa7a000;
        goto LAB_00106afe;
      case 0xa002:
        pcVar1 = (char *)0xa9a002;
        break;
      case 0xa003:
        pcVar1 = (char *)0xaaa003;
        break;
      case 0xa004:
        pcVar1 = (char *)0xaba004;
        break;
      case 0xa005:
        pcVar1 = (char *)0xaca005;
        break;
      default:
        if (param_1 != 0xa300) goto switchD_0010636a_caseD_8823;
        pcVar1 = (char *)0xb5a300;
      }
    }
  }
  *param_2 = (uint)pcVar1;
  return 1;
}

