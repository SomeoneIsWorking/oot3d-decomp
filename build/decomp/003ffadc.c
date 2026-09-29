// OoT3D decomp @ 003ffadc  name=FUN_003ffadc  size=148

void FUN_003ffadc(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;

  iVar2 = param_4 + (uint)CARRY4(param_6,param_3);
  bVar3 = (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) < param_6 + param_3;
  if ((int)-(iVar2 + (uint)bVar3) < 0 != (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar3))) {
    param_6 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) - param_3;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  (**(code **)*puVar1)
            (puVar1,param_2,*(uint *)(param_1 + 8) + param_3,
             param_4 + (uint)CARRY4(*(uint *)(param_1 + 8),param_3),param_5,param_6);
  return;
}
