// OoT3D decomp @ 00307bd8  name=FUN_00307bd8  size=164

void FUN_00307bd8(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  iVar2 = DAT_00307c7c;
  if ((int)param_3 < 1) {
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 8);
  *puVar3 = *param_6;
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = 0x80000000;
  }
  puVar4 = puVar3 + 2;
  puVar3[1] = uVar1 | iVar2 + param_3 * 0x100000 | param_2 | param_5 << 0x10;
  if (0 < (int)(param_3 - 1)) {
    puVar3 = puVar3 + 1;
    if ((param_3 & 1) == 0) {
      param_6 = param_6 + 1;
      *puVar4 = *param_6;
      puVar3 = puVar4;
    }
    for (iVar2 = (int)(param_3 - 1) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar3[1] = param_6[1];
      param_6 = param_6 + 2;
      puVar3 = puVar3 + 2;
      *puVar3 = *param_6;
    }
    puVar4 = puVar4 + (param_3 - 1);
  }
  puVar3 = puVar4;
  if ((param_3 & 1) == 0) {
    puVar3 = puVar4 + 1;
    *puVar4 = 0;
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  return;
}
