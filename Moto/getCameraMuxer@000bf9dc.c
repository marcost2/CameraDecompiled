
/* qcamera::QCameraMuxer::getCameraMuxer(qcamera::QCameraMuxer**, unsigned int) */

void qcamera::QCameraMuxer::getCameraMuxer(QCameraMuxer **param_1,uint param_2)

{
  QCameraMuxer *pQVar1;
  QCameraMuxer **ppQVar2;
  
  *param_1 = (QCameraMuxer *)0x0;
  ppQVar2 = *(QCameraMuxer ***)(DAT_000bfa28 + 0xbf9ec);
  pQVar1 = *ppQVar2;
  if (pQVar1 == (QCameraMuxer *)0x0) {
    pQVar1 = (QCameraMuxer *)operator_new(0xd8);
    pQVar1 = (QCameraMuxer *)QCameraMuxer(pQVar1,param_2);
    *ppQVar2 = pQVar1;
  }
  *param_1 = pQVar1;
  if (*(int *)(*(int *)(DAT_000bfa2c + 0xbfa08) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bfa34 + 0xbfa22,0x71,DAT_000bfa30 + 0xbfa16,*ppQVar2);
  }
  return;
}

