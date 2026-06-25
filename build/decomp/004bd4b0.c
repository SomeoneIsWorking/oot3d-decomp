// OoT3D decomp @ 004bd4b0  name=FUN_004bd4b0  size=456

void FUN_004bd4b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  iVar3 = FUN_0036b4ec(param_1 + 0x254);
  uVar1 = DAT_004bd678;
  uVar4 = *(uint *)(param_1 + 0x1710) & 0x400;
  if (iVar3 == 0) {
    if ((uVar4 == 0) || (iVar3 = FUN_0036b1e0(DAT_004bd688,param_1 + 0x254), iVar3 == 0)) {
      iVar3 = FUN_0036b1e0(DAT_004bd694,param_1 + 0x254);
      if (iVar3 != 0) {
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,DAT_004bd698 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
      }
    }
    else {
      sVar2 = *(short *)(DAT_004bd690 + *(char *)(DAT_004bd68c + param_1) * 6 + -4);
      if (sVar2 < 0) {
        sVar2 = -sVar2;
      }
      *(short *)(param_1 + 0x224e) = sVar2;
      FUN_00355264(param_2,param_1);
      FUN_002be958(param_2,8);
    }
  }
  else if ((uVar4 == 0) || (iVar3 = FUN_002bc168(param_2,param_1), iVar3 != 0)) {
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfffff3ff;
    *(undefined2 *)(param_1 + 0x224e) = 0;
    *(undefined *)(param_1 + 0x12ac) = 0;
    FUN_0036c5bc(param_2,0);
    FUN_0036ae48();
    FUN_00346fb0(param_1 + 0x1cc);
    FUN_0036055c(param_2,param_1,DAT_004bd67c,1);
    FUN_00360190(DAT_004bd684,uVar1,uVar1,DAT_004bd680,param_1 + 0x254,param_2,0x34,0);
    FUN_00355264(param_2,param_1);
  }
  FUN_0034b17c(param_1);
  FUN_0034ad70(uVar1,param_1,param_1 + 0x221c,(int)*(short *)(param_1 + 0xbe));
  return;
}

