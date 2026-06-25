// OoT3D decomp @ 002c3d18  name=FUN_002c3d18  size=260

undefined4 FUN_002c3d18(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_2 + 0x1710) & DAT_002c3e1c) == 0) {
    if (param_4 != 0) {
      uVar2 = FUN_0034cc78(param_2,param_1);
      *(undefined4 *)(DAT_002c3e20 + 0x24) = uVar2;
      if (*(int *)(param_2 + 0x1708) == DAT_002c3e24) {
        return 1;
      }
    }
    iVar3 = FUN_0034d4b0(param_2);
    iVar4 = DAT_002c3e30;
    if (iVar3 != 0) {
      *(ushort *)(param_2 + 0x174a) = *(ushort *)(param_2 + 0x174a) | 0x41;
      return 1;
    }
    if (((*(uint *)(param_2 + 0x1710) & 0x100) == 0) &&
       (*(int *)(DAT_002c3e28 + param_2) != DAT_002c3e2c)) {
      cVar1 = *param_3;
      while (-1 < cVar1) {
        iVar3 = (**(code **)(iVar4 + *param_3 * 4))(param_2,param_1);
        if (iVar3 != 0) {
          return 1;
        }
        param_3 = param_3 + 1;
        cVar1 = *param_3;
      }
      iVar4 = (**(code **)(iVar4 + *param_3 * -4))(param_2,param_1);
      if (iVar4 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

