
/* WARNING: Unknown calling convention yet parameter storage is locked */

int __ThumbV7PILongThunk_dprintf(int __fd,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = dprintf(__fd,__fmt);
  return iVar1;
}

