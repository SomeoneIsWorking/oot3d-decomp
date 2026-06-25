// OoT3D decomp @ 002c0ca4  name=FUN_002c0ca4  size=8

void FUN_002c0ca4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = param_1 + 0x44 + iVar3 * 4;
    iVar2 = *(int *)(iVar1 + 0x77c);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x6c) = 0;
      FUN_003051cc(*(int *)(iVar1 + 0x77c) + 8);
    }
    iVar1 = param_1 + 0x44 + iVar3 * 8;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x954) = 0xff;
    *(undefined *)(iVar1 + 0x958) = 0;
  } while (iVar3 < 8);
  return;
}

