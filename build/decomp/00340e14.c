// OoT3D decomp @ 00340e14  name=FUN_00340e14  size=280

void FUN_00340e14(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_4;

  piVar1 = DAT_00340f2c;
  local_4 = param_4;
  DAT_00340f2c[1] = DAT_00340f2c[1] + 1;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_00340f30 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_00340f34 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00340f34), iVar2 != 0)) {
    FUN_0036788c(DAT_00340f38);
  }
  puVar6 = &local_4;
  piVar7 = *(int **)(DAT_00340f38 + 0x17c);
  piVar7[2] = param_3;
  while( true ) {
    puVar5 = (undefined4 *)*puVar6;
    puVar3 = puVar6 + 1;
    if (puVar5 == (undefined4 *)0x0) break;
    puVar6 = puVar6 + 2;
    uVar4 = ObjectBankArchive_00358ef8(param_2 + 0x10,*puVar3);
    uVar4 = (**(code **)(*piVar7 + 8))(piVar7,uVar4,param_3 != 0);
    *puVar5 = uVar4;
    *piVar1 = *piVar1 + 1;
  }
  piVar7[2] = 0;
  return;
}
