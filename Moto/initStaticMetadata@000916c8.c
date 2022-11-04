
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING (jumptable): Heritage AFTER dead removal. Example location: %0x00000384 : 0x000927c0 */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* qcamera::QCamera3HardwareInterface::initStaticMetadata(unsigned int) */

int qcamera::QCamera3HardwareInterface::initStaticMetadata(uint param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  uchar *puVar8;
  size_t sVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined (*pauVar19) [16];
  float *pfVar20;
  uint uVar21;
  int *piVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  uchar **ppuVar26;
  uchar *puVar27;
  uchar *puVar28;
  uchar **ppuVar29;
  bool bVar30;
  undefined4 *puVar31;
  longlong lVar32;
  float fVar33;
  undefined8 uVar34;
  undefined auVar35 [16];
  undefined8 in_d18;
  undefined auVar36 [16];
  undefined in_q10 [16];
  int local_ca0;
  uint local_c9c;
  undefined4 local_c98;
  undefined4 local_c94;
  uint local_c84;
  int local_c80;
  undefined4 local_c7c;
  undefined4 *local_c78;
  undefined8 *local_c74;
  undefined8 *local_c70;
  undefined8 *local_c6c;
  undefined8 *local_c68;
  int *local_c64;
  int local_c60;
  uint local_c5c;
  int local_c58;
  int local_c54;
  int local_c50;
  int local_c4c;
  uint local_c48;
  int *local_c44;
  undefined4 local_c40;
  int local_b64;
  int *piStack2912;
  uint local_b5c;
  int local_b50;
  longlong *local_b4c;
  uint uStack2888;
  int local_b3c;
  int *local_b38;
  uint uStack2868;
  uchar local_b26;
  uchar local_b25;
  int local_b24;
  uchar *local_b20;
  uint uStack2844;
  uint local_b10;
  uchar local_b09;
  float local_b08;
  int local_b04;
  int local_b00;
  uchar *local_afc;
  uint uStack2808;
  undefined4 local_aec;
  undefined4 uStack2792;
  uchar local_ae1;
  undefined8 local_ae0;
  undefined8 uStack2776;
  undefined4 local_ac8;
  undefined4 local_ac4;
  uchar local_abe [20];
  undefined local_aaa [10];
  CameraMetadata aCStack2720 [16];
  undefined4 local_a90;
  int local_a8c [3];
  uint *local_a80;
  char *local_908 [4];
  int local_8f8;
  undefined4 local_6e8 [4];
  undefined4 *local_6d8;
  uchar *local_5d8 [14];
  undefined local_59f [11];
  undefined local_594 [11];
  undefined local_589 [78];
  undefined local_53b [23];
  undefined local_524 [23];
  undefined local_50d [13];
  int local_500;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined4 local_4f0;
  int local_4e8;
  undefined4 local_4e4;
  undefined8 local_4e0;
  undefined8 uStack1240;
  undefined8 local_4d0;
  undefined8 uStack1224;
  undefined8 local_4c0;
  undefined8 uStack1208;
  undefined8 local_4b0;
  undefined8 uStack1192;
  undefined8 local_4a0;
  undefined4 uStack1176;
  undefined4 local_494;
  undefined4 uStack1168;
  undefined8 uStack1164;
  float local_480 [80];
  undefined8 local_340;
  undefined8 auStack824 [39];
  undefined8 local_200;
  undefined8 auStack504 [39];
  undefined8 local_c0;
  undefined8 uStack184;
  undefined8 local_b0;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 uStack136;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined4 uStack72;
  undefined4 local_44;
  undefined4 uStack64;
  undefined8 uStack60;
  
  ppuVar29 = (uchar **)&local_ca0;
  local_c78 = *(undefined4 **)(DAT_00091a1c + 0x916e4);
  local_c40 = *local_c78;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack2720);
  local_c80 = 0;
  local_c60 = *(int *)(DAT_00091a20 + 0x91702);
  local_c44 = (int *)(local_c60 + param_1 * 4);
  iVar4 = *(int *)(local_c60 + param_1 * 4);
  uVar13 = *(uint *)(iVar4 + 0x710);
  iVar17 = *(int *)(iVar4 + 0x714);
  if ((int)(-(uint)(100000000 < uVar13) - iVar17) < 0 ==
      (SBORROW4(-iVar17,(uint)(100000000 < uVar13)) != false)) {
    if ((int)(iVar17 - (uint)(uVar13 < 0x2faf081)) < 0 ==
        (SBORROW4(iVar17,(uint)(uVar13 < 0x2faf081)) != false)) {
      uVar13 = *(uint *)(iVar4 + 0x5c8);
      if (0x27 < uVar13) {
        uVar13 = 0x28;
      }
      uVar14 = 1;
      piVar22 = (int *)(iVar4 + 0x5d4);
      do {
        piVar16 = piVar22;
        if (uVar13 <= uVar14) break;
        uVar14 = uVar14 + 1;
        piVar22 = piVar16 + 2;
      } while (0x79ebff < piVar16[1] * *piVar16);
      local_c80 = 0;
      if ((int)(piVar16[0x50] - (uint)((uint)piVar16[0x4f] < 0x2faf081)) < 0 !=
          (SBORROW4(piVar16[0x50],(uint)((uint)piVar16[0x4f] < 0x2faf081)) != false)) {
        local_c80 = 1;
      }
    }
    else {
      local_c80 = 1;
    }
  }
  if (((*(char *)(iVar4 + 0x3f6c) == '\0') && (1 < *(int *)(iVar4 + 0x3e9c) - 1U)) &&
     (local_c80 == 1)) {
    local_abe[0] = '\x03';
  }
  else {
    local_abe[0] = '\0';
  }
  local_c5c = param_1;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x150000,local_abe,1);
  local_b26 = (*(uint *)(*local_c44 + 4) | 2) == 2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x90005,(float *)(*local_c44 + 0x302c),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x90004,(float *)(*local_c44 + 0x3030),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x90002,(float *)(*local_c44 + 0x858),1);
  bVar30 = *(char *)(*local_c44 + 0x3040) != '\0';
  if (bVar30) {
    fVar33 = (float)FPRoundInt(*(float *)(*local_c44 + 0x303c) * 10.0,0x20,2,0);
    local_a90 = (char *)(fVar33 / 10.0);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x90000,(float *)&local_a90,(uint)bVar30);
  uVar13 = (uint)*(byte *)(*local_c44 + 0x3048);
  if (uVar13 != 0) {
    uVar13 = 1;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x90001,(float *)(*local_c44 + 0x3044),uVar13);
  uVar13 = (uint)*(byte *)(*local_c44 + 0x304b);
  if (1 < uVar13) {
    uVar13 = 2;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x90003,(uchar *)(*local_c44 + 0x3049),uVar13);
  local_98 = *(int *)(*local_c44 + 0x304c);
  if (0x10 < local_98) {
    local_98 = 0x11;
  }
  local_94 = *(int *)(*local_c44 + 0x3050);
  if (0xc < local_94) {
    local_94 = 0xd;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x90006,&local_98,2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0005,(float *)(*local_c44 + 0x3408),2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0003,(longlong *)(*local_c44 + 0x33c8),2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0004,(longlong *)(*local_c44 + 0x33d8),1);
  local_ac8 = *(undefined4 *)(*local_c44 + 0x3834);
  local_ac4 = *(undefined4 *)(*local_c44 + 0x3838);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xe000b,(camera_metadata_rational *)&local_ac8,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0002,(uchar *)(*local_c44 + 0x33e0),1);
  local_a0 = *(int *)(*local_c44 + 0x3410);
  local_9c = *(undefined4 *)(*local_c44 + 0x3414);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0006,&local_a0,2);
  local_ae0 = SUB168(*(undefined (*) [16])(*local_c44 + 0x3418),0);
  uStack2776 = SUB168(*(undefined (*) [16])(*local_c44 + 0x3418) >> 0x40,0);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0000,(int *)&local_ae0,4);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0007,(int *)(*local_c44 + 0x3428),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xe000c,(int *)(*local_c44 + 0x342c),4);
  iVar4 = *local_c44;
  uVar13 = (uint)*(byte *)(iVar4 + 0x4068);
  if (5 < uVar13) {
    if (*(int *)(*(int *)(DAT_00091a24 + 0x919b4) + 0x24) != 0) {
      local_ca0 = DAT_00091a28 + 0x919c4;
      local_c98 = 5;
      local_c9c = uVar13;
      mm_camera_debug_log(1,2,DAT_00091a2c + 0x919d2,0x2209);
      iVar4 = *local_c44;
    }
    *(undefined *)(iVar4 + 0x4068) = 5;
    iVar4 = *local_c44;
    uVar13 = (uint)*(byte *)(iVar4 + 0x4068);
  }
  if (uVar13 == 0) {
    local_c7c = 0;
  }
  else {
    uVar13 = 0;
    do {
      (&local_a90)[uVar13] = *(float *)(iVar4 + 0x4018 + uVar13 * 4);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)*(byte *)(iVar4 + 0x4068) * 4);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack2720,0xe001b,&local_a90,(uint)*(byte *)(iVar4 + 0x4068) << 2);
    iVar4 = *local_c44;
    local_c7c = 1;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,(uint)"_t",(longlong *)(iVar4 + 0x3440),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x130004,(int *)(*local_c44 + 0x3484),1);
  local_ae1 = '\x01';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xf0008,&local_ae1,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x120001,(int *)(*local_c44 + 0x3684),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x120003,(int *)(*local_c44 + 0x3688),1);
  local_a8 = *(int *)(*local_c44 + 0x368c);
  local_a4 = *(undefined4 *)(*local_c44 + 0x3690);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x120005,&local_a8,2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x120004,(int *)(*local_c44 + 0x3694),1);
  local_b0 = *(undefined8 *)(DAT_00091e2c + 0x91b04);
  auVar36 = CONCAT88(in_d18,local_b0);
  local_c0 = SUB168(*(undefined (*) [16])(DAT_00091e2c + 0x91af4),0);
  uStack184 = SUB168(*(undefined (*) [16])(DAT_00091e2c + 0x91af4) >> 0x40,0);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xd0001,(int *)&local_c0,6);
  iVar4 = *local_c44;
  uVar14 = *(uint *)(iVar4 + 0x5c8);
  uVar13 = 0x28;
  if (uVar14 < 0x28) {
    uVar13 = uVar14;
  }
  if (uVar13 != 0) {
    if (uVar13 < 4) {
LAB_00091b58:
      uVar14 = 0;
      iVar17 = 0;
    }
    else {
      if (0x27 < uVar14) {
        uVar14 = 0x28;
      }
      if ((&local_200 < (undefined8 *)(iVar4 + ~uVar14 * -8 + 0x5c4)) &&
         ((undefined (*) [16])(iVar4 + 0x5cc) < (undefined (*) [16])(&local_200 + (-1 - ~uVar14))))
      goto LAB_00091b58;
      uVar14 = uVar13 & 0x3c;
      iVar17 = uVar14 << 1;
      puVar18 = &local_200;
      pauVar19 = (undefined (*) [16])(iVar4 + 0x5cc);
      uVar21 = uVar14;
      do {
        auVar35 = *pauVar19;
        uVar21 = uVar21 - 4;
        auVar36 = pauVar19[1];
        *puVar18 = SUB168(auVar35,0);
        puVar18[1] = SUB168(auVar35 >> 0x40,0);
        puVar18[2] = SUB168(auVar36,0);
        puVar18[3] = SUB168(auVar36 >> 0x40,0);
        puVar18 = puVar18 + 4;
        pauVar19 = pauVar19[2];
      } while (uVar21 != 0);
      if (uVar13 == uVar14) goto LAB_00091b86;
    }
    puVar15 = (undefined4 *)((int)auStack504 + iVar17 * 4 + -4);
    puVar10 = (undefined4 *)(iVar4 + uVar14 * 8 + 0x5d0);
    do {
      uVar14 = uVar14 + 1;
      puVar15[-1] = puVar10[-1];
      uVar23 = *puVar10;
      puVar10 = puVar10 + 2;
      *puVar15 = uVar23;
      puVar15 = puVar15 + 2;
    } while (uVar14 < uVar13);
  }
LAB_00091b86:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xd0006,(int *)&local_200,uVar13 << 1);
  iVar4 = *local_c44;
  uVar14 = *(uint *)(iVar4 + 0x2ae8);
  uVar13 = 0x28;
  if (uVar14 < 0x28) {
    uVar13 = uVar14;
  }
  if (uVar13 != 0) {
    if (uVar13 < 4) {
LAB_00091be6:
      uVar14 = 0;
      iVar17 = 0;
    }
    else {
      if (0x27 < uVar14) {
        uVar14 = 0x28;
      }
      if ((&local_340 < (undefined8 *)(iVar4 + ~uVar14 * -8 + 0x2ae4)) &&
         ((undefined (*) [16])(iVar4 + 0x2aec) < (undefined (*) [16])(&local_340 + (-1 - ~uVar14))))
      goto LAB_00091be6;
      uVar14 = uVar13 & 0x3c;
      iVar17 = uVar14 << 1;
      pauVar19 = (undefined (*) [16])(iVar4 + 0x2aec);
      puVar18 = &local_340;
      uVar21 = uVar14;
      do {
        auVar35 = *pauVar19;
        uVar21 = uVar21 - 4;
        auVar36 = pauVar19[1];
        *puVar18 = SUB168(auVar35,0);
        puVar18[1] = SUB168(auVar35 >> 0x40,0);
        puVar18[2] = SUB168(auVar36,0);
        puVar18[3] = SUB168(auVar36 >> 0x40,0);
        pauVar19 = pauVar19[2];
        puVar18 = puVar18 + 4;
      } while (uVar21 != 0);
      if (uVar13 == uVar14) goto LAB_00091c16;
    }
    puVar10 = (undefined4 *)(iVar4 + uVar14 * 8 + 0x2af0);
    puVar15 = (undefined4 *)((int)auStack824 + iVar17 * 4 + -4);
    do {
      uVar14 = uVar14 + 1;
      puVar15[-1] = puVar10[-1];
      uVar23 = *puVar10;
      puVar10 = puVar10 + 2;
      *puVar15 = uVar23;
      puVar15 = puVar15 + 2;
    } while (uVar14 < uVar13);
  }
LAB_00091c16:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xd0008,(int *)&local_340,uVar13 << 1);
  iVar4 = *local_c44;
  uVar14 = *(uint *)(iVar4 + 0x274);
  uVar13 = uVar14;
  if (0x27 < uVar14) {
    uVar13 = 0x28;
  }
  if (uVar13 != 0) {
    if (4 < uVar13) {
      if (0x27 < uVar14) {
        uVar14 = 0x28;
      }
      if (((float *)(iVar4 + (~uVar14 * -4 + 2) * 4 + 600) <= local_480) ||
         (local_480 + ~uVar14 * -2 + -2 <= (float *)(iVar4 + 0x278U))) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
    }
    uVar14 = 0;
    pfVar11 = (float *)(iVar4 + 0x27c);
    pfVar20 = local_480 + 1;
    do {
      uVar14 = uVar14 + 1;
      pfVar20[-1] = ROUND(pfVar11[-1]);
      fVar33 = *pfVar11;
      pfVar11 = pfVar11 + 4;
      *pfVar20 = ROUND(fVar33);
      pfVar20 = pfVar20 + 2;
    } while (uVar14 < uVar13);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x10014,(int *)local_480,uVar13 << 1);
  piVar22 = local_c44;
  uVar21 = 1;
  local_aec = *(undefined4 *)(*local_c44 + 0x5bc);
  uStack2792 = *(undefined4 *)(*local_c44 + 0x5c0);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x10016,(camera_metadata_rational *)&local_aec,1);
  pvVar5 = (void *)android::VectorImpl::VectorImpl((VectorImpl *)&local_b00,1,7);
  local_c58 = *(int *)(DAT_00091e30 + 0x91da2) + 8;
  local_a90 = (char *)((uint)local_a90 & 0xffffff00);
  local_b00 = local_c58;
  android::VectorImpl::add(pvVar5);
  local_4a0 = 0;
  uStack1176 = 0;
  local_4b0 = 0;
  uStack1192 = 0;
  local_4c0 = 0;
  uStack1208 = 0;
  local_4d0 = 0;
  uStack1224 = 0;
  local_4e0 = 0;
  uStack1240 = 0;
  local_494 = 0;
  uStack1168 = 0;
  uStack1164 = 0;
  property_get(DAT_00091e34 + 0x91df2,&local_4e0,DAT_00091e38 + 0x91df4);
  uVar13 = atoi((char *)&local_4e0);
  iVar4 = *piVar22;
  uVar14 = (uint)*(byte *)(iVar4 + 0x3f6d);
  if (5 < uVar14) {
    uVar14 = 6;
  }
  if (uVar14 != 0) {
    uVar21 = 0;
    do {
      if ((*(uint *)(iVar4 + 0x3f70 + uVar21 * 4) & 0xfffffffe) == 4) {
        uVar21 = 0;
        goto LAB_00091e3e;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar14);
    uVar21 = 1;
  }
LAB_00091e3e:
  bVar30 = (uVar13 & 0xff) == 0;
  if (bVar30) {
    iVar4 = *(int *)(iVar4 + 4);
  }
  if (bVar30 && iVar4 == 0) {
    local_a90 = (char *)CONCAT31(local_a90._1_3_,1);
    android::VectorImpl::add(&local_b00);
  }
  uVar13 = count_leading_zeroes(uVar13 & 0xff);
  if ((local_b26 ^ 1 | uVar13 >> 5 | uVar21) == 0) {
    local_a90 = (char *)CONCAT31(local_a90._1_3_,1);
    android::VectorImpl::add(&local_b00);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x1001a,local_afc,uStack2808);
  local_4e4 = 0x438;
  local_4e8 = 0x780;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x80140003,&local_4e8,2);
  local_b04 = 0x1e;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x80140004,&local_b04,1);
  local_c4c = *(int *)(DAT_00092268 + 0x91eca);
  if (*(int *)(local_c4c + 0x2c) != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_a90);
    uVar13 = *local_a80;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)local_908);
    uVar23 = *(undefined4 *)(local_8f8 + 4);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)local_6e8);
    local_c94 = *local_6d8;
    local_ca0 = DAT_0009226c + 0x91f0a;
    local_c9c = uVar13;
    local_c98 = uVar23;
    mm_camera_debug_log(1,4,DAT_00092270 + 0x91f18,0x2284);
  }
  piVar22 = local_c44;
  local_b08 = (float)(ulonglong)
                     (*(uint *)(*local_c44 + *(int *)(*local_c44 + 0x4c) * 4 + 0x4c) / 100);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xd0004,&local_b08,1);
  local_b09 = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xd000d,&local_b09,1);
  local_4f8 = *(undefined8 *)(DAT_00092274 + 0x91f70);
  local_4f0 = *(undefined4 *)(DAT_00092274 + 0x91f78);
  if (*(int *)(*piVar22 + 0x564) == 1) {
    local_4f0 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x1001c,(int *)&local_4f8,3);
  local_c68 = &local_50;
  local_50 = 0;
  uStack72 = 0;
  local_c6c = &local_60;
  local_60 = 0;
  uStack88 = 0;
  local_c70 = &local_70;
  local_70 = 0;
  uStack104 = 0;
  local_c74 = &local_80;
  local_80 = 0;
  uStack120 = 0;
  local_90 = 0;
  uStack136 = 0;
  local_44 = 0;
  uStack64 = 0;
  uStack60 = 0;
  property_get(DAT_00092278 + 0x91fec,&local_90,DAT_0009227c + 0x91fee);
  uVar13 = atoi((char *)&local_90);
  if (*(int *)(local_c4c + 0x2c) != 0) {
    local_ca0 = DAT_00092280 + 0x9200a;
    local_c9c = uVar13 & 0xff;
    mm_camera_debug_log(1,4,DAT_00092284 + 0x92014,0x229c);
  }
  uVar14 = (uint)*(byte *)(*local_c44 + 0x2f81);
  local_b10 = uVar14;
  pvVar5 = (void *)android::VectorImpl::VectorImpl((VectorImpl *)&local_b24,1,7);
  local_b24 = local_c58;
  local_a90 = (char *)((uint)local_a90 & 0xffffff00);
  android::VectorImpl::add(pvVar5);
  local_c84 = uVar13 & 0xff;
  if (uVar14 == 0) {
    local_c84 = uVar14;
  }
  if (local_c84 == 1) {
    local_a90 = (char *)CONCAT31(local_a90._1_3_,1);
LAB_00092064:
    android::VectorImpl::add(&local_b24);
  }
  else {
    if (local_c84 == 3) {
      local_a90._0_1_ = 1;
      android::VectorImpl::add(&local_b24);
      local_a90 = (char *)CONCAT31(local_a90._1_3_,2);
      goto LAB_00092064;
    }
    if (local_c84 == 2) {
      local_a90 = (char *)CONCAT31(local_a90._1_3_,2);
      goto LAB_00092064;
    }
    local_b10 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x120000,local_b20,uStack2844);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x120002,(int *)&local_b10,1);
  piVar22 = local_c44;
  local_b25 = *(uchar *)(*local_c44 + 0x3680);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x80110004,&local_b25,1);
  local_500 = *(int *)(*piVar22 + 0x5ac);
  local_4fc = *(undefined4 *)(*piVar22 + 0x5b0);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x10015,&local_500,2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x80005,&local_b26,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,(uint)"%d min=%d def=%d\n",(int *)(DAT_00092288 + 0x920f0),0x10);
  android::VectorImpl::VectorImpl((VectorImpl *)&local_b3c,4,7);
  *local_c68 = 0;
  local_c68[1] = 0;
  *local_c6c = 0;
  local_c6c[1] = 0;
  *local_c70 = 0;
  local_c70[1] = 0;
  *local_c74 = 0;
  local_c74[1] = 0;
  local_90 = 0;
  uStack136 = 0;
  local_44 = 0;
  uStack64 = 0;
  uStack60 = 0;
  local_c54 = *(int *)(DAT_0009228c + 0x92130) + 8;
  local_b3c = local_c54;
  property_get(DAT_00092290 + 0x9213e,&local_90,DAT_00092294 + 0x92140);
  iVar4 = __strlen_chk(&local_90,0x5c);
  if (iVar4 == 0) {
    uVar13 = 0x900;
LAB_0009218e:
    local_c50 = 0x6c0;
  }
  else {
    local_a90 = (char *)0x0;
    pcVar6 = strtok_r((char *)&local_90,(char *)(DAT_00092298 + 0x92164),(char **)&local_a90);
    if (pcVar6 == (char *)0x0) {
      uVar13 = 0x900;
    }
    else {
      uVar13 = atoi(pcVar6);
    }
    pcVar6 = strtok_r((char *)0x0,(char *)(DAT_0009229c + 0x92184),(char **)&local_a90);
    if (pcVar6 == (char *)0x0) goto LAB_0009218e;
    local_c50 = atoi(pcVar6);
  }
  iVar17 = 0;
  iVar4 = *(int *)(*local_c44 + 0x5d0);
  uVar14 = *(uint *)(*local_c44 + 0x5cc);
  local_c48 = uVar13;
  if (iVar4 < local_c50 || (int)uVar14 < (int)uVar13) {
    local_c48 = uVar14;
  }
  if (iVar4 < local_c50 || (int)uVar14 < (int)uVar13) {
    local_c50 = iVar4;
  }
  local_c64 = local_a8c;
  do {
    pcVar6 = *(char **)((int)&local_c0 + iVar17 * 4);
    if ((pcVar6 + -0x24 < (char *)0x2) || (pcVar6 == (char *)0x20)) {
      if (*(int *)(*local_c44 + 0x2ae8) != 0) {
        uVar13 = 1;
        while( true ) {
          local_908[0] = (char *)0x0;
          local_a90 = pcVar6;
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          uVar14 = *(uint *)(*local_c44 + 0x2ae8);
          if (0x27 < uVar14) {
            uVar14 = 0x28;
          }
          if (uVar14 <= uVar13) break;
          uVar13 = uVar13 + 1;
          pcVar6 = *(char **)((int)&local_c0 + iVar17 * 4);
        }
      }
    }
    else if (pcVar6 == (char *)0x21) {
      if (*(int *)(*local_c44 + 0x5c8) != 0) {
        local_a90 = (char *)0x21;
        uVar13 = 1;
        while( true ) {
          local_908[0] = (char *)0x0;
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          uVar14 = *(uint *)(*local_c44 + 0x5c8);
          if (0x27 < uVar14) {
            uVar14 = 0x28;
          }
          if (uVar14 <= uVar13) break;
          uVar13 = uVar13 + 1;
          local_a90 = *(char **)((int)&local_c0 + iVar17 * 4);
        }
      }
    }
    else {
      local_a8c[0] = 0;
      local_a90 = (char *)0x0;
      iVar4 = *local_c44;
      if (*(int *)(iVar4 + 0x5c8) != 0) {
        uVar13 = 0;
        iVar12 = 0x5cc;
        do {
          local_6e8[0] = 0;
          local_908[0] = pcVar6;
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          android::VectorImpl::add(&local_b3c);
          iVar4 = *local_c44;
          if (((int)local_a90 <= *(int *)(iVar4 + iVar12)) &&
             (local_a8c[0] <= *(int *)(iVar4 + uVar13 * 8 + 0x5d0))) {
            local_a90 = *(char **)(iVar4 + iVar12);
            local_a8c[0] = *(int *)(iVar4 + iVar12 + 4);
          }
          pcVar6 = *(char **)((int)&local_c0 + iVar17 * 4);
          if (((((uint)pcVar6 & 0xfffffffe) == 0x22) && (*(int *)(iVar4 + 0x26f8) != 0)) &&
             (((int)local_c48 <= *(int *)(iVar4 + iVar12) ||
              (local_c50 <= *(int *)(iVar4 + uVar13 * 8 + 0x5d0))))) {
            local_6e8[0] = 1;
            local_908[0] = pcVar6;
            android::VectorImpl::add(&local_b3c);
            android::VectorImpl::add(&local_b3c);
            android::VectorImpl::add(&local_b3c);
            android::VectorImpl::add(&local_b3c);
            pcVar6 = *(char **)((int)&local_c0 + iVar17 * 4);
            iVar4 = *local_c44;
          }
          uVar14 = *(uint *)(iVar4 + 0x5c8);
          if (0x27 < uVar14) {
            uVar14 = 0x28;
          }
          iVar12 = iVar12 + 8;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
      }
      if ((((uint)pcVar6 & 0xfffffffe) == 0x22) && (*(int *)(iVar4 + 0x26f8) == 0)) {
        local_6e8[0] = 1;
        local_908[0] = pcVar6;
        android::VectorImpl::add(&local_b3c);
        android::VectorImpl::add(&local_b3c);
        android::VectorImpl::add(&local_b3c);
        android::VectorImpl::add(&local_b3c);
      }
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 != 6);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xd000a,local_b38,uStack2868);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x60000,(uchar *)(DAT_00092784 + 0x9243a),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0x110003,(uchar *)(DAT_00092788 + 0x92450),1);
  android::VectorImpl::VectorImpl((VectorImpl *)&local_b50,8,7);
  iVar4 = 0;
  local_c64 = (int *)(*(int *)(DAT_0009278c + 0x9246e) + 8);
  local_b50 = (int)local_c64;
  do {
    pcVar6 = *(char **)((int)&local_c0 + iVar4 * 4);
    if ((pcVar6 + -0x20 < (char *)0x6) && ((1 << ((uint)(pcVar6 + -0x20) & 0xff) & 0x31U) != 0)) {
      if (*(int *)(*local_c44 + 0x2ae8) != 0) {
        uVar13 = 1;
        iVar17 = 0x2e20;
        while( true ) {
          local_a8c[0] = (int)pcVar6 >> 0x1f;
          local_a90 = pcVar6;
          android::VectorImpl::add(&local_b50);
          piVar22 = local_c44;
          local_a90 = *(char **)(*local_c44 + iVar17 + -0x334);
          local_a8c[0] = (int)local_a90 >> 0x1f;
          android::VectorImpl::add(&local_b50);
          local_a90 = *(char **)(*piVar22 + iVar17 + -0x330);
          local_a8c[0] = (int)local_a90 >> 0x1f;
          android::VectorImpl::add(&local_b50);
          android::VectorImpl::add(&local_b50);
          uVar14 = *(uint *)(*piVar22 + 0x2ae8);
          if (0x27 < uVar14) {
            uVar14 = 0x28;
          }
          if (uVar14 <= uVar13) break;
          iVar17 = iVar17 + 8;
          uVar13 = uVar13 + 1;
          pcVar6 = *(char **)((int)&local_c0 + iVar4 * 4);
        }
      }
    }
    else if (*(int *)(*local_c44 + 0x5c8) != 0) {
      uVar13 = 1;
      iVar17 = 0x5cc;
      while( true ) {
        local_a8c[0] = (int)pcVar6 >> 0x1f;
        local_a90 = pcVar6;
        android::VectorImpl::add(&local_b50);
        piVar22 = local_c44;
        local_a90 = *(char **)(*local_c44 + iVar17);
        local_a8c[0] = (int)local_a90 >> 0x1f;
        android::VectorImpl::add(&local_b50);
        local_a90 = *(char **)(*piVar22 + iVar17 + 4);
        local_a8c[0] = (int)local_a90 >> 0x1f;
        android::VectorImpl::add(&local_b50);
        android::VectorImpl::add(&local_b50);
        uVar14 = *(uint *)(*piVar22 + 0x5c8);
        if (0x27 < uVar14) {
          uVar14 = 0x28;
        }
        if (uVar14 <= uVar13) break;
        iVar17 = iVar17 + 8;
        uVar13 = uVar13 + 1;
        pcVar6 = *(char **)((int)&local_c0 + iVar4 * 4);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 6);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2720,0xd000b,local_b4c,uStack2888);
  android::VectorImpl::VectorImpl((VectorImpl *)&local_b64,4,7);
  piVar22 = local_c44;
  local_b64 = local_c54;
  iVar4 = *local_c44;
  if (*(int *)(iVar4 + 0xd78) != 0) {
    iVar17 = 0xd84;
    uVar13 = 0;
    do {
      local_a90 = (char *)0x0;
      iVar12 = uVar13 * 0x28c + iVar4;
      local_c50 = iVar17;
      switch(*(undefined4 *)(iVar12 + 0xd7c)) {
      case 1:
        local_a90 = (char *)0x3c;
        goto switchD_000925f8_caseD_8;
      case 2:
        local_a90 = (char *)0x5a;
        goto switchD_000925f8_caseD_8;
      case 3:
        local_a90 = (char *)0x78;
        break;
      case 4:
        local_a90 = (char *)0x96;
        break;
      case 5:
        local_a90 = (char *)0xb4;
        break;
      case 6:
        local_a90 = (char *)0xd2;
        break;
      case 7:
        local_a90 = (char *)0xf0;
        break;
      case 8:
        local_a90 = (char *)0x1e0;
        break;
      default:
        goto switchD_000925f8_caseD_8;
      }
      if (*(char *)(iVar12 + 0xd80) != '\0') {
        uVar14 = 1;
        local_c48 = uVar13;
        do {
          android::VectorImpl::add(&local_b64);
          android::VectorImpl::add(&local_b64);
          local_908[0] = (char *)0x1e;
          android::VectorImpl::add(&local_b64);
          android::VectorImpl::add(&local_b64);
          iVar4 = (int)((longlong)(int)local_a90 * -0x77777777 + (ZEXT48(local_a90) << 0x20) >> 0x20
                       );
          local_908[0] = (char *)((iVar4 >> 4) - (iVar4 >> 0x1f));
          android::VectorImpl::add(&local_b64);
          android::VectorImpl::add(&local_b64);
          android::VectorImpl::add(&local_b64);
          android::VectorImpl::add(&local_b64);
          android::VectorImpl::add(&local_b64);
          iVar4 = (int)((longlong)(int)local_a90 * -0x77777777 + (ZEXT48(local_a90) << 0x20) >> 0x20
                       );
          local_908[0] = (char *)((iVar4 >> 4) - (iVar4 >> 0x1f));
          android::VectorImpl::add(&local_b64);
          iVar4 = *piVar22;
          uVar13 = local_c48;
          if (0x27 < uVar14) break;
          bVar30 = uVar14 < *(byte *)(local_c48 * 0x28c + iVar4 + 0xd80);
          uVar14 = uVar14 + 1;
        } while (bVar30);
      }
switchD_000925f8_caseD_8:
      uVar13 = uVar13 + 1;
      iVar17 = local_c50 + 0x28c;
    } while (uVar13 < *(uint *)(iVar4 + 0xd78));
  }
  local_90 = 0;
  uStack136 = 0;
  local_44 = 0;
  uStack64 = 0;
  uStack60 = 0;
  *local_c68 = 0;
  local_c68[1] = 0;
  *local_c6c = 0;
  local_c6c[1] = 0;
  *local_c70 = 0;
  local_c70[1] = 0;
  *local_c74 = 0;
  local_c74[1] = 0;
  piVar16 = (int *)(DAT_00092794 + 0x92732);
  property_get(DAT_00092790 + 0x92730,&local_90);
  iVar4 = atoi((char *)&local_90);
  local_c48 = iVar4 << 0x18;
  iVar4 = 0x10008;
  if (local_c48 != 0) {
    piVar16 = piStack2912;
  }
  if (local_c48 != 0 && piVar16 != (int *)0x0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack2720,0x10023,piVar16,local_b5c);
  }
  iVar17 = *piVar22;
  uVar13 = *(uint *)(iVar17 + 0x5c8);
  if (0x27 < uVar13) {
    uVar13 = 0x28;
  }
  if (uVar13 == 0) {
    puVar8 = &DAT_00000008;
  }
  else {
    if (uVar13 < 4) {
      uVar21 = 0;
      uVar14 = 0;
LAB_000927ce:
      do {
        uVar7 = *(int *)(iVar17 + 0x5d0 + uVar21 * 8) * *(int *)(iVar17 + 0x5cc + uVar21 * 8);
        if (uVar14 <= uVar7 && uVar7 - uVar14 != 0) {
          uVar14 = uVar7;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar13);
    }
    else {
      uVar21 = uVar13 & 0x3c;
      auVar35 = ZEXT816(0);
      puVar10 = (undefined4 *)(iVar17 + 0x5cc);
      uVar14 = uVar21;
      do {
        puVar15 = (undefined4 *)0x390;
        puVar1 = (undefined4 *)0x3a0;
        lVar32 = 2;
        puVar31 = puVar10;
        while( true ) {
          *puVar15 = *puVar31;
          puVar31 = puVar31 + 1;
          *puVar1 = *puVar31;
          puVar31 = puVar31 + 1;
          lVar32 = lVar32 + -1;
          if (lVar32 == 0) break;
          puVar15 = puVar15 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar15 = (undefined4 *)0x398;
        puVar1 = (undefined4 *)0x3a8;
        lVar32 = 2;
        while( true ) {
          *puVar15 = *puVar31;
          puVar31 = puVar31 + 1;
          *puVar1 = *puVar31;
          puVar31 = puVar31 + 1;
          lVar32 = lVar32 + -1;
          if (lVar32 == 0) break;
          puVar15 = puVar15 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar10 = puVar10 + 8;
        uVar14 = uVar14 - 4;
        auVar36 = VectorMultiply(in_q10,auVar36,4);
        auVar35 = VectorMax(auVar36,auVar35,4,1);
      } while (uVar14 != 0);
      auVar35 = VectorMax(auVar35,SUB3216(CONCAT1616(auVar35,auVar35) >> 0x40,0),4,1);
      uVar23 = SUB164(auVar35 >> 0x20,0);
      auVar36 = ZEXT816(CONCAT44(uVar23,uVar23));
      auVar36 = VectorMax(auVar35,auVar36 & auVar36 << 0x40,4,1);
      uVar14 = VectorGetElement(SUB168(auVar36,0),0,4,0);
      if (uVar13 != uVar21) goto LAB_000927ce;
    }
    puVar8 = (uchar *)((uVar14 * 3 >> 1) + 8);
  }
  ppuVar29[0x4e] = puVar8;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),(uint)"d min=%d def=%d\n",(int *)(ppuVar29 + 0x4e),
             1);
  iVar17 = *piVar22;
  uVar13 = *(uint *)(iVar17 + 0x1bc);
  if (0xc < uVar13) {
    uVar13 = 0xd;
  }
  uVar14 = 0;
  if (uVar13 != 0) {
    iVar24 = 0x70;
    iVar12 = DAT_00092b54 + 0x92830;
    iVar25 = *(int *)(DAT_00092b50 + 0x9282e);
    while( true ) {
      uVar21 = *(uint *)(iVar17 + iVar24 * 4);
      if (uVar21 < 9) {
        *(char *)((int)ppuVar29 + uVar14 + 0x793) = (char)*(undefined4 *)(iVar25 + uVar21 * 8);
        uVar14 = uVar14 + 1;
      }
      else if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
        *ppuVar29 = (uchar *)iVar12;
        mm_camera_debug_log(1,3,DAT_00092b58 + 0x92864,0x18f5);
      }
      if (uVar13 <= iVar24 - 0x6fU) break;
      iVar24 = iVar24 + 1;
      iVar17 = *(int *)ppuVar29[0x17];
    }
    piVar22 = (int *)ppuVar29[0x17];
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),iVar4 + 0x10,(uchar *)((int)ppuVar29 + 0x793),
             uVar14);
  iVar17 = *piVar22;
  uVar13 = *(uint *)(iVar17 + 500);
  if (0x16 < uVar13) {
    uVar13 = 0x17;
  }
  if (uVar13 != 0) {
    uVar21 = 0;
    uVar14 = 0;
    iVar4 = DAT_00092b5c + 0x928aa;
    do {
      iVar12 = 1;
      switch(*(undefined4 *)(iVar17 + uVar21 * 4 + 0x1f8)) {
      case 0:
        goto switchD_000928bc_caseD_0;
      default:
        if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
          *ppuVar29 = (uchar *)iVar4;
          mm_camera_debug_log(1,3,DAT_00092b60 + 0x928f2,0x18f5);
        }
        goto switchD_000928bc_caseD_0;
      case 2:
        iVar12 = 4;
        break;
      case 3:
        iVar12 = 9;
        break;
      case 4:
        iVar12 = 8;
        break;
      case 5:
        iVar12 = 10;
        break;
      case 6:
        iVar12 = 5;
        break;
      case 7:
        iVar12 = 3;
        break;
      case 9:
        iVar12 = 0xd;
        break;
      case 10:
        iVar12 = 0xb;
        break;
      case 0xc:
        iVar12 = 0xf;
        break;
      case 0xd:
        iVar12 = 0xc;
        break;
      case 0xe:
        iVar12 = 0xe;
        break;
      case 0xf:
        iVar12 = 6;
        break;
      case 0x10:
        iVar12 = 7;
        break;
      case 0x11:
        iVar12 = 2;
        break;
      case 0x13:
        break;
      case 0x14:
        iVar12 = 0x10;
      }
      *(char *)((int)ppuVar29 + uVar14 + 0x765) = (char)uVar21;
      *(char *)((int)ppuVar29 + uVar14 + 0x77c) =
           (char)*(undefined4 *)(*(int *)(DAT_00092b64 + 0x92936) + iVar12 * 8);
      uVar14 = uVar14 + 1;
switchD_000928bc_caseD_0:
      uVar21 = uVar21 + 1;
      if (uVar13 <= uVar21) goto code_r0x00092948;
      iVar17 = *piVar22;
    } while( true );
  }
  uVar14 = 0;
LAB_00092954:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),iVar4 + 0x11,(uchar *)(ppuVar29 + 0x1df),uVar14);
  iVar17 = *(int *)(ppuVar29[0x10] + (int)ppuVar29[0x11] * 4);
  *ppuVar29 = (uchar *)((int)ppuVar29 + 0x765);
  ppuVar29[1] = ppuVar29[0x11];
  makeOverridesList((cam_scene_mode_overrides_t *)(iVar17 + 0x36b8),uVar14,0x17,
                    (uchar *)(ppuVar29 + 0x1c8),*ppuVar29,(uint)ppuVar29[1]);
  if (uVar14 == 0) {
    uVar14 = 1;
    *(undefined *)(ppuVar29 + 0x1df) = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),iVar4 + 0x15,(uchar *)(ppuVar29 + 0x1c8),uVar14 * 3
            );
  uVar14 = 3;
  *(undefined *)((int)ppuVar29 + 0x1fe) = 2;
  *(undefined2 *)(ppuVar29 + 0x7f) = 0x100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),iVar4 + 0x1e,(uchar *)(ppuVar29 + 0x7f),3);
  iVar4 = *(int *)ppuVar29[0x17];
  uVar13 = *(uint *)(iVar4 + 0x4f8);
  if (5 < uVar13) {
    uVar13 = 6;
  }
  uVar21 = 0;
  if (uVar13 != 0) {
    iVar12 = 0x13f;
    iVar17 = DAT_00092b68 + 0x929e6;
    iVar24 = *(int *)(DAT_00092b6c + 0x929ec);
    while( true ) {
      uVar7 = *(uint *)(iVar4 + iVar12 * 4);
      if (uVar7 < 6) {
        *(char *)((int)ppuVar29 + uVar21 + 0x1f6) =
             (char)*(undefined4 *)(iVar24 + *(int *)(iVar17 + uVar7 * 4) * 8);
        uVar21 = uVar21 + 1;
      }
      else if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
        *ppuVar29 = (uchar *)(DAT_00092b70 + 0x92a22);
        mm_camera_debug_log(1,3,DAT_00092b74 + 0x92a2a,0x18f5);
      }
      if (uVar13 <= iVar12 - 0x13eU) break;
      iVar12 = iVar12 + 1;
      iVar4 = *(int *)ppuVar29[0x17];
    }
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x10012,(uchar *)((int)ppuVar29 + 0x1f6),uVar21);
  piVar22 = (int *)ppuVar29[0x17];
  *(undefined *)(ppuVar29 + 0x7d) = 2;
  *(undefined2 *)((int)ppuVar29 + 0x1f2) = 0x100;
  if (*(int *)(*piVar22 + 0x3eb0) == 0) {
    uVar14 = 1;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),4,(uchar *)((int)ppuVar29 + 0x1f2),uVar14);
  iVar4 = *piVar22;
  uVar13 = *(uint *)(iVar4 + 0x564);
  if (8 < uVar13) {
    uVar13 = 9;
  }
  if (uVar13 == 0) {
    uVar14 = 0;
  }
  else {
    uVar21 = 0;
    uVar14 = 0;
    iVar17 = DAT_00092b78 + 0x92a9e;
    iVar24 = *(int *)(DAT_00092b7c + 0x92aa4);
    iVar12 = DAT_00092b80 + 0x92aac;
    while( true ) {
      uVar7 = *(uint *)(iVar4 + uVar21 * 4 + 0x568);
      if ((uVar7 < 8) && ((0xfbU >> (uVar7 & 0xff) & 1) != 0)) {
        *(char *)((int)ppuVar29 + uVar14 + 0x717) =
             (char)*(undefined4 *)(iVar24 + *(int *)(iVar17 + uVar7 * 4) * 8);
        uVar14 = uVar14 + 1;
      }
      else if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
        *ppuVar29 = (uchar *)iVar12;
        mm_camera_debug_log(1,3,DAT_00092b84 + 0x92ae2,0x18f5);
      }
      uVar21 = uVar21 + 1;
      if (uVar13 <= uVar21) break;
      iVar4 = *(int *)ppuVar29[0x17];
    }
    piVar22 = (int *)ppuVar29[0x17];
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x10017,(uchar *)((int)ppuVar29 + 0x717),uVar14);
  iVar4 = *piVar22;
  uVar13 = *(uint *)(iVar4 + 0x514);
  if (10 < uVar13) {
    uVar13 = 0xb;
  }
  if (uVar13 == 0) {
    uVar21 = 0;
  }
  else {
    uVar14 = 0;
    uVar21 = 0;
    iVar17 = DAT_00092b88 + 0x92b3e;
    iVar24 = *(int *)(DAT_00092b8c + 0x92b44);
    iVar12 = DAT_00092b90 + 0x92b4c;
    while( true ) {
      uVar7 = *(uint *)(iVar4 + uVar14 * 4 + 0x518);
      if ((uVar7 < 0xb) && ((0x5fdU >> (uVar7 & 0xff) & 1) != 0)) {
        *(char *)((int)ppuVar29 + uVar21 + 0x70c) =
             (char)*(undefined4 *)(iVar24 + *(int *)(iVar17 + uVar7 * 4) * 8);
        uVar21 = uVar21 + 1;
      }
      else if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
        *ppuVar29 = (uchar *)iVar12;
        mm_camera_debug_log(1,3,DAT_00092e9c + 0x92bca,0x18f5);
      }
      uVar14 = uVar14 + 1;
      if (uVar13 <= uVar14) break;
      iVar4 = *(int *)ppuVar29[0x17];
    }
    piVar22 = (int *)ppuVar29[0x17];
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x1001b,(uchar *)(ppuVar29 + 0x1c3),uVar21);
  iVar4 = *piVar22;
  uVar14 = *(uint *)(iVar4 + 0x3448);
  uVar13 = 0xb;
  if (uVar14 < 0xb) {
    uVar13 = uVar14;
  }
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      *(char *)((int)ppuVar29 + uVar14 + 0x701) = (char)*(undefined4 *)(iVar4 + 0x344c + uVar14 * 4)
      ;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x40000,(uchar *)((int)ppuVar29 + 0x701),uVar13);
  cVar2 = *(char *)(*piVar22 + 0x3831);
  if (cVar2 != '\0') {
    cVar2 = '\x01';
  }
  *(char *)((int)ppuVar29 + 0x137) = cVar2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),(uint)"y_t",(uchar *)((int)ppuVar29 + 0x137),1);
  android::VectorImpl::VectorImpl((VectorImpl *)(ppuVar29 + 0x48),1,7);
  ppuVar29[0x48] = ppuVar29[0x12];
  uVar13 = *(uint *)(*piVar22 + 0x3698);
  if (1 < uVar13) {
    uVar13 = 2;
  }
  if (uVar13 != 0) {
    *(char *)(ppuVar29 + 0x84) = (char)*(undefined4 *)(*piVar22 + 0x369c);
    android::VectorImpl::add(ppuVar29 + 0x48);
    if (uVar13 != 1) {
      iVar4 = 0;
      do {
        *(char *)(ppuVar29 + 0x84) = (char)*(undefined4 *)(*piVar22 + iVar4 * 4 + 0x36a0);
        android::VectorImpl::add(ppuVar29 + 0x48);
        uVar14 = iVar4 + 2;
        iVar4 = iVar4 + 1;
      } while (uVar14 < uVar13);
    }
  }
  if (*(char *)((int)ppuVar29 + 0x137) != '\0') {
    *(undefined *)(ppuVar29 + 0x84) = 2;
    ppuVar26 = ppuVar29 + 0x48;
    android::VectorImpl::add(ppuVar26);
    *(undefined *)(ppuVar29 + 0x84) = 3;
    android::VectorImpl::add(ppuVar26);
    *(undefined *)(ppuVar29 + 0x84) = 4;
    android::VectorImpl::add(ppuVar26);
  }
  ppuVar26 = ppuVar29 + 0x80;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x10013,ppuVar29[0x49],(uint)ppuVar29[0x4a]);
  piVar22 = (int *)ppuVar29[0x17];
  iVar4 = *piVar22;
  ppuVar29[0x1be] = *(uchar **)(iVar4 + 0x36a4);
  ppuVar29[0x1bf] = *(uchar **)(iVar4 + 0x36a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xf0001,(int *)(ppuVar29 + 0x1be),2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe000d,(int *)(*piVar22 + 0x36ac),1);
  ppuVar29[0x47] = *(uchar **)(*piVar22 + 0x854);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe000e,(int *)(ppuVar29 + 0x47),1);
  uVar34 = *(undefined8 *)(DAT_00092ea0 + 0x92d92);
  ppuVar29[0x1bc] = *(uchar **)(DAT_00092ea0 + 0x92d9a);
  *(undefined8 *)(ppuVar29 + 0x1ba) = uVar34;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xc0006,(int *)(ppuVar29 + 0x1ba),3);
  *(undefined *)((int)ppuVar29 + 0x11b) = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x140001,(uchar *)((int)ppuVar29 + 0x11b),0);
  if (*(byte *)(*piVar22 + 0x38f4) < 3) {
    *(char *)((int)ppuVar29 + 0x11a) =
         (char)*(undefined4 *)
                (*(int *)(DAT_00092ea4 + 0x92dda) + (uint)*(byte *)(*piVar22 + 0x38f4) * 8);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0x90007,(uchar *)((int)ppuVar29 + 0x11a),1);
  }
  else if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
    *ppuVar29 = (uchar *)(DAT_00092ea8 + 0x92e04);
    mm_camera_debug_log(1,3,DAT_00092eac + 0x92e0c,0x18f5);
  }
  iVar4 = *piVar22;
  uVar13 = (uint)*(byte *)(iVar4 + 0x38f5);
  if (7 < uVar13) {
    uVar13 = 8;
  }
  if (uVar13 != 0) {
    uVar21 = 0;
    uVar14 = 0;
    iVar17 = *(int *)(DAT_00092eb0 + 0x92e38);
    do {
      uVar7 = *(uint *)(iVar4 + uVar21 * 4 + 0x38f8);
      if (uVar7 < 5) {
LAB_00092e4a:
        ppuVar29[uVar14 + 0x1b2] = *(uchar **)(iVar17 + uVar7 * 8);
        uVar14 = uVar14 + 1;
      }
      else {
        if (uVar7 == 0x100) {
          uVar7 = 5;
          goto LAB_00092e4a;
        }
        if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
          *ppuVar29 = (uchar *)(DAT_00092eb4 + 0x92e7c);
          mm_camera_debug_log(1,3,DAT_00092eb8 + 0x92e84,0x18f5);
        }
      }
      uVar21 = uVar21 + 1;
      if (uVar13 <= uVar21) goto LAB_00092ebe;
      iVar4 = *piVar22;
    } while( true );
  }
  uVar14 = 0;
LAB_00092ebe:
  ppuVar26 = ppuVar29 + 0x80;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe0019,(int *)(ppuVar29 + 0x1b2),uVar14);
  *(undefined *)((int)ppuVar29 + 0x119) = 8;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xc000a,(uchar *)((int)ppuVar29 + 0x119),1);
  ppuVar29[0x45] = (uchar *)0x2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xc000b,(int *)(ppuVar29 + 0x45),1);
  ppuVar29[0x44] = (uchar *)0x2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x180001,(int *)(ppuVar29 + 0x44),1);
  ppuVar26 = ppuVar29 + 0x3f;
  android::VectorImpl::VectorImpl((VectorImpl *)ppuVar26,1,7);
  ppuVar29[0x3f] = ppuVar29[0x12];
  *(undefined *)(ppuVar29 + 0x84) = 0;
  android::VectorImpl::add(ppuVar26);
  *(undefined *)(ppuVar29 + 0x84) = 1;
  android::VectorImpl::add(ppuVar26);
  *(undefined *)(ppuVar29 + 0x84) = 2;
  android::VectorImpl::add(ppuVar26);
  *(undefined *)(ppuVar29 + 0x84) = 5;
  android::VectorImpl::add(ppuVar26);
  if (ppuVar29[8] != (uchar *)0x0) {
    *(undefined *)(ppuVar29 + 0x84) = 6;
    android::VectorImpl::add(ppuVar29 + 0x3f);
  }
  *(undefined *)(ppuVar29 + 0x84) = 4;
  android::VectorImpl::add(ppuVar29 + 0x3f);
  *(undefined *)(ppuVar29 + 0x84) = 7;
  android::VectorImpl::add(ppuVar29 + 0x3f);
  puVar8 = ppuVar29[0x16];
  bVar30 = puVar8 != (uchar *)0x0;
  if (bVar30) {
    puVar8 = ppuVar29[0x50];
  }
  if (bVar30 && puVar8 != (uchar *)0x0) {
    *(undefined *)(ppuVar29 + 0x84) = 9;
    android::VectorImpl::add(ppuVar29 + 0x3f);
  }
  if (*(int *)(*piVar22 + 0x3e9c) != 1) {
    *(undefined *)(ppuVar29 + 0x84) = 3;
    android::VectorImpl::add(ppuVar29 + 0x3f);
  }
  ppuVar26 = ppuVar29 + 0x80;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xc000c,ppuVar29[0x40],(uint)ppuVar29[0x41]);
  uVar13 = count_leading_zeroes(*(undefined4 *)(*piVar22 + 0x3e9c));
  *(char *)((int)ppuVar29 + 0xfb) = (char)(uVar13 >> 5);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x10024,(uchar *)((int)ppuVar29 + 0xfb),1);
  uVar13 = count_leading_zeroes(*(undefined4 *)(*piVar22 + 0x3e9c));
  *(char *)((int)ppuVar29 + 0xfa) = (char)(uVar13 >> 5);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x10025,(uchar *)((int)ppuVar29 + 0xfa),1);
  ppuVar29[0x3d] = (uchar *)0x1;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xc0008,(int *)(ppuVar29 + 0x3d),1);
  auVar36 = *(undefined (*) [16])(DAT_00093368 + 0x9302e);
  auVar35 = *(undefined (*) [16])(DAT_00093368 + 0x9303e);
  *(longlong *)(ppuVar29 + 0x1aa) = SUB168(auVar36,0);
  *(longlong *)(ppuVar29 + 0x1ac) = SUB168(auVar36 >> 0x40,0);
  *(longlong *)(ppuVar29 + 0x1ae) = SUB168(auVar35,0);
  *(longlong *)(ppuVar29 + 0x1b0) = SUB168(auVar35 >> 0x40,0);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xd0009,(int *)(ppuVar29 + 0x1aa),8);
  ppuVar29[0x3c] = (uchar *)0x0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x170001,(int *)(ppuVar29 + 0x3c),1);
  iVar4 = *piVar22;
  ppuVar29[0x1a8] = *(uchar **)(iVar4 + 14000);
  ppuVar29[0x1a9] = *(uchar **)(iVar4 + 0x36b4);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x10027,(int *)(ppuVar29 + 0x1a8),2);
  *(undefined2 *)((int)ppuVar29 + 0xee) = 0x201;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,(uint)"ber %d",(uchar *)((int)ppuVar29 + 0xee),2);
  *(undefined *)(ppuVar29 + 0x7c) = 2;
  *(undefined2 *)((int)ppuVar29 + 0x1ee) = 0x100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x100002,(uchar *)((int)ppuVar29 + 0x1ee),3);
  *(undefined2 *)(ppuVar29 + 0x3b) = 0x100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x120007,(uchar *)(ppuVar29 + 0x3b),2);
  ppuVar29[0x3a] = (uchar *)0x3020100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,
             (uint)
             "mera3Channel20bokehProcessCallbackEP21mm_camera_super_buf_tPNS_14QCamera3StreamE",
             (uchar *)(ppuVar29 + 0x3a),4);
  *(undefined *)(ppuVar29 + 0x7b) = 4;
  ppuVar29[0x7a] = (uchar *)0x3020100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xa0002,(uchar *)(ppuVar29 + 0x7a),5);
  piVar22 = (int *)ppuVar29[0x17];
  *(undefined *)((int)ppuVar29 + 0x1e6) = 2;
  *(undefined2 *)(ppuVar29 + 0x79) = 0x100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x130005,(uchar *)(ppuVar29 + 0x79),3);
  *(undefined *)((int)ppuVar29 + 0x1e3) = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x120006,(uchar *)((int)ppuVar29 + 0x1e3),1);
  uVar13 = *(uint *)(*piVar22 + 0x3a58);
  if ((uVar13 < 10) && ((0x37fU >> (uVar13 & 0xff) & 1) != 0)) {
    *(char *)(ppuVar29 + 0x84) =
         (char)*(undefined4 *)
                (*(int *)(DAT_00093378 + 0x931a6) +
                *(int *)(DAT_00093374 + 0x9319e + uVar13 * 4) * 8);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0xe0003,(uchar *)(ppuVar29 + 0x84),1);
    puVar8 = ppuVar29[9];
    puVar28 = ppuVar29[7];
  }
  else {
    puVar8 = ppuVar29[9];
    puVar28 = ppuVar29[7];
    if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
      *ppuVar29 = (uchar *)(DAT_0009336c + 0x9318a);
      mm_camera_debug_log(1,3,DAT_00093370 + 0x93192,0x18f5);
    }
  }
  uVar13 = *(uint *)(*piVar22 + 0x3a5c);
  if ((uVar13 < 10) && ((0x37fU >> (uVar13 & 0xff) & 1) != 0)) {
    *(char *)(ppuVar29 + 0x84) =
         (char)*(undefined4 *)
                (*(int *)(DAT_00093388 + 0x93220) +
                *(int *)(DAT_00093384 + 0x93218 + uVar13 * 4) * 8);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0xe0004,(uchar *)(ppuVar29 + 0x84),1);
  }
  else if (*(int *)(ppuVar29[0x15] + 0x28) != 0) {
    *ppuVar29 = (uchar *)(DAT_0009337c + 0x93204);
    mm_camera_debug_log(1,3,DAT_00093380 + 0x9320c,0x18f5);
  }
  ppuVar26 = ppuVar29 + 0x80;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe0009,(camera_metadata_rational *)(*piVar22 + 0x3ce0),9);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe000a,(camera_metadata_rational *)(*piVar22 + 0x3d28),9);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe0007,(camera_metadata_rational *)(*piVar22 + 0x3d70),9);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe0008,(camera_metadata_rational *)(*piVar22 + 0x3db8),9);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe0005,(camera_metadata_rational *)(*piVar22 + 0x3e00),9);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0xe0006,(camera_metadata_rational *)(*piVar22 + 0x3e48),9);
  __aeabi_memcpy8(ppuVar29 + 0x16e,(void *)(DAT_0009338c + 0x932c6),0xe4);
  pvVar5 = (void *)android::VectorImpl::VectorImpl((VectorImpl *)(ppuVar29 + 0x35),4,7);
  ppuVar29[0x35] = ppuVar29[0x13];
  android::VectorImpl::appendArray(pvVar5,(uint)(ppuVar29 + 0x16e));
  if (1 < *(uint *)(*piVar22 + 0x564)) {
    ppuVar29[0x84] = &Elf32_Ehdr_00010000.e_ident_abiversion;
    android::VectorImpl::add(ppuVar29 + 0x35);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0xc000d,(int *)ppuVar29[0x36],(uint)ppuVar29[0x37])
  ;
  __aeabi_memcpy8(ppuVar29 + 0x138,(void *)(DAT_00093390 + 0x93310),0xd8);
  pvVar5 = (void *)android::VectorImpl::VectorImpl((VectorImpl *)(ppuVar29 + 0x30),4,7);
  ppuVar29[0x30] = ppuVar29[0x13];
  android::VectorImpl::appendArray(pvVar5,(uint)(ppuVar29 + 0x138));
  iVar4 = *piVar22;
  if (1 < *(uint *)(iVar4 + 0x564)) {
    ppuVar29[0x84] = &Elf32_Ehdr_00010000.e_ident_abiversion;
    android::VectorImpl::add(ppuVar29 + 0x30);
    iVar4 = *piVar22;
  }
  if (*(int *)(iVar4 + 0x3e9c) == 0) {
    ppuVar29[0x84] = (uchar *)0xe0013;
    android::VectorImpl::add(ppuVar29 + 0x30);
    ppuVar29[0x84] = (uchar *)0xe0016;
    android::VectorImpl::add(ppuVar29 + 0x30);
    if (puVar28 == (uchar *)0x1) goto LAB_0009334e;
LAB_000933bc:
    if (((uint)puVar28 & 0xfe) == 2) {
      ppuVar29[0x84] = (uchar *)0x110004;
      android::VectorImpl::add(ppuVar29 + 0x30);
      puVar28 = (uchar *)0x110005;
      goto LAB_000933d8;
    }
  }
  else {
    if (puVar28 != (uchar *)0x1) goto LAB_000933bc;
LAB_0009334e:
    ppuVar29[0x84] = (uchar *)0x110006;
    android::VectorImpl::add(ppuVar29 + 0x30);
    puVar28 = (uchar *)0x110007;
LAB_000933d8:
    ppuVar29[0x84] = puVar28;
    android::VectorImpl::add(ppuVar29 + 0x30);
  }
  if (puVar8 != (uchar *)0x0) {
    ppuVar29[0x84] = "\x15";
    android::VectorImpl::add(ppuVar29 + 0x30);
    ppuVar29[0x84] = "";
    android::VectorImpl::add(ppuVar29 + 0x30);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0xc000e,(int *)ppuVar29[0x31],(uint)ppuVar29[0x32])
  ;
  __aeabi_memcpy8(ppuVar29 + 0xe6,(void *)(DAT_0009365c + 0x93426),0x148);
  pvVar5 = (void *)android::VectorImpl::VectorImpl((VectorImpl *)(ppuVar29 + 0x2b),4,7);
  ppuVar29[0x2b] = ppuVar29[0x13];
  android::VectorImpl::appendArray(pvVar5,(uint)(ppuVar29 + 0xe6));
  if (puVar8 != (uchar *)0x0) {
    ppuVar29[0x84] = (uchar *)0xe001b;
    android::VectorImpl::add(ppuVar29 + 0x2b);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0xc000f,(int *)ppuVar29[0x2c],(uint)ppuVar29[0x2d])
  ;
  ppuVar26 = ppuVar29 + 0x26;
  android::VectorImpl::VectorImpl((VectorImpl *)ppuVar26,8,7);
  puVar8 = (uchar *)0x0;
  ppuVar29[0x26] = ppuVar29[0xf];
  iVar4 = *piVar22;
  piVar16 = (int *)ppuVar29[0x17];
  piVar22 = (int *)ppuVar29[0x17];
  ppuVar29[0x14] = (uchar *)(DAT_00093660 + 0x93488);
  do {
    ppuVar29[0x16] = puVar8;
    if (puVar8 == (uchar *)0x0) {
      if (*(int *)(iVar4 + 0x5c8) != 0) {
        uVar13 = 0;
        puVar8 = *(uchar **)(ppuVar29[0x14] + (int)ppuVar29[0x16] * 4);
        do {
          ppuVar29[0x84] = puVar8;
          ppuVar29[0x85] = (uchar *)((int)puVar8 >> 0x1f);
          android::VectorImpl::add(ppuVar26);
          puVar28 = *(uchar **)(*piVar22 + uVar13 * 8 + 0x5cc);
          ppuVar29[0x84] = puVar28;
          ppuVar29[0x85] = (uchar *)((int)puVar28 >> 0x1f);
          android::VectorImpl::add(ppuVar26);
          puVar28 = *(uchar **)(*piVar22 + uVar13 * 8 + 0x5d0);
          ppuVar29[0x84] = puVar28;
          ppuVar29[0x85] = (uchar *)((int)puVar28 >> 0x1f);
          android::VectorImpl::add(ppuVar26);
          android::VectorImpl::add(ppuVar26);
          iVar4 = *piVar22;
          uVar14 = *(uint *)(iVar4 + 0x5c8);
          if (0x27 < uVar14) {
            uVar14 = 0x28;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
      }
    }
    else if (*(int *)(iVar4 + 0x2ae8) != 0) {
      uVar13 = 0;
      puVar8 = *(uchar **)(ppuVar29[0x14] + (int)ppuVar29[0x16] * 4);
      do {
        ppuVar29[0x84] = puVar8;
        ppuVar29[0x85] = (uchar *)((int)puVar8 >> 0x1f);
        android::VectorImpl::add(ppuVar26);
        puVar28 = *(uchar **)(*piVar16 + uVar13 * 8 + 0x2aec);
        ppuVar29[0x84] = puVar28;
        ppuVar29[0x85] = (uchar *)((int)puVar28 >> 0x1f);
        android::VectorImpl::add(ppuVar26);
        puVar28 = *(uchar **)(*piVar16 + uVar13 * 8 + 0x2af0);
        ppuVar29[0x84] = puVar28;
        ppuVar29[0x85] = (uchar *)((int)puVar28 >> 0x1f);
        android::VectorImpl::add(ppuVar26);
        android::VectorImpl::add(ppuVar26);
        iVar4 = *piVar16;
        uVar13 = uVar13 + 1;
        uVar14 = *(uint *)(iVar4 + 0x2ae8);
        if (0x27 < uVar14) {
          uVar14 = 0x28;
        }
      } while (uVar13 < uVar14);
    }
    puVar8 = ppuVar29[0x16] + 1;
  } while (puVar8 != (uchar *)0x2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0xd000c,(longlong *)ppuVar29[0x27],
             (uint)ppuVar29[0x28]);
  piVar22 = (int *)ppuVar29[0x17];
  *(undefined *)((int)ppuVar29 + 0x97) = 0;
  iVar4 = *piVar22;
  puVar8 = *(uchar **)(iVar4 + 0x3e94);
  if (puVar8 == (uchar *)0x0) {
    if (*(int *)(iVar4 + 0x3428) == 0xff) {
      puVar8 = &DAT_0000000c;
    }
    else if (*(int *)(iVar4 + 0x3428) == 0xfff) {
      puVar8 = (uchar *)0x14;
    }
    else {
      puVar8 = (uchar *)0x10;
    }
    ppuVar29[0x16] = puVar8;
    uVar3 = 0;
  }
  else {
    if (puVar8 != (uchar *)0x1) {
      if (*(int *)(ppuVar29[0x15] + 0x20) != 0) {
        *ppuVar29 = (uchar *)(DAT_00093664 + 0x9360e);
        ppuVar29[1] = puVar8;
        mm_camera_debug_log(1,1,DAT_00093668 + 0x9361a,0x25fe);
      }
      ppuVar29[0x16] = (uchar *)0x10;
      goto LAB_00093676;
    }
    iVar4 = *(int *)(iVar4 + 0x3428);
    if (iVar4 == 0xff) {
      puVar8 = (uchar *)0x18;
    }
    else if (iVar4 == 0xfff) {
      puVar8 = (uchar *)0x20;
    }
    else if (iVar4 == 0x3ff) {
      puVar8 = (uchar *)0x1c;
    }
    else {
      puVar8 = (uchar *)0x10;
    }
    ppuVar29[0x16] = puVar8;
    uVar3 = 1;
  }
  *(undefined *)((int)ppuVar29 + 0x97) = uVar3;
LAB_00093676:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x80020001,(uchar *)((int)ppuVar29 + 0x97),1);
  android::VectorImpl::VectorImpl((VectorImpl *)(ppuVar29 + 0x20),4,7);
  puVar8 = ppuVar29[0x16];
  ppuVar29[0x20] = ppuVar29[0x13];
  if (*(int *)(*piVar22 + 0x2ae8) != 0) {
    uVar13 = 0;
    iVar4 = 0x2aec;
    ppuVar26 = ppuVar29 + 0x20;
    do {
      android::VectorImpl::add(ppuVar26);
      android::VectorImpl::add(ppuVar26);
      mm_stream_calc_offset_raw(puVar8,*piVar22 + iVar4,*piVar22 + 0x3008,ppuVar29 + 0x84);
      android::VectorImpl::add(ppuVar26);
      uVar14 = *(uint *)(*piVar22 + 0x2ae8);
      if (0x27 < uVar14) {
        uVar14 = 0x28;
      }
      iVar4 = iVar4 + 8;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar14);
  }
  ppuVar26 = ppuVar29 + 0x80;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x80020000,(int *)ppuVar29[0x21],(uint)ppuVar29[0x22]);
  puVar8 = ppuVar29[0x10];
  puVar28 = ppuVar29[0x11];
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x800c0001,
             (float *)(*(int *)(puVar8 + (int)puVar28 * 4) + 0x5a0),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x800c0002,
             (float *)(*(int *)(puVar8 + (int)puVar28 * 4) + 0x590),1);
  if (puVar28 == (uchar *)0x0) {
    iVar4 = *(int *)ppuVar29[0x17];
    save_bokeh_otp_to_buf((uchar *)(iVar4 + 0x51a2),0x280);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0x800c0005,(uchar *)(iVar4 + 0x51a2),0x280);
  }
  piVar22 = (int *)ppuVar29[0x17];
  uVar13 = count_leading_zeroes(*(int *)(*piVar22 + 0x33e0) + -7);
  *(char *)((int)ppuVar29 + 0x7f) = (char)(uVar13 >> 5);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x800a0001,(uchar *)((int)ppuVar29 + 0x7f),1);
  iVar4 = *piVar22;
  *(undefined *)((int)ppuVar29 + 0x7e) = 0;
  *(undefined *)((int)ppuVar29 + 0x7d) = 0;
  puVar8 = (uchar *)(iVar4 + 0x3748);
  iVar4 = strncmp((char *)puVar8,(char *)(DAT_000938e4 + 0x937aa),0x20);
  if (iVar4 == 0) {
    *(undefined *)((int)ppuVar29 + 0x7e) = 0;
    *(undefined *)((int)ppuVar29 + 0x7d) = 1;
  }
  if (*(int *)(ppuVar29[0x15] + 0x34) != 0) {
    *ppuVar29 = (uchar *)(DAT_00093b84 + 0x937ca);
    ppuVar29[1] = ppuVar29[0x11];
    ppuVar29[2] = puVar8;
    ppuVar29[3] = (uchar *)0x0;
    ppuVar29[4] = (uchar *)(uint)(iVar4 == 0);
    mm_camera_debug_log(1,6,DAT_00093b88 + 0x937de,0x2637);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x800a0002,(uchar *)((int)ppuVar29 + 0x7e),1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x800a0003,(uchar *)((int)ppuVar29 + 0x7d),1);
  ppuVar26 = ppuVar29 + 0x1a;
  android::VectorImpl::VectorImpl((VectorImpl *)ppuVar26,4,7);
  piVar22 = (int *)ppuVar29[0x17];
  iVar17 = 0;
  iVar4 = 0;
  ppuVar29[0x1a] = ppuVar29[0x13];
  do {
    if ((ppuVar29[iVar17 + 0x2f8] == (uchar *)0x24) &&
       (iVar12 = *piVar22, *(int *)(iVar12 + 0x2ae8) != 0)) {
      uVar13 = 0;
      iVar24 = 0x2aec;
      do {
        iVar4 = mm_stream_calc_offset_raw
                          (ppuVar29[0x16],iVar12 + iVar24,iVar12 + 0x3008,ppuVar29 + 0x84);
        if (iVar4 == 0) {
          android::VectorImpl::add(ppuVar26);
          android::VectorImpl::add(ppuVar26);
          ppuVar29[0x82] = ppuVar29[0xe5];
          android::VectorImpl::add(ppuVar26);
        }
        else if (*(int *)(ppuVar29[0x15] + 0x20) != 0) {
          *ppuVar29 = (uchar *)(DAT_00093b8c + 0x93862);
          mm_camera_debug_log(1,1,DAT_00093b90 + 0x9386a,0x264d);
        }
        iVar12 = *piVar22;
        uVar13 = uVar13 + 1;
        iVar24 = iVar24 + 8;
        uVar14 = *(uint *)(iVar12 + 0x2ae8);
        if (0x27 < uVar14) {
          uVar14 = 0x28;
        }
      } while (uVar13 < uVar14);
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 != 6);
  puVar8 = ppuVar29[0x1c];
  if ((puVar8 == (uchar *)0x0) ||
     (puVar8 != (uchar *)((uint)puVar8 / 3 +
                         ((uint)(ZEXT48(puVar8) * 0xaaaaaaab >> 0x20) & 0xfffffffe)))) {
    if (*(int *)(ppuVar29[0x15] + 0x24) != 0) {
      *ppuVar29 = (uchar *)(DAT_00093b94 + 0x93902);
      mm_camera_debug_log(1,2,DAT_00093b98 + 0x9390a,0x2657);
    }
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0xe001e,(int *)ppuVar29[0x1b],(uint)puVar8);
  }
  iVar17 = *piVar22;
  ppuVar29[0x84] = *(uchar **)(iVar17 + 0x2f98);
  ppuVar29[0x85] = *(uchar **)(iVar17 + 0x2f9c);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)(ppuVar29 + 0x80),0x800f0001,(int *)(ppuVar29 + 0x84),2);
  iVar17 = *piVar22;
  if (*(int *)(iVar17 + 0x25ac) != 0) {
    *(undefined *)((int)ppuVar29 + 0x67) = 1;
    puVar28 = *(uchar **)(iVar17 + 0x25b4);
    ppuVar29[0x82] = puVar28;
    puVar8 = *(uchar **)(iVar17 + 0x25b8);
    iVar17 = *(int *)(ppuVar29[0x15] + 0x2c);
    ppuVar29[0x83] = puVar8;
    if (iVar17 != 0) {
      *ppuVar29 = (uchar *)(DAT_00093b9c + 0x93966);
      ppuVar29[1] = puVar28;
      ppuVar29[2] = puVar8;
      mm_camera_debug_log(1,4,DAT_00093ba0 + 0x93974,0x2664);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0x80120000,(uchar *)((int)ppuVar29 + 0x67),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0x80120001,(int *)(ppuVar29 + 0x82),2);
    iVar17 = *piVar22;
  }
  if (*(char *)(iVar17 + 0x3748) != '\0') {
    sVar9 = strnlen((char *)(uchar *)(iVar17 + 0x3748),0x1f);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0x80150000,(uchar *)(iVar17 + 0x3748),sVar9 + 1);
    iVar17 = *(int *)ppuVar29[0x17];
  }
  if (*(char *)(iVar17 + 0x3768) != '\0') {
    sVar9 = strnlen((char *)(uchar *)(iVar17 + 0x3768),199);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)(ppuVar29 + 0x80),0x8014000a,(uchar *)(iVar17 + 0x3768),sVar9 + 1);
    iVar17 = *(int *)ppuVar29[0x17];
  }
  ppuVar26 = ppuVar29 + 0x80;
  *(undefined *)(ppuVar29 + 0x82) = *(undefined *)(iVar17 + 0x3830);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x8014000b,(uchar *)(ppuVar29 + 0x82),1);
  puVar8 = ppuVar29[0x11];
  *(byte *)((int)ppuVar29 + 0x67) =
       ~(byte)(*(uint *)(*(int *)(ppuVar29[0x10] + (int)puVar8 * 4) + 0x3000) >> 3) & 1;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x80130000,(uchar *)((int)ppuVar29 + 0x67),1);
  *(undefined *)((int)ppuVar29 + 0x66) = 2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x80130003,(uchar *)((int)ppuVar29 + 0x66),1);
  *(undefined *)((int)ppuVar29 + 0x65) = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x80190000,(uchar *)((int)ppuVar29 + 0x65),1);
  *(undefined *)(ppuVar29 + 0x19) = 1;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            ((CameraMetadata *)ppuVar26,0x80130002,(uchar *)(ppuVar29 + 0x19),1);
  uVar23 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                     ((CameraMetadata *)ppuVar26);
  *(undefined4 *)(*(int *)(DAT_00093ba4 + 0x93a7c) + (int)puVar8 * 4) = uVar23;
  puVar8 = ppuVar29[0x13];
  ppuVar29[0x1a] = puVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x1a));
  ppuVar29[0x20] = puVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x20));
  puVar27 = ppuVar29[0xf];
  ppuVar29[0x26] = puVar27;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x26));
  ppuVar29[0x2b] = puVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x2b));
  ppuVar29[0x30] = puVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x30));
  ppuVar29[0x35] = puVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x35));
  puVar28 = ppuVar29[0x12];
  ppuVar29[0x3f] = puVar28;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x3f));
  ppuVar29[0x48] = puVar28;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x48));
  ppuVar29[0x4f] = puVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x4f));
  ppuVar29[0x54] = puVar27;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x54));
  ppuVar29[0x59] = puVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x59));
  ppuVar29[0x5f] = puVar28;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x5f));
  ppuVar29[0x68] = puVar28;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(ppuVar29 + 0x68));
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)ppuVar26);
  if (*(uchar **)ppuVar29[10] != ppuVar29[0x18]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
code_r0x00092948:
  iVar4 = 0x10008;
  goto LAB_00092954;
}

