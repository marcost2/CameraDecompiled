
/* qcamera::QCameraParameters::updateParameters(android::String8 const&, bool&) */

int __thiscall
qcamera::QCameraParameters::updateParameters(QCameraParameters *this,String8 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  void *pvVar19;
  char *pcVar20;
  int *piVar21;
  QCameraParameters aQStack3536 [464];
  QCameraCommon aQStack3072 [208];
  int local_b30 [5];
  String8 aSStack2844 [28];
  pthread_mutex_t apStack2816 [110];
  undefined auStack164 [28];
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_28;
  
  piVar21 = *(int **)(DAT_000eaab8 + 0xea734);
  local_28 = *piVar21;
  this[0x230] = (QCameraParameters)0x0;
  QCameraParameters(aQStack3536,param_1);
  pvVar19 = *(void **)(this + 0x1e0);
  if (pvVar19 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000eaac0 + 0xea8cc) + 0x20) == 0) {
      iVar1 = 0;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000eaac8 + 0xea8e8,0x15ba,DAT_000eaac4 + 0xea8e0);
      iVar1 = 0;
    }
    goto LAB_000eb1a6;
  }
  iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
  if (iVar1 == 0) {
    android::VectorImpl::clear();
    __aeabi_memclr8(pvVar19,0x10f);
    *(undefined *)((int)pvVar19 + 0x117aec) = 0;
    *(undefined *)((int)pvVar19 + 0x106974) = 0;
    *(undefined *)((int)pvVar19 + 0xe1f78) = 0;
    *(undefined *)((int)pvVar19 + 0xcfa74) = 0;
    *(undefined *)((int)pvVar19 + 0xcfa08) = 0;
    *(undefined *)((int)pvVar19 + 0xc36b0) = 0;
    *(undefined *)((int)pvVar19 + 0xb86e0) = 0;
    *(undefined *)((int)pvVar19 + 0xb7340) = 0;
    *(undefined *)((int)pvVar19 + 0xb72e8) = 0;
    *(undefined *)((int)pvVar19 + 0x772c8) = 0;
    MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
  }
  setDualCameraMode(this,aQStack3536);
  iVar1 = setPreviewSize(this,aQStack3536);
  iVar2 = setVideoSize(this,aQStack3536);
  iVar3 = setPictureSize(this,aQStack3536);
  iVar4 = setPreviewFormat(this,aQStack3536);
  iVar5 = setPictureFormat(this,aQStack3536);
  iVar6 = setJpegQuality(this,aQStack3536);
  iVar7 = setOrientation(this,aQStack3536);
  iVar8 = setRotation(this,aQStack3536);
  iVar9 = setVideoRotation(this,aQStack3536);
  setNoDisplayMode(this,aQStack3536);
  iVar10 = setZslMode(this,aQStack3536);
  setZslAttributes(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  if (iVar4 != 0) {
    iVar1 = iVar4;
  }
  if (iVar5 != 0) {
    iVar1 = iVar5;
  }
  if (iVar6 != 0) {
    iVar1 = iVar6;
  }
  if (iVar7 != 0) {
    iVar1 = iVar7;
  }
  if (iVar8 != 0) {
    iVar1 = iVar8;
  }
  if (iVar9 != 0) {
    iVar1 = iVar9;
  }
  if (iVar10 != 0) {
    iVar1 = iVar10;
  }
  pcVar20 = *(char **)(DAT_000eaabc + 0xea8b0);
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  if (pcVar11 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar20);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar20,pcVar11);
  }
  iVar2 = setSceneSelectionMode(this,aQStack3536);
  iVar3 = setRecordingHint(this,aQStack3536);
  setRdiMode(this,aQStack3536);
  setSecureMode(this,aQStack3536);
  setPreviewFrameRate(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  iVar2 = setPreviewFpsRange(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if ((pcVar11 != (char *)0x0) &&
     (((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)) &&
      (iVar2 = setAutoExposure(this,pcVar11), iVar2 == 0)))) {
    iVar2 = iVar1;
  }
  iVar1 = setEffect(this,aQStack3536);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  iVar1 = setBrightness(this,aQStack3536);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  iVar1 = setZoom(this,aQStack3536);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  iVar1 = setSharpness(this,aQStack3536);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  iVar1 = setSaturation(this,aQStack3536);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  iVar1 = setContrast(this,aQStack3536);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar1 = setFocusMode(this,pcVar11), iVar1 == 0)) {
    iVar1 = iVar2;
  }
  iVar2 = setISOValue(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setContinuousISO(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setExposureTime(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setSkinToneEnhancement(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar2 = setFlash(this,pcVar11), iVar2 == 0)) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if ((pcVar11 != (char *)0x0) &&
     (((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)) &&
      (iVar1 = setAecLock(this,pcVar11), iVar1 == 0)))) {
    iVar1 = iVar2;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar2 = setAwbLock(this,pcVar11), iVar2 == 0)) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar1 = setLensShadeValue(this,pcVar11), iVar1 == 0)) {
    iVar1 = iVar2;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if ((pcVar11 != (char *)0x0) &&
     (((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)) &&
      (iVar2 = setMCEValue(this,pcVar11), iVar2 == 0)))) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar1 = setDISValue(this,pcVar11), iVar1 == 0)) {
    iVar1 = iVar2;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar2 = setAntibanding(this,pcVar11), iVar2 == 0)) {
    iVar2 = iVar1;
  }
  iVar1 = setExposureCompensation(this,aQStack3536);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if ((pcVar11 != (char *)0x0) &&
     (((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)) &&
      (iVar1 = setWhiteBalance(this,pcVar11), iVar1 == 0)))) {
    iVar1 = iVar2;
  }
  iVar2 = setHDRMode(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setHDRNeed1x(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setManualWhiteBalance(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setSceneMode(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setFocusAreas(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setFocusPosition(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setMeteringAreas(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar2 = setSelectableZoneAf(this,pcVar11), iVar2 == 0)) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar1 = setRedeyeReduction(this,pcVar11), iVar1 == 0)) {
    iVar1 = iVar2;
  }
  setAEBracket(this,aQStack3536);
  setAutoHDR(this,aQStack3536);
  setGpsLocation(this,aQStack3536);
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if ((pcVar11 != (char *)0x0) &&
     (((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)) &&
      (iVar2 = setWaveletDenoise(this,pcVar11), iVar2 == 0)))) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if ((pcVar11 != (char *)0x0) &&
     ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) {
    uVar12 = android::CameraParameters::getInt((char *)aQStack3536);
    iVar1 = setFaceRecognition(this,pcVar11,uVar12);
    if (iVar1 == 0) {
      iVar1 = iVar2;
    }
  }
  setFlip(this,aQStack3536);
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)))) &&
     (iVar2 = setVideoHDR(this,pcVar11), iVar2 == 0)) {
    iVar2 = iVar1;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar1 = iVar2;
  if ((pcVar11 != (char *)0x0) &&
     (((pcVar20 == (char *)0x0 || (iVar3 = strcmp(pcVar11,pcVar20), iVar3 != 0)) &&
      (iVar1 = setVtEnable(this,pcVar11), iVar1 == 0)))) {
    iVar1 = iVar2;
  }
  iVar2 = setAFBracket(this,aQStack3536);
  setReFocus(this,aQStack3536);
  iVar3 = setChromaFlash(this,aQStack3536);
  iVar4 = setTruePortrait(this,aQStack3536);
  iVar5 = setOptiZoom(this,aQStack3536);
  iVar6 = setBurstLEDOnPeriod(this,aQStack3536);
  setRetroActiveBurstNum(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  if (iVar4 != 0) {
    iVar1 = iVar4;
  }
  if (iVar5 != 0) {
    iVar1 = iVar5;
  }
  if (iVar6 != 0) {
    iVar1 = iVar6;
  }
  pcVar11 = *(char **)(DAT_000eb210 + 0xeaedc);
  puVar13 = (undefined8 *)android::CameraParameters::get((char *)aQStack3536);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = &local_88;
    local_88 = 0;
    uStack128 = 0;
    uStack56 = 0;
    uStack52 = 0;
    local_48 = 0;
    uStack64 = 0;
    local_3c = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    local_78 = 0;
    uStack112 = 0;
    property_get(DAT_000eb218 + 0xeaf30,puVar13,*(undefined4 *)(DAT_000eb214 + 0xeaf2a));
  }
  android::CameraParameters::set((CameraParameters *)this,pcVar11,(char *)puVar13);
  iVar2 = setTintlessValue(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = _ZN7qcamera17QCameraParameters10setCDSModeERKS0_(this,(char *)aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setTemporalDenoise(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setAutoDcOffsetMode(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = setManualDcOffset(this,aQStack3536);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = iVar1;
  if (pcVar11 != (char *)0x0) {
    if (pcVar20 != (char *)0x0) {
      iVar3 = strcmp(pcVar11,pcVar20);
      if (iVar3 == 0) {
        iVar3 = strcmp(pcVar11,*(char **)(DAT_000eb220 + 0xeafcc));
        if (iVar3 != 0) goto LAB_000eafd8;
      }
      else {
        this[0x230] = (QCameraParameters)0x1;
      }
    }
    iVar2 = setVideoStabilization(this,pcVar11);
    if (iVar2 == 0) {
      iVar2 = iVar1;
    }
  }
LAB_000eafd8:
  pcVar11 = (char *)android::CameraParameters::get((char *)aQStack3536);
  pcVar20 = (char *)android::CameraParameters::get((char *)this);
  iVar3 = iVar2;
  if (((pcVar11 != (char *)0x0) &&
      ((pcVar20 == (char *)0x0 || (iVar1 = strcmp(pcVar11,pcVar20), iVar1 != 0)))) &&
     (iVar3 = setCacheVideoBuffers(this,pcVar11), iVar3 == 0)) {
    iVar3 = iVar2;
  }
  iVar1 = setInitialExposureIndex(this,aQStack3536);
  iVar2 = setInstantCapture(this,aQStack3536);
  iVar4 = setInstantAEC(this,aQStack3536);
  iVar5 = handleMotDebugParams(this,aQStack3536);
  setLiveSnapshotSize(this,aQStack3536);
  iVar6 = setJpegThumbnailSize(this,aQStack3536);
  iVar7 = setStatsDebugMask(this);
  iVar8 = setPAAF(this);
  iVar9 = setMobicat(this);
  iVar10 = setSeeMore(this,aQStack3536);
  iVar14 = setStillMore(this,aQStack3536);
  iVar15 = setCustomParams(this);
  iVar16 = setNoiseReductionMode(this,aQStack3536);
  setLongshotParam(this,aQStack3536);
  iVar17 = setLedCalibration(this,aQStack3536);
  setQuadraCfa(this,aQStack3536);
  setVideoBatchSize(this);
  local_48 = 0;
  uStack64 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  local_88 = 0;
  uStack128 = 0;
  local_3c = 0;
  uStack56 = 0;
  uStack52 = 0;
  property_get(DAT_000eb22c + 0xeb0f4,&local_88,*(undefined4 *)(DAT_000eb228 + 0xeb0ee));
  iVar18 = atoi((char *)&local_88);
  this[0x7a5] = (QCameraParameters)(0 < iVar18);
  if (iVar1 != 0) {
    iVar3 = iVar1;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  if (iVar4 != 0) {
    iVar3 = iVar4;
  }
  if (iVar5 != 0) {
    iVar3 = iVar5;
  }
  if (iVar6 != 0) {
    iVar3 = iVar6;
  }
  if (iVar7 != 0) {
    iVar3 = iVar7;
  }
  if (iVar8 != 0) {
    iVar3 = iVar8;
  }
  if (iVar9 != 0) {
    iVar3 = iVar9;
  }
  if (iVar10 != 0) {
    iVar3 = iVar10;
  }
  if (iVar14 != 0) {
    iVar3 = iVar14;
  }
  if (iVar15 != 0) {
    iVar3 = iVar15;
  }
  if (iVar16 != 0) {
    iVar3 = iVar16;
  }
  if (iVar17 != 0) {
    iVar3 = iVar17;
  }
  if (iVar18 < 1) {
    *(undefined4 *)(this + 0x7a8) = 0;
  }
  iVar1 = updateFlash(SUB41(this,0));
  if (iVar1 != 0) {
    iVar3 = iVar1;
  }
  iVar1 = setAdvancedCaptureMode(this);
  if (iVar1 != 0) {
    iVar3 = iVar1;
  }
  iVar1 = 0;
  if (iVar3 != 0) {
    MotParamStateMachine::cancelSequence();
    iVar1 = iVar3;
  }
LAB_000eb1a6:
  *param_2 = (bool)this[0x230];
  deinit(aQStack3536);
  pthread_cond_destroy((pthread_cond_t *)auStack164);
  pthread_mutex_destroy(apStack2816);
  android::String8::_String8(aSStack2844);
  local_b30[0] = *(int *)(DAT_000eb230 + 0xeb1d4) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)local_b30);
  QCameraCommon::_QCameraCommon(aQStack3072);
  android::CameraParameters::_CameraParameters((CameraParameters *)aQStack3536);
  if (*piVar21 == local_28) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

