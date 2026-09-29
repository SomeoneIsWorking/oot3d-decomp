// OoT3D decomp @ 00372f38  name=FUN_00372f38  size=292

int FUN_00372f38(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_8;
  undefined4 local_4;

  local_4 = param_4;
  local_8 = param_3;
  iVar7 = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_0037305c + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_00373060 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00373060), iVar2 != 0)) {
    FUN_0036788c(DAT_00373064);
  }
  piVar1 = DAT_00373070;
  puVar6 = &local_8;
  piVar8 = *(int **)(DAT_00373064 + 0x17c);
  piVar8[2] = *(int *)(param_1 + 0x178);
  while( true ) {
    puVar5 = (undefined4 *)*puVar6;
    piVar3 = puVar6 + 1;
    if (puVar5 == (undefined4 *)0x0) break;
    puVar6 = puVar6 + 2;
    if (-1 < *piVar3) {
      uVar4 = ObjectBankArchive_00358ef8(param_2 + 0x10);
      uVar4 = (**(code **)(*piVar8 + 8))(piVar8,uVar4,1);
      *puVar5 = uVar4;
      iVar7 = iVar7 + 1;
      *piVar1 = *piVar1 + 1;
    }
  }
  piVar8[2] = 0;
  if (0 < iVar7) {
    piVar1[1] = piVar1[1] + 1;
  }
  return param_2 + 0x10;
}
