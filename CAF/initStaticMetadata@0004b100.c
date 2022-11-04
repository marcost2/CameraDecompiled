
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::initStaticMetadata(unsigned int) */

int qcamera::QCamera3HardwareInterface::initStaticMetadata(uint param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  Vector_long_long_ *pVVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uchar *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  cam_scene_mode_type cVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  QCameraMap *pQVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  uint in_stack_fffff3a8;
  int local_c1c;
  uint local_c18;
  Vector_int_ aVStack3092 [23];
  undefined local_bfd;
  Vector_int_ aVStack3068 [23];
  undefined local_be5;
  Vector_long_long_ aVStack3044 [20];
  Vector_int_ aVStack3024 [20];
  Vector_int_ aVStack3004 [20];
  Vector_int_ aVStack2984 [20];
  undefined4 local_b94;
  undefined2 local_b90;
  undefined2 local_b8e;
  undefined4 local_b8c;
  undefined4 local_b88;
  undefined local_b82;
  undefined local_b81;
  Vector_unsigned_char_ aVStack2944 [20];
  uint local_b6c;
  undefined4 local_b68;
  undefined local_b63;
  undefined local_b62;
  undefined local_b61;
  undefined4 local_b60;
  Vector_unsigned_char_ aVStack2908 [23];
  char local_b45;
  undefined4 local_b44;
  Vector_int_ aVStack2880 [20];
  Vector_long_long_ aVStack2860 [20];
  Vector_int_ aVStack2840 [23];
  undefined local_b01;
  Vector_unsigned_char_ aVStack2816 [20];
  uint local_aec;
  undefined local_ae5;
  float local_ae4;
  Vector_unsigned_char_ aVStack2784 [20];
  uint local_acc;
  undefined4 uStack2760;
  undefined local_ac1;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined local_ab6;
  undefined local_ab5;
  undefined2 local_ab4;
  undefined local_ab2;
  undefined4 local_ab0;
  undefined local_aac;
  undefined2 local_aaa;
  undefined local_aa8;
  undefined2 local_aa6;
  undefined local_aa4;
  undefined local_aa2 [6];
  undefined2 local_a9c;
  undefined local_a9a;
  CameraMetadata aCStack2712 [8];
  undefined4 local_a90;
  int local_a8c;
  uint auStack2684 [92];
  uint local_90c;
  uint local_908 [82];
  undefined auStack1984 [216];
  undefined auStack1768 [232];
  undefined4 local_600;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined8 uStack1520;
  undefined8 local_5e8;
  undefined8 uStack1504;
  int local_5d8 [8];
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined local_59f [11];
  undefined local_594 [11];
  undefined local_589 [9];
  uchar auStack1408 [69];
  uchar local_53b [23];
  undefined local_524 [23];
  undefined local_50d [13];
  undefined4 local_500;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack1248;
  undefined8 local_4d8;
  undefined8 uStack1232;
  undefined8 local_4c8;
  undefined8 uStack1216;
  undefined8 local_4b8;
  undefined8 uStack1200;
  undefined8 local_4a8;
  undefined4 uStack1184;
  undefined4 local_49c;
  undefined4 uStack1176;
  undefined8 uStack1172;
  int aiStack1160 [80];
  int aiStack840 [80];
  int aiStack520 [80];
  undefined8 local_c8;
  undefined8 uStack192;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_2c;
  
  piVar16 = *(int **)(DAT_0004b3d4 + 0x4b112);
  local_2c = *piVar16;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack2712);
  iVar19 = *(int *)(DAT_0004b3d8 + 0x4b124);
  piVar21 = (int *)(iVar19 + param_1 * 4);
  iVar3 = supportBurstCapture(param_1);
  iVar10 = *(int *)(iVar19 + param_1 * 4);
  if (((*(char *)(iVar10 + 0x3e74) == '\0') && (1 < *(int *)(iVar10 + 0x3da4) - 1U)) && (iVar3 == 1)
     ) {
    local_ab6 = 3;
  }
  else {
    local_ab6 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x150000,(uint)&local_ab6,1,in_stack_fffff3a8);
  local_b01 = (*(uint *)(*piVar21 + 4) | 2) == 2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x90005,*piVar21 + 0x301c,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x90004,*piVar21 + 0x3020,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x90002,*piVar21 + 0x850,1,in_stack_fffff3a8);
  uVar15 = (uint)*(byte *)(*piVar21 + 0x3030);
  if (uVar15 != 0) {
    uVar15 = 1;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x90000,*piVar21 + 0x302c,uVar15,in_stack_fffff3a8);
  uVar15 = (uint)*(byte *)(*piVar21 + 0x3038);
  if (uVar15 != 0) {
    uVar15 = 1;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x90001,*piVar21 + 0x3034,uVar15,in_stack_fffff3a8);
  uVar15 = (uint)*(byte *)(*piVar21 + 0x303b);
  if (1 < uVar15) {
    uVar15 = 2;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x90003,*piVar21 + 0x3039,uVar15,in_stack_fffff3a8);
  local_90 = *(int *)(*piVar21 + 0x303c);
  if (0x10 < local_90) {
    local_90 = 0x11;
  }
  local_8c = *(int *)(*piVar21 + 0x3040);
  if (0xc < local_8c) {
    local_8c = 0xd;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x90006,(uint)&local_90,2,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0005,*piVar21 + 0x33f8,2,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0003,*piVar21 + 0x33b8,2,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0004,*piVar21 + 0x33c8,1,in_stack_fffff3a8);
  local_ac0 = *(undefined4 *)(*piVar21 + 0x3738);
  local_abc = *(undefined4 *)(*piVar21 + 0x373c);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe000b,(uint)&local_ac0,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0002,*piVar21 + 0x33d0,1,in_stack_fffff3a8);
  local_98 = *(undefined4 *)(*piVar21 + 0x3400);
  local_94 = *(undefined4 *)(*piVar21 + 0x3404);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0006,(uint)&local_98,2,in_stack_fffff3a8);
  iVar10 = *piVar21;
  local_a8 = *(undefined4 *)(iVar10 + 0x3408);
  local_a4 = *(undefined4 *)(iVar10 + 0x340c);
  local_a0 = *(undefined4 *)(iVar10 + 0x3410);
  local_9c = *(undefined4 *)(iVar10 + 0x3414);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0000,(uint)&local_a8,4,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0007,*piVar21 + 0x3418,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe000c,*piVar21 + 0x341c,4,in_stack_fffff3a8);
  if (5 < *(byte *)(*piVar21 + 0x3f70)) {
    if (*(int *)(*(int *)(DAT_0004b3dc + 0x4b372) + 0x24) != 0) {
      in_stack_fffff3a8 = DAT_0004b3e0 + 0x4b37e;
      mm_camera_debug_log();
    }
    *(undefined *)(*piVar21 + 0x3f70) = 5;
  }
  iVar10 = *piVar21;
  if (*(char *)(iVar10 + 0x3f70) == '\0') {
    bVar1 = false;
  }
  else {
    uVar15 = (uint)*(byte *)(iVar10 + 0x3f70);
    if (uVar15 != 0) {
      uVar11 = 0;
      do {
        (&local_a90)[uVar11] = *(undefined4 *)(iVar10 + 0x3f20 + uVar11 * 4);
        uVar11 = uVar11 + 1;
        uVar15 = (uint)*(byte *)(iVar10 + 0x3f70);
      } while (uVar11 < uVar15 << 2);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack2712,0xe001b,(uint)&local_a90,uVar15 << 2,in_stack_fffff3a8);
    bVar1 = true;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x50001,*piVar21 + 0x3430,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x130004,*piVar21 + 0x3474,1,in_stack_fffff3a8);
  local_ac1 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0008,(uint)&local_ac1,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120001,*piVar21 + 0x3674,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120003,*piVar21 + 0x3678,1,in_stack_fffff3a8);
  local_b0 = *(undefined4 *)(*piVar21 + 0x367c);
  local_ac = *(undefined4 *)(*piVar21 + 0x3680);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120005,(uint)&local_b0,2,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120004,*piVar21 + 0x3684,1,in_stack_fffff3a8);
  local_c8 = SUB168(*(undefined (*) [16])(DAT_0004b884 + 0x4b4b6),0);
  uStack192 = SUB168(*(undefined (*) [16])(DAT_0004b884 + 0x4b4b6) >> 0x40,0);
  local_b8 = *(undefined8 *)(DAT_0004b884 + 0x4b4c6);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd0001,(uint)&local_c8,6,in_stack_fffff3a8);
  uVar15 = *(uint *)(*piVar21 + 0x5c4);
  if (0x27 < uVar15) {
    uVar15 = 0x28;
  }
  makeTable((cam_dimension_t *)(*piVar21 + 0x5c8),uVar15,0x28,aiStack520);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd0006,(uint)aiStack520,uVar15 << 1,in_stack_fffff3a8);
  uVar15 = *(uint *)(*piVar21 + 0x2ad8);
  if (0x27 < uVar15) {
    uVar15 = 0x28;
  }
  makeTable((cam_dimension_t *)(*piVar21 + 0x2adc),uVar15,0x28,aiStack840);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd0008,(uint)aiStack840,uVar15 << 1,in_stack_fffff3a8);
  uVar15 = *(uint *)(*piVar21 + 0x270);
  if (0x27 < uVar15) {
    uVar15 = 0x28;
  }
  makeFPSTable((cam_fps_range_t *)(*piVar21 + 0x274),uVar15,0x28,aiStack1160);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10014,(uint)aiStack1160,uVar15 << 1,in_stack_fffff3a8);
  local_acc = *(uint *)(*piVar21 + 0x5b8);
  uStack2760 = *(undefined4 *)(*piVar21 + 0x5bc);
  puVar13 = &local_acc;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10016,(uint)puVar13,1,in_stack_fffff3a8);
  pVVar4 = (Vector_long_long_ *)android::Vector<unsigned_char>::Vector(aVStack2784);
  local_a90 = local_a90 & 0xffffff00;
  android::Vector<long_long>::add(pVVar4,&local_a90,puVar13);
  local_4a8 = 0;
  uStack1184 = 0;
  local_4b8 = 0;
  uStack1200 = 0;
  local_4c8 = 0;
  uStack1216 = 0;
  local_4d8 = 0;
  uStack1232 = 0;
  local_4e8 = 0;
  uStack1248 = 0;
  local_49c = 0;
  uStack1176 = 0;
  uStack1172 = 0;
  property_get();
  uVar15 = atoi((char *)&local_4e8);
  puVar12 = (uint *)(uint)*(byte *)(*piVar21 + 0x3e75);
  puVar13 = (uint *)0x6;
  if (puVar12 < (uint *)0x6) {
    puVar13 = puVar12;
  }
  if (puVar13 != (uint *)0x0) {
    puVar12 = (uint *)0x0;
    do {
      if ((*(uint *)(*piVar21 + 0x3e78 + (int)puVar12 * 4) & 0xfffffffe) == 4) {
        uVar15 = count_leading_zeroes(uVar15 & 0xff);
        if ((uVar15 >> 5 | (byte)local_b01 ^ 1) == 0) {
          local_a90 = CONCAT31(local_a90._1_3_,1);
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack2784,&local_a90,puVar12);
        }
        break;
      }
      puVar12 = (uint *)((int)puVar12 + 1);
    } while (puVar12 < puVar13);
  }
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2784);
  uVar11 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2784);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x1001a,uVar15,uVar11,in_stack_fffff3a8);
  local_ae4 = (float)((ulonglong)*(uint *)(*piVar21 + *(int *)(*piVar21 + 0x48) * 4 + 0x48) / 100);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd0004,(uint)&local_ae4,1,in_stack_fffff3a8);
  local_ae5 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd000d,(uint)&local_ae5,1,in_stack_fffff3a8);
  local_4f8 = *(undefined8 *)(DAT_0004b890 + 0x4b6ae);
  local_4f0 = *(undefined4 *)(DAT_0004b890 + 0x4b6b6);
  if (*(int *)(*piVar21 + 0x560) == 1) {
    local_4f0 = 0;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x1001c,(uint)&local_4f8,3,in_stack_fffff3a8);
  local_48 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  local_88 = 0;
  uStack128 = 0;
  uStack64 = 0;
  uStack56 = 0;
  uStack52 = 0;
  puVar13 = (uint *)(DAT_0004b898 + 0x4b720);
  property_get();
  uVar15 = atoi((char *)&local_88);
  iVar10 = *(int *)(DAT_0004b89c + 0x4b732);
  if (*(int *)(iVar10 + 0x2c) != 0) {
    in_stack_fffff3a8 = DAT_0004b8a0 + 0x4b740;
    puVar13 = (uint *)(DAT_0004b8a4 + 0x4b748);
    mm_camera_debug_log();
  }
  uVar11 = (uint)*(byte *)(*piVar21 + 0x2f71);
  local_aec = uVar11;
  pVVar4 = (Vector_long_long_ *)android::Vector<unsigned_char>::Vector(aVStack2816);
  local_a90 = local_a90 & 0xffffff00;
  android::Vector<long_long>::add(pVVar4,&local_a90,puVar13);
  if (uVar11 != 0) {
    uVar11 = uVar15 & 0xff;
  }
  if (uVar11 == 1) {
    bVar2 = 1;
LAB_0004b792:
    local_a90 = local_a90 & 0xffffff00 | (uint)bVar2;
LAB_0004b79a:
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack2816,&local_a90,puVar13);
  }
  else {
    if (uVar11 == 3) {
      local_a90._0_1_ = 1;
      android::Vector<long_long>::add((Vector_long_long_ *)aVStack2816,&local_a90,puVar13);
      local_a90 = CONCAT31(local_a90._1_3_,2);
      goto LAB_0004b79a;
    }
    if (uVar11 == 2) {
      bVar2 = 2;
      goto LAB_0004b792;
    }
    local_aec = 0;
  }
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2816);
  uVar5 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2816);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120000,uVar15,uVar5,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120002,(uint)&local_aec,1,in_stack_fffff3a8);
  local_500 = *(undefined4 *)(*piVar21 + 0x5a8);
  local_4fc = *(undefined4 *)(*piVar21 + 0x5ac);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10015,(uint)&local_500,2,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x80005,(uint)&local_b01,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,(uint)&DAT_00070007,DAT_0004b8a8 + 0x4b810,0x10,in_stack_fffff3a8);
  android::Vector<int>::Vector(aVStack2840);
  iVar22 = 0;
  do {
    iVar6 = *(int *)((int)&local_c8 + iVar22 * 4);
    if ((iVar6 - 0x24U < 2) || (iVar6 == 0x20)) {
      iVar6 = *piVar21;
      if (*(int *)(iVar6 + 0x2ad8) != 0) {
        uVar15 = 0;
        iVar23 = 0x2adc;
        do {
          addStreamConfig((Vector *)aVStack2840,*(int *)((int)&local_c8 + iVar22 * 4),
                          (cam_dimension_t *)(iVar6 + iVar23),0);
          iVar6 = *piVar21;
          uVar5 = *(uint *)(iVar6 + 0x2ad8);
          if (0x27 < uVar5) {
            uVar5 = 0x28;
          }
          iVar23 = iVar23 + 8;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar5);
      }
    }
    else if (iVar6 == 0x21) {
      iVar6 = *piVar21;
      if (*(int *)(iVar6 + 0x5c4) != 0) {
        uVar15 = 0;
        iVar23 = 0x5c8;
        do {
          addStreamConfig((Vector *)aVStack2840,*(int *)((int)&local_c8 + iVar22 * 4),
                          (cam_dimension_t *)(iVar6 + iVar23),0);
          iVar6 = *piVar21;
          uVar5 = *(uint *)(iVar6 + 0x5c4);
          if (0x27 < uVar5) {
            uVar5 = 0x28;
          }
          iVar23 = iVar23 + 8;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar5);
      }
    }
    else {
      local_a90 = 0;
      local_a8c = 0;
      uVar15 = *(uint *)((int)&local_c8 + iVar22 * 4);
      iVar6 = *piVar21;
      if (*(int *)(iVar6 + 0x5c4) != 0) {
        uVar5 = 0;
        do {
          addStreamConfig((Vector *)aVStack2840,uVar15,
                          (cam_dimension_t *)(iVar6 + uVar5 * 8 + 0x5c8),0);
          iVar6 = *piVar21 + uVar5 * 8;
          if (((int)local_a90 <= *(int *)(iVar6 + 0x5c8)) && (local_a8c <= *(int *)(iVar6 + 0x5cc)))
          {
            local_a90 = *(uint *)(iVar6 + 0x5c8);
            local_a8c = *(int *)(iVar6 + 0x5cc);
          }
          uVar15 = *(uint *)((int)&local_c8 + iVar22 * 4);
          iVar6 = *piVar21;
          uVar20 = *(uint *)(iVar6 + 0x5c4);
          if (0x27 < uVar20) {
            uVar20 = 0x28;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar20);
      }
      if ((uVar15 & 0xfffffffe) == 0x22) {
        addStreamConfig((Vector *)aVStack2840,uVar15,(cam_dimension_t *)&local_a90,1);
      }
    }
    iVar22 = iVar22 + 1;
  } while (iVar22 != 6);
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2840);
  uVar5 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2840);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd000a,uVar15,uVar5,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x60000,DAT_0004bb9c + 0x4b99c,1,in_stack_fffff3a8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x110003,DAT_0004bba0 + 0x4b9b6,1,in_stack_fffff3a8);
  android::Vector<long_long>::Vector(aVStack2860);
  iVar22 = 0;
  do {
    puVar13 = (uint *)0x2ad8;
    uVar15 = *(int *)((int)&local_c8 + iVar22 * 4) - 0x20;
    if ((uVar15 < 6) && ((1 << (uVar15 & 0xff) & 0x31U) != 0)) {
      if (*(int *)(*piVar21 + 0x2ad8) != 0) {
        uVar15 = 0;
        iVar6 = 0x2e10;
        do {
          puVar13 = (uint *)0x2ad8;
          local_a90 = *(uint *)((int)&local_c8 + iVar22 * 4);
          local_a8c = (int)local_a90 >> 0x1f;
          android::Vector<long_long>::add(aVStack2860,&local_a90,(uint *)0x2ad8);
          local_a90 = *(uint *)(*piVar21 + uVar15 * 8 + 0x2adc);
          local_a8c = (int)local_a90 >> 0x1f;
          android::Vector<long_long>::add(aVStack2860,&local_a90,puVar13);
          local_a90 = *(uint *)(*piVar21 + uVar15 * 8 + 0x2ae0);
          local_a8c = (int)local_a90 >> 0x1f;
          android::Vector<long_long>::add(aVStack2860,&local_a90,puVar13);
          android::Vector<long_long>::add(aVStack2860,(uint *)(*piVar21 + iVar6),puVar13);
          uVar5 = *(uint *)(*piVar21 + 0x2ad8);
          if (0x27 < uVar5) {
            uVar5 = 0x28;
          }
          iVar6 = iVar6 + 8;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar5);
      }
    }
    else if (*(int *)(*piVar21 + 0x5c4) != 0) {
      iVar23 = 0x5c8;
      iVar6 = 0xb9;
      do {
        local_a90 = *(uint *)((int)&local_c8 + iVar22 * 4);
        local_a8c = (int)local_a90 >> 0x1f;
        android::Vector<long_long>::add(aVStack2860,&local_a90,puVar13);
        local_a90 = *(uint *)(*piVar21 + iVar6 * 8);
        local_a8c = (int)local_a90 >> 0x1f;
        android::Vector<long_long>::add(aVStack2860,&local_a90,puVar13);
        local_a90 = *(uint *)(*piVar21 + iVar23 + 4);
        local_a8c = (int)local_a90 >> 0x1f;
        android::Vector<long_long>::add(aVStack2860,&local_a90,puVar13);
        android::Vector<long_long>::add(aVStack2860,(uint *)(*piVar21 + iVar23 + 0x140),puVar13);
        puVar12 = *(uint **)(*piVar21 + 0x5c4);
        if ((uint *)0x27 < puVar12) {
          puVar12 = (uint *)0x28;
        }
        iVar23 = iVar23 + 8;
        puVar13 = (uint *)(iVar6 + -0xb8);
        iVar6 = iVar6 + 1;
      } while (puVar13 < puVar12);
    }
    iVar22 = iVar22 + 1;
  } while (iVar22 != 6);
  puVar13 = (uint *)android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2860);
  uVar15 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2860);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd000b,(uint)puVar13,uVar15,in_stack_fffff3a8);
  android::Vector<int>::Vector(aVStack2880);
  iVar22 = *piVar21;
  if (*(int *)(iVar22 + 0xd6c) != 0) {
    local_c1c = 0xd78;
    uVar15 = 0;
    do {
      local_a90 = 0;
      switch(*(undefined4 *)(uVar15 * 0x28c + iVar22 + 0xd70)) {
      case 1:
        local_a90 = 0x3c;
        goto switchD_0004bb6e_caseD_8;
      case 2:
        local_a90 = 0x5a;
        goto switchD_0004bb6e_caseD_8;
      case 3:
        local_a90 = 0x78;
        break;
      case 4:
        local_a90 = 0x96;
        break;
      case 5:
        local_a90 = 0xb4;
        break;
      case 6:
        local_a90 = 0xd2;
        break;
      case 7:
        local_a90 = 0xf0;
        break;
      case 8:
        local_a90 = 0x1e0;
        break;
      default:
        goto switchD_0004bb6e_caseD_8;
      }
      iVar22 = *piVar21;
      if (*(char *)(uVar15 * 0x28c + iVar22 + 0xd74) != '\0') {
        puVar12 = (uint *)0x1;
        iVar6 = local_c1c;
        do {
          android::Vector<long_long>::add
                    ((Vector_long_long_ *)aVStack2880,(uint *)(iVar22 + iVar6),puVar13);
          android::Vector<long_long>::add
                    ((Vector_long_long_ *)aVStack2880,(uint *)(*piVar21 + iVar6 + 4),puVar13);
          local_908[0] = 0x1e;
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack2880,local_908,puVar13);
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack2880,&local_a90,puVar13);
          iVar22 = (int)((longlong)(int)local_a90 * -0x77777777 + ((ulonglong)local_a90 << 0x20) >>
                        0x20);
          local_908[0] = (iVar22 >> 4) - (iVar22 >> 0x1f);
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack2880,local_908,puVar13);
          android::Vector<long_long>::add
                    ((Vector_long_long_ *)aVStack2880,(uint *)(*piVar21 + iVar6),puVar13);
          android::Vector<long_long>::add
                    ((Vector_long_long_ *)aVStack2880,(uint *)(*piVar21 + iVar6 + 4),puVar13);
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack2880,&local_a90,puVar13);
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack2880,&local_a90,puVar13);
          iVar22 = (int)((longlong)(int)local_a90 * -0x77777777 + ((ulonglong)local_a90 << 0x20) >>
                        0x20);
          local_908[0] = (iVar22 >> 4) - (iVar22 >> 0x1f);
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack2880,local_908,puVar13);
          if ((uint *)0x27 < puVar12) break;
          iVar22 = *piVar21;
          iVar6 = iVar6 + 8;
          puVar13 = (uint *)((int)puVar12 + 1);
          bVar24 = puVar12 < (uint *)(uint)*(byte *)(uVar15 * 0x28c + iVar22 + 0xd74);
          puVar12 = puVar13;
        } while (bVar24);
      }
switchD_0004bb6e_caseD_8:
      local_c1c = local_c1c + 0x28c;
      uVar15 = uVar15 + 1;
      iVar22 = *piVar21;
    } while (uVar15 < *(uint *)(iVar22 + 0xd6c));
  }
  local_88 = 0;
  uStack128 = 0;
  uStack56 = 0;
  uStack52 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  property_get();
  iVar22 = atoi((char *)&local_88);
  if (iVar22 << 0x18 != 0) {
    iVar6 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2880);
    if (iVar6 != 0) {
      uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2880);
      uVar5 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2880);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack2712,0x10023,uVar15,uVar5,in_stack_fffff3a8);
    }
  }
  local_b44 = calcMaxJpegSize(param_1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,(uint)__stack_chk_fail,(uint)&local_b44,1,in_stack_fffff3a8);
  uVar15 = *(uint *)(*(int *)(iVar19 + param_1 * 4) + 0x1b8);
  if (0xc < uVar15) {
    uVar15 = 0xd;
  }
  if (uVar15 == 0) {
    uVar5 = 0;
  }
  else {
    uVar20 = 0;
    pQVar18 = *(QCameraMap **)(DAT_0004bf6c + 0x4bd28);
    uVar5 = 0;
    do {
      iVar6 = lookupFwkName_cam_effect_mode_type_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_effect_mode_cam_effect_mode_type__
                        (pQVar18,9,*(cam_effect_mode_type *)(*piVar21 + uVar20 * 4 + 0x1bc));
      if (iVar6 != -2) {
        local_50d[uVar5] = (char)iVar6;
        uVar5 = uVar5 + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar15);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10018,(uint)local_50d,uVar5,in_stack_fffff3a8);
  uVar15 = *(uint *)(*piVar21 + 0x1f0);
  if (0x16 < uVar15) {
    uVar15 = 0x17;
  }
  if (uVar15 == 0) {
    uVar5 = 0;
  }
  else {
    uVar20 = 0;
    pQVar18 = *(QCameraMap **)(DAT_0004bf70 + 0x4bd7e);
    uVar5 = 0;
    do {
      cVar14 = *(cam_scene_mode_type *)(*piVar21 + uVar20 * 4 + 500);
      if (cVar14 != 0) {
        iVar6 = lookupFwkName_cam_scene_mode_type_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_scene_mode_cam_scene_mode_type__
                          (pQVar18,0x11,cVar14);
        if (iVar6 != -2) {
          local_53b[uVar5] = (uchar)uVar20;
          local_524[uVar5] = (char)iVar6;
          uVar5 = uVar5 + 1;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar15);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10019,(uint)local_524,uVar5,in_stack_fffff3a8);
  puVar8 = local_53b;
  makeOverridesList((cam_scene_mode_overrides_t *)(*(int *)(iVar19 + param_1 * 4) + 0x36a8),uVar5,
                    0x17,auStack1408,puVar8,param_1);
  if (uVar5 == 0) {
    local_524[0] = 0;
    uVar5 = 1;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x1001d,(uint)auStack1408,uVar5 * 3,(uint)puVar8);
  local_a9a = 2;
  local_a9c = 0x100;
  uVar5 = 3;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10026,(uint)&local_a9c,3,(uint)puVar8);
  uVar15 = *(uint *)(*piVar21 + 0x4f4);
  if (5 < uVar15) {
    uVar15 = 6;
  }
  if (uVar15 == 0) {
    uVar20 = 0;
  }
  else {
    uVar17 = 0;
    pQVar18 = *(QCameraMap **)(DAT_0004bf74 + 0x4be44);
    uVar20 = 0;
    do {
      iVar6 = lookupFwkName_cam_antibanding_mode_type_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_ae_antibanding_mode_cam_antibanding_mode_type__
                        (pQVar18,4,*(cam_antibanding_mode_type *)(*piVar21 + uVar17 * 4 + 0x4f8));
      if (iVar6 != -2) {
        local_aa2[uVar20] = (char)iVar6;
        uVar20 = uVar20 + 1;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar15);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10012,(uint)local_aa2,uVar20,(uint)puVar8);
  local_aa4 = 2;
  local_aa6 = 0x100;
  if (*(int *)(*piVar21 + 0x3db8) == 0) {
    uVar5 = 1;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,4,(uint)&local_aa6,uVar5,(uint)puVar8);
  uVar15 = *(uint *)(*piVar21 + 0x560);
  if (8 < uVar15) {
    uVar15 = 9;
  }
  if (uVar15 == 0) {
    uVar5 = 0;
  }
  else {
    uVar20 = 0;
    pQVar18 = *(QCameraMap **)(DAT_0004bf78 + 0x4becc);
    uVar5 = 0;
    do {
      iVar6 = lookupFwkName_cam_focus_mode_type_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_af_mode_cam_focus_mode_type__
                        (pQVar18,7,*(cam_focus_mode_type *)(*piVar21 + uVar20 * 4 + 0x564));
      if (iVar6 != -2) {
        local_589[uVar5] = (char)iVar6;
        uVar5 = uVar5 + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar15);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10017,(uint)local_589,uVar5,(uint)puVar8);
  uVar15 = *(uint *)(*piVar21 + 0x510);
  if (10 < uVar15) {
    uVar15 = 0xb;
  }
  if (uVar15 == 0) {
    uVar5 = 0;
  }
  else {
    uVar20 = 0;
    pQVar18 = *(QCameraMap **)(DAT_0004bf7c + 0x4bf36);
    uVar5 = 0;
    do {
      iVar6 = lookupFwkName_cam_wb_mode_type_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_awb_mode_cam_wb_mode_type__
                        (pQVar18,9,*(cam_wb_mode_type *)(*piVar21 + uVar20 * 4 + 0x514));
      if (iVar6 != -2) {
        local_594[uVar5] = (char)iVar6;
        uVar5 = uVar5 + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar15);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x1001b,(uint)local_594,uVar5,(uint)puVar8);
  iVar6 = *piVar21;
  uVar5 = *(uint *)(iVar6 + 0x3438);
  uVar15 = 0xb;
  if (uVar5 < 0xb) {
    uVar15 = uVar5;
  }
  if (uVar15 != 0) {
    uVar5 = 0;
    do {
      local_59f[uVar5] = (char)*(undefined4 *)(iVar6 + 0x343c + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar15);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x40000,(uint)local_59f,uVar15,(uint)puVar8);
  local_b45 = *(char *)(*piVar21 + 0x3734);
  if (local_b45 != '\0') {
    local_b45 = '\x01';
  }
  puVar13 = (uint *)&local_b45;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x50000,(uint)puVar13,1,(uint)puVar8);
  android::Vector<unsigned_char>::Vector(aVStack2908);
  uVar15 = *(uint *)(*piVar21 + 0x3688);
  if (1 < uVar15) {
    uVar15 = 2;
  }
  if (uVar15 != 0) {
    uVar5 = 0;
    do {
      local_a90 = local_a90 & 0xffffff00 | *(uint *)(*piVar21 + uVar5 * 4 + 0x368c) & 0xff;
      android::Vector<long_long>::add((Vector_long_long_ *)aVStack2908,&local_a90,puVar13);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar15);
  }
  if (local_b45 != '\0') {
    local_a90._0_1_ = 2;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack2908,&local_a90,puVar13);
    local_a90._0_1_ = 3;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack2908,&local_a90,puVar13);
    local_a90 = CONCAT31(local_a90._1_3_,4);
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack2908,&local_a90,puVar13);
  }
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2908);
  uVar5 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2908);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10013,uVar15,uVar5,(uint)puVar8);
  local_5a8 = *(undefined4 *)(*piVar21 + 0x3694);
  local_5a4 = *(undefined4 *)(*piVar21 + 0x3698);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xf0001,(uint)&local_5a8,2,(uint)puVar8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe000d,*piVar21 + 0x369c,1,(uint)puVar8);
  local_b60 = *(undefined4 *)(*piVar21 + 0x84c);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe000e,(uint)&local_b60,1,(uint)puVar8);
  local_5b8 = *(undefined8 *)(DAT_0004c1b8 + 0x4c0f4);
  local_5b0 = *(undefined4 *)(DAT_0004c1b8 + 0x4c0fc);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc0006,(uint)&local_5b8,3,(uint)puVar8);
  local_b61 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x140001,(uint)&local_b61,0,(uint)puVar8);
  iVar6 = lookupFwkName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_lens_info_focus_distance_calibration_cam_focus_calibration_t__
                    (*(QCameraMap **)(DAT_0004c1bc + 0x4c13e),3,*(uchar *)(*piVar21 + 0x37f8));
  if (iVar6 != -2) {
    local_b62 = (undefined)iVar6;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack2712,0x90007,(uint)&local_b62,1,(uint)puVar8);
  }
  uVar15 = (uint)*(byte *)(*piVar21 + 0x37f9);
  if (7 < uVar15) {
    uVar15 = 8;
  }
  if (uVar15 == 0) {
    uVar5 = 0;
  }
  else {
    uVar20 = 0;
    pQVar18 = *(QCameraMap **)(DAT_0004c1c0 + 0x4c18a);
    uVar5 = 0;
    do {
      iVar6 = lookupFwkName_cam_test_pattern_mode_t_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_sensor_test_pattern_mode_cam_test_pattern_mode_t__
                        (pQVar18,6,*(cam_test_pattern_mode_t *)(*piVar21 + uVar20 * 4 + 0x37fc));
      if (iVar6 != -2) {
        local_5d8[uVar5] = iVar6;
        uVar5 = uVar5 + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar15);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe0019,(uint)local_5d8,uVar5,(uint)puVar8);
  local_b63 = 8;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc000a,(uint)&local_b63,1,(uint)puVar8);
  local_b68 = 2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc000b,(uint)&local_b68,1,(uint)puVar8);
  local_b6c = 2;
  puVar13 = &local_b6c;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x180001,(uint)puVar13,1,(uint)puVar8);
  android::Vector<unsigned_char>::Vector(aVStack2944);
  local_a90 = local_a90 & 0xffffff00;
  android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  local_a90._0_1_ = 1;
  android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  local_a90._0_1_ = 2;
  android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  local_a90._0_1_ = 5;
  android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  if (iVar3 != 0) {
    local_a90._0_1_ = 6;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  }
  local_a90._0_1_ = 4;
  android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  local_a90 = CONCAT31(local_a90._1_3_,7);
  android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  if (iVar22 << 0x18 != 0) {
    iVar3 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2880);
    if (iVar3 != 0) {
      local_a90 = CONCAT31(local_a90._1_3_,9);
      android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
    }
  }
  if (*(int *)(*piVar21 + 0x3da4) != 1) {
    local_a90 = CONCAT31(local_a90._1_3_,3);
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack2944,&local_a90,puVar13);
  }
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2944);
  uVar5 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2944);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc000c,uVar15,uVar5,(uint)puVar8);
  uVar15 = count_leading_zeroes(*(undefined4 *)(*piVar21 + 0x3da4));
  local_b81 = (undefined)(uVar15 >> 5);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10024,(uint)&local_b81,1,(uint)puVar8);
  uVar15 = count_leading_zeroes(*(undefined4 *)(*piVar21 + 0x3da4));
  local_b82 = (undefined)(uVar15 >> 5);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10025,(uint)&local_b82,1,(uint)puVar8);
  local_b88 = 1;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc0008,(uint)&local_b88,1,(uint)puVar8);
  local_5e8 = *(undefined8 *)(DAT_0004c640 + 0x4c358);
  uStack1504 = *(undefined8 *)(DAT_0004c640 + 0x4c360);
  local_5f8 = SUB168(*(undefined (*) [16])(DAT_0004c640 + 0x4c348),0);
  uStack1520 = SUB168(*(undefined (*) [16])(DAT_0004c640 + 0x4c348) >> 0x40,0);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd0009,(uint)&local_5f8,8,(uint)puVar8);
  local_b8c = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x170001,(uint)&local_b8c,1,(uint)puVar8);
  local_600 = *(undefined4 *)(*piVar21 + 0x36a0);
  local_5fc = *(undefined4 *)(*piVar21 + 0x36a4);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x10027,(uint)&local_600,2,(uint)puVar8);
  local_b8e = 0x201;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x60001,(uint)&local_b8e,2,(uint)puVar8);
  local_aa8 = 2;
  local_aaa = 0x100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x100002,(uint)&local_aaa,3,(uint)puVar8);
  local_b90 = 0x100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120007,(uint)&local_b90,2,(uint)puVar8);
  local_b94 = 0x3020100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,(uint)"dOfflineReprocChannel",(uint)&local_b94,4,(uint)puVar8);
  local_aac = 4;
  local_ab0 = 0x3020100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xa0002,(uint)&local_ab0,5,(uint)puVar8);
  local_ab2 = 2;
  local_ab4 = 0x100;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x130005,(uint)&local_ab4,3,(uint)puVar8);
  local_ab5 = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x120006,(uint)&local_ab5,1,(uint)puVar8);
  pQVar18 = *(QCameraMap **)(DAT_0004c644 + 0x4c47e);
  uVar15 = lookupFwkName_cam_illuminat_t_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_sensor_reference_illuminant1_cam_illuminat_t__
                     (pQVar18,0x10,*(cam_illuminat_t *)(*piVar21 + 0x3960));
  if (uVar15 != 0xfffffffe) {
    local_a90 = local_a90 & 0xffffff00 | uVar15 & 0xff;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack2712,0xe0003,(uint)&local_a90,1,(uint)puVar8);
  }
  uVar15 = lookupFwkName_cam_illuminat_t_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_sensor_reference_illuminant1_cam_illuminat_t__
                     (pQVar18,0x10,*(cam_illuminat_t *)(*piVar21 + 0x3964));
  if (uVar15 != 0xfffffffe) {
    local_a90 = local_a90 & 0xffffff00 | uVar15 & 0xff;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack2712,0xe0004,(uint)&local_a90,1,(uint)puVar8);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe0009,*piVar21 + 0x3be8,9,(uint)puVar8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe000a,*piVar21 + 0x3c30,9,(uint)puVar8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe0007,*piVar21 + 0x3c78,9,(uint)puVar8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe0008,*piVar21 + 0x3cc0,9,(uint)puVar8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe0005,*piVar21 + 0x3d08,9,(uint)puVar8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xe0006,*piVar21 + 0x3d50,9,(uint)puVar8);
  __aeabi_memcpy8(auStack1768,(void *)(DAT_0004c648 + 0x4c566),0xe4);
  piVar7 = (int *)android::Vector<int>::Vector(aVStack2984);
  puVar13 = (uint *)0x39;
  android::Vector<int>::appendArray(piVar7,(uint)auStack1768);
  if (1 < *(uint *)(*piVar21 + 0x560)) {
    local_a90 = 0x10008;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack2984,&local_a90,puVar13);
  }
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack2984);
  uVar5 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack2984);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc000d,uVar15,uVar5,(uint)puVar8);
  __aeabi_memcpy8(auStack1984,(void *)(DAT_0004c64c + 0x4c5c8),0xd8);
  piVar7 = (int *)android::Vector<int>::Vector(aVStack3004);
  puVar13 = (uint *)0x36;
  android::Vector<int>::appendArray(piVar7,(uint)auStack1984);
  if (1 < *(uint *)(*piVar21 + 0x560)) {
    local_a90 = 0x10008;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
  }
  if (*(int *)(*piVar21 + 0x3da4) == 0) {
    local_a90 = 0xe0013;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
    local_a90 = 0xe0016;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
  }
  if (uVar11 == 1) {
    local_a90 = 0x110006;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
    local_a90 = 0x110007;
LAB_0004c66c:
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
  }
  else if ((uVar11 & 0xfe) == 2) {
    local_a90 = 0x110004;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
    local_a90 = 0x110005;
    goto LAB_0004c66c;
  }
  if (bVar1) {
    local_a90 = 0xe001c;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
    local_a90 = 0xe001d;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3004,&local_a90,puVar13);
  }
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack3004);
  uVar11 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack3004);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc000e,uVar15,uVar11,(uint)puVar8);
  __aeabi_memcpy8(local_908,(void *)(DAT_0004ca60 + 0x4c6c0),0x148);
  piVar7 = (int *)android::Vector<int>::Vector(aVStack3024);
  puVar13 = (uint *)0x52;
  android::Vector<int>::appendArray(piVar7,(uint)local_908);
  if (bVar1) {
    local_a90 = 0xe001b;
    android::Vector<long_long>::add((Vector_long_long_ *)aVStack3024,&local_a90,puVar13);
  }
  puVar13 = (uint *)android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack3024);
  uVar15 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack3024);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xc000f,(uint)puVar13,uVar15,(uint)puVar8);
  android::Vector<long_long>::Vector(aVStack3044);
  iVar3 = 0;
  puVar12 = (uint *)(DAT_0004ca64 + 0x4c716);
  do {
    if (iVar3 == 0) {
      if (*(int *)(*piVar21 + 0x5c4) != 0) {
        uVar15 = *puVar12;
        uVar11 = 0;
        iVar22 = 0x3968;
        do {
          local_a8c = (int)uVar15 >> 0x1f;
          local_a90 = uVar15;
          android::Vector<long_long>::add(aVStack3044,&local_a90,puVar13);
          local_a90 = *(uint *)(*piVar21 + uVar11 * 8 + 0x5c8);
          local_a8c = (int)local_a90 >> 0x1f;
          android::Vector<long_long>::add(aVStack3044,&local_a90,puVar13);
          local_a90 = *(uint *)(*piVar21 + uVar11 * 8 + 0x5cc);
          local_a8c = (int)local_a90 >> 0x1f;
          android::Vector<long_long>::add(aVStack3044,&local_a90,puVar13);
          android::Vector<long_long>::add(aVStack3044,(uint *)(*piVar21 + iVar22),puVar13);
          uVar5 = *(uint *)(*piVar21 + 0x5c4);
          if (0x27 < uVar5) {
            uVar5 = 0x28;
          }
          iVar22 = iVar22 + 8;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
    }
    else if (*(int *)(*piVar21 + 0x2ad8) != 0) {
      uVar11 = puVar12[iVar3];
      uVar15 = 0;
      iVar22 = 0x3aa8;
      do {
        local_a8c = (int)uVar11 >> 0x1f;
        local_a90 = uVar11;
        android::Vector<long_long>::add(aVStack3044,&local_a90,puVar13);
        local_a90 = *(uint *)(*piVar21 + uVar15 * 8 + 0x2adc);
        local_a8c = (int)local_a90 >> 0x1f;
        android::Vector<long_long>::add(aVStack3044,&local_a90,puVar13);
        local_a90 = *(uint *)(*piVar21 + uVar15 * 8 + 0x2ae0);
        local_a8c = (int)local_a90 >> 0x1f;
        android::Vector<long_long>::add(aVStack3044,&local_a90,puVar13);
        android::Vector<long_long>::add(aVStack3044,(uint *)(*piVar21 + iVar22),puVar13);
        uVar5 = *(uint *)(*piVar21 + 0x2ad8);
        if (0x27 < uVar5) {
          uVar5 = 0x28;
        }
        iVar22 = iVar22 + 8;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar5);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 2);
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack3044);
  uVar11 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack3044);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0xd000c,uVar15,uVar11,(uint)puVar8);
  local_be5 = 0;
  if (*(int *)(*piVar21 + 0x3d9c) == 0) {
    local_be5 = 0;
  }
  else if (*(int *)(*piVar21 + 0x3d9c) == 1) {
    local_be5 = 1;
  }
  else if (*(int *)(iVar10 + 0x20) != 0) {
    puVar8 = (uchar *)(DAT_0004cbc4 + 0x4c8b4);
    mm_camera_debug_log();
  }
  puVar13 = (uint *)&local_be5;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x80020001,(uint)puVar13,1,(uint)puVar8);
  android::Vector<int>::Vector(aVStack3068);
  iVar3 = *piVar21;
  if (*(int *)(iVar3 + 0x2ad8) != 0) {
    uVar15 = 0;
    iVar22 = 0x2adc;
    do {
      android::Vector<long_long>::add
                ((Vector_long_long_ *)aVStack3068,(uint *)(iVar3 + iVar22),puVar13);
      android::Vector<long_long>::add
                ((Vector_long_long_ *)aVStack3068,(uint *)(*piVar21 + iVar22 + 4),puVar13);
      puVar13 = (uint *)(*piVar21 + 0x2ff8);
      mm_stream_calc_offset_raw();
      android::Vector<long_long>::add((Vector_long_long_ *)aVStack3068,auStack2684,puVar13);
      iVar3 = *piVar21;
      uVar11 = *(uint *)(iVar3 + 0x2ad8);
      if (0x27 < uVar11) {
        uVar11 = 0x28;
      }
      iVar22 = iVar22 + 8;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar11);
  }
  uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack3068);
  uVar11 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack3068);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x80020000,uVar15,uVar11,(uint)puVar8);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x800c0000,*piVar21 + 0x4f88,0x1b2,(uint)puVar8);
  uVar15 = count_leading_zeroes(*(int *)(*piVar21 + 0x33d0) + -7);
  local_bfd = (undefined)(uVar15 >> 5);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x800a0001,(uint)&local_bfd,1,(uint)puVar8);
  android::Vector<int>::Vector(aVStack3092);
  iVar22 = 0;
  iVar3 = 0;
  do {
    if ((*(int *)((int)&local_c8 + iVar22 * 4) == 0x24) &&
       (iVar6 = *piVar21, *(int *)(iVar6 + 0x2ad8) != 0)) {
      uVar15 = 0;
      iVar23 = 0x2adc;
      do {
        puVar13 = (uint *)(iVar6 + 0x2ff8);
        iVar3 = mm_stream_calc_offset_raw();
        if (iVar3 == 0) {
          android::Vector<long_long>::add
                    ((Vector_long_long_ *)aVStack3092,(uint *)(*piVar21 + iVar23),puVar13);
          android::Vector<long_long>::add
                    ((Vector_long_long_ *)aVStack3092,(uint *)(*piVar21 + iVar23 + 4),puVar13);
          local_c18 = local_90c;
          android::Vector<long_long>::add((Vector_long_long_ *)aVStack3092,&local_c18,puVar13);
        }
        else if (*(int *)(iVar10 + 0x20) != 0) {
          puVar8 = (uchar *)(DAT_0004cbcc + 0x4ca4c);
          mm_camera_debug_log();
        }
        iVar6 = *piVar21;
        uVar11 = *(uint *)(iVar6 + 0x2ad8);
        if (0x27 < uVar11) {
          uVar11 = 0x28;
        }
        iVar23 = iVar23 + 8;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar11);
    }
    iVar22 = iVar22 + 1;
  } while (iVar22 != 6);
  iVar22 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack3092);
  if (iVar22 != 0) {
    uVar15 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack3092);
    if (uVar15 == uVar15 / 3 + ((uint)((ulonglong)uVar15 * 0xaaaaaaab >> 0x20) & 0xfffffffe)) {
      uVar15 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)aVStack3092);
      uVar11 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)aVStack3092);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack2712,0xe001e,uVar15,uVar11,(uint)puVar8);
      goto LAB_0004cb1a;
    }
  }
  if (*(int *)(iVar10 + 0x24) != 0) {
    puVar8 = (uchar *)(DAT_0004cbd4 + 0x4cae6);
    mm_camera_debug_log();
  }
LAB_0004cb1a:
  iVar10 = *(int *)(iVar19 + param_1 * 4);
  local_a90 = *(uint *)(iVar10 + 0x2f88);
  local_a8c = *(undefined4 *)(iVar10 + 0x2f8c);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack2712,0x800f0001,(uint)&local_a90,2,(uint)puVar8);
  uVar9 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack2712);
  *(undefined4 *)(*(int *)(DAT_0004cbdc + 0x4cb50) + param_1 * 4) = uVar9;
  android::Vector<int>::_Vector(aVStack3092);
  android::Vector<int>::_Vector(aVStack3068);
  android::Vector<long_long>::_Vector(aVStack3044);
  android::Vector<int>::_Vector(aVStack3024);
  android::Vector<int>::_Vector(aVStack3004);
  android::Vector<int>::_Vector(aVStack2984);
  android::Vector<unsigned_char>::_Vector(aVStack2944);
  android::Vector<unsigned_char>::_Vector(aVStack2908);
  android::Vector<int>::_Vector(aVStack2880);
  android::Vector<long_long>::_Vector(aVStack2860);
  android::Vector<int>::_Vector(aVStack2840);
  android::Vector<unsigned_char>::_Vector(aVStack2816);
  android::Vector<unsigned_char>::_Vector(aVStack2784);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack2712);
  if (*piVar16 == local_2c) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

