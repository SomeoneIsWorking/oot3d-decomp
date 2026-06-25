// OoT3D decomp @ 004bd69c  name=FUN_004bd69c  size=304

void FUN_004bd69c(int param_1,undefined4 param_2)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (((*(short *)(param_1 + 0x2238) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x2238) + -1, *(short *)(param_1 + 0x2238) = sVar1, sVar1 == 0))
     && (*(char *)(param_1 + 0x1749) == '\x03')) {
    FUN_0036055c(param_2,param_1,DAT_004bd7cc,0);
    if (*(short *)(DAT_004bd7d0 + param_1) != 0) {
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
    }
    FUN_0034bbfc(param_1);
    uVar3 = DAT_004bd7cc;
    *(undefined4 *)(param_1 + 0x140) = DAT_004bd7d4;
    FUN_0036055c(param_2,param_1,uVar3,0);
    if (*(char *)(param_1 + 0x12bc) != *(char *)(param_1 + 0x12bd)) {
      *(uint *)(DAT_004bd7d8 + 0x15c) = (uint)*(byte *)(param_1 + 0x2a6);
      FUN_00334c44(param_1);
      uVar3 = DAT_004bd7dc;
      cVar2 = *(char *)(param_1 + 0x12bc);
      *(char *)(param_1 + 0x12bd) = cVar2;
      *(undefined4 *)(param_1 + 0x24ac) = uVar3;
      *(undefined4 *)(param_1 + 0x24b0) = uVar3;
      *(undefined4 *)(param_1 + 0x24b4) = uVar3;
      if (((cVar2 != '\x01' && cVar2 != '\b') && cVar2 != '1') && cVar2 != '\a') {
        FUN_0036b02c(param_2,param_1);
      }
      FUN_00334ba8(param_2,param_1,0,DAT_004bd7e0 + (uint)*(byte *)(param_1 + 0x12bc) * 8);
    }
    FUN_00334ba8(param_2,param_1,0,DAT_004bd7e4 + (uint)*(byte *)(param_1 + 0x12bc) * 8);
    return;
  }
  return;
}

