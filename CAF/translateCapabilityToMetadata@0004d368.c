
/* qcamera::QCamera3HardwareInterface::translateCapabilityToMetadata(int) */

int __thiscall
qcamera::QCamera3HardwareInterface::translateCapabilityToMetadata
          (QCamera3HardwareInterface *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined auVar13 [16];
  undefined8 in_d16;
  double dVar14;
  uint in_stack_fffffe18;
  cam_cds_mode_type_t local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  char local_1b4;
  undefined local_1b3;
  undefined local_1b2;
  undefined local_1b1;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack412;
  undefined4 local_198;
  undefined4 local_194;
  bool local_18f;
  undefined local_18e;
  undefined local_18d;
  undefined local_18c;
  undefined local_18b;
  undefined local_18a;
  undefined local_189;
  undefined local_188;
  undefined local_187;
  char local_186;
  undefined local_185;
  undefined4 local_184;
  CameraMetadata aCStack384 [8];
  ulonglong local_178;
  undefined8 uStack368;
  undefined8 local_168;
  undefined8 uStack352;
  undefined8 local_158;
  undefined8 uStack336;
  undefined8 local_148;
  undefined8 uStack320;
  undefined8 local_138;
  undefined4 uStack304;
  undefined4 local_12c;
  undefined4 uStack296;
  undefined8 uStack292;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack260;
  undefined4 local_100;
  undefined4 local_fc;
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
  undefined8 local_98;
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
  
  piVar5 = *(int **)(DAT_0004d668 + 0x4d37e);
  local_3c = *piVar5;
  iVar8 = *(int *)(this + param_1 * 4 + 0x58);
  if (iVar8 != 0) goto LAB_0004dcae;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack384);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xc0005,DAT_0004d66c + 0x4d3ae,1,in_stack_fffffe18);
  local_184 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xc0001,(uint)&local_184,1,in_stack_fffffe18);
  auVar13 = ZEXT816(0);
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
  property_get();
  uVar1 = atoi((char *)&local_98);
  local_f8 = SUB168(auVar13,0);
  uStack240 = SUB168(auVar13 >> 0x40,0);
  uStack176 = SUB164(auVar13 >> 0x40,0);
  local_ac = SUB164(auVar13,0);
  uStack168 = SUB164(auVar13 >> 0x20,0);
  local_e8 = local_f8;
  uStack224 = uStack240;
  local_d8 = local_f8;
  uStack208 = uStack240;
  local_c8 = local_f8;
  uStack192 = uStack240;
  local_b8 = local_f8;
  uStack164 = uStack240;
  property_get();
  uVar2 = atoi((char *)&local_f8);
  local_18d = 1;
  local_18e = 1;
  local_187 = 0;
  local_18f = false;
  switch(param_1) {
  case 1:
    local_186 = '\x04';
    local_185 = 1;
    local_188 = 1;
    local_189 = 1;
    local_18a = 1;
    local_18b = 1;
    local_18c = 1;
    break;
  case 2:
    local_186 = '\x04';
    local_185 = 2;
    local_188 = 1;
    local_18a = 2;
    local_18b = 2;
    local_18c = 2;
    local_18d = 2;
    local_18e = 2;
    iVar8 = *(int *)(*(int *)(DAT_0004d680 + 0x4d4fa) + *(int *)(this + 0x4c) * 4);
    local_18f = *(int *)(iVar8 + 0x3da4) == 0;
    local_189 = 0;
    if (*(int *)(iVar8 + 0x3db8) != 0) {
      bVar6 = false;
      uVar2 = 0;
      bVar7 = false;
      do {
        iVar3 = *(int *)(iVar8 + 0x3dac + uVar2 * 4);
        if (iVar3 == 2) {
          bVar6 = true;
        }
        else if (iVar3 == 1) {
          bVar7 = true;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar8 + 0x3db8));
      if (bVar6) {
        local_189 = 2;
      }
      else if (bVar7) {
        local_189 = 1;
      }
    }
    break;
  case 3:
    local_185 = 3;
    goto LAB_0004d562;
  case 4:
    local_185 = 4;
LAB_0004d562:
    local_186 = '\x03';
    local_188 = 0;
    local_189 = 1;
    local_18a = 1;
    local_18b = 1;
    local_18c = 1;
    if ((uVar2 & 0xff) != 0) {
      local_188 = 1;
    }
    break;
  case 5:
    local_186 = '\x04';
    local_185 = 5;
    local_188 = 1;
    local_189 = 1;
    local_18a = 3;
    local_18b = 4;
    local_18c = 1;
    break;
  case 6:
    local_18b = 1;
    local_18a = 1;
    local_18c = 1;
    local_189 = 1;
    local_185 = 6;
    local_186 = '\0';
    local_188 = 0;
    break;
  default:
    local_18b = 1;
    local_18a = 1;
    local_18c = 1;
    local_189 = 1;
    local_185 = 0;
    local_186 = '\x04';
    local_188 = 0;
  }
  iVar8 = *(int *)(DAT_0004d684 + 0x4d5d8);
  if (*(int *)(*(int *)(iVar8 + *(int *)(this + 0x4c) * 4) + 0x3db8) == 0) {
    local_189 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,3,(uint)&local_189,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x1000d,(uint)&local_185,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10011,(uint)&local_187,1,in_stack_fffffe18);
  if (*(int *)(*(int *)(iVar8 + *(int *)(this + 0x4c) * 4) + 0x560) == 1) {
    local_186 = '\0';
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10007,(uint)&local_186,1,in_stack_fffffe18);
  iVar3 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
  if (*(char *)(iVar3 + 0x303b) == '\x01') {
    if (*(char *)(iVar3 + 0x3039) == '\x01') {
      local_188 = 1;
    }
    else if (((uVar1 & 0xff) != 0) || (*(char *)(iVar3 + 0x3039) == '\0')) goto LAB_0004d68e;
  }
  else if ((uVar1 & 0xff) != 0) {
LAB_0004d68e:
    local_188 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x80004,(uint)&local_188,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10001,*(int *)(iVar8 + *(int *)(this + 0x4c) * 4) + 0x5b0,1,
             in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10002,DAT_0004d9dc + 0x4d6c4,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x1000a,DAT_0004d9e0 + 0x4d6d4,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x1000b,DAT_0004d9e4 + 0x4d6e4,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x1000f,DAT_0004d9e8 + 0x4d6f6,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x1000e,DAT_0004d9ec + 0x4d708,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10010,DAT_0004d9f0 + 0x4d718,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10003,DAT_0004d9f4 + 0x4d724,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x40002,DAT_0004d9f8 + 0x4d73e,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x40000,DAT_0004d9fc + 0x4d74a,1,in_stack_fffffe18);
  local_194 = *(undefined4 *)(*(int *)(iVar8 + *(int *)(this + 0x4c) * 4) + 0x302c);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x80000,(uint)&local_194,1,in_stack_fffffe18);
  iVar3 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
  if (*(char *)(iVar3 + 0x3038) != '\0') {
    local_178 = local_178 & 0xffffffff00000000 | (ulonglong)*(uint *)(iVar3 + 0x3034);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x80001,(uint)&local_178,(uint)*(byte *)(iVar3 + 0x3038),in_stack_fffffe18
              );
  }
  local_198 = *(undefined4 *)(*(int *)(iVar8 + *(int *)(this + 0x4c) * 4) + 0x850);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x80002,(uint)&local_198,1,in_stack_fffffe18);
  if (local_186 == '\0') {
    local_178 = local_178 & 0xffffffff00000000;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x80003,(uint)&local_178,1,in_stack_fffffe18);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x20000,DAT_0004da00 + 0x4d7ce,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x60000,(uint)&local_18d,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x100000,(uint)&local_18e,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xe0018,DAT_0004da04 + 0x4d80a,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x110000,DAT_0004da08 + 0x4d816,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x110001,DAT_0004da0c + 0x4d832,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x110002,DAT_0004da10 + 0x4d842,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x110003,DAT_0004da14 + 0x4d852,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x110010,DAT_0004da18 + 0x4d85e,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x160000,DAT_0004da1c + 0x4d86c,1,in_stack_fffffe18);
  iVar3 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
  local_1a0 = *(undefined4 *)(iVar3 + 0x33b8);
  uStack412 = *(undefined4 *)(iVar3 + 0x33bc);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xe0000,(uint)&local_1a0,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xe0001,DAT_0004da20 + 0x4d8ac,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xe0002,DAT_0004da24 + 0x4d8b8,1,in_stack_fffffe18);
  if (((*(byte *)(DAT_0004da28 + 0x4d8c6) & 1) == 0) && (iVar3 = __cxa_guard_acquire(), iVar3 != 0))
  {
    *(undefined4 *)(DAT_0004dd28 + 0x4dd08) =
         *(undefined4 *)(*(int *)(iVar8 + *(int *)(this + 0x4c) * 4) + 0x36a0);
    __cxa_guard_release();
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10028,DAT_0004da2c + 0x4d8e0,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x30000,(uint)&local_18a,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xa0000,(uint)&local_18b,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0,DAT_0004da30 + 0x4d914,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x130003,(uint)&local_18c,1,in_stack_fffffe18);
  local_108 = 0;
  uStack260 = 0;
  iVar3 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
  local_100 = *(undefined4 *)(iVar3 + 0x3410);
  local_fc = *(undefined4 *)(iVar3 + 0x3414);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0xd0000,(uint)&local_108,4,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10000,DAT_0004dd14 + 0x4d960,1,in_stack_fffffe18);
  local_1a4 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x80003,(uint)&local_1a4,1,in_stack_fffffe18);
  local_1b0 = 0.0;
  local_1ac = 0.0;
  iVar3 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
  if (*(int *)(iVar3 + 0x270) != 0) {
    iVar4 = 0;
    auVar13 = CONCAT88(in_d16,DAT_0004dd18);
    uVar1 = 0;
    fVar9 = DAT_0004dd20;
    fVar10 = DAT_0004dd20;
    do {
      iVar3 = iVar3 + iVar4;
      fVar11 = *(float *)(iVar3 + 0x274);
      fVar12 = *(float *)(iVar3 + 0x278) - fVar11;
      if (((uint)param_1 < 6) && ((1 << (param_1 & 0xffU) & 0x26U) != 0)) {
        if (fVar10 <= fVar12) {
          local_1b0 = ROUND(fVar11);
          local_1ac = ROUND(*(float *)(iVar3 + 0x278));
          fVar10 = fVar12;
        }
      }
      else if (((int)((uint)(fVar9 < *(float *)(iVar3 + 0x278)) << 0x1f) < 0) &&
              (dVar14 = SUB168(auVar13,0), auVar13 = CONCAT88((double)fVar12,dVar14),
              (int)((uint)((double)fVar12 < dVar14) << 0x1f) < 0)) {
        local_1b0 = ROUND(fVar11);
        local_1ac = ROUND(*(float *)(iVar3 + 0x278));
        fVar9 = *(float *)(iVar3 + 0x278);
      }
      iVar3 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
      iVar4 = iVar4 + 0x10;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(iVar3 + 0x270));
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10005,(uint)&local_1b0,2,in_stack_fffffe18);
  local_1b1 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10006,(uint)&local_1b1,1,in_stack_fffffe18);
  local_1b2 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10009,(uint)&local_1b2,1,in_stack_fffffe18);
  iVar8 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
  local_11c = *(int *)(iVar8 + 0x3408);
  local_118 = *(int *)(iVar8 + 0x340c);
  local_114 = local_11c + *(int *)(iVar8 + 0x3410);
  local_10c = 0;
  local_110 = *(int *)(iVar8 + 0x3414) + local_118;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10004,(uint)&local_11c,5,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x10008,(uint)&local_11c,5,in_stack_fffffe18);
  local_1b3 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x160000,(uint)&local_1b3,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x110010,(uint)&local_18f,1,in_stack_fffffe18);
  if (param_1 == 6) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x1000f,DAT_0004dd30 + 0x4db34,1,in_stack_fffffe18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x10007,DAT_0004dd34 + 0x4db42,1,in_stack_fffffe18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x10003,DAT_0004dd38 + 0x4db50,1,in_stack_fffffe18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x1000b,DAT_0004dd3c + 0x4db5e,1,in_stack_fffffe18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x130003,DAT_0004dd40 + 0x4db6c,1,in_stack_fffffe18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0,DAT_0004dd44 + 0x4db7a,1,in_stack_fffffe18);
  }
  local_1b4 = '\0';
  if ((this[0x177] != (QCamera3HardwareInterface)0x0) ||
     (this[0x178] != (QCamera3HardwareInterface)0x0)) {
    uVar1 = count_leading_zeroes(param_1 + -3);
    local_1b4 = (char)(uVar1 >> 5);
    uVar1 = getTemporalDenoiseProcessPlate();
    local_178 = local_178 & 0xffffffff00000000 | (ulonglong)uVar1;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x80050000,(uint)&local_1b4,1,in_stack_fffffe18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack384,0x80050001,(uint)&local_178,1,in_stack_fffffe18);
    if (*(int *)(*(int *)(DAT_0004dd48 + 0x4dbd4) + 0x2c) != 0) {
      in_stack_fffffe18 = DAT_0004dd4c + 0x4dbe4;
      mm_camera_debug_log();
    }
  }
  local_1b8 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x800b0000,(uint)&local_1b8,1,in_stack_fffffe18);
  local_1bc = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x800b0001,(uint)&local_1bc,1,in_stack_fffffe18);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x800b0002,(uint)&local_1bc,1,in_stack_fffffe18);
  local_138 = 0;
  uStack304 = 0;
  local_148 = 0;
  uStack320 = 0;
  local_158 = 0;
  uStack336 = 0;
  local_168 = 0;
  uStack352 = 0;
  local_178 = 0;
  uStack368 = 0;
  local_12c = 0;
  uStack296 = 0;
  uStack292 = 0;
  property_get();
  local_1c0 = lookupProp_qcamera__QCamera3HardwareInterface__QCameraPropMap_
                        (*(QCameraPropMap **)(DAT_0004dd5c + 0x4dc74),3,(char *)&local_178);
  if (local_1c0 == 4) {
    local_1c0 = 2;
  }
  if (local_1b4 != '\0') {
    local_1c0 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack384,0x80010000,(uint)&local_1c0,1,in_stack_fffffe18);
  iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack384);
  *(int *)(this + param_1 * 4 + 0x58) = iVar8;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack384);
LAB_0004dcae:
  if (*piVar5 != local_3c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}

