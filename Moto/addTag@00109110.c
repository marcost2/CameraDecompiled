
/* qcamera::MotMakernote::addTag(unsigned short, unsigned short, unsigned int, void*) */

undefined4 __thiscall
qcamera::MotMakernote::addTag
          (MotMakernote *this,ushort param_1,ushort param_2,uint param_3,void *param_4)

{
  short sVar1;
  ushort *puVar2;
  undefined8 *__ptr;
  void *__dest;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  ushort *__ptr_00;
  uint __size;
  
  pthread_mutex_lock((pthread_mutex_t *)this);
  if (this[0x10] == (MotMakernote)0x0) {
    if (*(ushort **)(this + 6) != (ushort *)0x0) {
      puVar2 = (ushort *)0x0;
      __ptr_00 = *(ushort **)(this + 6);
      do {
        puVar5 = *(ushort **)(__ptr_00 + 6);
        if ((*__ptr_00 == param_1) && (*(short *)(this + 4) != 0)) {
          if (puVar2 == (ushort *)0x0) {
            *(ushort **)(this + 6) = puVar5;
          }
          else {
            *(ushort **)(puVar2 + 6) = puVar5;
          }
          free(*(void **)(__ptr_00 + 4));
          free(__ptr_00);
          *(short *)(this + 4) = *(short *)(this + 4) + -1;
          break;
        }
        puVar2 = __ptr_00;
        __ptr_00 = puVar5;
      } while (puVar5 != (ushort *)0x0);
    }
    __ptr = (undefined8 *)malloc(0x10);
    if (__ptr == (undefined8 *)0x0) {
      __android_log_print(6,DAT_00109238 + 0x109200,DAT_0010923c + 0x109202,DAT_00109240 + 0x109204)
      ;
      uVar6 = 0xfffffff4;
    }
    else {
      *__ptr = 0;
      __ptr[1] = 0;
      __size = *(byte *)(DAT_00109244 + (uint)param_2 + 0x10919b) * param_3;
      __dest = malloc(__size);
      *(void **)(__ptr + 1) = __dest;
      if (__dest == (void *)0x0) {
        __android_log_print(6,DAT_00109248 + 0x109218,DAT_0010924c + 0x10921a,
                            DAT_00109250 + 0x10921c);
        free(__ptr);
        uVar6 = 0xfffffff4;
      }
      else {
        *(uint *)((int)__ptr + 4) = param_3;
        *(ushort *)((int)__ptr + 2) = param_2;
        *(ushort *)__ptr = param_1;
        __aeabi_memcpy8(__dest,param_4,__size);
        *(short *)(this + 4) = *(short *)(this + 4) + 1;
        puVar3 = *(undefined4 **)(this + 6);
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined8 **)(this + 6) = __ptr;
          puVar4 = puVar3;
        }
        else {
          do {
            puVar4 = puVar3 + 3;
            puVar3 = (undefined4 *)*puVar4;
          } while (puVar3 != (undefined4 *)0x0);
          *puVar4 = __ptr;
        }
        sVar1 = (short)puVar4;
        if (4 < __size) {
          sVar1 = *(short *)(this + 10) + (short)__size;
        }
        if (4 < __size) {
          *(short *)(this + 10) = sVar1;
        }
        uVar6 = 0;
      }
    }
  }
  else {
    __android_log_print(6,DAT_0010922c + 0x109130,DAT_00109230 + 0x109132,DAT_00109234 + 0x109134);
    uVar6 = 0xffffffed;
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return uVar6;
}

