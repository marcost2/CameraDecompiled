
/* qcamera::QCamera3RegularChannel::initialize(cam_is_type_t) */

undefined4 __thiscall
qcamera::QCamera3RegularChannel::initialize(QCamera3RegularChannel *this,cam_is_type_t param_1)

{
  int iVar1;
  camera3_stream *pcVar2;
  int iVar3;
  cam_format_t cVar4;
  int iVar5;
  undefined4 uVar6;
  cam_stream_type_t *pcVar7;
  camera3_stream **ppcVar8;
  uint *puVar9;
  cam_rotation_t cVar10;
  cam_is_type_t in_stack_ffffffcc;
  
  ppcVar8 = (camera3_stream **)(this + 0x14e0);
  puVar9 = *(uint **)(DAT_0009ff90 + 0x9fdcc);
  if (1 < *puVar9) {
    if ((**(byte **)(DAT_0009ff94 + 0x9fdd8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009ff98 + 0x9fde8) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009ff9c + 0x9ff80);
    }
  }
  if (*ppcVar8 == (camera3_stream *)0x0) {
    if (*(int *)(*(int *)(DAT_0009ffa0 + 0x9fe02) + 0x20) == 0) {
      uVar6 = 0xffffffed;
    }
    else {
      mm_camera_debug_log(1,1,DAT_0009ffa8 + 0x9fe1a,0x7fb,DAT_0009ffa4 + 0x9fe12);
      uVar6 = 0xffffffed;
    }
    goto LAB_0009ff24;
  }
  if (*(int *)(this + 0x44) != 0) {
    uVar6 = 0;
    goto LAB_0009ff24;
  }
  *(cam_is_type_t *)(this + 0x74) = param_1;
  pcVar7 = (cam_stream_type_t *)(this + 0x14e8);
  iVar1 = QCamera3ProcessingChannel::translateStreamTypeAndFormat
                    ((QCamera3ProcessingChannel *)this,*ppcVar8,pcVar7,
                     (cam_format_t *)(this + 0x14ec));
  if (iVar1 == 0) {
    cVar4 = *pcVar7;
    if (cVar4 == 4 || cVar4 == 1) {
      pcVar2 = *ppcVar8;
      iVar1 = *(int *)(pcVar2 + 0x20);
      if (iVar1 == 0) {
        uVar6 = 1;
LAB_0009feba:
        *(undefined4 *)(this + 0x3178) = uVar6;
LAB_0009fec0:
        cVar10 = *(cam_rotation_t *)(pcVar2 + 4);
        uVar6 = *(undefined4 *)(pcVar2 + 8);
        if (*(int *)(*(int *)(DAT_0009ffd4 + 0x9feca) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0009ffdc + 0x9feea,0x83d,DAT_0009ffd8 + 0x9fede,
                              *(undefined4 *)(this + 0x3174));
          cVar4 = *pcVar7;
        }
        uVar6 = QCamera3Channel::addStream
                          ((cam_stream_type_t)this,cVar4,SUB41(*(cam_format_t *)(this + 0x14ec),0),
                           cVar10,(uchar)uVar6,
                           (ulonglong)CONCAT14(this[0x14e4],*(undefined4 *)(this + 0x3178)),
                           in_stack_ffffffcc,*(uint *)(this + 0x68));
        goto LAB_0009ff24;
      }
      if ((int)((uint)(byte)this[0x68] << 0x1c) < 0) {
        if (iVar1 - 1U < 3) {
          uVar6 = *(undefined4 *)(DAT_0009ffd0 + 0x9feb8 + (iVar1 - 1U) * 4);
          goto LAB_0009feba;
        }
        if (*(int *)(*(int *)(DAT_0009ffb8 + 0x9ff52) + 0x20) != 0) {
          uVar6 = 0x827;
          iVar3 = DAT_0009ffbc + 0x9ff66;
          iVar5 = DAT_0009ffc0 + 0x9ff70;
          goto LAB_0009ff6e;
        }
      }
      else if (*(int *)(*(int *)(DAT_0009ffac + 0x9fe62) + 0x20) != 0) {
        uVar6 = 0x812;
        iVar3 = DAT_0009ffb0 + 0x9fe74;
        iVar5 = DAT_0009ffb4 + 0x9fe7e;
LAB_0009ff6e:
        mm_camera_debug_log(1,1,iVar5,uVar6,iVar3,iVar1);
      }
    }
    else {
      pcVar2 = *ppcVar8;
      iVar1 = *(int *)(pcVar2 + 0x20);
      if (iVar1 == 0) goto LAB_0009fec0;
      if (*(int *)(*(int *)(DAT_0009ffc4 + 0x9fe8a) + 0x20) != 0) {
        uVar6 = 0x836;
        iVar3 = DAT_0009ffc8 + 0x9fe9a;
        iVar5 = DAT_0009ffcc + 0x9fea8;
        goto LAB_0009ff6e;
      }
    }
  }
  uVar6 = 0xffffffea;
LAB_0009ff24:
  if (1 < *puVar9) {
    if ((**(byte **)(DAT_0009ffe0 + 0x9ff30) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009ffe4 + 0x9ff3e) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar6;
}

