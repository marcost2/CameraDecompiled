
void _GLOBAL__sub_I_VendorTagDescriptor_cpp(void)

{
  undefined4 *puVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_0010d8d0 + 0x10d894);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  iVar2 = DAT_0010d8d8 + 0x10d8a2;
  __cxa_atexit(DAT_0010d8d4 + 0x10d8a4,__mutex,iVar2);
  puVar1 = (undefined4 *)(DAT_0010d8dc + 0x10d8b0);
  *puVar1 = 0;
  __cxa_atexit(*(undefined4 *)(DAT_0010d8e0 + 0x10d8b6),puVar1,iVar2);
  puVar1 = (undefined4 *)(DAT_0010d8e4 + 0x10d8c2);
  *puVar1 = 0;
  __cxa_atexit(*(undefined4 *)(DAT_0010d8e8 + 0x10d8c8),puVar1,iVar2);
  return;
}

