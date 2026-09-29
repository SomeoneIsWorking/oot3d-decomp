// OoT3D decomp @ 004c60c0  name=FUN_004c60c0  size=260

void FUN_004c60c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar2;
  int iVar3;
  undefined8 uVar4;

  FUN_0031b99c(param_2[1]);
  param_2[1] = 0;
  uVar1 = extraout_r1;
  iVar2 = 0;
  do {
    if ((int *)param_2[iVar2 + 0x1e] != (int *)0x0) {
      (**(code **)(*(int *)param_2[iVar2 + 0x1e] + 4))();
      uVar1 = extraout_r1_00;
    }
    iVar3 = iVar2 + 1;
    param_2[iVar2 + 0x1e] = 0;
    iVar2 = iVar3;
  } while (iVar3 < 2);
  if (*(char *)((int)param_2 + 0x85) != '\0') {
    if (((*DAT_004c61c4 & 1) == 0) &&
       (uVar4 = FUN_003679b4(DAT_004c61c4), uVar1 = (int)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0
       )) {
      FUN_0036788c(DAT_004c61c8);
      uVar1 = DAT_004c61d0;
    }
    FUN_0031025c(DAT_004c61c8,uVar1);
    FUN_002f70c4(param_2 + 2);
    *(undefined1 *)((int)param_2 + 0x85) = 0;
  }
  ObjectBankArchive_0031b124(param_2 + 2,param_2[0x20],*param_2,0);
  *(undefined1 *)((int)param_2 + 0x85) = 1;
  uVar1 = FUN_0031488c(param_1,param_2 + 2,param_3,0);
  param_2[0x1e] = uVar1;
  uVar1 = FUN_0031488c(param_1,param_2 + 2,param_3,1);
  param_2[0x1f] = uVar1;
  return;
}
