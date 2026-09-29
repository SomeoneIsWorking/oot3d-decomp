// OoT3D decomp @ 003e48f8  name=FUN_003e48f8  size=456

void FUN_003e48f8(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  uVar5 = DAT_003e4ac4;
  iVar6 = *(int *)(DAT_003e4ac0 + param_2);
  FUN_0036f4e4(DAT_003e4ac4,param_1 + 0x1a8);
  *(undefined2 *)(param_1 + 0x244) = 0;
  *(undefined2 *)(param_1 + 0x240) = 0;
  *(undefined2 *)(param_1 + 0x23c) = 0;
  FUN_0036fc20(DAT_003e4acc,DAT_003e4ac8,param_1 + 0x1e4);
  uVar1 = DAT_003e4ad0;
  FUN_00375a18(param_1 + 0xbc,(int)*(short *)(param_1 + 0x246),5,DAT_003e4ad0,0);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x248),5,uVar1,0);
  FUN_00375a18(param_1 + 0xc0,(int)*(short *)(param_1 + 0x24a),5,uVar1,0);
  FUN_00370734(param_1 + 0x1a8);
  *(undefined2 *)(param_1 + 0x2ac) = 0xffff;
  iVar4 = FUN_0036bc98(param_1,param_2);
  if (iVar4 == 0) {
    sVar2 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
    if (*(int *)(param_1 + 0x98) <= DAT_003e4adc) {
      if (sVar2 < 0) {
        sVar2 = -sVar2;
      }
      if (sVar2 < 0x4300) {
        if (*(char *)(param_1 + 0x22c) == '\0') {
          if ((*(uint *)(iVar6 + 0x1714) & 0x1000000) != 0) {
            uVar3 = FUN_00371808(param_2,DAT_003e4ae0,0xffffff9d,param_1,0);
            *(undefined2 *)(param_1 + 0x2ac) = uVar3;
            FUN_0037073c(param_2,0x2a);
            *(undefined2 *)(param_1 + 0x232) = 0;
            *(undefined4 *)(param_1 + 0x250) = uVar5;
            *(uint *)(iVar6 + 0x1714) = *(uint *)(iVar6 + 0x1714) | 0x800000;
            *(undefined4 *)(param_1 + 0x1a4) = DAT_003e4ae4;
            return;
          }
          if (*(int *)(param_1 + 0x98) < DAT_003e4ae8) {
            *(uint *)(iVar6 + 0x1714) = *(uint *)(iVar6 + 0x1714) | 0x800000;
          }
        }
        FUN_0036bb28(DAT_003e4aec,param_1,param_2);
        return;
      }
    }
  }
  else {
    uVar5 = DAT_003e4ad4;
    if (*(short *)(param_1 + 0x22e) == 5) {
      uVar5 = DAT_003e4ad8;
    }
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  }
  return;
}
