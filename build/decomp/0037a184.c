// OoT3D decomp @ 0037a184  name=FUN_0037a184  size=576

void FUN_0037a184(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_54 [48];
  int local_24 [4];

  FUN_00372224(auStack_54,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x40c) == 0) goto LAB_0037a218;
    *(undefined1 *)(*(int *)(param_1 + 0x40c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x40c),auStack_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x40c),0);
  }
  else {
    if (*(int *)(param_1 + 0x410) == 0) goto LAB_0037a2d8;
    *(undefined1 *)(*(int *)(param_1 + 0x410) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x410),auStack_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x410),0);
  }
  if (*(short *)(param_1 + 0x1c) != 0) {
LAB_0037a2d8:
    sVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
    iVar3 = (int)(short)(sVar2 - *(short *)(param_1 + 0xbe));
    if (iVar3 + 0x2000U < 0x4001) {
      local_24[0] = 0;
      local_24[1] = 1;
      local_24[2] = 3;
      local_24[3] = 2;
    }
    else if (DAT_0037a3c4 < iVar3 + 0x5fffU) {
      local_24[3] = 0;
      local_24[1] = 3;
      local_24[2] = 1;
      local_24[0] = 2;
    }
    else if (iVar3 < 0x2001) {
      local_24[2] = 0;
      local_24[3] = 1;
      local_24[0] = 3;
      local_24[1] = 2;
    }
    else {
      local_24[1] = 0;
      local_24[2] = 2;
      local_24[3] = 3;
      local_24[0] = 1;
    }
    iVar3 = 0;
    do {
      iVar4 = (int)*(short *)(param_1 + local_24[iVar3] * 2 + 0x1c0);
      if (0 < iVar4) {
        FUN_0031f978(param_2,param_1,
                     (int)(short)(*(short *)(param_1 + 0xbe) + (short)local_24[iVar3] * 0x4000),
                     iVar4,iVar3 << 2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    return;
  }
LAB_0037a218:
  if (0 < *(short *)(param_1 + 0x1c0)) {
    sVar1 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
    sVar2 = *(short *)(param_1 + 0xbe);
    if ((short)(sVar1 - sVar2) < 0) {
      FUN_0031f978(param_2,param_1,(int)(short)(sVar2 + -0x2000),(int)*(short *)(param_1 + 0x1c0),0)
      ;
      FUN_0031f978(param_2,param_1,(int)(short)(*(short *)(param_1 + 0xbe) + 0x2000),
                   (int)*(short *)(param_1 + 0x1c0),4);
      return;
    }
    FUN_0031f978(param_2,param_1,(int)(short)(sVar2 + 0x2000),(int)*(short *)(param_1 + 0x1c0),0);
    FUN_0031f978(param_2,param_1,(int)(short)(*(short *)(param_1 + 0xbe) + -0x2000),
                 (int)*(short *)(param_1 + 0x1c0),4);
  }
  return;
}
