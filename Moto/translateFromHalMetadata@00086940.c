
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::translateFromHalMetadata(metadata_buffer_t*, long long, int,
   android::hardware::camera::common::V1_0::helper::CameraMetadata const&, unsigned char, unsigned
   char, bool, unsigned char, bool) */

undefined4
qcamera::QCamera3HardwareInterface::translateFromHalMetadata
          (metadata_buffer_t *param_1,longlong param_2,int param_3,CameraMetadata *param_4,
          uchar param_5,uchar param_6,bool param_7,uchar param_8,bool param_9)

{
  uchar uVar1;
  undefined uVar2;
  byte bVar3;
  undefined auVar4 [16];
  CameraMetadata *this;
  QCamera3CropRegionMapper *this_00;
  String8 SVar5;
  undefined uVar6;
  undefined uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  undefined8 *__dest;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  double *pdVar18;
  undefined *puVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  void *pvVar23;
  undefined4 *puVar24;
  uchar *puVar25;
  size_t sVar26;
  float *pfVar27;
  int *piVar28;
  longlong *plVar29;
  uint *puVar30;
  uchar *puVar31;
  metadata_buffer_t *this_01;
  undefined (*pauVar32) [16];
  uint uVar33;
  uint uVar34;
  undefined2 uVar35;
  float fVar36;
  double dVar37;
  undefined auVar38 [16];
  double dVar39;
  double dVar40;
  undefined3 in_stack_00000009;
  undefined3 in_stack_0000000d;
  undefined3 in_stack_00000011;
  undefined3 in_stack_00000015;
  uint in_stack_00000018;
  double adStack265496 [2];
  int iStack265460;
  int iStack265456;
  int iStack265452;
  metadata_buffer_t *pmStack265448;
  longlong *plStack265444;
  uint uStack265440;
  undefined4 *puStack265436;
  int *piStack265432;
  BSTBokehParam *pBStack265428;
  undefined4 *puStack265424;
  int iStack265420;
  uint *puStack265416;
  metadata_buffer_t *pmStack265412;
  metadata_buffer_t *pmStack265408;
  undefined (*pauStack265404) [16];
  uchar uStack265396;
  uchar uStack265395;
  uchar uStack265394;
  uchar uStack265393;
  CameraMetadata *pCStack265392;
  uint uStack265388;
  CameraMetadata aCStack265384 [8];
  undefined8 uStack265376;
  float fStack265368;
  int iStack265364;
  undefined8 uStack265360;
  undefined8 uStack265352;
  undefined4 uStack265344;
  undefined4 uStack265340;
  undefined4 uStack265336;
  undefined4 uStack265332;
  undefined4 uStack265328;
  undefined4 uStack265324;
  undefined4 uStack265320;
  undefined4 uStack265316;
  undefined4 uStack265312;
  undefined4 uStack265308;
  undefined8 uStack265304;
  undefined8 uStack265296;
  undefined8 uStack265288;
  undefined8 uStack265280;
  undefined4 uStack265272;
  undefined8 uStack265268;
  undefined8 uStack265260;
  undefined8 uStack265252;
  undefined8 uStack265244;
  undefined4 uStack265236;
  undefined4 uStack265232;
  undefined4 uStack265228;
  undefined8 uStack265224;
  undefined4 uStack265216;
  undefined8 uStack265212;
  undefined8 uStack265204;
  undefined4 uStack265196;
  undefined8 uStack265192;
  undefined8 uStack265184;
  undefined8 uStack265176;
  undefined8 uStack265168;
  undefined8 uStack265160;
  undefined8 uStack265152;
  undefined auStack264352 [1024];
  undefined auStack263328 [260136];
  undefined8 local_c78;
  undefined8 uStack3184;
  undefined8 local_c68;
  undefined8 uStack3168;
  undefined4 local_c58;
  undefined4 local_c54;
  undefined4 local_870;
  undefined auStack2156 [4];
  undefined4 local_868 [256];
  undefined8 local_468;
  int local_460 [256];
  uchar local_5e [20];
  uchar local_4a [10];
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  int local_34;
  
  uStack265388 = (uint)param_5;
  uStack265393 = param_6;
  uStack265394 = param_7;
  piVar28 = *(int **)(DAT_00086ba8 + 0x86984);
  local_34 = *piVar28;
  pCStack265392 = param_4;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack265384);
  pmStack265408 = param_1 + 0x117f20;
  pBStack265428 = (BSTBokehParam *)BSTBokehParam::createInstance();
  this = param_2._4_4_;
  if ((param_1[0x117f20] != (metadata_buffer_t)0x0) && (in_stack_00000018 == 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::clear(aCStack265384);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              (aCStack265384,(CameraMetadata *)(param_1 + 0x117fc4));
  }
  iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::entryCount(this);
  if (iVar8 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::append(aCStack265384,this);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0xe0010,(longlong *)&pCStack265392,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0xc0001,(int *)&param_2,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0xc0009,&uStack265393,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0x1000d,&uStack265394,1);
  uStack265395 = (uchar)_param_8;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0x801a0001,&uStack265395,1);
  if ((*pmStack265408 != (metadata_buffer_t)0x0) && (in_stack_00000018 == 0)) goto LAB_00088faa;
  piStack265432 = piVar28;
  pmStack265412 = param_1;
  if (param_3 == 0) {
LAB_00086ea4:
    uStack265376._0_1_ = (String8)0x0;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x10011,(uchar *)&uStack265376,1);
    if (*(int *)(*(int *)(DAT_00086ecc + 0x86ec6) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00086ef0 + 0x86ee6,0x19dd);
    }
    if (param_3 != 0) goto LAB_00086efc;
  }
  else {
    if (*(char *)(param_3 + 0x6f) != '\0') {
      uVar9 = *(undefined4 *)(param_3 + 0xc584);
      uStack265376._0_1_ = SUB41(uVar9,0);
      uStack265376._1_1_ = (undefined)((uint)uVar9 >> 8);
      uStack265376._2_1_ = (undefined)((uint)uVar9 >> 0x10);
      uStack265376._3_1_ = (undefined)((uint)uVar9 >> 0x18);
      uStack265376._4_4_ = (int *)0x0;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x170000,&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x71) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x801a0000,(int *)(param_3 + 0xc58c),1);
    }
    if (*(char *)(param_3 + 10) != '\0') {
      fVar36 = ROUND(*(float *)("No Advanced Capture feature enabled!" + param_3 + 0x1a));
      uStack265376._0_1_ = SUB41(fVar36,0);
      uStack265376._1_1_ = (undefined)((uint)fVar36 >> 8);
      uStack265376._2_1_ = (undefined)((uint)fVar36 >> 0x10);
      uStack265376._3_1_ = (undefined)((uint)fVar36 >> 0x18);
      uStack265376._4_4_ =
           (int *)ROUND(*(float *)("No Advanced Capture feature enabled!" + param_3 + 0x1e));
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x10005,(int *)&uStack265376,2);
      if (*(int *)(*(int *)(DAT_00086bac + 0x86b1a) + 0x2c) != 0) {
        adStack265496[1] =
             (double)CONCAT44(CONCAT13(uStack265376._3_1_,
                                       CONCAT12(uStack265376._2_1_,
                                                CONCAT11(uStack265376._1_1_,uStack265376._0_1_))),
                              DAT_00086bb0 + 0x86b2e);
        mm_camera_debug_log(1,4,DAT_00086bb4 + 0x86b3c,0x1979);
      }
    }
    if (*(char *)(param_3 + 7) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x10001,
                 (int *)("No Advanced Capture feature enabled!" + param_3 + 10),1);
    }
    if (*(char *)(param_3 + 0xd) != '\0') {
      uVar10 = *(uint *)("Failed to queue CREATE_JPEG_SESSION" + param_3 + 9);
      if ((uVar10 < 0x15) && ((0x1bf6fdU >> (uVar10 & 0xff) & 1) != 0)) {
        uStack265376._0_1_ =
             SUB41(*(undefined4 *)
                    (*(int *)(DAT_00086e80 + 0x86bd8) +
                    *(int *)(DAT_00086e7c + 0x86bd0 + uVar10 * 4) * 8),0);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265384,0x10010,(uchar *)&uStack265376,1);
        if (*(int *)(*(int *)(DAT_00086e84 + 0x86bf4) + 0x2c) != 0) {
          uVar20 = 0x1988;
          uVar9 = 4;
          iVar8 = DAT_00086e8c + 0x86c14;
LAB_00086c12:
          mm_camera_debug_log(1,uVar9,iVar8,uVar20);
        }
      }
      else if (*(int *)(*(int *)(DAT_00086bb8 + 0x86b8c) + 0x28) != 0) {
        uVar9 = 3;
        uVar20 = 0x18f5;
        iVar8 = (int)&DAT_00086ba8 + DAT_00086bc0;
        goto LAB_00086c12;
      }
    }
    if (*(char *)(param_3 + 9) != '\0') {
      uStack265376._0_1_ =
           SUB41(*(undefined4 *)("No Advanced Capture feature enabled!" + param_3 + 0x16),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x10002,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0xb) != '\0') {
      uStack265376._0_1_ =
           SUB41(*(undefined4 *)("Failed to queue CREATE_JPEG_SESSION" + param_3 + 5),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x1000a,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x6a) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc590),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x7e) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x30000,(uchar *)(param_3 + 0xc6a4),1);
    }
    if (*(char *)(param_3 + 0x80) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc6ac),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x40000,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x81) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"meraChannelC2Ev",(longlong *)(param_3 + 0xc6b0),1);
    }
    if ((*(char *)(param_3 + 0x82) != '\0') && (-1 < (int)*(uint *)(param_3 + 0xc6bc))) {
      uVar14 = (uint)*(byte *)(*(int *)(*(int *)(DAT_00086e90 + 0x86d0a) +
                                       *(int *)(pmStack265412 + 0x60) * 4) + 0x3831);
      uVar10 = *(uint *)(param_3 + 0xc6bc);
      if (uVar14 == 0) {
        uVar10 = uVar14;
      }
      uStack265376._0_1_ = SUB41(uVar10,0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"ChannelC2Ev",(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x9e) != '\0') {
      iVar8 = *(int *)(param_3 + 0xc6b8);
      if (iVar8 != 0) {
        if (iVar8 == 3) {
          iVar8 = 2;
        }
        else {
          if (iVar8 != 4) {
            if (*(int *)(*(int *)(DAT_00087b50 + 0x87b1c) + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_00087b58 + 0x87b3a,0x18f5);
            }
            goto LAB_00086d6c;
          }
          iVar8 = 1;
        }
      }
      uStack265376._0_1_ = SUB41(*(undefined4 *)(*(int *)(DAT_00086e94 + 0x86d5a) + iVar8 * 8),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"eraChannelC2Ev",(uchar *)&uStack265376,1);
    }
LAB_00086d6c:
    if (*(char *)(param_3 + 0x85) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc6c0),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x60000,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x86) != '\0') {
      pfVar17 = (float *)(param_3 + 0xc6c4);
      fVar36 = (float)FPRoundInt(*pfVar17 * 10.0,0x20,2,0);
      *pfVar17 = fVar36 / 10.0;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x80000,pfVar17,1);
    }
    if (*(char *)(param_3 + 0x87) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x80001,(float *)(param_3 + 0xc6c8),1);
    }
    if (*(char *)(param_3 + 0x88) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x80002,(float *)(param_3 + 0xc6cc),1);
    }
    if (*(char *)(param_3 + 0x12) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc6e8),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x80004,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0xfb) == '\0') goto LAB_00086ea4;
    uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc6ec),0);
    if (*(int *)(*(int *)(DAT_00086e98 + 0x86e42) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00086ea0 + 0x86e60,0x19d6);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x10011,(uchar *)&uStack265376,1);
LAB_00086efc:
    if (*(char *)(param_3 + 0x8d) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc6f4),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xa0000,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0xea) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x180000,
                 (float *)("cache buffer %p at result frame_number %u" + param_3 + 0xb),1);
    }
    pcVar11 = (char *)(uint)*(byte *)(param_3 + 0xee);
    if (pcVar11 != (char *)0x0) {
      pcVar11 = "cache buffer %p at result frame_number %u" + param_3 + 0x17;
    }
    iVar8 = *(int *)(DAT_00086f64 + 0x86f56);
    if (*(int *)(iVar8 + 0x2c) != 0 && pcVar11 != (char *)0x0) {
      adStack265496[1] = (double)*(float *)(pcVar11 + 8);
      adStack265496[0] = (double)*(float *)(pcVar11 + 4);
      mm_camera_debug_log(1,4,DAT_00086fb8 + 0x86fae,0x19f0,DAT_00086fb4 + 0x86fa6);
    }
    if (*(char *)(param_3 + 0xef) != '\0') {
      uVar9 = *(undefined4 *)("cache buffer %p at result frame_number %u" + param_3 + 0x27);
      uStack265376._4_4_ = *(int **)("fail to switch to internal stream configration" + param_3 + 1)
      ;
      fStack265368 = *(float *)("fail to switch to internal stream configration" + param_3 + 5);
      iStack265364 = *(int *)("fail to switch to internal stream configration" + param_3 + 9);
      uStack265376._0_1_ = SUB41(uVar9,0);
      uStack265376._1_1_ = (undefined)((uint)uVar9 >> 8);
      uStack265376._2_1_ = (undefined)((uint)uVar9 >> 0x10);
      uStack265376._3_1_ = (undefined)((uint)uVar9 >> 0x18);
      if (*(int *)(iVar8 + 0x2c) != 0) {
        adStack265496[1] = (double)fStack265368;
        adStack265496[0] = (double)(float)uStack265376._4_4_;
        mm_camera_debug_log(1,4,DAT_00087358 + 0x87046,0x1a00,DAT_00087354 + 0x8703e);
      }
      uVar35 = 0x7067;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x800a0000,(float *)&uStack265376,4);
      auVar38 = ZEXT816(CONCAT44(CONCAT22(uVar35,uVar35),CONCAT22(uVar35,uVar35)));
      auVar38 = FloatVectorMult(CONCAT412(iStack265364,
                                          CONCAT48(fStack265368,
                                                   CONCAT44(uStack265376._4_4_,
                                                            CONCAT13(uStack265376._3_1_,
                                                                     CONCAT12(uStack265376._2_1_,
                                                                              CONCAT11(uStack265376.
                                                                                       _1_1_,
                                                  uStack265376._0_1_)))))),auVar38 & auVar38 << 0x40
                                ,2,0x20);
      uStack265376._0_1_ = SUB161(auVar38,0);
      uStack265376._1_1_ = SUB161(auVar38 >> 8,0);
      uStack265376._2_1_ = SUB161(auVar38 >> 0x10,0);
      uStack265376._3_1_ = SUB161(auVar38 >> 0x18,0);
      uStack265376._4_4_ = SUB164(auVar38 >> 0x20,0);
      fStack265368 = SUB164(auVar38 >> 0x40,0);
      iStack265364 = SUB164(auVar38 >> 0x60,0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe001c,(float *)&uStack265376,4);
    }
  }
  this_01 = pmStack265412;
  puStack265416 = (uint *)("No Advanced Capture feature enabled!" + param_3 + 6);
  puStack265436 = (undefined4 *)("cache buffer %p at result frame_number %u" + param_3 + 0xf);
  iStack265420 = *(int *)(DAT_0008735c + 0x870ae);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0xe001d,
             (int *)(*(int *)(iStack265420 + *(int *)(pmStack265412 + 0x60) * 4) + 0x3428),1);
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x8f) != '\0') {
      auVar38 = *(undefined (*) [16])(param_3 + 0xc6fc);
      uStack265376._0_1_ = SUB161(auVar38,0);
      uStack265376._1_1_ = SUB161(auVar38 >> 8,0);
      uStack265376._2_1_ = SUB161(auVar38 >> 0x10,0);
      uStack265376._3_1_ = SUB161(auVar38 >> 0x18,0);
      uStack265376._4_4_ = SUB164(auVar38 >> 0x20,0);
      fStack265368 = SUB164(auVar38 >> 0x40,0);
      iStack265364 = SUB164(auVar38 >> 0x60,0);
      QCamera3CropRegionMapper::toActiveArray
                ((QCamera3CropRegionMapper *)(this_01 + 0x117f88),(int *)&uStack265376,
                 (int *)((int)&uStack265376 + 4),(int *)&fStack265368,&iStack265364);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xd0000,(int *)&uStack265376,4);
    }
    if (*(char *)(param_3 + 0x91) != '\0') {
      if (*(int *)(*(int *)(DAT_00087360 + 0x87138) + 0x2c) != 0) {
        adStack265496[1] =
             (double)((ulonglong)adStack265496[1] & 0xffffffff00000000 |
                     (ulonglong)(DAT_00087364 + 0x87152));
        mm_camera_debug_log(1,4,DAT_00087368 + 0x8715a,0x1a26);
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe0000,(longlong *)(param_3 + 0xc710),1);
      if (*(int *)(this_01 + 0x60) == 0) {
        iVar8 = BSTBokehParam::getStereoMode(pBStack265428);
        if (iVar8 != 0) {
          BSTBokehParam::setExpTimeVal(pBStack265428,*(uint *)(longlong *)(param_3 + 0xc710));
        }
      }
    }
    plVar29 = (longlong *)(param_3 + 0xc730);
    if (*(char *)(param_3 + 0x92) != '\0') {
      if (*(int *)(*(int *)(DAT_0008736c + 0x8719a) + 0x2c) != 0) {
        adStack265496[1] =
             (double)((ulonglong)adStack265496[1] & 0xffffffff00000000 |
                     (ulonglong)(DAT_00087370 + 0x871b4));
        mm_camera_debug_log(1,4,DAT_00087374 + 0x871bc,0x1a31);
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe0001,(longlong *)(param_3 + 0xc718),1);
    }
    if (*(char *)(param_3 + 0x95) != '\0') {
      if (*(int *)(*(int *)(DAT_00087378 + 0x871de) + 0x2c) != 0) {
        adStack265496[1] =
             (double)((ulonglong)adStack265496[1] & 0xffffffff00000000 |
                     (ulonglong)(DAT_0008737c + 0x871f8));
        mm_camera_debug_log(1,4,DAT_00087380 + 0x87200,0x1a37);
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe001a,plVar29,1);
    }
    if (*(char *)(param_3 + 0x93) != '\0') {
      puVar30 = (uint *)(param_3 + 0xc720);
      iVar8 = *(int *)(DAT_00087384 + 0x87232);
      plStack265444 = plVar29;
      if (*(int *)(iVar8 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008738c + 0x87256,0x1a3d);
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe0002,(int *)puVar30,1);
      if (*(int *)(pmStack265412 + 0x60) == 0) {
        iVar12 = BSTBokehParam::getStereoMode(pBStack265428);
        if (iVar12 != 0) {
          BSTBokehParam::setIsoVal(pBStack265428,*puVar30);
        }
      }
      this_01 = pmStack265412;
      iVar15 = *(int *)(iStack265420 + *(int *)(pmStack265412 + 0x60) * 4);
      uVar10 = (uint)*(byte *)(iVar15 + 0x33e4);
      dVar39 = (double)(longlong)(int)*puVar30;
      iVar12 = uVar10 * -0x10;
      dVar40 = dVar39 / (double)(longlong)*(int *)(iVar15 + 0x36ac);
      dVar37 = SUB168(*(undefined (*) [16])(iVar15 + 0x33f0),0) +
               *(double *)(iVar15 + 0x33e8) * dVar39;
      dVar40 = (double)((ulonglong)(dVar40 != 1.0) * 0x3ff0000000000000 +
                       (ulonglong)(dVar40 == 1.0) * (longlong)dVar40);
      iVar16 = *(int *)(iStack265420 + *(int *)(pmStack265412 + 0x60) * 4);
      if ((int)((uint)(dVar37 < 0.0) << 0x1f) < 0) {
        dVar37 = 0.0;
      }
      dVar39 = dVar40 * *(double *)(iVar15 + 0x3400) * dVar40 +
               SUB168(*(undefined (*) [16])(iVar15 + 0x33f0) >> 0x40,0) * dVar39 * dVar39;
      if ((int)((uint)(dVar39 < 0.0) << 0x1f) < 0) {
        dVar39 = 0.0;
      }
      if (*(char *)(iVar16 + 0x33e4) == '\0') {
        uVar14 = 0;
      }
      else {
        pdVar18 = (double *)(&stack0xfffbf308 + iVar12);
        uVar21 = 0;
        do {
          pdVar18[-1] = dVar37;
          *pdVar18 = dVar39;
          pdVar18 = pdVar18 + 2;
          uVar21 = uVar21 + 2;
          uVar14 = (uint)*(byte *)(iVar16 + 0x33e4);
        } while (uVar21 < uVar14 << 1);
      }
      if (*(int *)(iVar8 + 0x2c) != 0) {
        adStack265496[uVar10 * -2 + 1] = dVar37;
        *(double *)(&stack0xfffbf2f8 + iVar12) = dVar39;
        *(int *)(adStack265496 + uVar10 * -2) = DAT_000873dc + 0x873be;
        mm_camera_debug_log(1,4,DAT_000873e0 + 0x873c6,0x1a4d);
        uVar14 = (uint)*(byte *)(*(int *)(iStack265420 + *(int *)(this_01 + 0x60) * 4) + 0x33e4);
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe0013,(double *)(&stack0xfffbf300 + iVar12),uVar14 << 1);
      plVar29 = plStack265444;
    }
    if (*(char *)(param_3 + 0xfe) != '\0') {
      uVar9 = *(undefined4 *)(param_3 + 0xc724);
      uStack265376._0_1_ = SUB41(uVar9,0);
      uStack265376._1_1_ = (undefined)((uint)uVar9 >> 8);
      uStack265376._2_1_ = (undefined)((uint)uVar9 >> 0x10);
      uStack265376._3_1_ = (undefined)((uint)uVar9 >> 0x18);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x10028,(int *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x96) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 51000),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x100000,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x98) != '\0') {
      if (*(uint *)(param_3 + 0xc73c) < 3) {
        uStack265396 = (uchar)*(undefined4 *)
                               (*(int *)(DAT_00087490 + 0x8746e) + *(uint *)(param_3 + 0xc73c) * 8);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265384,(uint)QCamera3StreamMem::getSize,&uStack265396,1);
        if ((uStack265396 != '\0') && (*(char *)(param_3 + 0x11) != '\0')) {
          puStack265424 = (undefined4 *)(param_3 + 0x1128);
          pauStack265404 = (undefined (*) [16])(uint)*(byte *)(param_3 + 0x112c);
          if ((undefined (*) [16])0x9 < pauStack265404) {
            pauStack265404 = (undefined (*) [16])0xa;
          }
          plStack265444 = plVar29;
          if (pauStack265404 == (undefined (*) [16])0x0) {
LAB_000875a2:
            local_c78 = 0;
            uStack3184 = 0;
            local_38 = 0;
            local_c54 = 0;
            local_c58 = 0;
            local_40 = 0;
            local_3c = 0;
            local_c68 = 0;
            uStack3168 = 0;
            __aeabi_memclr8(&local_468,0xa0);
            __aeabi_memclr8(&uStack265376,0xf0);
          }
          else {
            pauVar32 = (undefined (*) [16])0x0;
            puVar24 = (undefined4 *)(param_3 + 0x1130);
            piVar28 = local_460;
            iVar8 = *(int *)(DAT_000874ec + 0x874e8);
            do {
              *(undefined4 *)((int)&local_c78 + (int)pauVar32 * 4) = *puVar24;
              *(undefined *)((int)&local_40 + (int)pauVar32) = *(undefined *)(puVar24 + 1);
              QCamera3CropRegionMapper::toActiveArray
                        ((QCamera3CropRegionMapper *)(this_01 + 0x117f88),puVar24 + 2,puVar24 + 3,
                         puVar24 + 4,puVar24 + 5);
              iVar12 = puVar24[2];
              iVar15 = puVar24[3];
              iVar16 = puVar24[4];
              iVar22 = puVar24[5];
              piVar28[-2] = iVar12;
              piVar28[-1] = iVar15;
              *piVar28 = iVar16 + iVar12;
              piVar28[1] = iVar22 + iVar15;
              if (*(int *)(iVar8 + 0x30) != 0) {
                adStack265496[0] = (double)CONCAT44(iVar12,pauVar32);
                adStack265496[1] = (double)CONCAT44(*piVar28,piVar28[-1]);
                mm_camera_debug_log(1,5,DAT_0008757c + 0x87570,0x1a83,DAT_00087578 + 0x87554);
              }
              puVar24 = puVar24 + 6;
              piVar28 = piVar28 + 4;
              pauVar32 = (undefined (*) [16])(*pauVar32 + 1);
            } while (pauVar32 < pauStack265404);
            this_01 = pmStack265412;
            if (pauStack265404 == (undefined (*) [16])0x0) goto LAB_000875a2;
          }
          pauVar32 = pauStack265404;
          android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                    (aCStack265384,0x110007,(uchar *)&local_40,(uint)pauStack265404);
          android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                    (aCStack265384,0x110006,(int *)&local_468,((uint)pauVar32 & 0x3f) << 2);
          android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                    (aCStack265384,0x110004,(int *)&local_c78,(uint)pauVar32);
          iStack265460 = param_3;
          if (uStack265396 == '\x02') {
            uVar14 = (uint)*(byte *)(param_3 + 0xf9);
            uVar10 = uVar14;
            if (uVar14 != 0) {
              uVar10 = param_3 + 0x137c;
            }
            uStack265440 = uVar10;
            if (pauStack265404 != (undefined (*) [16])0x0 && uVar14 != 0) {
              iVar8 = 0;
              pauVar32 = (undefined (*) [16])0x0;
              pmStack265448 = pmStack265412 + 0x117f88;
              iStack265452 = *(int *)(DAT_00087a14 + 0x8768c);
              iStack265456 = DAT_00087a18 + 0x87698;
              do {
                this_00 = (QCamera3CropRegionMapper *)pmStack265448;
                puVar30 = (uint *)(uVar10 + iVar8);
                QCamera3CropRegionMapper::toActiveArray
                          ((QCamera3CropRegionMapper *)pmStack265448,puVar30,puVar30 + 1);
                QCamera3CropRegionMapper::toActiveArray(this_00,puVar30 + 2,puVar30 + 3);
                QCamera3CropRegionMapper::toActiveArray(this_00,puVar30 + 4,puVar30 + 5);
                uVar33 = puVar30[1];
                uVar34 = puVar30[2];
                uVar9 = puVar30[3];
                uVar21 = puVar30[4];
                dVar37 = *(double *)(puVar30 + 3);
                uVar14 = puVar30[5];
                *(undefined4 *)((int)&uStack265376 + iVar8) = *(undefined4 *)(uVar10 + iVar8);
                *(uint *)((int)&uStack265376 + iVar8 + 4) = uVar33;
                *(uint *)((int)&fStack265368 + iVar8) = uVar34;
                *(undefined4 *)((int)&iStack265364 + iVar8) = uVar9;
                *(uint *)((int)&uStack265360 + iVar8) = uVar21;
                *(uint *)((int)&uStack265360 + iVar8 + 4) = uVar14;
                if (*(int *)(iStack265452 + 0x30) != 0) {
                  adStack265496[0] =
                       (double)CONCAT44(uVar34,*(undefined4 *)((int)&uStack265376 + iVar8 + 4));
                  adStack265496[1] = dVar37;
                  mm_camera_debug_log(1,5,DAT_00087a1c + 0x87716,0x1ab3,iStack265456,*puStack265424,
                                      pauVar32);
                }
                iVar8 = iVar8 + 0x18;
                pauVar32 = (undefined (*) [16])(*pauVar32 + 1);
              } while (pauVar32 < pauStack265404);
            }
            pauVar32 = pauStack265404;
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x110004,(int *)&local_c78,(uint)pauStack265404);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x110005,(int *)&uStack265376,(int)pauVar32 * 6);
            this_01 = pmStack265412;
          }
          param_3 = iStack265460;
          if (*(char *)(iStack265460 + 0xf6) != '\0') {
            if (pauStack265404 != (undefined (*) [16])0x0) {
              pauVar32 = (undefined (*) [16])0x0;
              iVar12 = iStack265460 + 0x1281;
              iVar8 = *(int *)(DAT_00087a20 + 0x8778e);
              uVar10 = DAT_00087a24 + 0x87796;
              uStack265440 = uVar10;
              do {
                iVar15 = (int)pauVar32 * 3;
                uVar1 = *(uchar *)(param_3 + iVar15 + 0x1280);
                local_5e[(int)pauVar32] = uVar1;
                auStack2156[(int)pauVar32 * 2 + -4] = *(undefined *)(iVar12 + iVar15);
                auStack2156[(int)pauVar32 * 2 + -3] = *(undefined *)(iVar15 + iVar12 + 1);
                if (*(int *)(iVar8 + 0x30) != 0) {
                  adStack265496[0] = (double)CONCAT44(*puStack265424,uVar10);
                  adStack265496[1] = (double)(ulonglong)CONCAT14(uVar1,pauVar32);
                  mm_camera_debug_log(1,5,DAT_00087a28 + 0x877e8,0x1acb);
                }
                pauVar32 = (undefined (*) [16])(*pauVar32 + 1);
              } while (pauVar32 < pauStack265404);
            }
            pauVar32 = pauStack265404;
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x80110005,local_5e,(uint)pauStack265404);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x80110006,(uchar *)&local_870,((uint)pauVar32 & 0x7f) << 1);
            this_01 = pmStack265412;
          }
          if (*(char *)(param_3 + 0xf8) != '\0') {
            if (pauStack265404 != (undefined (*) [16])0x0) {
              pauVar32 = (undefined (*) [16])0x0;
              iVar12 = *(int *)(DAT_00087a2c + 0x87860);
              uStack265440 = DAT_00087a30 + 0x87868;
              iVar8 = DAT_00087a34 + 0x8786e;
              do {
                uVar2 = *(undefined *)(param_3 + 0x1368 + (int)pauVar32 * 2);
                *(undefined *)((int)&local_870 + (int)pauVar32) = uVar2;
                local_5e[(int)pauVar32] = *(uchar *)(param_3 + 0x1369 + (int)pauVar32 * 2);
                if (*(int *)(iVar12 + 0x30) != 0) {
                  adStack265496[0] = (double)CONCAT44(*puStack265424,uStack265440);
                  adStack265496[1] = (double)(ulonglong)CONCAT14(uVar2,pauVar32);
                  mm_camera_debug_log(1,5,iVar8,0x1ade);
                }
                pauVar32 = (undefined (*) [16])(*pauVar32 + 1);
              } while (pauVar32 < pauStack265404);
            }
            pauVar32 = pauStack265404;
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x80110007,(uchar *)&local_870,(uint)pauStack265404);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x80110008,local_5e,(uint)pauVar32);
            this_01 = pmStack265412;
          }
          plVar29 = plStack265444;
          if (*(char *)(param_3 + 0xf7) != '\0') {
            if (pauStack265404 != (undefined (*) [16])0x0) {
              pauVar32 = (undefined (*) [16])0x0;
              puVar31 = local_5e + 1;
              puVar25 = (uchar *)(iStack265460 + 0x12a0);
              puVar24 = local_868;
              uStack265440 = *(uint *)(DAT_00087a38 + 0x87934);
              do {
                local_4a[(int)pauVar32] = *puVar25;
                uVar20 = *(undefined4 *)(puVar25 + 8);
                dVar37 = *(double *)(puVar25 + 4);
                uVar9 = *(undefined4 *)(puVar25 + 0xc);
                puVar24[-2] = *(undefined4 *)(puVar25 + 4);
                puVar24[-1] = uVar20;
                *puVar24 = uVar9;
                uVar1 = puVar25[0x10];
                puVar31[-1] = uVar1;
                iVar8 = *(int *)(uStack265440 + 0x30);
                *puVar31 = puVar25[0x11];
                if (iVar8 != 0) {
                  adStack265496[1] = (double)CONCAT44((int)(char)uVar1,uVar9);
                  adStack265496[0] = dVar37;
                  mm_camera_debug_log(1,5,DAT_00087a40 + 0x8799a,0x1afa,DAT_00087a3c + 0x8797e,
                                      *puStack265424,pauVar32);
                }
                puVar25 = puVar25 + 0x14;
                puVar24 = puVar24 + 3;
                pauVar32 = (undefined (*) [16])(*pauVar32 + 1);
                puVar31 = puVar31 + 2;
              } while (pauVar32 < pauStack265404);
            }
            pauVar32 = pauStack265404;
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x80110009,local_4a,(uint)pauStack265404);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x8011000a,&local_870,(int)pauVar32 * 3);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (aCStack265384,0x8011000b,local_5e,((uint)pauVar32 & 0x7f) << 1);
            plVar29 = plStack265444;
            this_01 = pmStack265412;
            param_3 = iStack265460;
          }
        }
      }
      else if (*(int *)(*(int *)(DAT_00087b44 + 0x87a4a) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_00087b4c + 0x87a64,0x18f5);
      }
    }
    if (*(char *)(param_3 + 0x99) != '\0') {
      local_5e[0] = (uchar)*(undefined4 *)(param_3 + 0xc740);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x110001,local_5e,1);
      if ((local_5e[0] != '\x01') || (*(char *)(param_3 + 0x10) == '\0')) goto LAB_00087bec;
      __aeabi_memclr8(&local_468,0x404);
      __aeabi_memclr8(&local_870,0x404);
      __aeabi_memclr8(&local_c78,0x404);
      if (*(int *)(param_3 + 0x110) == 1) {
        pvVar23 = (void *)(param_3 + 0x114);
        goto LAB_00087b5e;
      }
      if (*(int *)(param_3 + 0x110) == 0) {
        switch(*(undefined4 *)(param_3 + 0x114)) {
        case 1:
          pvVar23 = (void *)(param_3 + 0x920);
          break;
        case 2:
          pvVar23 = (void *)(param_3 + 0xd24);
          break;
        default:
          pvVar23 = (void *)(param_3 + 0x118);
          break;
        case 4:
          pvVar23 = (void *)(param_3 + 0x51c);
          break;
        case 5:
          __aeabi_memcpy8(&local_468,(void *)(param_3 + 0x118),0x404);
          __aeabi_memcpy8(&local_870,(void *)(param_3 + 0xd24),0x404);
          pvVar23 = (void *)(param_3 + 0x51c);
          __dest = &local_c78;
          goto LAB_00087b8c;
        }
LAB_00087b5e:
        __aeabi_memcpy8(&local_c78,pvVar23,0x404);
        __aeabi_memcpy8(&local_870,pvVar23,0x404);
        __dest = &local_468;
LAB_00087b8c:
        __aeabi_memcpy8(__dest,pvVar23,0x404);
      }
      __aeabi_memcpy8(&uStack265376,(void *)((int)&local_468 + 4),0x400);
      __aeabi_memcpy8(auStack264352,auStack2156,0x400);
      __aeabi_memcpy8(auStack263328,(void *)((int)&local_c78 + 4),0x400);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x110008,(int *)&uStack265376,0xc00);
      this_01 = pmStack265412;
    }
LAB_00087bec:
    if (*(char *)(param_3 + 0x9a) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc744),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x110002,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x9b) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x110009,(int *)(param_3 + 0xc748),0x6c);
    }
    if (*(char *)(param_3 + 0x9f) != '\0') {
      iVar8 = *(int *)(iStack265420 + *(int *)(this_01 + 0x60) * 4);
      uVar10 = *(uint *)(iVar8 + 0x304c);
      if (0x10 < uVar10) {
        uVar10 = 0x11;
      }
      uVar14 = *(uint *)(iVar8 + 0x3050);
      if (0xc < uVar14) {
        uVar14 = 0xd;
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x11000b,(float *)(param_3 + 0xf8fc),uVar10 * uVar14 * 4);
    }
    if (*(char *)(param_3 + 0x9c) != '\0') {
      uStack265376._0_1_ =
           SUB41(*(undefined4 *)("putBufs invalid stream pointer" + param_3 + 0xc),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x130003,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x9d) != '\0') {
      uVar10 = *(uint *)(plVar29 + 0x39);
      if (0x200 < uVar10) {
        if (*(int *)(*(int *)(DAT_00087fd0 + 0x87cbc) + 0x20) != 0) {
          adStack265496[1] = (double)CONCAT44(uVar10,DAT_00087fd4 + 0x87cd0);
          mm_camera_debug_log(1,1,DAT_00087fd8 + 0x87cde,0x1b60);
        }
        uVar10 = 0x200;
        *(undefined4 *)(plVar29 + 0x39) = 0x200;
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x130001,(float *)(param_3 + 0xc8fc),uVar10 << 1);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x130000,(float *)(param_3 + 0xd8fc),*(int *)(plVar29 + 0x39) << 1);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x130002,(float *)(param_3 + 0xe8fc),*(int *)(plVar29 + 0x39) << 1);
    }
    if (*(char *)(param_3 + 0x6c) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,2,(float *)(param_3 + 0xc5dc),4);
    }
    if (*(char *)(param_3 + 0x6b) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,1,(camera_metadata_rational *)(param_3 + 0xc594),9);
    }
    if (*(char *)(param_3 + 0xaf) != '\0') {
      uVar10 = puStack265416[0x30a];
      if (0x200 < uVar10) {
        if (*(int *)(*(int *)(DAT_00087fdc + 0x87d7e) + 0x20) != 0) {
          adStack265496[1] = (double)CONCAT44(uVar10,DAT_00087fe0 + 0x87d92);
          mm_camera_debug_log(1,1,DAT_00087fe4 + 0x87da0,0x1b83);
        }
        uVar10 = 0x200;
        puStack265416[0x30a] = 0x200;
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe0015,
                 (float *)("metadata channel already initialized" + param_3 + 0x1e),uVar10 << 1);
    }
    if (*(char *)(param_3 + 0x6e) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)&LAB_0011000c,(float *)(param_3 + 0xc634),4);
    }
    if (*(char *)(param_3 + 0x6d) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x11000d,(camera_metadata_rational *)(param_3 + 0xc5ec),9);
    }
    if (*(char *)(param_3 + 0xd5) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0xe0016,
                 (float *)("release output buffers of previous reprocess channel" + param_3 + 7),1);
    }
    if (*(char *)(param_3 + 0x7b) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc69c),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x160000,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0x90) != '\0') {
      uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc70c),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x11000e,(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0xc) != '\0') {
      if (*(uint *)("Found buffer %p for Frame %d, numPendingBufsAtFlush = %d" + param_3 + 0x34) < 9
         ) {
        uStack265376._0_1_ =
             SUB41(*(undefined4 *)
                    (*(int *)(DAT_00087fe8 + 0x87e9e) +
                    *(uint *)("Found buffer %p for Frame %d, numPendingBufsAtFlush = %d" +
                             param_3 + 0x34) * 8),0);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265384,0x1000e,(uchar *)&uStack265376,1);
      }
      else if (*(int *)(*(int *)(DAT_00087fec + 0x87ebe) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_00087ff4 + 0x87ed8,0x18f5);
      }
    }
    if (*(char *)(param_3 + 0xae) != '\0') {
      uVar10 = puStack265416[0x305];
      if (uVar10 < 5) {
LAB_00087ef0:
        local_468._0_4_ = *(undefined4 *)(*(int *)(DAT_00087ff8 + 0x87f00) + uVar10 * 8);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265384,0xe0018,(int *)&local_468,1);
      }
      else {
        if (uVar10 == 0x100) {
          uVar10 = 5;
          goto LAB_00087ef0;
        }
        if (*(int *)(*(int *)(DAT_00087ffc + 0x87fa8) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_00088004 + 0x87fc2,0x18f5);
        }
        local_468._0_4_ = 0xfffffffe;
      }
      if (puStack265416[0x305] == 1) {
        uVar9 = *(undefined4 *)("metadata channel already initialized" + param_3 + 10);
        uStack265376._0_1_ = SUB41(uVar9,0);
        uStack265376._1_1_ = (undefined)((uint)uVar9 >> 8);
        uStack265376._2_1_ = (undefined)((uint)uVar9 >> 0x10);
        uStack265376._3_1_ = (undefined)((uint)uVar9 >> 0x18);
        iStack265364 = *(int *)("metadata channel already initialized" + param_3 + 0x16);
        uVar10 = *(uint *)(*(int *)(iStack265420 + *(int *)(this_01 + 0x60) * 4) + 0x33e0);
        if (uVar10 - 2 < 2) {
          fStack265368 = *(float *)("metadata channel already initialized" + param_3 + 0xe);
          uStack265376._4_4_ = *(int **)("metadata channel already initialized" + param_3 + 0x12);
        }
        else if (uVar10 < 2) {
          uStack265376._4_4_ = *(int **)("metadata channel already initialized" + param_3 + 0xe);
          fStack265368 = *(float *)("metadata channel already initialized" + param_3 + 0x12);
        }
        else if (*(int *)(*(int *)(DAT_00088294 + 0x8800e) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0008829c + 0x8802a,0x1bc9);
        }
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265384,0xe0017,(int *)&uStack265376,4);
      }
    }
    if (*(char *)(param_3 + 0xa7) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x70000,(double *)("handleBatchBuffer" + param_3 + 0xe),3);
    }
    if (*(char *)(param_3 + 0xa8) != '\0') {
      android::String8::String8
                ((String8 *)&uStack265376,"malloc failed. Buffers will be dropped" + param_3 + 0x14)
      ;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"ening %d min=%d def=%d\n",(String8 *)&uStack265376);
      android::String8::_String8((String8 *)&uStack265376);
    }
    if (*(char *)(param_3 + 0xa9) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"ning %d min=%d def=%d\n",
                 (longlong *)("Invalid buffer/metadata in channel request" + param_3 + 0x15),1);
    }
    if (*(char *)(param_3 + 0xaa) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"ing %d min=%d def=%d\n",
                 (int *)("Invalid buffer/metadata in channel request" + param_3 + 0x1d),1);
    }
    if (*(char *)(param_3 + 0xab) != '\0') {
      uStack265376._0_1_ =
           SUB41(*(undefined4 *)("Invalid buffer/metadata in channel request" + param_3 + 0x21),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"ng %d min=%d def=%d\n",(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0xac) != '\0') {
      uStack265376._0_1_ =
           SUB41(*(undefined4 *)("Invalid buffer/metadata in channel request" + param_3 + 0x25),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)"g %d min=%d def=%d\n",(uchar *)&uStack265376,1);
    }
    if (*(char *)(param_3 + 0xad) != '\0') {
      uVar9 = *(undefined4 *)("Invalid buffer/metadata in channel request" + param_3 + 0x29);
      uStack265376._4_4_ = *(int **)("metadata channel already initialized" + param_3 + 2);
      uStack265376._0_1_ = SUB41(uVar9,0);
      uStack265376._1_1_ = (undefined)((uint)uVar9 >> 8);
      uStack265376._2_1_ = (undefined)((uint)uVar9 >> 0x10);
      uStack265376._3_1_ = (undefined)((uint)uVar9 >> 0x18);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,(uint)" %d min=%d def=%d\n",(int *)&uStack265376,2);
    }
    if (*(char *)(param_3 + 0xa0) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x80000000,
                 (int *)("Found buffer %p for Frame %d, numPendingBufsAtFlush = %d" + param_3 + 0x38
                        ),0x7e8);
    }
    if (*(char *)(param_3 + 0x1e) != '\0') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x80080000,
                 (int *)("/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq" + param_3 + 0xd),1
                );
    }
  }
  puVar24 = puStack265436;
  if ("Failed to Q new buffer to stream"[param_3 + 8] != '\0') {
    *(undefined4 *)("Failed to Q new buffer to stream" + param_3 + 0xc) = 6;
    uStack265376._4_4_ = (int *)puStack265436[0xd1];
    uStack265376._0_1_ = (String8)0x6;
    uStack265376._1_1_ = 0;
    uStack265376._2_1_ = 0;
    uStack265376._3_1_ = 0;
    iVar8 = *(int *)(DAT_000882a0 + 0x881c6);
    if (*(int *)(iVar8 + 0x2c) == 0) {
      fStack265368 = (float)puStack265436[0xd2];
LAB_000882d2:
      iStack265364 = puVar24[0xd3];
LAB_000882d8:
      uStack265360 = (ulonglong)(uint)puVar24[0xd4];
LAB_000882de:
      *(undefined4 *)("Couldn\'t initialize camera stream %d" + param_3 + 3) = 0;
      uStack265360 = uStack265360 & 0xffffffff;
    }
    else {
      mm_camera_debug_log(1,4,DAT_000882a8 + 0x881e6,0x1c0b);
      fStack265368 = (float)puVar24[0xd2];
      if (*(int *)(iVar8 + 0x2c) == 0) goto LAB_000882d2;
      mm_camera_debug_log(1,4,DAT_000882b0 + 0x8820e,0x1c10);
      iStack265364 = puVar24[0xd3];
      if (*(int *)(iVar8 + 0x2c) == 0) goto LAB_000882d8;
      mm_camera_debug_log(1,4,DAT_000882b8 + 0x88236,0x1c15);
      uStack265360 = CONCAT44(uStack265360._4_4_,puVar24[0xd4]);
      if (*(int *)(iVar8 + 0x2c) == 0) goto LAB_000882de;
      mm_camera_debug_log(1,4,DAT_000882c0 + 0x8825e,0x1c1a);
      iVar8 = *(int *)(iVar8 + 0x2c);
      *(undefined4 *)("Couldn\'t initialize camera stream %d" + param_3 + 3) = 0;
      uStack265360 = uStack265360 & 0xffffffff;
      if (iVar8 != 0) {
        mm_camera_debug_log(1,4,DAT_000882c8 + 0x8828e,0x1c20);
      }
    }
    uVar10 = puVar24[0xd1];
    if (0xffff < uVar10) {
      uVar10 = 0x10000;
    }
    __memcpy_chk(&uStack265352,"Couldn\'t initialize camera stream %d" + param_3 + 7,uVar10,
                 "aChannelC2Ev");
    pvVar23 = (void *)((int)&uStack265352 + uVar10);
    sVar26 = puVar24[0xd2];
    if (0xffff < sVar26) {
      sVar26 = 0x10000;
    }
    __aeabi_memcpy8(pvVar23,(void *)(param_3 + 0x872e8),sVar26);
    pvVar23 = (void *)((int)pvVar23 + sVar26);
    sVar26 = puVar24[0xd3];
    if (0xffff < sVar26) {
      sVar26 = 0x10000;
    }
    __aeabi_memcpy8(pvVar23,(void *)(param_3 + 0x972e8),sVar26);
    pvVar23 = (void *)(sVar26 + (int)pvVar23);
    sVar26 = 0x10000;
    if ((uint)puVar24[0xd4] < 0x10000) {
      sVar26 = puVar24[0xd4];
    }
    __aeabi_memcpy8(pvVar23,(void *)(param_3 + 0xa72e8),sVar26);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80040000,(int *)&uStack265376,
               (int)pvVar23 + (sVar26 - (int)&uStack265376) >> 2);
    this_01 = pmStack265412;
  }
  if (*(char *)(param_3 + 0xb0) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0xe0012,
               (camera_metadata_rational *)
               ("release output buffers of previous reprocess channel" + param_3 + 0x1f),3);
  }
  if (*(char *)(param_3 + 0x8b) != '\0') {
    uStack265376._0_1_ = SUB41(*(undefined4 *)("putBufs invalid stream pointer" + param_3 + 4),0);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,(uint)QCamera3StreamMem::getFd,(uchar *)&uStack265376,1);
  }
  if (*(char *)(param_3 + 0x73) != '\0') {
    piVar28 = (int *)(param_3 + 0xc644);
    QCamera3CropRegionMapper::toActiveArray
              ((QCamera3CropRegionMapper *)((QCamera3HardwareInterface *)this_01 + 0x117f88),piVar28
               ,(int *)(param_3 + 0xc648),(int *)(param_3 + 0xc64c),(int *)(param_3 + 0xc650));
    iVar8 = *piVar28;
    uStack265376._4_4_ = *(int **)(param_3 + 0xc648);
    iStack265364 = *(int *)(param_3 + 0xc650) + (int)uStack265376._4_4_;
    uStack265376._0_1_ = SUB41(iVar8,0);
    uStack265376._1_1_ = (undefined)((uint)iVar8 >> 8);
    uStack265376._2_1_ = (undefined)((uint)iVar8 >> 0x10);
    uStack265376._3_1_ = (undefined)((uint)iVar8 >> 0x18);
    fStack265368 = (float)(*(int *)(param_3 + 0xc64c) + iVar8);
    if (-1 < (int)*(uint *)(param_3 + 0xc654)) {
      uStack265360 = uStack265360 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_3 + 0xc654);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x10004,(int *)&uStack265376,5);
    if (*(int *)(*(int *)(DAT_00088778 + 0x8846c) + 0x2c) != 0) {
      adStack265496[1] = *(double *)(param_3 + 0xc648);
      adStack265496[0] = (double)CONCAT44(*piVar28,iStack265364);
      mm_camera_debug_log(1,4,DAT_00088780 + 0x884ba,0x1c59,DAT_0008877c + 0x8849a,
                          CONCAT13(uStack265376._3_1_,
                                   CONCAT12(uStack265376._2_1_,
                                            CONCAT11(uStack265376._1_1_,uStack265376._0_1_))),
                          uStack265376._4_4_,fStack265368);
    }
  }
  if (*(char *)(param_3 + 0x89) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80003,(float *)(param_3 + 0xc6d0),1);
  }
  if (*(char *)(param_3 + 0x8a) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80008,(float *)(param_3 + 0xc6dc),2);
  }
  if (*(char *)(param_3 + 0x8c) != '\0') {
    uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc6e4),0);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80009,(uchar *)&uStack265376,1);
  }
  if (*(char *)(param_3 + 0xd7) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x800c0004,(float *)(param_3 + 0x256c),1);
    if (*(int *)((QCamera3HardwareInterface *)this_01 + 0x60) == 0) {
      fVar36 = *(float *)(param_3 + 0x256c);
      iVar8 = BSTBokehParam::getStereoMode(pBStack265428);
      if (iVar8 != 0) {
        BSTBokehParam::setDacVal(pBStack265428,(uint)ROUND(fVar36));
      }
    }
  }
  if (*(char *)(param_3 + 0x10e) != '\0') {
    uStack265376._0_1_ = *(String8 *)("\nPending frame drop list: %zu\n" + param_3 + 0x12);
    uStack265376._2_1_ =
         (undefined)*(undefined4 *)("\nPending frame drop list: %zu\n" + param_3 + 0x16);
    uStack265376._1_1_ =
         (undefined)
         ((uint)*(undefined4 *)("\nPending frame drop list: %zu\n" + param_3 + 0x16) >> 8);
    uVar10 = *(uint *)("Failed to Q new buffer to stream" + param_3);
    uStack265376._4_4_ = (int *)((uint)uStack265376._4_4_ & 0xffffff00 | uVar10 & 0xff);
    uStack265376._3_1_ = (undefined)(uVar10 >> 8);
    __memcpy_chk((char *)((int)&uStack265376 + 5),
                 "\nPending frame drop list: %zu\n" + param_3 + 0x1a,uVar10,0x280);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x800c0005,(uchar *)&uStack265376,0x285);
  }
  pauVar32 = (undefined (*) [16])(param_3 + 0xc668);
  pauStack265404 = pauVar32;
  if (*(char *)(param_3 + 0x76) != '\0') {
    QCamera3CropRegionMapper::toActiveArray
              ((QCamera3CropRegionMapper *)((QCamera3HardwareInterface *)this_01 + 0x117f88),
               (int *)pauVar32,(int *)(param_3 + 0xc66c),(int *)(param_3 + 0xc670),
               (int *)(param_3 + 0xc674));
    iVar8 = *(int *)*pauVar32;
    uStack265376._4_4_ = *(int **)(param_3 + 0xc66c);
    iStack265364 = *(int *)(param_3 + 0xc674) + (int)uStack265376._4_4_;
    uStack265376._0_1_ = SUB41(iVar8,0);
    uStack265376._1_1_ = (undefined)((uint)iVar8 >> 8);
    uStack265376._2_1_ = (undefined)((uint)iVar8 >> 0x10);
    uStack265376._3_1_ = (undefined)((uint)iVar8 >> 0x18);
    fStack265368 = (float)(*(int *)(param_3 + 0xc670) + iVar8);
    if (-1 < (int)*(uint *)(param_3 + 0xc678)) {
      uStack265360 = uStack265360 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_3 + 0xc678);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x10008,(int *)&uStack265376,5);
    if (*(int *)(*(int *)(DAT_00088784 + 0x8863e) + 0x2c) != 0) {
      adStack265496[1] = *(double *)(param_3 + 0xc66c);
      adStack265496[0] = (double)CONCAT44(*(undefined4 *)*pauVar32,iStack265364);
      mm_camera_debug_log(1,4,DAT_0008878c + 0x8868c,0x1c8c,DAT_00088788 + 0x8866c,
                          CONCAT13(uStack265376._3_1_,
                                   CONCAT12(uStack265376._2_1_,
                                            CONCAT11(uStack265376._1_1_,uStack265376._0_1_))),
                          uStack265376._4_4_,fStack265368);
    }
  }
  puVar30 = puStack265416;
  if (*(char *)(param_3 + 6) != '\0') {
    if (*puStack265416 < 6) {
      uStack265376._0_1_ =
           SUB41(*(undefined4 *)
                  (*(int *)(DAT_00088794 + 0x886b8) +
                  *(int *)(DAT_00088790 + 0x886b0 + *puStack265416 * 4) * 8),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x10000,(uchar *)&uStack265376,1);
    }
    else if (*(int *)(*(int *)(DAT_00088798 + 0x886d4) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000887a0 + 0x886ee,0x18f5);
    }
    uStack265376._0_1_ = SUB41(*puVar30,0);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80170003,(uchar *)&uStack265376,1);
  }
  if (*(char *)(param_3 + 0xd) != '\0') {
    uVar10 = *(uint *)("Failed to queue CREATE_JPEG_SESSION" + param_3 + 9);
    if ((uVar10 < 0x15) && ((0x1bf6fdU >> (uVar10 & 0xff) & 1) != 0)) {
      uStack265376._0_1_ =
           SUB41(*(undefined4 *)
                  (*(int *)(DAT_00088a08 + 0x887cc) +
                  *(int *)(DAT_00088a04 + 0x887c4 + uVar10 * 4) * 8),0);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack265384,0x10010,(uchar *)&uStack265376,1);
      if (*(int *)(*(int *)(DAT_00088a0c + 0x887e8) + 0x2c) != 0) {
        uVar9 = 4;
        uVar20 = 0x1ca2;
        puVar19 = (undefined *)(DAT_00088a14 + 0x88802);
LAB_00088800:
        mm_camera_debug_log(1,uVar9,puVar19,uVar20);
      }
    }
    else {
      iVar8 = *(int *)(DAT_000887a4 + 0x8873a);
      if (*(int *)(iVar8 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000887ac + 0x88756,0x18f5);
        if (*(int *)(iVar8 + 0x28) != 0) {
          uVar9 = 3;
          uVar20 = 0x1ca4;
          puVar19 = &UNK_00088776 + DAT_000887b4;
          goto LAB_00088800;
        }
      }
    }
  }
  if (*(char *)(param_3 + 2) != '\0') {
    uStack265376._0_1_ = SUB41(*(undefined4 *)(param_3 + 0xc6a0),0);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x1000f,(uchar *)&uStack265376,1);
  }
  local_5e[0] = '\0';
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0x110003,local_5e,1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0x11000f,(int *)&local_468,0);
  if (*(char *)(param_3 + 0x5b) != '\0') {
    puVar30 = puStack265416 + 0x1ef;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80010000,(int *)puVar30,1);
    if (*(int *)(*(int *)(DAT_00088a18 + 0x88894) + 0x2c) != 0) {
      adStack265496[1] = (double)CONCAT44(*puVar30,DAT_00088a2c + 0x888c6);
      mm_camera_debug_log(1,4,DAT_00088a30 + 0x888d4,0x1cbb);
    }
  }
  if (*(char *)(param_3 + 0x28) != '\0') {
    local_870 = (float)((uint)local_870 & 0xffffff00 |
                       (uint)(byte)"%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
                                   [param_3 + 100]);
    uVar9 = *(undefined4 *)
             (
             "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
             + param_3 + 0x68);
    uStack265376._0_1_ = SUB41(uVar9,0);
    uStack265376._1_1_ = (undefined)((uint)uVar9 >> 8);
    uStack265376._2_1_ = (undefined)((uint)uVar9 >> 0x10);
    uStack265376._3_1_ = (undefined)((uint)uVar9 >> 0x18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80050000,(uchar *)&local_870,1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80050001,(int *)&uStack265376,1);
  }
  if (*(char *)(param_3 + 0x3b) != '\0') {
    uVar10 = (uint)*(byte *)(param_3 + 0x22fc);
    if ((uVar10 - 1 & 0xff) < 8) {
      iVar8 = getReprocessibleOutputStreamId((QCamera3HardwareInterface *)this_01,&local_870);
      if (iVar8 == 0) {
        android::VectorImpl::VectorImpl((VectorImpl *)&uStack265376,4,7);
        iVar8 = *(int *)(DAT_00088a4c + 0x889bc) + 8;
        uStack265376._0_1_ = SUB41(iVar8,0);
        SVar5 = uStack265376._0_1_;
        uStack265376._1_1_ = (undefined)((uint)iVar8 >> 8);
        uVar2 = uStack265376._1_1_;
        uStack265376._2_1_ = (undefined)((uint)iVar8 >> 0x10);
        uVar6 = uStack265376._2_1_;
        uStack265376._3_1_ = (undefined)((uint)iVar8 >> 0x18);
        uVar7 = uStack265376._3_1_;
        pfVar17 = (float *)operator_new__(uVar10 << 4);
        uVar14 = 0;
        pfVar27 = (float *)(param_3 + 0x2300);
        local_c78 = local_c78 & 0xffffffff00000000;
        do {
          if (*pfVar27 == local_870) {
            if (_param_8 == 0) {
              *pfVar17 = pfVar27[1];
              pfVar17[1] = pfVar27[2];
              pfVar17[2] = pfVar27[3];
              pfVar13 = pfVar27 + 4;
            }
            else {
              fVar36 = *(float *)(pmStack265412 + 0x1cc);
              *pfVar17 = 0.0;
              pfVar17[1] = 0.0;
              pfVar13 = (float *)(pmStack265412 + 0x1d0);
              pfVar17[2] = fVar36;
            }
            pfVar17[3] = *pfVar13;
            android::VectorImpl::add(&uStack265376);
            android::VectorImpl::add(&uStack265376);
            android::VectorImpl::add(&uStack265376);
            android::VectorImpl::add(&uStack265376);
            local_c78 = local_c78 & 0xffffffff00000000 | (ulonglong)((int)local_c78 + 1);
            iVar8 = *(int *)(DAT_00088c70 + 0x88aa8);
            if (*(int *)(iVar8 + 0x2c) != 0) {
              adStack265496[1] = *(double *)(pfVar17 + 1);
              adStack265496[0] = (double)CONCAT44(*pfVar17,DAT_00088c74 + 0x88abc);
              mm_camera_debug_log(1,4,DAT_00088c78 + 0x88ad0,0x1cf3);
              if (*(int *)(iVar8 + 0x2c) != 0) {
                adStack265496[1] = *(double *)(pfVar27 + 6);
                adStack265496[0] = (double)CONCAT44(pfVar27[5],DAT_00088c7c + 0x88ae6);
                mm_camera_debug_log(1,4,DAT_00088c80 + 0x88afa,0x1cf8);
              }
            }
            break;
          }
          pfVar27 = pfVar27 + 9;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar10);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265384,0x80030000,(int *)&local_c78,1);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack265384,0x80030001,(int *)pfVar17,(int)local_c78 << 2);
        if (uStack265376._4_4_ != (int *)0x0) {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                    (aCStack265384,0x80030002,uStack265376._4_4_,(uint)fStack265368);
        }
        operator_delete__(pfVar17);
        uStack265376._0_1_ = SVar5;
        uStack265376._1_1_ = uVar2;
        uStack265376._2_1_ = uVar6;
        uStack265376._3_1_ = uVar7;
        android::VectorImpl::finish_vector();
        android::VectorImpl::_VectorImpl((VectorImpl *)&uStack265376);
        this_01 = pmStack265412;
      }
      else if (*(int *)(*(int *)(DAT_00088a40 + 0x88986) + 0x2c) != 0) {
        uVar9 = 0x1cd3;
        iVar8 = DAT_00088a48 + 0x889a4;
        goto LAB_000889a2;
      }
    }
    else if (*(int *)(*(int *)(DAT_00088a34 + 0x88952) + 0x2c) != 0) {
      uVar9 = 0x1ccf;
      iVar8 = DAT_00088a3c + 0x88970;
LAB_000889a2:
      mm_camera_debug_log(1,4,iVar8,uVar9);
    }
  }
  if (*(int *)(*(int *)(iStack265420 + *(int *)((QCamera3HardwareInterface *)this_01 + 0x60) * 4) +
              0x3eb0) == 0) {
    uStack265376._0_1_ = (String8)0x0;
LAB_00088bd6:
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,3,(uchar *)&uStack265376,1);
  }
  else if (*(char *)(param_3 + 0xb2) != '\0') {
    if (*(uint *)("release output buffers of previous reprocess channel" + param_3 + 0x1b) < 3) {
      uVar10 = *(uint *)(*(int *)(DAT_00088c84 + 0x88b94) +
                        *(uint *)("release output buffers of previous reprocess channel" +
                                 param_3 + 0x1b) * 8);
      uStack265376._0_1_ = SUB41(uVar10,0);
      if ((uVar10 & 0xff) != _param_9) {
        uStack265376._0_1_ = SUB41(_param_9,0);
      }
      if (*(int *)(*(int *)(DAT_00088c88 + 0x88baa) + 0x2c) != 0) {
        adStack265496[1] = (double)CONCAT44(_param_9,DAT_00088c8c + 0x88bbc);
        mm_camera_debug_log(1,4,DAT_00088c90 + 0x88bca,0x1d1d);
      }
      goto LAB_00088bd6;
    }
    iVar8 = *(int *)(DAT_0008911c + 0x8904e);
    if (*(int *)(iVar8 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_00089124 + 0x89068,0x18f5);
    }
    if (*(int *)(iVar8 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008912c + 0x89092,0x1d20);
    }
  }
  if (*(char *)(param_3 + 0xf0) != '\0') {
    bVar3 = *(byte *)(param_3 + 0x2275);
    uStack265328 = 0;
    uStack265324 = 0;
    uStack265320 = 0;
    uStack265316 = 0;
    uStack265344 = 0;
    uStack265340 = 0;
    uStack265336 = 0;
    uStack265332 = 0;
    uStack265360 = 0;
    uStack265352 = 0;
    uStack265376._2_1_ = 0;
    uStack265376._3_1_ = 0;
    uStack265376._4_4_ = (int *)0x0;
    fStack265368 = 0.0;
    iStack265364 = 0;
    uStack265312 = 0;
    uStack265376._0_1_ = *(String8 *)(param_3 + 0x2274);
    uStack265376._1_1_ = 1;
    if ((bVar3 - 1 & 0xff) < 8) {
      iVar8 = getReprocessibleOutputStreamId((QCamera3HardwareInterface *)this_01,&local_870);
      if (iVar8 == 0) {
        uVar10 = 0;
        pfVar17 = (float *)(param_3 + 0x227c);
        do {
          if (pfVar17[-1] == local_870) {
            fStack265368 = *pfVar17;
            break;
          }
          pfVar17 = pfVar17 + 2;
          uVar10 = uVar10 + 1;
        } while (uVar10 < bVar3);
      }
      else if (*(int *)(*(int *)(DAT_00088c94 + 0x88c54) + 0x2c) != 0) {
        uVar9 = 0x1d2f;
        puVar19 = &UNK_00088c6e + DAT_00088c9c;
        goto LAB_00088cc0;
      }
    }
    else if (*(int *)(*(int *)(DAT_0008903c + 0x88ca6) + 0x2c) != 0) {
      uVar9 = 0x1d3b;
      puVar19 = (undefined *)(DAT_00089044 + 0x88cc2);
LAB_00088cc0:
      mm_camera_debug_log(1,4,puVar19,uVar9);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80010001,(uchar *)&uStack265376,0x44);
  }
  if ((((QCamera3HardwareInterface *)this_01)[0x117fb0] == (QCamera3HardwareInterface)0x0) &&
     (*(char *)(param_3 + 0xed) != '\0')) {
    ((QCamera3HardwareInterface *)this_01)[0x117fb0] = (QCamera3HardwareInterface)0x1;
    *(undefined4 *)((QCamera3HardwareInterface *)this_01 + 0x117fb4) = *puStack265436;
    *(undefined4 *)((QCamera3HardwareInterface *)this_01 + 0x117fb8) = puStack265436[1];
    if (*(int *)(*(int *)(DAT_00089110 + 0x89010) + 0x2c) != 0) {
      adStack265496[1] = (double)CONCAT44(*puStack265436,DAT_00089114 + 0x89028);
      mm_camera_debug_log(1,4,DAT_00089118 + 0x89036,0x1d4a);
    }
  }
  __aeabi_memclr8(&uStack265376,0xf0);
  if (*(char *)(param_3 + 0xe1) != '\0') {
    auVar38 = *(undefined (*) [16])("Invalid Denoise value: %s" + param_3 + 7);
    uStack265360 = SUB168(*(undefined (*) [16])("Invalid Denoise value: %s" + param_3 + 0x17),0);
    uStack265352 = SUB168(*(undefined (*) [16])("Invalid Denoise value: %s" + param_3 + 0x17) >>
                          0x40,0);
    uStack265376._0_1_ = SUB161(auVar38,0);
    uStack265376._1_1_ = SUB161(auVar38 >> 8,0);
    uStack265376._2_1_ = SUB161(auVar38 >> 0x10,0);
    uStack265376._3_1_ = SUB161(auVar38 >> 0x18,0);
    uStack265376._4_4_ = SUB164(auVar38 >> 0x20,0);
    fStack265368 = SUB164(auVar38 >> 0x40,0);
    iStack265364 = SUB164(auVar38 >> 0x60,0);
    uStack265344 = *(undefined4 *)("isYUVFrameInfoNeeded" + param_3 + 0xd);
  }
  if (*(char *)(param_3 + 0xe2) != '\0') {
    auVar38 = *(undefined (*) [16])("setSmallJpegSize" + param_3 + 0xc);
    auVar4 = *(undefined (*) [16])("isYUVFrameInfoNeeded" + param_3 + 0x11);
    uStack265324 = SUB164(auVar38,0);
    uStack265320 = SUB164(auVar38 >> 0x20,0);
    uStack265316 = SUB164(auVar38 >> 0x40,0);
    uStack265312 = SUB164(auVar38 >> 0x60,0);
    uStack265340 = SUB164(auVar4,0);
    uStack265336 = SUB164(auVar4 >> 0x20,0);
    uStack265332 = SUB164(auVar4 >> 0x40,0);
    uStack265328 = SUB164(auVar4 >> 0x60,0);
    uStack265308 = *(undefined4 *)
                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" + param_3 + 0xb);
  }
  if (*(char *)(param_3 + 0xe3) != '\0') {
    uStack265288 = SUB168(*(undefined (*) [16])
                           ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                           param_3 + 0x1f),0);
    uStack265280 = SUB168(*(undefined (*) [16])
                           ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                           param_3 + 0x1f) >> 0x40,0);
    uStack265304 = SUB168(*(undefined (*) [16])
                           ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" + param_3 + 0xf
                           ),0);
    uStack265296 = SUB168(*(undefined (*) [16])
                           ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" + param_3 + 0xf
                           ) >> 0x40,0);
    uStack265272 = *(undefined4 *)
                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" + param_3 + 0x2f);
  }
  if (*(char *)(param_3 + 0xe4) != '\0') {
    uStack265252 = SUB168(*(undefined (*) [16])("isNV21PictureFormat: %d\n" + param_3 + 0xd),0);
    uStack265244 = SUB168(*(undefined (*) [16])("isNV21PictureFormat: %d\n" + param_3 + 0xd) >> 0x40
                          ,0);
    uStack265268 = SUB168(*(undefined (*) [16])
                           ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                           param_3 + 0x33),0);
    uStack265260 = SUB168(*(undefined (*) [16])
                           ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                           param_3 + 0x33) >> 0x40,0);
    uStack265236 = *(undefined4 *)("Failed to update tone map mode" + param_3 + 4);
  }
  if (*(char *)(param_3 + 0xe0) != '\0') {
    uStack265232 = *(undefined4 *)("Invalid Denoise value: %s" + param_3 + 3);
  }
  if (*(char *)(param_3 + 0xe7) != '\0') {
    uStack265228 = *(undefined4 *)("cache buffer %p at result frame_number %u" + param_3 + 3);
  }
  if (*(char *)(param_3 + 0x38) != '\0') {
    uStack265224 = *(undefined8 *)("Memeory Obj of main frame is NULL" + param_3 + 2);
    uStack265216 = *(undefined4 *)("Memeory Obj of main frame is NULL" + param_3 + 10);
  }
  if (*(char *)(param_3 + 0x76) != '\0') {
    uStack265212 = SUB168(*pauStack265404,0);
    uStack265204 = SUB168(*pauStack265404 >> 0x40,0);
    uStack265196 = *(undefined4 *)pauStack265404[1];
  }
  if (*(char *)(param_3 + 0xf2) != '\0') {
    uStack265192 = *(undefined8 *)
                    ("fail to switch to internal stream configration" + param_3 + 0x11);
    uStack265184 = *(undefined8 *)
                    ("fail to switch to internal stream configration" + param_3 + 0x19);
    uStack265176 = SUB168(*(undefined (*) [16])
                           ("fail to switch to internal stream configration" + param_3 + 0x21),0);
    uStack265168 = SUB168(*(undefined (*) [16])
                           ("fail to switch to internal stream configration" + param_3 + 0x21) >>
                          0x40,0);
    uStack265160 = SUB168(*(undefined (*) [16])("setEis %d" + param_3 + 2),0);
    uStack265152 = SUB168(*(undefined (*) [16])("setEis %d" + param_3 + 2) >> 0x40,0);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::update
            (aCStack265384,0x800d0001,(uchar *)&uStack265376,0xf0);
  piVar28 = piStack265432;
  if (*(char *)(param_3 + 0x41) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80170000,(float *)(&UNK_00010704 + param_3),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80170001,(float *)(&UNK_0001070c + param_3),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80170002,(float *)(&UNK_00010710 + param_3),1);
  }
  if (*(char *)(param_3 + 0xd9) != '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80170004,(int *)(param_3 + 0x2518),1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80170005,(int *)(param_3 + 0x255c),1);
  }
  if (*(char *)(param_3 + 0xd7) != '\0') {
    local_870 = *(float *)(param_3 + 0x2568);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack265384,0x80170006,&local_870,1);
  }
  MotCameraFactory::returnFactoryMeta
            (*(MotCameraFactory **)((QCamera3HardwareInterface *)this_01 + 0x118028),aCStack265384);
  uVar14 = (uint)(byte)*pmStack265408;
  uVar10 = uVar14;
  if (uVar14 != 0) {
    uVar10 = in_stack_00000018;
  }
  if (uVar14 != 0 && uVar10 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::clear
              ((CameraMetadata *)((QCamera3HardwareInterface *)this_01 + 0x117fc4));
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)((QCamera3HardwareInterface *)this_01 + 0x117fc4),aCStack265384);
  }
LAB_00088faa:
  uVar9 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack265384);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack265384);
  if (*piVar28 == local_34) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

