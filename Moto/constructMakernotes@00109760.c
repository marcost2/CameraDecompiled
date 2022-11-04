
/* qcamera::MotMakernote::constructMakernotes(qcamera::QCamera3HardwareInterface*,
   metadata_buffer_t*, qcamera::jpeg_settings_t*) */

void __thiscall
qcamera::MotMakernote::constructMakernotes
          (MotMakernote *this,QCamera3HardwareInterface *param_1,metadata_buffer_t *param_2,
          jpeg_settings_t *param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  tm *__tp;
  undefined *puVar4;
  int *piVar5;
  uint local_5a4;
  uint local_5a0;
  undefined local_59a;
  undefined local_599;
  undefined4 local_598;
  undefined2 local_594;
  undefined2 local_590;
  undefined local_58e;
  ushort local_58c [16];
  undefined auStack1388 [12];
  undefined auStack1376 [24];
  undefined auStack1352 [38];
  undefined auStack1314 [933];
  undefined uStack381;
  int local_17c;
  undefined auStack376 [2];
  undefined auStack374 [2];
  undefined auStack372 [2];
  undefined auStack370 [2];
  undefined auStack368 [2];
  undefined auStack366 [2];
  undefined auStack364 [2];
  undefined auStack362 [2];
  undefined auStack360 [2];
  undefined auStack358 [2];
  undefined auStack356 [2];
  undefined auStack354 [2];
  undefined auStack352 [2];
  undefined auStack350 [2];
  undefined auStack348 [2];
  undefined auStack346 [2];
  undefined auStack344 [20];
  undefined auStack324 [2];
  undefined auStack322 [2];
  undefined auStack320 [2];
  undefined auStack318 [2];
  undefined auStack316 [110];
  char local_ce;
  char local_cc;
  char local_cb;
  char local_ca;
  undefined auStack201 [3];
  ushort local_c6;
  ushort local_c2;
  undefined auStack192 [2];
  undefined auStack190 [2];
  undefined auStack188 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined auStack176 [4];
  int local_ac;
  undefined4 local_a8;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_24;
  
  piVar5 = *(int **)(DAT_0010991c + 0x10977e);
  local_24 = *piVar5;
  iVar1 = property_get(DAT_00109920 + 0x10978a,&local_80,0);
  if ((((0 < iVar1) && (iVar1 = addTag(this,0x5500,2,iVar1 + 1,&local_80), iVar1 != 0)) ||
      ((param_2 != (metadata_buffer_t *)0x0 &&
       ((param_2[0x71] != (metadata_buffer_t)0x0 &&
        (iVar1 = addTag(this,0x5511,4,1,param_2 + 0xc58c), iVar1 != 0)))))) ||
     (iVar1 = addTag(this,0x5512,4,1,param_3 + 4), iVar1 != 0)) goto LAB_00109812;
  local_599 = MotUtil::getBatteryCapacity();
  iVar1 = addTag(this,0x5502,1,1,&local_599);
  if (iVar1 != 0) goto LAB_00109812;
  local_59a = MotUtil::getBatteryTemp();
  iVar1 = addTag(this,0x5503,1,1,&local_59a);
  if (iVar1 != 0) goto LAB_00109812;
  if (param_2 != (metadata_buffer_t *)0x0) {
    if (param_2[0x78] != (metadata_buffer_t)0x0) {
      local_58c[0] = (ushort)*(undefined4 *)(param_2 + 0xc67c);
      iVar1 = addTag(this,0x5520,8,1,local_58c);
      if (iVar1 != 0) goto LAB_00109812;
    }
    if (param_2[5] != (metadata_buffer_t)0x0) {
      if ((*(uint *)(param_2 + 0xc65c) & 0xfffffffb) == 0) {
        pcVar2 = (char *)(DAT_0010992c + 0x109882);
      }
      else {
        pcVar2 = (char *)QCameraParameters::getFocusModeStr(*(uint *)(param_2 + 0xc65c));
        if (pcVar2 == (char *)0x0) {
          __android_log_print(6,DAT_00109924 + 0x109876,DAT_00109928 + 0x109878);
          goto LAB_0010989a;
        }
      }
      sVar3 = strlen(pcVar2);
      iVar1 = addTag(this,0x5530,2,sVar3 + 1,pcVar2);
      if (iVar1 != 0) goto LAB_00109812;
    }
LAB_0010989a:
    if (param_2[0xab] != (metadata_buffer_t)0x0) {
      local_58c[0] = local_58c[0] & 0xff00 | (ushort)(byte)*(undefined4 *)(param_2 + 0x73a8c);
      iVar1 = addTag(this,0x5540,1,1,local_58c);
      if (iVar1 != 0) goto LAB_00109812;
    }
    if (param_2[0xac] != (metadata_buffer_t)0x0) {
      local_58c[0] = local_58c[0] & 0xff00 | (ushort)(byte)*(undefined4 *)(param_2 + 0x73a90);
      iVar1 = addTag(this,0x5550,1,1,local_58c);
      if (iVar1 != 0) goto LAB_00109812;
    }
    if (param_2[4] != (metadata_buffer_t)0x0) {
      pcVar2 = (char *)QCameraParameters::getWhiteBalanceStr
                                 (*(cam_wb_mode_type *)(param_2 + 0xc680));
      if (pcVar2 == (char *)0x0) {
        __android_log_print(6,DAT_00109bec + 0x10993a,DAT_00109bf0 + 0x10993c);
      }
      else {
        sVar3 = strlen(pcVar2);
        iVar1 = addTag(this,0x5560,2,sVar3 + 1,pcVar2);
        if (iVar1 != 0) goto LAB_00109812;
      }
    }
  }
  local_5a0 = 0x4c;
  iVar1 = MotCtrl::motCtrl(*(MotCtrl **)(param_1 + 0x117fdc),0x10,(void *)0x0,0,&local_cc,&local_5a0
                          );
  if ((iVar1 < 0) || (((local_cc == '\0' && (local_cb == '\0')) && (local_ca == '\0')))) {
    iVar1 = DAT_00109f38 + 0x109bd0;
    puVar4 = (undefined *)(DAT_00109f3c + 0x109bd2);
  }
  else {
    local_80 = 0;
    uStack120 = 0;
    uStack48 = 0;
    uStack44 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_34 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    local_70 = 0;
    uStack104 = 0;
    FUN_000be9c0(&local_80,0x5c,DAT_00109bf4 + 0x1099c2,local_a8);
    iVar1 = __strlen_chk(&local_80,0x5c);
    iVar1 = addTag(this,0x6700,2,iVar1 + 1,&local_80);
    if (iVar1 != 0) goto LAB_00109812;
    FUN_000be9c0(&local_80,0x5c,DAT_00109bf8 + 0x1099f0,local_b8);
    iVar1 = __strlen_chk(&local_80,0x5c);
    iVar1 = addTag(this,0x6701,2,iVar1 + 1,&local_80);
    if (iVar1 != 0) goto LAB_00109812;
    FUN_000be9c0(&local_80,0x5c,DAT_00109bfc + 0x109a1e,(uint)local_c2);
    iVar1 = __strlen_chk(&local_80,0x5c);
    iVar1 = addTag(this,0x6702,2,iVar1 + 1,&local_80);
    if (iVar1 != 0) goto LAB_00109812;
    iVar1 = __strlen_chk(&local_cc,0x4c);
    iVar1 = addTag(this,0x6703,2,iVar1 + 1,&local_cc);
    if (iVar1 != 0) goto LAB_00109812;
    iVar1 = __strlen_chk(auStack201,0x49);
    iVar1 = addTag(this,0x6704,2,iVar1 + 1,auStack201);
    if (iVar1 != 0) goto LAB_00109812;
    if (local_ac != 0) {
      __tp = localtime(&local_ac);
      strftime((char *)&local_80,0x5c,(char *)(DAT_00109c00 + 0x109a9a),__tp);
      iVar1 = __strlen_chk(&local_80,0x5c);
      iVar1 = addTag(this,0x6705,2,iVar1 + 1,&local_80);
      if (iVar1 != 0) goto LAB_00109812;
    }
    FUN_000be9c0(&local_80,0x5c,DAT_00109c04 + 0x109ac8,local_b4);
    iVar1 = __strlen_chk(&local_80,0x5c);
    iVar1 = addTag(this,0x6707,2,iVar1 + 1,&local_80);
    if (iVar1 != 0) goto LAB_00109812;
    FUN_000be9c0(&local_80,0x5c,DAT_00109c08 + 0x109af6,(uint)local_c6);
    iVar1 = __strlen_chk(&local_80,0x5c);
    iVar1 = addTag(this,0x6706,2,iVar1 + 1,&local_80);
    if (((iVar1 != 0) || (iVar1 = addTag(this,0x6708,3,1,auStack190), iVar1 != 0)) ||
       ((iVar1 = addTag(this,0x6709,3,1,auStack192), iVar1 != 0 ||
        ((iVar1 = addTag(this,0x670a,3,1,auStack188), iVar1 != 0 ||
         (iVar1 = addTag(this,0x670c,4,1,auStack176), iVar1 != 0)))))) goto LAB_00109812;
    local_5a4 = 0x4c0;
    iVar1 = MotCtrl::motCtrl(*(MotCtrl **)(param_1 + 0x117fdc),0xf,(void *)0x0,0,local_58c,
                             &local_5a4);
    if ((-1 < iVar1) && (local_17c != 0)) {
      local_58e = 0;
      local_590 = 0;
      local_594 = 0;
      local_598 = 0;
      if (local_ce == '\0') {
        iVar1 = DAT_00109f50 + 0x109c18;
      }
      else {
        iVar1 = DAT_00109f4c + 0x109bc8;
      }
      __strncpy_chk2(&local_590,iVar1,3,3,3);
      FUN_000be9c0(&local_598,6,DAT_00109f54 + 0x109c2e,local_17c);
      iVar1 = addTag(this,0x6641,1,1,auStack316);
      if ((((((iVar1 == 0) && (iVar1 = addTag(this,0x55e7,3,1,auStack320), iVar1 == 0)) &&
            (iVar1 = addTag(this,0x55e8,3,1,auStack318), iVar1 == 0)) &&
           ((iVar1 = addTag(this,0x55e5,3,1,auStack324), iVar1 == 0 &&
            (iVar1 = addTag(this,0x55e6,3,1,auStack322), iVar1 == 0)))) &&
          (iVar1 = addTag(this,0x6600,1,1,auStack1314), iVar1 == 0)) &&
         (((iVar1 = addTag(this,0x6601,1,1,&uStack381), iVar1 == 0 &&
           (iVar1 = addTag(this,0x6602,1,1,auStack1376), iVar1 == 0)) &&
          ((iVar1 = addTag(this,0x6640,1,1,auStack1388), iVar1 == 0 &&
           (iVar1 = addTag(this,0x6604,3,1,auStack1352), iVar1 == 0)))))) {
        iVar1 = __strlen_chk(&local_598,6);
        iVar1 = addTag(this,0x6606,2,iVar1 + 1,&local_598);
        if ((((iVar1 == 0) && (iVar1 = addTag(this,0x6612,3,1,auStack374), iVar1 == 0)) &&
            (iVar1 = addTag(this,0x6613,3,1,auStack372), iVar1 == 0)) &&
           (((iVar1 = addTag(this,0x6614,3,1,auStack370), iVar1 == 0 &&
             (iVar1 = addTag(this,0x6615,3,1,auStack368), iVar1 == 0)) &&
            ((((iVar1 = addTag(this,0x6642,3,1,auStack366), iVar1 == 0 &&
               (((iVar1 = addTag(this,0x6643,3,1,auStack364), iVar1 == 0 &&
                 (iVar1 = addTag(this,0x6644,3,1,auStack362), iVar1 == 0)) &&
                ((iVar1 = addTag(this,0x6645,3,1,auStack360), iVar1 == 0 &&
                 (((iVar1 = addTag(this,0x664e,1,1,auStack352), iVar1 == 0 &&
                   (iVar1 = addTag(this,0x664f,3,1,auStack350), iVar1 == 0)) &&
                  (iVar1 = addTag(this,0x6650,3,1,auStack348), iVar1 == 0)))))))) &&
              (((iVar1 = addTag(this,0x6651,3,1,auStack346), iVar1 == 0 &&
                (iVar1 = addTag(this,0x6652,3,1,auStack344), iVar1 == 0)) &&
               (iVar1 = addTag(this,0x6654,3,1,auStack358), iVar1 == 0)))) &&
             (((iVar1 = addTag(this,0x6655,3,1,auStack356), iVar1 == 0 &&
               (iVar1 = addTag(this,0x6656,3,1,auStack354), iVar1 == 0)) &&
              (iVar1 = addTag(this,0x665d,1,1,auStack376), iVar1 == 0)))))))) {
          iVar1 = __strlen_chk(&local_590,3);
          iVar1 = addTag(this,0x6653,2,iVar1 + 1,&local_590);
          if (iVar1 == 0) {
            addAppTags(this,*(uchar **)(param_1 + 0xc),*(uint *)(param_1 + 0x10));
          }
        }
      }
      goto LAB_00109812;
    }
    iVar1 = DAT_00109f44 + 0x109be8;
    puVar4 = &UNK_00109bea + DAT_00109f48;
  }
  __android_log_print(6,iVar1,puVar4,DAT_00109f40 + 0x109bd8);
LAB_00109812:
  if (*piVar5 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

