// OoT3D decomp @ 003053d8  name=FUN_003053d8  size=36

undefined4 FUN_003053d8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = param_2 < 0;
  bVar3 = param_2 == 0;
  bVar2 = bVar1;
  if (!bVar1) {
    param_3 = *(int *)(param_1 + 0xd8);
    bVar2 = param_3 - param_2 < 0;
    bVar3 = param_3 == param_2;
  }
  if (!bVar3 && bVar2 == (!bVar1 && SBORROW4(param_3,param_2))) {
    return *(undefined4 *)(*(int *)(param_1 + 0xd4) + param_2 * 4);
  }
  return 0;
}

