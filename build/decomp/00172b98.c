// OoT3D decomp @ 00172b98  name=FUN_00172b98  size=280

int FUN_00172b98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  iVar1 = param_2 + 0x3a58;
  iVar2 = FUN_00373074(iVar1,(int)*(char *)(param_1 + 0x22f));
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_00373074(iVar1,(int)*(char *)(param_1 + 0x22e));
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_00373074(iVar1,(int)*(char *)(param_1 + 0x22d));
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar1 = FUN_00373074(iVar1,(int)*(char *)(param_1 + 0x22c));
        iVar3 = 0;
        if (iVar1 != 0) {
          if (*(short *)(param_1 + 0x28c) == 0) {
            if (*(int *)(param_1 + 0x1d4) != DAT_00172cb0[10]) {
              FUN_003717ac(param_1 + 0x1a4,DAT_00172cb4,0x1f);
            }
            uVar4 = 1;
            iVar3 = FUN_0034c92c(param_1);
          }
          else {
            if (*(int *)(param_1 + 0x1d4) != *DAT_00172cb0) {
              FUN_003717ac(param_1 + 0x1a4,DAT_00172cb4,0x1d);
            }
            FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
            iVar3 = FUN_0034c92c(param_1);
            if (iVar3 == 1) {
              uVar4 = 2;
            }
            else {
              uVar4 = 1;
            }
          }
          FUN_0034c664(param_1,param_1 + 0x28c,5,uVar4);
        }
      }
    }
  }
  return iVar3;
}
