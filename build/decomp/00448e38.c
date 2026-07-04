// OoT3D decomp @ 00448e38  name=FUN_00448e38  size=128

undefined4 FUN_00448e38(int param_1)

{
  int iVar1;
  
  if (((*UNK_00448eb8 & 1) == 0) && (iVar1 = FUN_003679b4(UNK_00448eb8), iVar1 != 0)) {
    FUN_0031ff30(UNK_00448ebc);
  }
  if (*(char *)(UNK_00448ebc + 0x488) == '\x04') {
    FUN_00452220(param_1,param_1 + 0x208c);
    return 2;
  }
  software_interrupt(10);
  return 1;
}

