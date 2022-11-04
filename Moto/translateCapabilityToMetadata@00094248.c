
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::translateCapabilityToMetadata(int) */

int __thiscall
qcamera::QCamera3HardwareInterface::translateCapabilityToMetadata
          (QCamera3HardwareInterface *this,int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined auVar15 [16];
  undefined8 in_d16;
  double dVar16;
  int local_1c8;
  int local_1c4;
  uchar local_1be;
  uchar local_1bd;
  uchar local_1bc;
  uchar local_1bb;
  uchar local_1ba;
  uchar local_1b9;
  float local_1b8;
  float local_1b4;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 uStack420;
  float local_19c;
  float local_198;
  bool local_193;
  uchar local_192;
  uchar local_191;
  uchar local_190;
  uchar local_18f;
  uchar local_18e;
  uchar local_18d;
  uchar local_18c;
  uchar local_18b;
  uchar local_18a;
  uchar local_189;
  int local_188;
  CameraMetadata aCStack388 [8];
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  undefined4 local_16c;
  int local_168;
  undefined4 uStack356;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack336;
  undefined8 local_148;
  undefined8 uStack320;
  undefined8 local_138;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 uStack288;
  undefined8 local_118;
  undefined4 uStack272;
  undefined4 local_10c;
  undefined4 uStack264;
  undefined8 uStack260;
  undefined8 local_f8;
  undefined8 uStack240;
  undefined8 local_e8;
  undefined8 uStack224;
  undefined8 local_d8;
  undefined8 uStack208;
  undefined8 local_c8;
  undefined8 uStack192;
  undefined8 local_b8;
  undefined4 uStack176;
  undefined4 local_ac;
  undefined4 uStack168;
  undefined8 uStack164;
  ulonglong local_98;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined4 uStack80;
  undefined4 local_4c;
  undefined4 uStack72;
  undefined8 uStack68;
  int local_3c;
  
  piVar5 = *(int **)(DAT_0009454c + 0x9425e);
  local_3c = *piVar5;
  iVar9 = *(int *)(this + param_1 * 4 + 0x6c);
  if (iVar9 != 0) goto LAB_00094c44;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack388);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xc0005,(uchar *)(DAT_00094550 + 0x94296),1);
  local_188 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xc0001,&local_188,1);
  auVar15 = ZEXT816(0);
  local_b8 = 0;
  uStack176 = 0;
  local_c8 = 0;
  uStack192 = 0;
  local_d8 = 0;
  uStack208 = 0;
  local_e8 = 0;
  uStack224 = 0;
  local_f8 = 0;
  uStack240 = 0;
  local_ac = 0;
  uStack168 = 0;
  uStack164 = 0;
  property_get(DAT_00094554 + 0x942ee,&local_f8,DAT_00094558 + 0x942f0);
  uVar2 = atoi((char *)&local_f8);
  local_158 = SUB168(auVar15,0);
  uStack336 = SUB168(auVar15 >> 0x40,0);
  uStack272 = SUB164(auVar15 >> 0x40,0);
  local_10c = SUB164(auVar15,0);
  uStack264 = SUB164(auVar15 >> 0x20,0);
  local_148 = local_158;
  uStack320 = uStack336;
  local_138 = local_158;
  uStack304 = uStack336;
  local_128 = local_158;
  uStack288 = uStack336;
  local_118 = local_158;
  uStack260 = uStack336;
  property_get(DAT_0009455c + 0x94330,&local_158,DAT_00094560 + 0x94332);
  uVar3 = atoi((char *)&local_158);
  local_191 = '\x01';
  local_192 = '\x01';
  local_18b = '\0';
  local_193 = false;
  switch(param_1) {
  case 1:
    local_18a = '\x04';
    local_189 = '\x01';
    local_18c = '\x01';
    local_18e = '\x01';
    local_18f = '\x01';
    break;
  case 2:
    local_18a = '\x04';
    local_189 = '\x02';
    local_18e = '\x02';
    local_18f = '\x02';
    local_190 = '\x02';
    local_191 = '\x02';
    local_192 = '\x02';
    local_18c = '\x01';
    iVar9 = *(int *)(*(int *)(DAT_00094564 + 0x943d8) + *(int *)(this + 0x60) * 4);
    local_193 = *(int *)(iVar9 + 0x3e9c) == 0;
    local_18d = '\0';
    if (*(uint *)(iVar9 + 0x3eb0) != 0) {
      uVar3 = 0;
      bVar8 = false;
      bVar7 = false;
      do {
        iVar4 = *(int *)(iVar9 + 0x3ea4 + uVar3 * 4);
        if (iVar4 == 2) {
          bVar7 = true;
        }
        else if (iVar4 == 1) {
          bVar8 = true;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(iVar9 + 0x3eb0));
      if (bVar7) {
        local_18d = '\x02';
      }
      else if (bVar8) {
        local_18d = '\x01';
      }
    }
    goto LAB_000944ae;
  case 3:
    local_189 = '\x03';
    goto LAB_0009443e;
  case 4:
    local_189 = '\x04';
LAB_0009443e:
    local_18a = '\x03';
    local_18c = '\0';
    local_18d = '\x01';
    local_18e = '\x01';
    local_18f = '\x01';
    local_190 = '\x01';
    if ((uVar3 & 0xff) != 0) {
      local_18c = '\x01';
    }
    goto LAB_000944ae;
  case 5:
    local_189 = '\x05';
    local_18a = '\x04';
    local_18e = '\x03';
    local_18f = '\x04';
    local_18c = '\x01';
    break;
  case 6:
    local_18f = '\x01';
    local_18e = '\x01';
    local_189 = '\x06';
    local_18a = '\0';
    local_18c = '\0';
    break;
  default:
    local_18f = '\x01';
    local_18e = '\x01';
    local_189 = '\0';
    local_18c = '\0';
    local_18a = '\x04';
  }
  local_18d = '\x01';
  local_190 = '\x01';
LAB_000944ae:
  iVar9 = *(int *)(DAT_00094568 + 0x944b8);
  if (*(int *)(*(int *)(iVar9 + *(int *)(this + 0x60) * 4) + 0x3eb0) == 0) {
    local_18d = '\0';
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update(aCStack388,3,&local_18d,1)
  ;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x1000d,&local_189,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10011,&local_18b,1);
  if (*(int *)(*(int *)(iVar9 + *(int *)(this + 0x60) * 4) + 0x564) == 1) {
    local_18a = '\0';
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10007,&local_18a,1);
  iVar4 = *(int *)(iVar9 + *(int *)(this + 0x60) * 4);
  if (*(char *)(iVar4 + 0x304b) == '\x01') {
    cVar1 = *(char *)(iVar4 + 0x3049);
    if (cVar1 == '\x01') {
      local_18c = '\x01';
    }
    else if (((uVar2 & 0xff) != 0) || (cVar1 == '\0')) goto LAB_00094570;
  }
  else if ((uVar2 & 0xff) != 0) {
LAB_00094570:
    local_18c = '\0';
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x80004,&local_18c,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10001,(int *)(*(int *)(iVar9 + *(int *)(this + 0x60) * 4) + 0x5b4),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10002,(uchar *)(DAT_000948e8 + 0x945aa),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x1000a,(uchar *)(DAT_000948ec + 0x945b8),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x1000b,(uchar *)(DAT_000948f0 + 0x945ca),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x1000f,(uchar *)(DAT_000948f4 + 0x945dc),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x1000e,(uchar *)(DAT_000948f8 + 0x945ec),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10010,(uchar *)(DAT_000948fc + 0x945fc),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10003,(uchar *)(DAT_00094900 + 0x9460a),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,(uint)"eraChannelC2Ev",(uchar *)(DAT_00094904 + 0x94620),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x40000,(uchar *)(DAT_00094908 + 0x94630),1);
  local_198 = (float)FPRoundInt(*(float *)(*(int *)(iVar9 + *(int *)(this + 0x60) * 4) + 0x303c) *
                                10.0,0x20,2,0);
  local_198 = local_198 / 10.0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x80000,&local_198,1);
  iVar4 = *(int *)(iVar9 + *(int *)(this + 0x60) * 4);
  if (*(byte *)(iVar4 + 0x3048) != 0) {
    local_98 = local_98 & 0xffffffff00000000 | (ulonglong)*(uint *)(iVar4 + 0x3044);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x80001,(float *)&local_98,(uint)*(byte *)(iVar4 + 0x3048));
    iVar4 = *(int *)(iVar9 + *(int *)(this + 0x60) * 4);
  }
  local_19c = *(float *)(iVar4 + 0x858);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x80002,&local_19c,1);
  if (local_18a == '\0') {
    local_98 = local_98 & 0xffffffff00000000;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x80003,(float *)&local_98,1);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x20000,(uchar *)(DAT_0009490c + 0x946cc),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x60000,&local_191,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x100000,&local_192,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xe0018,(int *)(DAT_00094910 + 0x94702),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,(uint)QCamera3StreamMem::getSize,(uchar *)(DAT_00094914 + 0x94712),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x110001,(uchar *)(DAT_00094918 + 0x94728),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x110002,(uchar *)(DAT_0009491c + 0x94738),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x110003,(uchar *)(DAT_00094920 + 0x94748),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,(uint)QCamera3StreamMem::getFd,(uchar *)(DAT_00094924 + 0x94756),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x160000,(uchar *)(DAT_00094928 + 0x94766),1);
  iVar4 = *(int *)(iVar9 + *(int *)(this + 0x60) * 4);
  local_1a8 = *(undefined4 *)(iVar4 + 0x33c8);
  uStack420 = *(undefined4 *)(iVar4 + 0x33cc);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xe0000,(longlong *)&local_1a8,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xe0001,(longlong *)(DAT_0009492c + 0x947a4),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xe0002,(int *)(DAT_00094930 + 0x947b2),1);
  if (((*(byte *)(DAT_00094934 + 0x947bc) & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(DAT_00094c98 + 0x94c72), iVar4 != 0)) {
    *(undefined4 *)(DAT_00094c9c + 0x94c8e) =
         *(undefined4 *)(*(int *)(iVar9 + *(int *)(this + 0x60) * 4) + 14000);
    __cxa_guard_release(DAT_00094ca0 + 0x94c94);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10028,(int *)(DAT_00094938 + 0x947dc),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x30000,&local_18e,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xa0000,&local_18f,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0,(uchar *)(DAT_0009493c + 0x9480e),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x130003,&local_190,1);
  local_168 = 0;
  uStack356 = 0;
  iVar4 = *(int *)(iVar9 + *(int *)(this + 0x60) * 4);
  local_160 = *(undefined4 *)(iVar4 + 0x3420);
  local_15c = *(undefined4 *)(iVar4 + 0x3424);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0xd0000,&local_168,4);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10000,(uchar *)(DAT_00094940 + 0x9485e),1);
  local_1ac = 0.0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x80003,&local_1ac,1);
  local_1b8 = 0.0;
  local_1b4 = 0.0;
  iVar4 = *(int *)(iVar9 + *(int *)(this + 0x60) * 4);
  uVar2 = *(uint *)(iVar4 + 0x274);
  if (uVar2 != 0) {
    auVar15 = CONCAT88(in_d16,DAT_00094948);
    pfVar6 = (float *)(iVar4 + 0x27c);
    uVar3 = 0;
    fVar10 = DAT_00094944;
    fVar11 = DAT_00094944;
    do {
      fVar14 = *pfVar6;
      if (fVar14 < 30.0) {
        fVar12 = pfVar6[-1];
        fVar13 = fVar14 - fVar12;
        if (((uint)param_1 < 6) && ((1 << (param_1 & 0xffU) & 0x26U) != 0)) {
          if (fVar11 <= fVar13) {
            local_1b8 = ROUND(fVar12);
            local_1b4 = ROUND(*pfVar6);
            fVar11 = fVar13;
          }
        }
        else if (((int)((uint)(fVar10 < fVar14) << 0x1f) < 0) &&
                (dVar16 = SUB168(auVar15,0), auVar15 = CONCAT88((double)fVar13,dVar16),
                (int)((uint)((double)fVar13 < dVar16) << 0x1f) < 0)) {
          local_1b8 = ROUND(fVar12);
          local_1b4 = ROUND(*pfVar6);
          fVar10 = *pfVar6;
        }
      }
      pfVar6 = pfVar6 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10005,(int *)&local_1b8,2);
  local_1b9 = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10006,&local_1b9,1);
  local_1ba = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10009,&local_1ba,1);
  iVar9 = *(int *)(iVar9 + *(int *)(this + 0x60) * 4);
  local_17c = *(int *)(iVar9 + 0x3418);
  local_178 = *(int *)(iVar9 + 0x341c);
  local_174 = local_17c + *(int *)(iVar9 + 0x3420);
  local_16c = 0;
  local_170 = *(int *)(iVar9 + 0x3424) + local_178;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10004,&local_17c,5);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x10008,&local_17c,5);
  local_1bb = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x160000,&local_1bb,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,(uint)QCamera3StreamMem::getFd,&local_193,1);
  if (param_1 == 6) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x1000f,(uchar *)(DAT_00094ca4 + 0x94a46),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x10007,(uchar *)(DAT_00094ca8 + 0x94a54),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x10003,(uchar *)(DAT_00094cac + 0x94a62),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x1000b,(uchar *)(DAT_00094cb0 + 0x94a70),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x130003,(uchar *)(DAT_00094cb4 + 0x94a7e),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0,(uchar *)(DAT_00094cb8 + 0x94a8c),1);
  }
  local_1bc = '\0';
  if ((this[0x1df] != (QCamera3HardwareInterface)0x0) ||
     (this[0x1e0] != (QCamera3HardwareInterface)0x0)) {
    uVar2 = count_leading_zeroes(param_1 + -3);
    local_1bc = (uchar)(uVar2 >> 5);
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    local_78 = 0;
    uStack112 = 0;
    local_88 = 0;
    uStack128 = 0;
    local_98 = 0;
    uStack144 = 0;
    local_4c = 0;
    uStack72 = 0;
    uStack68 = 0;
    property_get(DAT_00094cbc + 0x94af2,&local_98,DAT_00094cc0 + 0x94af4);
    uVar2 = atoi((char *)&local_98);
    if (3 < uVar2) {
      uVar2 = 2;
    }
    local_98 = local_98 & 0xffffffff00000000 | (ulonglong)uVar2;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x80050000,&local_1bc,1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack388,0x80050001,(int *)&local_98,1);
    if (*(int *)(*(int *)(DAT_00094cc4 + 0x94b2a) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00094ccc + 0x94b4e,0x2961,DAT_00094cc8 + 0x94b3e,local_1bc,
                          (int)local_98,param_1);
    }
  }
  local_1c8 = 0;
  local_1bd = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x800b0000,&local_1bd,1);
  local_1be = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x800b0001,&local_1be,1);
  local_1c4 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x800b0002,&local_1c4,1);
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  local_88 = 0;
  uStack128 = 0;
  local_98 = 0;
  uStack144 = 0;
  local_4c = 0;
  uStack72 = 0;
  uStack68 = 0;
  property_get(DAT_00094cd0 + 0x94bc8,&local_98,DAT_00094cd4 + 0x94bca);
  iVar9 = memcmp((void *)(DAT_00094cd8 + 0x94bd6),&local_98,3);
  if (iVar9 == 0) {
LAB_00094c0a:
    local_1c8 = *(int *)(*(int *)(DAT_00094cdc + 0x94c10) + local_1c8 * 8 + 4);
  }
  else {
    if ((int)local_98 == 0x66664f) {
      local_1c8 = 1;
      goto LAB_00094c0a;
    }
    iVar9 = memcmp((void *)(DAT_00094ce0 + 0x94bf2),&local_98,5);
    local_1c8 = 2;
    if (iVar9 == 0) goto LAB_00094c0a;
  }
  if (local_1bc != '\0') {
    local_1c8 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack388,0x80010000,&local_1c8,1);
  iVar9 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack388);
  *(int *)(this + param_1 * 4 + 0x6c) = iVar9;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack388);
LAB_00094c44:
  if (*piVar5 != local_3c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}

