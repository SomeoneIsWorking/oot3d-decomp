// OoT3D decomp @ 0040571c  name=FUN_0040571c  size=232

undefined4
FUN_0040571c(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;

  if (param_1[1] != 0) {
    iVar1 = FUN_0040da9c();
    (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,param_5 * 4 * param_4 + iVar1 + 8,0);
    iVar2 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,DAT_00405804,0x20);
    iVar1 = DAT_00405808;
    if (iVar2 == 0x20) {
      if (0 < (int)param_5) {
        iVar2 = DAT_00405808;
        puVar3 = param_2 + -1;
        puVar4 = param_3 + -1;
        if ((param_5 & 1) != 0) {
          iVar2 = DAT_00405808 + 4;
          *param_2 = *(undefined2 *)(DAT_00405808 + 4);
          *param_3 = *(undefined2 *)(iVar1 + 6);
          puVar3 = param_2;
          puVar4 = param_3;
        }
        for (iVar1 = (int)param_5 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          puVar3[1] = *(undefined2 *)(iVar2 + 4);
          puVar4[1] = *(undefined2 *)(iVar2 + 6);
          puVar3 = puVar3 + 2;
          *puVar3 = *(undefined2 *)(iVar2 + 8);
          puVar4 = puVar4 + 2;
          *puVar4 = *(undefined2 *)(iVar2 + 10);
          iVar2 = iVar2 + 8;
        }
      }
      return 1;
    }
  }
  return 0;
}
