// OoT3D decomp @ 00346fb0  name=FUN_00346fb0  size=176

void FUN_00346fb0(int param_1)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  FUN_0031b99c(*(undefined4 *)(param_1 + 4));
  iVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = extraout_r1;
  do {
    iVar4 = param_1 + iVar3 * 4;
    piVar1 = *(int **)(iVar4 + 0x78);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      uVar2 = extraout_r1_00;
    }
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar4 + 0x78) = 0;
  } while (iVar3 < 2);
  if (*(char *)(param_1 + 0x85) != '\0') {
    if (((*DAT_00347060 & 1) == 0) &&
       (uVar5 = FUN_003679b4(DAT_00347060), uVar2 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0
       )) {
      FUN_0036788c(DAT_00347064);
      uVar2 = DAT_0034706c;
    }
    FUN_0031025c(DAT_00347064,uVar2);
    FUN_002f70c4(param_1 + 8);
    *(undefined *)(param_1 + 0x85) = 0;
  }
  return;
}

