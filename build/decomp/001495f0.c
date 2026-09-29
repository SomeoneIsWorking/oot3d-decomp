// OoT3D decomp @ 001495f0  name=FUN_001495f0  size=148

void FUN_001495f0(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,2000);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  iVar2 = FUN_0036bc98(param_1,param_2);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x1ba);
    bVar4 = (bVar1 & 2) == 0;
    if (bVar4) {
      bVar1 = *(byte *)(param_1 + 0x114);
    }
    if (bVar4 && bVar1 == 0) {
      uVar3 = *(uint *)(param_1 + 4) & 0xfffeffff;
    }
    else {
      uVar3 = *(uint *)(param_1 + 4) | 0x10000;
    }
    *(uint *)(param_1 + 4) = uVar3;
    if (*(int *)(param_1 + 0x98) < DAT_00149688) {
      FUN_00363cb8(param_1,param_2);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00149684;
  }
  return;
}
