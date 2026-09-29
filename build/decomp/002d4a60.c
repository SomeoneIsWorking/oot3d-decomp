// OoT3D decomp @ 002d4a60  name=FUN_002d4a60  size=112

void FUN_002d4a60(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = DAT_002d4ad0;
  piVar3 = *(int **)(param_1 + 0xc);
  if (param_2 <= *(int *)(*piVar3 + 0x1c)) {
    FUN_002d15d8(DAT_002d4ad0,*(undefined4 *)(param_1 + 0x1c));
    iVar2 = *piVar3;
    FUN_002d14c4(uVar1,*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x14),param_2,param_3);
    FUN_0030e604(100000,0);
    return;
  }
  return;
}
