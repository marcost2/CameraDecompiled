
/* BSTRefocusParam::parase(unsigned char*, int) */

undefined4 __thiscall BSTRefocusParam::parase(BSTRefocusParam *this,uchar *param_1,int param_2)

{
  uchar *puVar1;
  
  if (0 < param_2) {
    puVar1 = param_1 + param_2;
    do {
      switch(*param_1) {
      case '\0':
        this[4] = *(BSTRefocusParam *)(param_1 + 3);
        break;
      case '\x01':
        *(ushort *)(this + 6) = (ushort)param_1[3];
        break;
      case '\x02':
        *(undefined2 *)(this + 10) = *(undefined2 *)(param_1 + 3);
        break;
      case '\x03':
        *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 3);
        break;
      case '\x04':
        *(undefined2 *)(this + 0xe) = *(undefined2 *)(param_1 + 3);
        break;
      case '\x05':
        *(undefined2 *)(this + 0x10) = *(undefined2 *)(param_1 + 3);
        break;
      case '\x06':
        *(undefined2 *)(this + 0x12) = *(undefined2 *)(param_1 + 3);
        break;
      case '\a':
        *(undefined2 *)(this + 0x14) = *(undefined2 *)(param_1 + 3);
        break;
      case '\b':
        this[0x16] = *(BSTRefocusParam *)(param_1 + 3);
        break;
      case '\t':
        this[0x17] = *(BSTRefocusParam *)(param_1 + 3);
        break;
      case '\n':
        *(undefined2 *)(this + 0x18) = *(undefined2 *)(param_1 + 3);
        break;
      case '\v':
        *(undefined2 *)(this + 0x1a) = *(undefined2 *)(param_1 + 3);
        break;
      case '\f':
        *(undefined2 *)(this + 0x1c) = *(undefined2 *)(param_1 + 3);
        break;
      case '\r':
        *(undefined2 *)(this + 0x1e) = *(undefined2 *)(param_1 + 3);
        break;
      case '\x0e':
        *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 3);
        break;
      case '\x0f':
        *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 3);
        break;
      case '\x10':
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 3);
        break;
      case '\x11':
        *(undefined2 *)(this + 0x2c) = *(undefined2 *)(param_1 + 3);
        break;
      case '\x12':
        __aeabi_memcpy8(this + 0x2e,param_1 + 3,(int)*(short *)(param_1 + 1));
        break;
      case '\x13':
        *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 3);
        break;
      default:
        if (*param_1 == 0xff) {
          return 0;
        }
      }
      param_1 = param_1 + *(short *)(param_1 + 1) + 3;
    } while (param_1 < puVar1);
  }
  dump(this);
  return 0xffffffff;
}

