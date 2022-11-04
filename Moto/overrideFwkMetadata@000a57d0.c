
/* qcamera::QCamera3ReprocessChannel::overrideFwkMetadata(qcamera::qcamera_fwk_input_pp_data_t*) */

void __thiscall
qcamera::QCamera3ReprocessChannel::overrideFwkMetadata
          (QCamera3ReprocessChannel *this,qcamera_fwk_input_pp_data_t *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  piVar6 = *(int **)(DAT_000a5a08 + 0xa57e0);
  iVar2 = *piVar6;
  if (param_1 == (qcamera_fwk_input_pp_data_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000a5a0c + 0xa592c) + 0x20) != 0) {
      uVar3 = 0x1434;
      iVar7 = DAT_000a5a10 + 0xa593e;
      iVar9 = DAT_000a5a14 + 0xa5946;
LAB_000a59ec:
      mm_camera_debug_log(1,1,iVar9,uVar3,iVar7);
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x21c);
    if (iVar7 == 0) {
      if (*(int *)(*(int *)(DAT_000a5a18 + 0xa594c) + 0x20) != 0) {
        uVar3 = 0x1439;
        iVar7 = DAT_000a5a1c + 0xa595e;
        iVar9 = DAT_000a5a20 + 0xa5966;
        goto LAB_000a59ec;
      }
    }
    else {
      if (*(int *)(this + 0xd4) != 1) {
        if (*(int *)(*(int *)(DAT_000a5a24 + 0xa5800) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000a5a2c + 0xa581a,0x1441,DAT_000a5a28 + 0xa580e,
                              *(int *)(this + 0xd4));
        }
        uVar3 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        *(undefined4 *)("Memeory Obj of main frame is NULL" + iVar7 + 10) = uVar3;
        *(undefined *)(iVar7 + 0x38) = 1;
        *(undefined8 *)("Memeory Obj of main frame is NULL" + iVar7 + 2) = 1;
      }
      if (*(char *)(iVar7 + 0x3b) == '\0') {
        if (*(int *)(*(int *)(DAT_000a5a58 + 0xa596c) + 0x24) != 0) {
          uVar3 = 2;
          uVar5 = 0x1468;
          iVar9 = DAT_000a5a5c + 0xa597c;
          iVar4 = DAT_000a5a60 + 0xa5984;
LAB_000a5982:
          mm_camera_debug_log(1,uVar3,iVar4,uVar5,iVar9);
        }
      }
      else {
        pbVar8 = (byte *)(iVar7 + 0x22fc);
        if (*pbVar8 != 1) {
          if (*(int *)(*(int *)(DAT_000a5a4c + 0xa59b0) + 0x20) != 0) {
            uVar3 = 0x1464;
            iVar7 = DAT_000a5a50 + 0xa59be;
            iVar9 = DAT_000a5a54 + 0xa59ca;
            goto LAB_000a59ec;
          }
          goto LAB_000a59f0;
        }
        *(undefined8 *)(iVar7 + 9000) = *(undefined8 *)(iVar7 + 0x2304);
        *(undefined8 *)(iVar7 + 0x2330) = *(undefined8 *)(iVar7 + 0x230c);
        *(undefined8 *)(iVar7 + 0x2338) = *(undefined8 *)(iVar7 + 0x2314);
        *(undefined8 *)(iVar7 + 0x2340) = *(undefined8 *)(iVar7 + 0x231c);
        uVar3 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        bVar1 = *pbVar8;
        *(undefined4 *)(iVar7 + 0x2300 + (uint)bVar1 * 0x24) = uVar3;
        *pbVar8 = bVar1 + 1;
        iVar9 = *(int *)(DAT_000a5a30 + 0xa58aa);
        if (*(int *)(iVar9 + 0x2c) != 0) {
          uVar3 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
          mm_camera_debug_log(1,4,DAT_000a5a38 + 0xa58d2,0x1457,DAT_000a5a34 + 0xa58c6,uVar3);
          if ((*(int *)(iVar9 + 0x2c) != 0) &&
             (mm_camera_debug_log(1,4,DAT_000a5a40 + 0xa58fc,0x145c,DAT_000a5a3c + 0xa58e8,
                                  *(undefined4 *)(iVar7 + 0x2304),*(undefined4 *)(iVar7 + 0x2308),
                                  *(undefined4 *)(iVar7 + 0x230c),*(undefined4 *)(iVar7 + 0x2310)),
             *(int *)(iVar9 + 0x2c) != 0)) {
            iVar9 = DAT_000a5a44 + 0xa5912;
            uVar3 = 4;
            uVar5 = 0x1461;
            iVar4 = DAT_000a5a48 + 0xa5926;
            goto LAB_000a5982;
          }
        }
      }
      if (*(char *)(iVar7 + 0xf0) == '\0') {
        uVar3 = 0;
        goto LAB_000a59f4;
      }
      if (*(char *)(iVar7 + 0x2275) == '\x01') {
        uVar3 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        *(undefined4 *)(iVar7 + 0x2278) = uVar3;
        uVar3 = 0;
        goto LAB_000a59f4;
      }
      if (*(int *)(*(int *)(DAT_000a5a64 + 0xa59d4) + 0x20) != 0) {
        uVar3 = 0x1470;
        iVar7 = DAT_000a5a68 + 0xa59e2;
        iVar9 = DAT_000a5a6c + 0xa59ee;
        goto LAB_000a59ec;
      }
    }
  }
LAB_000a59f0:
  uVar3 = 0xffffffea;
LAB_000a59f4:
  if (*piVar6 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

