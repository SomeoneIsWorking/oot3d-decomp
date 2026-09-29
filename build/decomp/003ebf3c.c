// OoT3D decomp @ 003ebf3c  name=FUN_003ebf3c  size=236

void FUN_003ebf3c(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
  iVar4 = FUN_003731e0(param_1 + 0x1bc);
  uVar3 = DAT_003ec030;
  if (iVar4 == 0) {
    iVar4 = FUN_003736fc(DAT_003ec034,DAT_003ec030,param_1 + 0x1bc);
    uVar5 = DAT_003ec038;
    if ((iVar4 != 0) ||
       (iVar4 = FUN_003736fc(DAT_003ec03c,uVar3,param_1 + 0x1bc), uVar5 = DAT_003ec040, iVar4 != 0))
    {
      FUN_0037547c(uVar5,param_1 + 0x28,4,DAT_003ec048,DAT_003ec048,DAT_003ec044);
      return;
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 0x38c);
    if (sVar1 < 1) {
      if (sVar1 < -0x77) goto LAB_003ebfac;
      sVar2 = -1;
    }
    else {
      if (0x77 < sVar1) {
LAB_003ebfac:
        FUN_003705a0(DAT_003ec02c,DAT_003ec028,param_1 + 0x248);
        return;
      }
      sVar2 = 1;
    }
    *(short *)(param_1 + 0x38c) = sVar1 + sVar2;
  }
  return;
}
