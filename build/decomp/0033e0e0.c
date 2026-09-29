// OoT3D decomp @ 0033e0e0  name=FUN_0033e0e0  size=428

void FUN_0033e0e0(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  if (param_1[10] != '\0') {
    FUN_003685a0(param_1 + 0x3c);
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if (param_1[1] == '\x7f') {
      FUN_0035021c();
    }
    else {
      (**(code **)(**(int **)(param_1 + 4) + 4))();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 1;
  param_1[1] = (char)param_5;
  if (param_5 == 0x7f) {
    uVar1 = FUN_0036a924(param_2,param_3,1,0x37);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar2 = FUN_00363c10(param_3 + 0x3a58,1);
    if (((uVar2 & 0xff) < 0x13) &&
       (param_3 = param_3 + (uVar2 & 0xff) * 0x80, *(int *)(DAT_0033e28c + param_3) != 0)) {
      param_3 = param_3 + 0x3a5c;
    }
    else {
      param_3 = 0;
    }
    param_4 = param_3 + 0x10;
  }
  else {
    if (((*DAT_0033e290 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0033e290), iVar3 != 0)) {
      FUN_0036788c(DAT_0033e294);
    }
    piVar4 = *(int **)(DAT_0033e294 + 0x17c);
    piVar4[2] = *(int *)(param_2 + 0x178);
    uVar1 = ObjectBankArchive_00358ef8(param_4,param_5);
    uVar1 = (**(code **)(*piVar4 + 8))(piVar4,uVar1,1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    piVar4[2] = 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_5 == 0x7f) && (iVar3 = FUN_00372f0c(param_4,0x22), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    FUN_00372d94(param_1 + 0x3c,iVar3);
    param_1[0x4c] = 1;
    param_1[10] = 1;
  }
  return;
}
