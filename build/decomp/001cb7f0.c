// OoT3D decomp @ 001cb7f0  name=FUN_001cb7f0  size=164

void FUN_001cb7f0(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  uVar3 = uRam001cb898;
  uVar2 = uRam001cb894;
  if ((*(short *)(param_1 + 0x1c4) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x1c4) + -1, *(short *)(param_1 + 0x1c4) = sVar1, sVar1 == 0)) {
    iVar4 = FUN_003705a0(*(float *)(param_1 + 0xc),uVar3,param_1 + 0x2c);
    if (iVar4 != 0) {
      FUN_0036beac(param_2,*(undefined1 *)(param_1 + 0x1c8));
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = uRam001cb89c;
      return;
    }
  }
  else {
    iVar4 = FUN_003705a0(*(float *)(param_1 + 0xc) + fRam001cb8a0,uVar3,param_1 + 0x2c);
    if (iVar4 != 0) {
      iVar5 = (int)*(short *)(param_1 + 0x1c4);
      iVar4 = iVar5;
      if (iVar5 < 0x28) {
        iVar4 = 3;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffc7ffff | 0x10000000;
      if (0x27 < iVar5) {
        if (iVar4 < 100) {
          *(undefined4 *)(param_1 + 0x24) = 2;
          return;
        }
        iVar4 = 1;
      }
      *(int *)(param_1 + 0x24) = iVar4;
      return;
    }
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefe7ffff | 0x200000;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return;
}
