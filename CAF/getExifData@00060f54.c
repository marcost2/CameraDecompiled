
/* qcamera::QCamera3PostProcessor::getExifData(metadata_buffer_t*, qcamera::jpeg_settings_t*, bool)
    */

QCamera3Exif * __thiscall
qcamera::QCamera3PostProcessor::getExifData
          (QCamera3PostProcessor *this,metadata_buffer_t *param_1,jpeg_settings_t *param_2,
          bool param_3)

{
  QCamera3Exif *this_00;
  int iVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined2 *puVar4;
  size_t sVar5;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *extraout_r1_03;
  char *extraout_r1_04;
  char *pcVar6;
  char *extraout_r1_05;
  int *piVar7;
  float extraout_s0;
  float fVar8;
  undefined8 uVar9;
  undefined2 *in_stack_ffffff40;
  undefined4 in_stack_ffffff44;
  rat_t rStack181;
  qcamera aqStack180 [8];
  String8 aSStack172 [4];
  String8 aSStack168 [4];
  uint local_a4;
  undefined2 uStack160;
  undefined2 uStack158;
  undefined2 local_9c [46];
  undefined2 local_40 [12];
  int local_28;
  
  piVar7 = *(int **)(DAT_000612bc + 0x60f68);
  local_28 = *piVar7;
  this_00 = (QCamera3Exif *)operator_new(0x230);
  QCamera3Exif::QCamera3Exif(this_00);
  if (*(int *)(this + 4) == 0) {
    if (*(int *)(*(int *)(DAT_000612d8 + 0x61020) + 0x20) == 0) {
      this_00 = (QCamera3Exif *)0x0;
    }
    else {
      mm_camera_debug_log();
      this_00 = (QCamera3Exif *)0x0;
    }
    goto LAB_000615ca;
  }
  local_a4 = 0;
  android::String8::String8(aSStack168,extraout_r1);
  android::String8::String8(aSStack172,extraout_r1_00);
  iVar1 = getExifDateTime(aSStack168,aSStack172);
  if (iVar1 == 0) {
    iVar1 = android::String8::length
                      ((char *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack168);
    pvVar3 = (void *)android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack168);
    QCamera3Exif::addEntry(this_00,0x450132,2,iVar1 + 1,pvVar3);
    iVar1 = android::String8::length
                      ((char *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack168);
    pvVar3 = (void *)android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack168);
    QCamera3Exif::addEntry(this_00,0x939003,2,iVar1 + 1,pvVar3);
    iVar1 = android::String8::length
                      ((char *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack168);
    pvVar3 = (void *)android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack168);
    QCamera3Exif::addEntry(this_00,0x949004,2,iVar1 + 1,pvVar3);
    iVar1 = android::String8::length
                      ((char *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack172);
    pvVar3 = (void *)android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack172);
    QCamera3Exif::addEntry(this_00,0xa49290,2,iVar1 + 1,pvVar3);
    iVar1 = android::String8::length
                      ((char *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack172);
    pvVar3 = (void *)android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack172);
    QCamera3Exif::addEntry(this_00,0xa59291,2,iVar1 + 1,pvVar3);
    iVar1 = android::String8::length
                      ((char *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)aSStack172);
    in_stack_ffffff40 =
         (undefined2 *)
         android::List<qcamera::ReprocessBuffer>::
         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
         ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                    *)aSStack172);
    fVar8 = (float)QCamera3Exif::addEntry(this_00,0xa69292,2,iVar1 + 1,in_stack_ffffff40);
    if (param_1 != (metadata_buffer_t *)0x0) goto LAB_00060fd4;
LAB_0006110e:
    if (*(int *)(*(int *)(DAT_000612e4 + 0x61114) + 0x24) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    fVar8 = extraout_s0;
    if (*(int *)(*(int *)(DAT_000612c0 + 0x60fb2) + 0x24) != 0) {
      in_stack_ffffff40 = (undefined2 *)(DAT_000612c4 + 0x60fbc);
      fVar8 = (float)mm_camera_debug_log();
    }
    if (param_1 == (metadata_buffer_t *)0x0) goto LAB_0006110e;
LAB_00060fd4:
    puVar2 = in_stack_ffffff40;
    if (param_1[0x86] != (metadata_buffer_t)0x0) {
      puVar2 = local_9c;
      iVar1 = getExifFocalLength((rat_t *)puVar2,fVar8);
      if (iVar1 == 0) {
        QCamera3Exif::addEntry(this_00,0xa0920a,5,1,puVar2);
      }
      else {
        puVar2 = in_stack_ffffff40;
        if (*(int *)(*(int *)(DAT_000612cc + 0x60ffa) + 0x24) != 0) {
          puVar2 = (undefined2 *)(DAT_000612d0 + 0x61008);
          mm_camera_debug_log();
        }
      }
    }
    if (param_1[0x91] != (metadata_buffer_t)0x0) {
      local_9c[0] = (undefined2)*(undefined4 *)(param_1 + 0xc690);
      puVar2 = local_9c;
      QCamera3Exif::addEntry(this_00,0x908827,3,1,puVar2);
    }
    puVar4 = puVar2;
    if (param_1[0x8f] != (metadata_buffer_t)0x0) {
      puVar4 = local_9c;
      iVar1 = getExifExpTimeInfo((rat_t *)puVar4,CONCAT44(in_stack_ffffff44,puVar2));
      if (iVar1 == 0) {
        QCamera3Exif::addEntry(this_00,0x8c829a,5,1,puVar4);
      }
      else {
        puVar4 = puVar2;
        if (*(int *)(*(int *)(DAT_000612f0 + 0x6119e) + 0x24) != 0) {
          puVar4 = (undefined2 *)(DAT_000612f4 + 0x611a8);
          mm_camera_debug_log();
        }
      }
    }
    sVar5 = strlen((char *)(param_2 + 0x40));
    puVar2 = puVar4;
    if (sVar5 != 0) {
      local_a4 = 0;
      puVar2 = local_9c;
      iVar1 = getExifGpsProcessingMethod((char *)puVar2,&local_a4,(char *)(param_2 + 0x40));
      if (iVar1 == 0) {
        QCamera3Exif::addEntry(this_00,0x1b001b,2,local_a4,puVar2);
      }
      else {
        puVar2 = puVar4;
        if (*(int *)(*(int *)(DAT_000612fc + 0x611f2) + 0x24) != 0) {
          puVar2 = (undefined2 *)(DAT_00061300 + 0x611fc);
          mm_camera_debug_log();
        }
      }
    }
    if (param_2[0x20] != (jpeg_settings_t)0x0) {
      puVar4 = &uStack158;
      iVar1 = getExifLatitude((qcamera *)local_9c,(rat_t *)puVar4,
                              (char *)*(undefined8 *)(param_2 + 0x28),
                              (double)CONCAT44(in_stack_ffffff44,puVar2));
      if (iVar1 == 0) {
        QCamera3Exif::addEntry(this_00,(uint)"_constructEPvj",5,3,local_9c);
        QCamera3Exif::addEntry(this_00,0x10001,2,2,puVar4);
      }
      else {
        puVar4 = puVar2;
        if (*(int *)(*(int *)(DAT_00061308 + 0x61246) + 0x24) != 0) {
          puVar4 = (undefined2 *)(DAT_000615e0 + 0x61250);
          mm_camera_debug_log();
        }
      }
      puVar2 = &uStack160;
      iVar1 = getExifLongitude((qcamera *)local_40,(rat_t *)puVar2,
                               (char *)*(undefined8 *)(param_2 + 0x30),
                               (double)CONCAT44(in_stack_ffffff44,puVar4));
      if (iVar1 == 0) {
        QCamera3Exif::addEntry(this_00,0x40004,5,3,local_40);
        QCamera3Exif::addEntry(this_00,(uint)"OfflineReprocChannel",2,2,puVar2);
      }
      else {
        puVar2 = puVar4;
        if (*(int *)(*(int *)(DAT_000615e8 + 0x6129e) + 0x24) != 0) {
          puVar2 = (undefined2 *)(DAT_000615ec + 0x612aa);
          mm_camera_debug_log();
        }
      }
      iVar1 = getExifAltitude(aqStack180,&rStack181,(char *)*(undefined8 *)(param_2 + 0x38),
                              (double)CONCAT44(in_stack_ffffff44,puVar2));
      if (iVar1 == 0) {
        QCamera3Exif::addEntry(this_00,0x60006,5,1,aqStack180);
        QCamera3Exif::addEntry(this_00,0x50005,1,1,&rStack181);
      }
      else if (*(int *)(*(int *)(DAT_000615f4 + 0x6134a) + 0x24) != 0) {
        mm_camera_debug_log();
      }
    }
    if (param_2[0x14] != (jpeg_settings_t)0x0) {
      iVar1 = getExifGpsDateTimeStamp
                        ((char *)local_40,0x14,(rat_t *)local_9c,*(longlong *)(param_2 + 0x18));
      if (iVar1 == 0) {
        iVar1 = __strlen_chk();
        QCamera3Exif::addEntry(this_00,0x1d001d,2,iVar1 + 1,local_40);
        QCamera3Exif::addEntry(this_00,(uint)&DAT_00070007,5,3,local_9c);
      }
      else if (*(int *)(*(int *)(DAT_00061600 + 0x613aa) + 0x24) != 0) {
        mm_camera_debug_log();
      }
    }
    if ((param_1[7] != (metadata_buffer_t)0x0) && (param_1[8] != (metadata_buffer_t)0x0)) {
      getExifExposureValue
                ((qcamera *)local_9c,*(srat_t **)(param_1 + 0x72ddc),*(int *)(param_1 + 0x72de0),
                 *(cam_rational_type_t *)(param_1 + 0x72de4));
      QCamera3Exif::addEntry(this_00,0x9a9204,10,1,local_9c);
    }
  }
  iVar1 = property_get();
  if (iVar1 < 1) {
    if (*(int *)(*(int *)(DAT_00061614 + 0x6146e) + 0x24) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    iVar1 = __strlen_chk();
    QCamera3Exif::addEntry(this_00,0x2c010f,2,iVar1 + 1,local_9c);
  }
  iVar1 = property_get();
  if (iVar1 < 1) {
    if (*(int *)(*(int *)(DAT_00061628 + 0x614bc) + 0x24) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    iVar1 = __strlen_chk();
    QCamera3Exif::addEntry(this_00,0x2d0110,2,iVar1 + 1,local_9c);
  }
  uVar9 = property_get();
  pcVar6 = (char *)((ulonglong)uVar9 >> 0x20);
  if ((int)uVar9 < 1) {
    if (*(int *)(*(int *)(DAT_0006163c + 0x6150e) + 0x24) != 0) {
      mm_camera_debug_log();
      pcVar6 = extraout_r1_02;
    }
  }
  else {
    iVar1 = __strlen_chk();
    QCamera3Exif::addEntry(this_00,0x440131,2,iVar1 + 1,local_9c);
    pcVar6 = extraout_r1_01;
  }
  if (param_2[0x61] != (jpeg_settings_t)0x0) {
    sVar5 = strlen((char *)(param_2 + 0x62));
    uVar9 = QCamera3Exif::addEntry(this_00,0x2b010e,2,sVar5 + 1,param_2 + 0x62);
    pcVar6 = (char *)((ulonglong)uVar9 >> 0x20);
    if (((int)uVar9 != 0) && (*(int *)(*(int *)(DAT_00061648 + 0x6154e) + 0x24) != 0)) {
      mm_camera_debug_log();
      pcVar6 = extraout_r1_03;
    }
  }
  if (param_3 != false) {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < 0xb4) {
      if ((iVar1 == 0) || (iVar1 != 0x5a)) {
LAB_0006158e:
        local_40[0] = 1;
      }
      else {
        local_40[0] = 6;
      }
    }
    else if (iVar1 == 0xb4) {
      local_40[0] = 3;
    }
    else {
      if (iVar1 != 0x10e) goto LAB_0006158e;
      local_40[0] = 8;
    }
    QCamera3Exif::addEntry(this_00,0x2f0112,3,1,local_40);
    QCamera3Exif::addEntry(this_00,0x770112,3,1,local_40);
    pcVar6 = extraout_r1_04;
  }
  android::String8::_String8(aSStack172,pcVar6);
  android::String8::_String8(aSStack168,extraout_r1_05);
LAB_000615ca:
  if (*piVar7 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

