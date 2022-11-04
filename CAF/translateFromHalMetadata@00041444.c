
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::translateFromHalMetadata(metadata_buffer_t*, long long, int,
   android::hardware::camera::common::V1_0::helper::CameraMetadata const&, unsigned char, unsigned
   char, bool, unsigned char, bool) */

undefined4
qcamera::QCamera3HardwareInterface::translateFromHalMetadata
          (metadata_buffer_t *param_1,longlong param_2,int param_3,CameraMetadata *param_4,
          uchar param_5,uchar param_6,bool param_7,uchar param_8,bool param_9)

{
  undefined auVar1 [16];
  CameraMetadata *this;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  cam_rect_t cVar7;
  cam_face_landmarks_info_t cVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  char *extraout_r1;
  uint *puVar15;
  int *piVar16;
  undefined *puVar17;
  int **ppiVar18;
  uint *puVar19;
  uint *puVar20;
  void *pvVar21;
  int *piVar22;
  float __n;
  metadata_buffer_t *pmVar23;
  uint uVar24;
  int **ppiVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  undefined8 uVar29;
  undefined3 in_stack_00000009;
  undefined3 in_stack_0000000d;
  undefined3 in_stack_00000011;
  undefined3 in_stack_00000015;
  int in_stack_00000018;
  double adStackY265392 [2];
  uint in_stack_fffbf368;
  int iStack265364;
  uint uStack265360;
  undefined *puStack265356;
  float *pfStack265352;
  metadata_buffer_t *pmStack265348;
  int iStack265344;
  int *piStack265340;
  uint *puStack265336;
  char cStack265331;
  undefined uStack265330;
  uchar uStack265329;
  CameraMetadata *pCStack265328;
  uint uStack265324;
  CameraMetadata aCStack265320 [8];
  undefined8 uStack265312;
  undefined8 uStack265304;
  undefined8 uStack265296;
  undefined8 uStack265288;
  undefined4 uStack265280;
  undefined4 uStack265276;
  undefined4 uStack265272;
  undefined4 uStack265268;
  undefined4 uStack265264;
  undefined4 uStack265260;
  undefined4 uStack265256;
  undefined4 uStack265252;
  undefined4 uStack265248;
  undefined4 uStack265244;
  undefined8 uStack265240;
  undefined8 uStack265232;
  undefined8 uStack265224;
  undefined8 uStack265216;
  undefined4 uStack265208;
  undefined8 uStack265204;
  undefined8 uStack265196;
  undefined8 uStack265188;
  undefined8 uStack265180;
  undefined4 uStack265172;
  undefined4 uStack265168;
  undefined4 uStack265164;
  undefined8 uStack265160;
  undefined4 uStack265152;
  undefined8 uStack265148;
  undefined8 uStack265140;
  undefined4 uStack265132;
  undefined8 uStack265128;
  undefined8 uStack265120;
  undefined8 uStack265112;
  undefined8 uStack265104;
  undefined8 uStack265096;
  undefined8 uStack265088;
  undefined auStack264288 [1024];
  undefined auStack263264 [260128];
  uint local_c40;
  undefined4 local_c3c;
  undefined2 local_c38;
  undefined8 local_838;
  undefined8 uStack2096;
  undefined8 local_828;
  undefined8 uStack2080;
  undefined4 local_818;
  undefined4 local_814;
  uint local_430;
  undefined auStack1068 [1024];
  int iStack44;
  
  uStack265324 = (uint)param_5;
  uStack265329 = param_6;
  uStack265330 = param_7;
  piStack265340 = *(int **)(DAT_000414a0 + 0x41474);
  iStack44 = *piStack265340;
  pCStack265328 = param_4;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack265320);
  iVar4 = in_stack_00000018;
  this = param_2._4_4_;
  pmVar23 = param_1 + 0x117878;
  if ((param_1[0x117878] != (metadata_buffer_t)0x0) && (in_stack_00000018 == 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::clear(aCStack265320);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              (aCStack265320,(CameraMetadata *)(param_1 + 0x1178fc));
  }
  iVar3 = android::hardware::camera::common::V1_0::helper::CameraMetadata::entryCount(this);
  if (iVar3 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::append(aCStack265320,this);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0xe0010,(uint)&pCStack265328,1,in_stack_fffbf368);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0xc0001,(uint)&param_2,1,in_stack_fffbf368);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0xc0009,(uint)&uStack265329,1,in_stack_fffbf368);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0x1000d,(uint)&uStack265330,1,in_stack_fffbf368);
  if ((*pmVar23 != (metadata_buffer_t)0x0) && (iVar4 == 0)) goto LAB_0004340e;
  pfStack265352 = (float *)(param_3 + 0x76c14);
  pmStack265348 = pmVar23;
  if (param_3 == 0) {
LAB_000418ec:
    uStack265312 = uStack265312 & 0xffffffffffffff00;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x10011,(uint)&uStack265312,1,in_stack_fffbf368);
    if (*(int *)(*(int *)(DAT_00041918 + 0x41910) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    if (param_3 != 0) goto LAB_00041948;
  }
  else {
    if (*(char *)(param_3 + 0x6e) != '\0') {
      uStack265312 = (ulonglong)*(uint *)(param_3 + 0xc4f4);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x170000,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 10) != '\0') {
      uStack265312 = CONCAT44(ROUND(*(float *)(param_3 + 0x72df0)),
                              ROUND(*(float *)(param_3 + 0x72dec)));
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x10005,(uint)&uStack265312,2,in_stack_fffbf368);
      if (*(int *)(*(int *)(DAT_000418bc + 0x415d4) + 0x2c) != 0) {
        adStackY265392[1] = (double)CONCAT44((float)uStack265312,DAT_000418c0 + 0x415e4);
        mm_camera_debug_log();
      }
    }
    if (*(char *)(param_3 + 7) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x10001,param_3 + 0x72ddc,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0xd) != '\0') {
      iVar4 = lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_scene_mode_cam_scene_mode_type__
                        (*(QCameraMap **)(DAT_000418c8 + 0x41632),0x11,*(uint *)(param_3 + 0x72e00))
      ;
      if (iVar4 != -2) {
        uStack265312 = uStack265312 & 0xffffffffffffff00 | (ulonglong)(byte)iVar4;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,0x10010,(uint)&uStack265312,1,in_stack_fffbf368);
        if (*(int *)(*(int *)(DAT_000418cc + 0x4165a) + 0x2c) != 0) {
          mm_camera_debug_log();
        }
      }
    }
    if (*(char *)(param_3 + 9) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0x72de8);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x10002,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0xb) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0x72dfc);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x1000a,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x69) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc4fc);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x7c) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x30000,param_3 + 0xc610,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x7e) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc618);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x40000,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x7f) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x40001,param_3 + 0xc620,1,in_stack_fffbf368);
    }
    if ((*(char *)(param_3 + 0x80) != '\0') && (-1 < (int)*(uint *)(param_3 + 0xc62c))) {
      uVar13 = (uint)*(byte *)(*(int *)(*(int *)(DAT_000418d8 + 0x41776) +
                                       *(int *)(param_1 + 0x4c) * 4) + 0x3734);
      uVar5 = *(uint *)(param_3 + 0xc62c);
      if (uVar13 == 0) {
        uVar5 = uVar13;
      }
      uStack265312 = uStack265312 & 0xffffffffffffff00 | (ulonglong)(byte)uVar5;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x40005,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x9c) != '\0') {
      iVar4 = lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_flash_mode_cam_flash_mode_t__
                        (*(QCameraMap **)(DAT_000418dc + 0x417ae),3,*(uint *)(param_3 + 0xc628));
      if (iVar4 != -2) {
        uStack265312 = uStack265312 & 0xffffffffffffff00 | (ulonglong)(byte)iVar4;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,0x40002,(uint)&uStack265312,1,in_stack_fffbf368);
      }
    }
    if (*(char *)(param_3 + 0x83) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc630);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x60000,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x84) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80000,param_3 + 0xc634,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x85) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80001,param_3 + 0xc638,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x86) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80002,param_3 + 0xc63c,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x12) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc658);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80004,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0xd9) == '\0') goto LAB_000418ec;
    uStack265312 = uStack265312 & 0xffffffffffffff00 |
                   (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc65c);
    if (*(int *)(*(int *)(DAT_000418e0 + 0x41882) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x10011,(uint)&uStack265312,1,in_stack_fffbf368);
LAB_00041948:
    if (*(char *)(param_3 + 0x8b) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc664);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xa0000,(uint)&uStack265312,1,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 200) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x180000,param_3 + 0x76bf8,1,in_stack_fffbf368);
    }
    uVar5 = (uint)*(byte *)(param_3 + 0xcc);
    if (uVar5 != 0) {
      uVar5 = param_3 + 0x76c04;
    }
    iVar4 = *(int *)(DAT_000419b4 + 0x419a2);
    if (*(int *)(iVar4 + 0x2c) != 0 && uVar5 != 0) {
      adStackY265392[1] = (double)*(float *)(uVar5 + 8);
      adStackY265392[0] = (double)*(float *)(uVar5 + 4);
      mm_camera_debug_log();
    }
    if (*(char *)(param_3 + 0xcd) != '\0') {
      uStack265312._0_4_ = *pfStack265352;
      uStack265312._4_4_ = pfStack265352[1];
      uStack265304._0_4_ = pfStack265352[2];
      uStack265304._4_4_ = pfStack265352[3];
      if (*(int *)(iVar4 + 0x2c) != 0) {
        adStackY265392[1] = (double)pfStack265352[2];
        adStackY265392[0] = (double)pfStack265352[1];
        mm_camera_debug_log();
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x800a0000,(uint)&uStack265312,4,in_stack_fffbf368);
      uStack265312 = CONCAT44(uStack265312._4_4_ * DAT_00041a7c,(float)uStack265312 * DAT_00041a7c);
      uStack265304 = CONCAT44(uStack265304._4_4_ * DAT_00041a7c,(float)uStack265304 * DAT_00041a7c);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe001c,(uint)&uStack265312,4,in_stack_fffbf368);
    }
  }
  iStack265344 = *(int *)(DAT_00041b2c + 0x41af6);
  piVar16 = (int *)0x1;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0xe001d,*(int *)(iStack265344 + *(int *)(param_1 + 0x4c) * 4) + 0x3418,1,
             in_stack_fffbf368);
  puStack265336 = (uint *)param_1;
  ppiVar25 = (int **)&stack0xfffbf368;
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x8d) != '\0') {
      uStack265312 = *(ulonglong *)(param_3 + 0xc66c);
      uStack265304 = *(ulonglong *)(param_3 + 0xc674);
      QCamera3CropRegionMapper::toActiveArray
                ((QCamera3CropRegionMapper *)(param_1 + 0x1178d4),(int *)&uStack265312,
                 (int *)((int)&uStack265312 + 4),(int *)&uStack265304,
                 (int *)((int)&uStack265304 + 4));
      piVar16 = (int *)0x4;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xd0000,(uint)&uStack265312,4,in_stack_fffbf368);
    }
    if (*(char *)(param_3 + 0x8f) != '\0') {
      if (*(int *)(*(int *)(DAT_00041bb4 + 0x41bae) + 0x2c) != 0) {
        adStackY265392[1] =
             (double)((ulonglong)adStackY265392[1] & 0xffffffff00000000 |
                     (ulonglong)(DAT_00041bdc + 0x41bc8));
        mm_camera_debug_log();
      }
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe0000,param_3 + 0xc680,1,in_stack_fffbf368);
    }
    param_1 = (metadata_buffer_t *)puStack265336;
    uStack265360 = param_3 + 0xc6a0;
    if (*(char *)(param_3 + 0x90) != '\0') {
      if (*(int *)(*(int *)(DAT_00041c1c + 0x41c14) + 0x2c) != 0) {
        adStackY265392[1] =
             (double)((ulonglong)adStackY265392[1] & 0xffffffff00000000 |
                     (ulonglong)(DAT_00041c44 + 0x41c30));
        mm_camera_debug_log();
      }
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe0001,param_3 + 0xc688,1,in_stack_fffbf368);
    }
    uVar5 = uStack265360;
    if (*(char *)(param_3 + 0x93) != '\0') {
      if (*(int *)(*(int *)(DAT_00041c78 + 0x41c6c) + 0x2c) != 0) {
        adStackY265392[1] =
             (double)((ulonglong)adStackY265392[1] & 0xffffffff00000000 |
                     (ulonglong)(DAT_00041ca0 + 0x41c8c));
        mm_camera_debug_log();
      }
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe001a,uVar5,1,in_stack_fffbf368);
    }
    ppiVar25 = (int **)&stack0xfffbf368;
    if (*(char *)(param_3 + 0x91) != '\0') {
      iVar4 = *(int *)(DAT_00041ce4 + 0x41cda);
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe0002,(uint)(int *)(param_3 + 0xc690U),1,in_stack_fffbf368);
      iVar3 = *(int *)(param_3 + 0xc690U);
      dVar28 = (double)computeNoiseModelEntryS((QCamera3HardwareInterface *)param_1,iVar3);
      uVar29 = computeNoiseModelEntryO((QCamera3HardwareInterface *)puStack265336,iVar3);
      param_1 = (metadata_buffer_t *)puStack265336;
      uVar5 = (uint)*(byte *)(*(int *)(iStack265344 + puStack265336[0x13] * 4) + 0x33d4);
      puStack265356 = &stack0xfffbf368;
      if (*(char *)(*(int *)(iStack265344 + puStack265336[0x13] * 4) + 0x33d4) != '\0') {
        puVar6 = (undefined8 *)(&uStack265360 + uVar5 * -4);
        uVar13 = 0;
        do {
          puVar6[-1] = dVar28;
          *puVar6 = uVar29;
          puVar6 = puVar6 + 2;
          uVar13 = uVar13 + 2;
        } while (uVar13 < (uint)*(byte *)(*(int *)(iStack265344 + puStack265336[0x13] * 4) + 0x33d4)
                          << 1);
      }
      if (*(int *)(iVar4 + 0x2c) != 0) {
        adStackY265392[uVar5 * -2 + 1] = dVar28;
        *(undefined8 *)(&stack0xfffbf360 + uVar5 * -0x10) = uVar29;
        *(int *)(adStackY265392 + uVar5 * -2) = DAT_00042140 + 0x41daa;
        mm_camera_debug_log();
      }
      piVar16 = (int *)((uint)*(byte *)(*(int *)(iStack265344 + *(uint *)((int)param_1 + 0x4c) * 4)
                                       + 0x33d4) << 1);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe0013,(uint)(&stack0xfffbf368 + uVar5 * -0x10),(uint)piVar16,
                 *(uint *)(&stack0xfffbf368 + uVar5 * -0x10));
      ppiVar25 = (int **)puStack265356;
      if (param_3 == 0) goto LAB_00042790;
    }
    if (*(char *)(param_3 + 0xdc) != '\0') {
      uStack265312 = uStack265312 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_3 + 0xc694);
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x10028,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x94) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc6a8);
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x100000,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x96) != '\0') {
      iVar4 = lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_statistics_face_detect_mode_cam_face_detect_mode_t__
                        (*(QCameraMap **)(DAT_00042148 + 0x41e62),3,*(uint *)(param_3 + 0xc6ac));
      if (iVar4 != -2) {
        cStack265331 = (char)iVar4;
        piVar16 = (int *)0x1;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,0x110000,(uint)&cStack265331,1,(uint)*ppiVar25);
        if ((cStack265331 != '\0') && (*(char *)(param_3 + 0x11) != '\0')) {
          puStack265356 = (undefined *)(uint)*(byte *)(param_3 + 0x1104);
          if ((undefined *)0x9 < puStack265356) {
            puStack265356 = (undefined *)0xa;
          }
          if (puStack265356 == (undefined *)0x0) {
LAB_00041f28:
            local_838 = 0;
            uStack2096 = 0;
            local_814 = 0;
            local_828 = 0;
            uStack2080 = 0;
            local_818 = 0;
            local_c38 = 0;
            local_c40 = 0;
            local_c3c = 0;
            __aeabi_memclr4(&local_430,0xa0);
            __aeabi_memclr4(&uStack265312,0xf0);
          }
          else {
            iVar4 = param_3 + 0x111c;
            puVar17 = (undefined *)0x0;
            puVar19 = &local_430;
            do {
              *(undefined *)((int)&local_c40 + (int)puVar17) = *(undefined *)(iVar4 + -0x10);
              ppiVar25[-2] = (int *)iVar4;
              QCamera3CropRegionMapper::toActiveArray
                        ((QCamera3CropRegionMapper *)((int)param_1 + 0x1178d4),(int *)(iVar4 + -0xc)
                         ,(int *)(iVar4 + -8),(int *)(iVar4 + -4),ppiVar25[-2]);
              iVar3 = *(int *)(iVar4 + -4);
              piVar16 = *(int **)(iVar4 + -8);
              cVar7 = *(cam_rect_t *)(iVar4 + -0xc);
              ppiVar25[-2] = (int *)puVar19;
              ppiVar25[-1] = (int *)0xffffffff;
              convertToRegions(cVar7,piVar16,iVar3);
              iVar4 = iVar4 + 0x18;
              puVar19 = puVar19 + 4;
              puVar17 = puVar17 + 1;
            } while (puVar17 < puStack265356);
            param_1 = (metadata_buffer_t *)puStack265336;
            if (puStack265356 == (undefined *)0x0) goto LAB_00041f28;
          }
          puVar17 = puStack265356;
          android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                    (aCStack265320,0x110007,(uint)&local_c40,(uint)puStack265356,(uint)*ppiVar25);
          piVar16 = (int *)(((uint)puVar17 & 0x3f) << 2);
          android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                    (aCStack265320,0x110006,(uint)&local_430,(uint)piVar16,(uint)*ppiVar25);
          if (cStack265331 == '\x02') {
            if ((param_3 != 0) &&
               (*(char *)(param_3 + 0xd7) != '\0' && puStack265356 != (undefined *)0x0)) {
              iStack265364 = param_3 + 0x1364;
              puVar19 = puStack265336 + 0x45e35;
              iVar4 = 0;
              puVar17 = (undefined *)0x0;
              do {
                piVar22 = (int *)(iStack265364 + iVar4);
                QCamera3CropRegionMapper::toActiveArray
                          ((QCamera3CropRegionMapper *)puVar19,piVar22 + -4,piVar22 + -3,piVar16,
                           *ppiVar25);
                QCamera3CropRegionMapper::toActiveArray
                          ((QCamera3CropRegionMapper *)puVar19,piVar22 + -2,
                           (int *)(param_3 + iVar4 + 0x1360),piVar16,*ppiVar25);
                QCamera3CropRegionMapper::toActiveArray
                          ((QCamera3CropRegionMapper *)puVar19,piVar22,piVar22 + 1,piVar16,*ppiVar25
                          );
                piVar16 = *(int **)(param_3 + iVar4 + 0x1360);
                cVar8 = piVar22[-4];
                piVar14 = (int *)piVar22[-3];
                piVar22 = (int *)piVar22[1];
                ppiVar25[-4] = (int *)*(undefined4 *)(iStack265364 + iVar4);
                ppiVar25[-3] = piVar22;
                ppiVar25[-2] = (int *)((int)&uStack265312 + iVar4);
                convertLandmarks(cVar8,piVar14);
                iVar4 = iVar4 + 0x18;
                puVar17 = puVar17 + 1;
              } while (puVar17 < puStack265356);
            }
            puVar17 = puStack265356;
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265320,0x110004,(uint)&local_838,(uint)puStack265356,(uint)*ppiVar25);
            piVar16 = (int *)((int)puVar17 * 6);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265320,0x110005,(uint)&uStack265312,(uint)piVar16,(uint)*ppiVar25);
            param_1 = (metadata_buffer_t *)puStack265336;
          }
          if (param_3 == 0) goto LAB_00042790;
        }
      }
    }
    if (*(char *)(param_3 + 0x97) != '\0') {
      cStack265331 = (char)*(undefined4 *)(param_3 + 0xc6b0);
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x110001,(uint)&cStack265331,1,(uint)*ppiVar25);
      if ((cStack265331 != '\x01') || (*(char *)(param_3 + 0x10) == '\0')) goto LAB_000421d2;
      __aeabi_memclr4(&local_430,0x404);
      __aeabi_memclr4(&local_838,0x404);
      __aeabi_memclr4(&local_c40,0x404);
      if (*(int *)(param_3 + 0xe8) == 1) {
        pvVar21 = (void *)(param_3 + 0xec);
        goto LAB_0004214e;
      }
      if (*(int *)(param_3 + 0xe8) == 0) {
        switch(*(undefined4 *)(param_3 + 0xec)) {
        case 1:
          pvVar21 = (void *)(param_3 + 0x8f8);
          break;
        case 2:
          pvVar21 = (void *)(param_3 + 0xcfc);
          break;
        default:
          pvVar21 = (void *)(param_3 + 0xf0);
          break;
        case 4:
          pvVar21 = (void *)(param_3 + 0x4f4);
          break;
        case 5:
          __aeabi_memcpy8(&local_430,(void *)(param_3 + 0xf0),0x404);
          __aeabi_memcpy8(&local_838,(void *)(param_3 + 0xcfc),0x404);
          pvVar21 = (void *)(param_3 + 0x4f4);
          puVar19 = &local_c40;
          goto LAB_0004217c;
        }
LAB_0004214e:
        __aeabi_memcpy8(&local_c40,pvVar21,0x404);
        __aeabi_memcpy8(&local_838,pvVar21,0x404);
        puVar19 = &local_430;
LAB_0004217c:
        __aeabi_memcpy8(puVar19,pvVar21,0x404);
      }
      __aeabi_memcpy8(&uStack265312,auStack1068,0x400);
      __aeabi_memcpy8(auStack264288,(void *)((int)&local_838 + 4),0x400);
      __aeabi_memcpy8(auStack263264,&local_c3c,0x400);
      piVar16 = (int *)0xc00;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x110008,(uint)&uStack265312,0xc00,(uint)*ppiVar25);
      param_1 = (metadata_buffer_t *)puStack265336;
    }
LAB_000421d2:
    if (*(char *)(param_3 + 0x98) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc6b4);
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x110002,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x99) != '\0') {
      piVar16 = (int *)0x6c;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x110009,param_3 + 0xc6b8,0x6c,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x9d) != '\0') {
      iVar4 = *(int *)(iStack265344 + *(uint *)((int)param_1 + 0x4c) * 4);
      uVar5 = *(uint *)(iVar4 + 0x303c);
      if (0x10 < uVar5) {
        uVar5 = 0x11;
      }
      uVar13 = *(uint *)(iVar4 + 0x3040);
      if (0xc < uVar13) {
        uVar13 = 0xd;
      }
      piVar16 = (int *)(uVar5 * uVar13 * 4);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x11000b,param_3 + 0xf86c,(uint)piVar16,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x9a) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0x73650);
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x130003,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    uVar5 = uStack265360;
    if (*(char *)(param_3 + 0x9b) != '\0') {
      piVar16 = *(int **)(uStack265360 + 0x1c8);
      if ((int *)0x200 < piVar16) {
        if (*(int *)(*(int *)(DAT_0004255c + 0x4229a) + 0x20) != 0) {
          ppiVar25[-4] = (int *)(DAT_00042560 + 0x422aa);
          ppiVar25[-3] = piVar16;
          ppiVar25[-2] = (int *)0x200;
          mm_camera_debug_log();
        }
        *(undefined4 *)(uVar5 + 0x1c8) = 0x200;
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x130001,param_3 + 0xc86c,*(int *)(uVar5 + 0x1c8) << 1,
                 (uint)*ppiVar25);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x130000,param_3 + 0xd86c,*(int *)(uVar5 + 0x1c8) << 1,
                 (uint)*ppiVar25);
      piVar16 = (int *)(*(int *)(uVar5 + 0x1c8) << 1);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x130002,param_3 + 0xe86c,(uint)piVar16,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x6b) != '\0') {
      piVar16 = (int *)0x4;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,2,param_3 + 0xc548,4,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x6a) != '\0') {
      piVar16 = (int *)0x9;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,1,param_3 + 0xc500,9,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xad) != '\0') {
      ppiVar18 = (int **)(param_3 + 0x73720);
      piVar16 = *ppiVar18;
      if ((int *)0x200 < piVar16) {
        if (*(int *)(*(int *)(DAT_00042568 + 0x4236c) + 0x20) != 0) {
          ppiVar25[-4] = (int *)(DAT_0004256c + 0x4237c);
          ppiVar25[-3] = piVar16;
          ppiVar25[-2] = (int *)0x200;
          mm_camera_debug_log();
        }
        *ppiVar18 = (int *)0x200;
      }
      piVar16 = (int *)((int)*ppiVar18 << 1);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe0015,param_3 + 0x73724,(uint)piVar16,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x6d) != '\0') {
      piVar16 = (int *)0x4;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x11000c,param_3 + 0xc5a0,4,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x6c) != '\0') {
      piVar16 = (int *)0x9;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x11000d,param_3 + 0xc558,9,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xb3) != '\0') {
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe0016,param_3 + 0x74724,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x79) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc608);
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x160000,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x8e) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc67c);
      piVar16 = (int *)0x1;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x11000e,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xc) != '\0') {
      iVar4 = lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_effect_mode_cam_effect_mode_type__
                        (*(QCameraMap **)(DAT_00042574 + 0x42478),9,*(uint *)(param_3 + 0x70e30));
      if (iVar4 != -2) {
        uStack265312 = uStack265312 & 0xffffffffffffff00 | (ulonglong)(byte)iVar4;
        piVar16 = (int *)0x1;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,0x1000e,(uint)&uStack265312,1,(uint)*ppiVar25);
      }
    }
    if (*(char *)(param_3 + 0xac) != '\0') {
      local_430 = lookupFwkName_cam_test_pattern_mode_t_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_sensor_test_pattern_mode_cam_test_pattern_mode_t__
                            (*(QCameraMap **)(DAT_00042578 + 0x424b8),6,
                             *(cam_test_pattern_mode_t *)(param_3 + 0x7370c));
      if (local_430 != 0xfffffffe) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,0xe0018,(uint)&local_430,1,(uint)*ppiVar25);
      }
      uVar5 = *(uint *)(param_3 + 0x73710);
      uStack265312 = uStack265312 & 0xffffffff00000000 | (ulonglong)uVar5;
      uVar13 = *(uint *)(param_3 + 0x7371c);
      uStack265304 = uStack265304 & 0xffffffff | (ulonglong)uVar13 << 0x20;
      piVar16 = *(int **)(*(int *)(iStack265344 + *(uint *)((int)param_1 + 0x4c) * 4) + 0x33d0);
      if ((int)piVar16 - 2U < 2) {
        uStack265312 = CONCAT44(*(undefined4 *)(param_3 + 0x73718),uVar5);
        uStack265304 = CONCAT44(uVar13,*(undefined4 *)(param_3 + 0x73714));
      }
      else if (piVar16 < (int *)0x2) {
        uStack265312 = CONCAT44(*(undefined4 *)(param_3 + 0x73714),uVar5);
        uStack265304 = CONCAT44(uVar13,*(undefined4 *)(param_3 + 0x73718));
      }
      else if (*(int *)(*(int *)(DAT_00042868 + 0x42582) + 0x20) != 0) {
        ppiVar25[-2] = (int *)(DAT_0004286c + 0x4258e);
        ppiVar25[-1] = piVar16;
        mm_camera_debug_log();
      }
      piVar16 = (int *)0x4;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0xe0017,(uint)&uStack265312,4,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xa5) != '\0') {
      piVar16 = (int *)0x3;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x70000,param_3 + 0x736b0,3,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xa6) != '\0') {
      android::String8::String8((String8 *)&uStack265312,(char *)(param_3 + 0x736c8));
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,(uint)&DAT_00070001,(uint)&uStack265312,(uint)piVar16,(uint)*ppiVar25
                );
      android::String8::_String8((String8 *)&uStack265312,extraout_r1);
    }
    if (*(char *)(param_3 + 0xa7) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,(uint)&DAT_00070002,param_3 + 0x736f0,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xa8) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,(uint)&DAT_00070003,param_3 + 0x736f8,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xa9) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0x736fc);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,(uint)__cxa_finalize,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xaa) != '\0') {
      uStack265312 = uStack265312 & 0xffffffffffffff00 |
                     (ulonglong)(byte)*(undefined4 *)(param_3 + 0x73700);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,(uint)&DAT_00070005,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0xab) != '\0') {
      uStack265312 = *(ulonglong *)(param_3 + 0x73704);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,(uint)&DAT_00070006,(uint)&uStack265312,2,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x9e) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80000000,param_3 + 0x70e34,0x7e8,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x1e) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80080000,param_3 + 0x730d4,1,(uint)*ppiVar25);
    }
    if (*(char *)(param_3 + 0x3e) != '\0') {
      if (*(int *)(*(int *)(DAT_00042874 + 0x4271a) + 0x2c) != 0) {
        piVar16 = *(int **)(param_3 + 0x23b4);
        fVar27 = *(float *)(param_3 + 0x23b8);
        ppiVar25[-4] = (int *)(DAT_00042878 + 0x42736);
        ppiVar25[-3] = piVar16;
        *(double *)(ppiVar25 + -2) = (double)fVar27;
        mm_camera_debug_log();
      }
      local_430 = local_430 & 0xffffff00 | (uint)*(int **)(param_3 + 0x23b4) & 0xff;
      uStack265312 = uStack265312 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_3 + 0x23b8);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80100000,(uint)&local_430,1,(uint)*ppiVar25);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80100001,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
  }
LAB_00042790:
  pfVar2 = pfStack265352;
  if (*(char *)(param_3 + 0x76ca8) != '\0') {
    *(undefined4 *)(param_3 + 0x76cac) = 6;
    fVar27 = pfStack265352[0x27];
    uStack265312 = CONCAT44(fVar27,6);
    iVar4 = *(int *)(DAT_00042880 + 0x427c2);
    if (*(int *)(iVar4 + 0x2c) == 0) {
      uStack265304 = (ulonglong)(uint)pfStack265352[0x28];
    }
    else {
      ppiVar25[-2] = (int *)(DAT_00042884 + 0x427d0);
      ppiVar25[-1] = (int *)fVar27;
      mm_camera_debug_log();
      fVar27 = pfVar2[0x28];
      uStack265304 = uStack265304 & 0xffffffff00000000 | (ulonglong)(uint)fVar27;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        ppiVar25[-2] = (int *)(DAT_0004288c + 0x427f8);
        ppiVar25[-1] = (int *)fVar27;
        mm_camera_debug_log();
      }
    }
    fVar27 = pfVar2[0x29];
    uStack265304 = uStack265304 & 0xffffffff | (ulonglong)(uint)fVar27 << 0x20;
    if (*(int *)(iVar4 + 0x2c) == 0) {
      uStack265296 = (ulonglong)(uint)pfVar2[0x2a];
    }
    else {
      ppiVar25[-2] = (int *)(DAT_00042894 + 0x4282a);
      ppiVar25[-1] = (int *)fVar27;
      mm_camera_debug_log();
      fVar27 = pfVar2[0x2a];
      uStack265296 = CONCAT44(uStack265296._4_4_,fVar27);
      if (*(int *)(iVar4 + 0x2c) != 0) {
        ppiVar25[-2] = (int *)(DAT_0004289c + 0x42852);
        ppiVar25[-1] = (int *)fVar27;
        mm_camera_debug_log();
      }
    }
    *(undefined4 *)(param_3 + 0x76cc4) = 0;
    uStack265296 = uStack265296 & 0xffffffff;
    if (*(int *)(iVar4 + 0x2c) != 0) {
      ppiVar25[-2] = (int *)(DAT_00042c28 + 0x428c8);
      ppiVar25[-1] = (int *)0x0;
      mm_camera_debug_log();
    }
    fVar27 = pfVar2[0x27];
    if (0xffff < (uint)fVar27) {
      fVar27 = 9.18355e-41;
    }
    __memcpy_chk();
    __n = pfVar2[0x28];
    if (0xffff < (uint)__n) {
      __n = 9.18355e-41;
    }
    __aeabi_memcpy8((void *)((int)&uStack265288 + (int)fVar27),(void *)(param_3 + 0x86cc8),
                    (size_t)__n);
    pvVar21 = (void *)((int)(void *)((int)&uStack265288 + (int)fVar27) + (int)__n);
    fVar27 = pfVar2[0x29];
    if (0xffff < (uint)fVar27) {
      fVar27 = 9.18355e-41;
    }
    __aeabi_memcpy8(pvVar21,(void *)(param_3 + 0x96cc8),(size_t)fVar27);
    pvVar21 = (void *)((int)fVar27 + (int)pvVar21);
    fVar27 = 9.18355e-41;
    if ((uint)pfVar2[0x2a] < 0x10000) {
      fVar27 = pfVar2[0x2a];
    }
    __aeabi_memcpy8(pvVar21,(void *)(param_3 + 0xa6cc8),(size_t)fVar27);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x80040000,(uint)&uStack265312,
               (uint)((int)pvVar21 + ((int)fVar27 - (int)&uStack265312)) >> 2,(uint)*ppiVar25);
    param_1 = (metadata_buffer_t *)puStack265336;
  }
  if (*(char *)(param_3 + 0xae) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0xe0012,param_3 + 0x7473c,3,(uint)*ppiVar25);
  }
  if (*(char *)(param_3 + 0x89) != '\0') {
    uStack265312 = uStack265312 & 0xffffffffffffff00 |
                   (ulonglong)(byte)*(undefined4 *)(param_3 + 0x73648);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x110010,(uint)&uStack265312,1,(uint)*ppiVar25);
  }
  if (*(char *)(param_3 + 0x71) != '\0') {
    puVar19 = (uint *)(param_3 + 0xc5b0);
    ppiVar25[-2] = (int *)(param_3 + 0xc5bc);
    QCamera3CropRegionMapper::toActiveArray
              ((QCamera3CropRegionMapper *)((int)param_1 + 0x1178d4),(int *)puVar19,
               (int *)(param_3 + 0xc5b4),(int *)(param_3 + 0xc5b8),ppiVar25[-2]);
    cVar7 = *puVar19;
    piVar16 = *(int **)(param_3 + 0xc5b4);
    iVar4 = *(int *)(param_3 + 0xc5b8);
    uVar5 = *(uint *)(param_3 + 0xc5c0);
    ppiVar25[-2] = (int *)&uStack265312;
    ppiVar25[-1] = (int *)uVar5;
    convertToRegions(cVar7,piVar16,iVar4);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x10004,(uint)&uStack265312,5,(uint)*ppiVar25);
    param_1 = (metadata_buffer_t *)puStack265336;
    if (*(int *)(*(int *)(DAT_00042c30 + 0x42a4e) + 0x2c) != 0) {
      uVar13 = *puVar19;
      uVar26 = *(uint *)(param_3 + 0xc5b4);
      uVar5 = *(uint *)(param_3 + 0xc5b8);
      ppiVar25[-2] = (int *)*(uint *)(param_3 + 0xc5bc);
      ppiVar25[-10] = (int *)(DAT_00042c34 + 0x42a72);
      ppiVar25[-9] = (int *)(float)uStack265312;
      ppiVar25[-8] = (int *)uStack265312._4_4_;
      ppiVar25[-7] = (int *)(float)uStack265304;
      ppiVar25[-6] = (int *)uStack265304._4_4_;
      ppiVar25[-5] = (int *)uVar13;
      ppiVar25[-4] = (int *)uVar26;
      ppiVar25[-3] = (int *)uVar5;
      mm_camera_debug_log();
      param_1 = (metadata_buffer_t *)puStack265336;
    }
  }
  if (*(char *)(param_3 + 0x87) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x80003,param_3 + 0xc640,1,(uint)*ppiVar25);
  }
  if (*(char *)(param_3 + 0x88) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x80008,param_3 + 0xc64c,2,(uint)*ppiVar25);
  }
  if (*(char *)(param_3 + 0x8a) != '\0') {
    uStack265312 = uStack265312 & 0xffffffffffffff00 |
                   (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc654);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x80009,(uint)&uStack265312,1,(uint)*ppiVar25);
  }
  pmVar23 = pmStack265348;
  if (*(char *)(param_3 + 0x74) != '\0') {
    puVar19 = (uint *)(param_3 + 0xc5d4);
    ppiVar25[-2] = (int *)(param_3 + 0xc5e0);
    QCamera3CropRegionMapper::toActiveArray
              ((QCamera3CropRegionMapper *)((int)param_1 + 0x1178d4),(int *)puVar19,
               (int *)(param_3 + 0xc5d8),(int *)(param_3 + 0xc5dc),ppiVar25[-2]);
    cVar7 = *puVar19;
    piVar16 = *(int **)(param_3 + 0xc5d8);
    iVar4 = *(int *)(param_3 + 0xc5dc);
    uVar5 = *(uint *)(param_3 + 0xc5e4);
    ppiVar25[-2] = (int *)&uStack265312;
    ppiVar25[-1] = (int *)uVar5;
    convertToRegions(cVar7,piVar16,iVar4);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x10008,(uint)&uStack265312,5,(uint)*ppiVar25);
    param_1 = (metadata_buffer_t *)puStack265336;
    if (*(int *)(*(int *)(DAT_00042c3c + 0x42b5c) + 0x2c) != 0) {
      uVar13 = *puVar19;
      uVar26 = *(uint *)(param_3 + 0xc5d8);
      uVar5 = *(uint *)(param_3 + 0xc5dc);
      ppiVar25[-2] = (int *)*(uint *)(param_3 + 0xc5e0);
      ppiVar25[-10] = (int *)(DAT_00042c40 + 0x42b80);
      ppiVar25[-9] = (int *)(float)uStack265312;
      ppiVar25[-8] = (int *)uStack265312._4_4_;
      ppiVar25[-7] = (int *)(float)uStack265304;
      ppiVar25[-6] = (int *)uStack265304._4_4_;
      ppiVar25[-5] = (int *)uVar13;
      ppiVar25[-4] = (int *)uVar26;
      ppiVar25[-3] = (int *)uVar5;
      mm_camera_debug_log();
      param_1 = (metadata_buffer_t *)puStack265336;
    }
  }
  if (*(char *)(param_3 + 6) != '\0') {
    iVar4 = lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_ae_antibanding_mode_cam_antibanding_mode_type__
                      (*(QCameraMap **)(DAT_00042c48 + 0x42bc0),4,*(uint *)(param_3 + 0x72dd8));
    if (iVar4 != -2) {
      uStack265312 = uStack265312 & 0xffffffffffffff00 | (ulonglong)(byte)iVar4;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x10000,(uint)&uStack265312,1,(uint)*ppiVar25);
    }
  }
  if (*(char *)(param_3 + 0xd) != '\0') {
    iVar4 = lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_scene_mode_cam_scene_mode_type__
                      (*(QCameraMap **)(DAT_00042c4c + 0x42bfa),0x11,*(uint *)(param_3 + 0x72e00));
    if (iVar4 == -2) {
      if (*(int *)(*(int *)(DAT_00042c50 + 0x42c0a) + 0x28) != 0) {
        ppiVar25[-2] = (int *)(DAT_00042c54 + 0x42c18);
LAB_00042c92:
        mm_camera_debug_log();
      }
    }
    else {
      uStack265312 = uStack265312 & 0xffffffffffffff00 | (ulonglong)(byte)iVar4;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x10010,(uint)&uStack265312,1,(uint)*ppiVar25);
      if (*(int *)(*(int *)(DAT_00043014 + 0x42c7a) + 0x2c) != 0) {
        ppiVar25[-2] = (int *)(DAT_00043018 + 0x42c86);
        goto LAB_00042c92;
      }
    }
  }
  if (*(char *)(param_3 + 2) != '\0') {
    uStack265312 = uStack265312 & 0xffffffffffffff00 |
                   (ulonglong)(byte)*(undefined4 *)(param_3 + 0xc60c);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x1000f,(uint)&uStack265312,1,(uint)*ppiVar25);
  }
  cStack265331 = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0x110003,(uint)&cStack265331,1,(uint)*ppiVar25);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0x11000f,(uint)&local_430,0,(uint)*ppiVar25);
  if (*(char *)(param_3 + 0x5b) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x80010000,param_3 + 0x732bc,1,(uint)*ppiVar25);
  }
  if (*(char *)(param_3 + 0x28) != '\0') {
    local_838 = local_838 & 0xffffffffffffff00 | (ulonglong)*(byte *)(param_3 + 0x73228);
    uStack265312 = uStack265312 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_3 + 0x7322c);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x80050000,(uint)&local_838,1,(uint)*ppiVar25);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,0x80050001,(uint)&uStack265312,1,(uint)*ppiVar25);
  }
  iVar4 = in_stack_00000018;
  in_stack_00000018 = iVar4;
  if (*(char *)(param_3 + 0x3b) != '\0') {
    uVar5 = (uint)*(byte *)(uint *)(param_3 + 0x2278);
    if ((uVar5 - 1 & 0xff) < 8) {
      iVar9 = getReprocessibleOutputStreamId
                        ((QCamera3HardwareInterface *)param_1,(uint *)&local_838);
      iVar3 = _param_8;
      if (iVar9 == 0) {
        android::Vector<int>::Vector((Vector_int_ *)&uStack265312);
        puVar10 = (uint *)operator_new__(uVar5 << 4);
        uVar13 = 0;
        local_c40 = 0;
        puVar19 = (uint *)(param_3 + 0x2278);
        do {
          puVar20 = puVar19 + 9;
          puVar15 = (uint *)puVar19[1];
          if (puVar15 == (uint *)local_838) {
            if (iVar3 == 0) {
              *puVar10 = puVar19[2];
              puVar10[1] = puVar19[3];
              puVar10[2] = puVar19[4];
              puVar11 = puVar19 + 5;
            }
            else {
              uVar5 = puStack265336[0x59];
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = uVar5;
              puVar11 = puStack265336 + 0x5a;
              puVar15 = puStack265336;
            }
            puVar10[3] = *puVar11;
            android::Vector<long_long>::add((Vector_long_long_ *)&uStack265312,puVar19 + 6,puVar15);
            android::Vector<long_long>::add((Vector_long_long_ *)&uStack265312,puVar19 + 7,puVar15);
            android::Vector<long_long>::add((Vector_long_long_ *)&uStack265312,puVar19 + 8,puVar15);
            android::Vector<long_long>::add((Vector_long_long_ *)&uStack265312,puVar20,puVar15);
            local_c40 = local_c40 + 1;
            iVar4 = *(int *)(DAT_00043038 + 0x42eb2);
            if (*(int *)(iVar4 + 0x2c) != 0) {
              uVar24 = *puVar10;
              uVar5 = puVar10[1];
              uVar13 = puVar10[2];
              uVar26 = puVar10[3];
              ppiVar25[-6] = (int *)(DAT_0004303c + 0x42ec6);
              ppiVar25[-5] = (int *)uVar24;
              ppiVar25[-4] = (int *)uVar5;
              ppiVar25[-3] = (int *)uVar13;
              ppiVar25[-2] = (int *)uVar26;
              mm_camera_debug_log();
              if (*(int *)(iVar4 + 0x2c) != 0) {
                uVar26 = puVar19[8];
                uVar13 = puVar19[7];
                uVar5 = puVar19[6];
                uVar24 = *puVar20;
                ppiVar25[-6] = (int *)(DAT_00043044 + 0x42ef0);
                ppiVar25[-5] = (int *)uVar5;
                ppiVar25[-4] = (int *)uVar13;
                ppiVar25[-3] = (int *)uVar26;
                ppiVar25[-2] = (int *)uVar24;
                mm_camera_debug_log();
              }
            }
            break;
          }
          uVar13 = uVar13 + 1;
          puVar19 = puVar20;
        } while (uVar13 < uVar5);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,0x80030000,(uint)&local_c40,1,(uint)*ppiVar25);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,0x80030001,(uint)puVar10,local_c40 << 2,(uint)*ppiVar25);
        iVar4 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)&uStack265312);
        if (iVar4 != 0) {
          uVar5 = android::Vector<unsigned_int>::array((Vector_unsigned_int_ *)&uStack265312);
          uVar13 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)&uStack265312);
          android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                    (aCStack265320,0x80030002,uVar5,uVar13,(uint)*ppiVar25);
        }
        operator_delete__(puVar10);
        android::Vector<int>::_Vector((Vector_int_ *)&uStack265312);
        param_1 = (metadata_buffer_t *)puStack265336;
        pmVar23 = pmStack265348;
      }
      else {
        in_stack_00000018 = iVar4;
        if (*(int *)(*(int *)(DAT_0004302c + 0x42dd4) + 0x2c) != 0) {
          ppiVar25[-2] = (int *)(DAT_00043030 + 0x42de4);
          mm_camera_debug_log();
        }
      }
    }
    else if (*(int *)(*(int *)(DAT_00043020 + 0x42d94) + 0x2c) != 0) {
      ppiVar25[-2] = (int *)(DAT_00043024 + 0x42da8);
      mm_camera_debug_log();
    }
  }
  if (*(int *)(*(int *)(iStack265344 + *(uint *)((int)param_1 + 0x4c) * 4) + 0x3db8) == 0) {
    uStack265312 = uStack265312 & 0xffffffffffffff00;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265320,3,(uint)&uStack265312,1,(uint)*ppiVar25);
    if (param_3 != 0) goto LAB_000430a4;
  }
  else if (param_3 != 0) {
    if (*(char *)(param_3 + 0xb0) != '\0') {
      uVar5 = lookupFwkName_cam_aberration_mode_t_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_color_correction_aberration_mode_cam_aberration_mode_t__
                        (*(QCameraMap **)(DAT_0004304c + 0x42fbe),3,*(uint *)(param_3 + 0x74738));
      if (uVar5 == 0xfffffffe) {
        if (*(int *)(*(int *)(DAT_00043050 + 0x42fce) + 0x20) != 0) {
          uVar5 = *(uint *)(param_3 + 0x74738);
          ppiVar25[-2] = (int *)(DAT_00043054 + 0x42fde);
          ppiVar25[-1] = (int *)uVar5;
          mm_camera_debug_log();
        }
      }
      else {
        if ((uVar5 & 0xff) != _param_9) {
          uVar5 = _param_9;
        }
        uStack265312 = uStack265312 & 0xffffffffffffff00 | (ulonglong)(byte)uVar5;
        if (*(int *)(*(int *)(DAT_000433bc + 0x43070) + 0x2c) != 0) {
          ppiVar25[-4] = (int *)(DAT_000433c0 + 0x4307e);
          ppiVar25[-3] = (int *)_param_9;
          ppiVar25[-2] = (int *)(uVar5 & 0xff);
          mm_camera_debug_log();
        }
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265320,3,(uint)&uStack265312,1,(uint)*ppiVar25);
      }
    }
LAB_000430a4:
    if (*(char *)(param_3 + 0xce) != '\0') {
      uVar5 = (uint)*(byte *)(param_3 + 0x2231);
      uStack265264 = 0;
      uStack265260 = 0;
      uStack265256 = 0;
      uStack265252 = 0;
      uStack265280 = 0;
      uStack265276 = 0;
      uStack265272 = 0;
      uStack265268 = 0;
      uStack265296 = 0;
      uStack265288 = 0;
      uStack265304 = 0;
      uStack265248 = 0;
      uStack265312 = (ulonglong)*(byte *)(param_3 + 0x2230) | 0x100;
      if ((uVar5 - 1 & 0xff) < 8) {
        iVar4 = getReprocessibleOutputStreamId
                          ((QCamera3HardwareInterface *)param_1,(uint *)&local_838);
        if (iVar4 == 0) {
          puVar19 = (uint *)(param_3 + 0x2238);
          uVar13 = 0;
          do {
            if ((uint *)puVar19[-1] == (uint *)local_838) {
              uStack265304 = uStack265304 & 0xffffffff00000000 | (ulonglong)*puVar19;
              break;
            }
            puVar19 = puVar19 + 2;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar5);
        }
        else if (*(int *)(*(int *)(DAT_000434b8 + 0x43112) + 0x2c) != 0) {
          ppiVar25[-2] = (int *)(DAT_000434bc + 0x4311e);
          goto LAB_0004314c;
        }
      }
      else if (*(int *)(*(int *)(DAT_000434c4 + 0x43132) + 0x2c) != 0) {
        ppiVar25[-2] = (int *)(DAT_000434c8 + 0x4313e);
        ppiVar25[-1] = (int *)uVar5;
LAB_0004314c:
        mm_camera_debug_log();
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265320,0x80010001,(uint)&uStack265312,0x44,(uint)*ppiVar25);
    }
  }
  if (*(char *)((int)param_1 + 0x1178e8) == '\0') {
    if (param_3 != 0) {
      if (*(char *)(param_3 + 0xcb) != '\0') {
        *(undefined *)((int)param_1 + 0x1178e8) = 1;
        *(uint *)((int)param_1 + 0x1178ec) = *(uint *)(param_3 + 0x76bfc);
        *(uint *)((int)param_1 + 0x1178f0) = *(uint *)(param_3 + 0x76c00);
        if (*(int *)(*(int *)(DAT_000434d0 + 0x431c8) + 0x2c) != 0) {
          uVar13 = *(uint *)(param_3 + 0x76bfc);
          uVar5 = *(uint *)(param_3 + 0x76c00);
          ppiVar25[-4] = (int *)(DAT_000434d4 + 0x431d8);
          ppiVar25[-3] = (int *)uVar13;
          ppiVar25[-2] = (int *)uVar5;
          mm_camera_debug_log();
        }
      }
      __aeabi_memclr4(&uStack265312,0xf0);
      goto LAB_000431fa;
    }
    __aeabi_memclr4(&uStack265312,0xf0);
  }
  else {
    __aeabi_memclr4(&uStack265312,0xf0);
    if (param_3 != 0) {
LAB_000431fa:
      if (*(char *)(param_3 + 0xbf) != '\0') {
        uStack265296 = SUB168(*(undefined (*) [16])(param_3 + 0x72fd8),0);
        uStack265288 = SUB168(*(undefined (*) [16])(param_3 + 0x72fd8) >> 0x40,0);
        uStack265312 = *(ulonglong *)(param_3 + 0x72fc8);
        uStack265304 = *(ulonglong *)(param_3 + 0x72fd0);
        uStack265280 = *(undefined4 *)(param_3 + 0x72fe8);
      }
      if (*(char *)(param_3 + 0xc0) != '\0') {
        auVar1 = *(undefined (*) [16])(param_3 + 0x72ffc);
        uStack265260 = SUB164(auVar1,0);
        uStack265256 = SUB164(auVar1 >> 0x20,0);
        uStack265252 = SUB164(auVar1 >> 0x40,0);
        uStack265248 = SUB164(auVar1 >> 0x60,0);
        uStack265276 = (undefined4)*(undefined8 *)(param_3 + 0x72fec);
        uStack265272 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x72fec) >> 0x20);
        uStack265268 = (undefined4)*(undefined8 *)(param_3 + 0x72ff4);
        uStack265264 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x72ff4) >> 0x20);
        uStack265244 = *(undefined4 *)(param_3 + 0x7300c);
      }
      if (*(char *)(param_3 + 0xc1) != '\0') {
        uStack265224 = SUB168(*(undefined (*) [16])(param_3 + 0x73020),0);
        uStack265216 = SUB168(*(undefined (*) [16])(param_3 + 0x73020) >> 0x40,0);
        uStack265240 = *(undefined8 *)(param_3 + 0x73010);
        uStack265232 = *(undefined8 *)(param_3 + 0x73018);
        uStack265208 = *(undefined4 *)(param_3 + 0x73030);
      }
      if (*(char *)(param_3 + 0xc2) != '\0') {
        uStack265188 = SUB168(*(undefined (*) [16])(param_3 + 0x73044),0);
        uStack265180 = SUB168(*(undefined (*) [16])(param_3 + 0x73044) >> 0x40,0);
        uStack265204 = *(undefined8 *)(param_3 + 0x73034);
        uStack265196 = *(undefined8 *)(param_3 + 0x7303c);
        uStack265172 = *(undefined4 *)(param_3 + 0x73054);
      }
      if (*(char *)(param_3 + 0xbe) != '\0') {
        uStack265168 = *(undefined4 *)(param_3 + 0x72fc4);
      }
      if (*(char *)(param_3 + 0xc5) != '\0') {
        uStack265164 = *(undefined4 *)(param_3 + 0x76bf0);
      }
      if (*(char *)(param_3 + 0x38) != '\0') {
        uStack265152 = *(undefined4 *)(param_3 + 0x7475c);
        uStack265160 = *(undefined8 *)(param_3 + 0x74754);
      }
      if (*(char *)(param_3 + 0x74) != '\0') {
        uStack265148 = SUB168(*(undefined (*) [16])(param_3 + 0xc5d4),0);
        uStack265140 = SUB168(*(undefined (*) [16])(param_3 + 0xc5d4) >> 0x40,0);
        uStack265132 = *(undefined4 *)(param_3 + 0xc5e4);
      }
      if (*(char *)(param_3 + 0xd0) != '\0') {
        uStack265096 = SUB168(*(undefined (*) [16])(param_3 + 0x76c48),0);
        uStack265088 = SUB168(*(undefined (*) [16])(param_3 + 0x76c48) >> 0x40,0);
        uStack265112 = *(undefined8 *)(param_3 + 0x76c38);
        uStack265104 = *(undefined8 *)(param_3 + 0x76c40);
        uStack265128 = *(undefined8 *)(param_3 + 0x76c28);
        uStack265120 = *(undefined8 *)(param_3 + 0x76c30);
      }
    }
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265320,0x800d0001,(uint)&uStack265312,0xf0,(uint)*ppiVar25);
  if ((*pmVar23 != (metadata_buffer_t)0x0) && (in_stack_00000018 != 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::clear
              ((CameraMetadata *)(uint *)((int)param_1 + 0x1178fc));
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)(uint *)((int)param_1 + 0x1178fc),aCStack265320);
  }
LAB_0004340e:
  uVar12 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack265320);
  piVar16 = piStack265340;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack265320);
  if (*piVar16 == iStack44) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

