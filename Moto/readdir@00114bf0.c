
/* WARNING: Unknown calling convention yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0011a9b0)();
  return pdVar1;
}

