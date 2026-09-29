// OoT3D decomp @ 00463244  name=FUN_00463244  size=72

void FUN_00463244(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = *param_2;
  iVar1 = FUN_00368d94(0x1000,*param_1 << 1);
  for (iVar2 = param_1[1]; 0 < iVar2; iVar2 = iVar2 - iVar1) {
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
  }
  *param_2 = uVar3;
  return;
}
