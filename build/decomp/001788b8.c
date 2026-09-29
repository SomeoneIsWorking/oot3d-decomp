// OoT3D decomp @ 001788b8  name=FUN_001788b8  size=260

void FUN_001788b8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;

  uVar4 = (undefined2)DAT_001789bc;
  *(undefined2 *)(param_1 + 0x36) = uVar4;
  *(undefined2 *)(param_1 + 0xbe) = uVar4;
  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_001789cc;
  iVar1 = DAT_001789c0;
  if ((int)*(short *)(DAT_001789c0 + 100) < *(int *)(DAT_001789c0 + -0x620)) {
    uVar4 = (undefined2)DAT_001789c8;
  }
  else {
    uVar4 = (undefined2)DAT_001789c4;
  }
  *(undefined2 *)(param_1 + 0x116) = uVar4;
  iVar3 = FUN_0036bc98(param_1,param_2);
  if (iVar3 == 0) {
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601)
       && (*(int *)(param_1 + 0x98) < DAT_001789d0)) {
      FUN_0036bb28(DAT_001789d4,param_1,param_2);
    }
    if ((*(ushort *)(iVar1 + 0x8c) & 1) == 0) {
      *(ushort *)(param_1 + 0x8b0) = *(ushort *)(param_1 + 0x8b0) & 0xfffe | 2;
      FUN_0034bf5c(param_1,3,param_1 + 0x8b4);
      *(undefined4 *)(param_1 + 0x840) = DAT_001789d8;
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x840) = uVar2;
    *(undefined2 *)(param_1 + 0x8b2) = 0;
    iVar3 = (int)*(short *)(iVar1 + 100);
    if (*(int *)(iVar1 + -0x620) < (int)*(short *)(iVar1 + 100)) {
      iVar3 = *(int *)(iVar1 + -0x620);
    }
    *(int *)(iVar1 + -0x620) = iVar3;
  }
  return;
}
