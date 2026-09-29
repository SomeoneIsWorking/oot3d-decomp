// OoT3D decomp @ 002d4c30  name=FUN_002d4c30  size=244

void FUN_002d4c30(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;

  puVar1 = DAT_002d4d24;
  if (((*DAT_002d4d24 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002d4d24), iVar2 != 0)) {
    FUN_0036788c(DAT_002d4d28);
  }
  *(undefined4 *)*param_1 = *(undefined4 *)(DAT_002d4d28 + 0x174);
  if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002d4d24), iVar2 != 0)) {
    FUN_0036788c(DAT_002d4d28);
  }
  piVar3 = *(int **)(DAT_002d4d28 + 0x17c);
  piVar3[2] = *param_1;
  iVar2 = ObjectBankArchive_00358ef8(param_2,param_4);
  param_1[param_3 + 0x19] = iVar2;
  iVar2 = (**(code **)(*piVar3 + 8))(piVar3,iVar2,1);
  param_1[param_3 + 0x1d] = iVar2;
  FUN_0047d548(iVar2,2);
  piVar3[2] = 0;
  return;
}
