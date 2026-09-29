// OoT3D decomp @ 00484fec  name=FUN_00484fec  size=364

void FUN_00484fec(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;

  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      if ((int *)param_1[iVar4 * 4 + iVar3 + 8] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar4 * 4 + iVar3 + 8] + 4))();
        param_1[iVar4 * 4 + iVar3 + 8] = 0;
      }
      iVar2 = iVar3 + 1;
      param_1[iVar4 * 4 + iVar3 + 4] = 0;
      iVar3 = iVar2;
    } while (iVar2 < 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1);
  if (((*DAT_00485158 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00485158), iVar4 != 0)) {
    FUN_0036788c(DAT_0048515c);
  }
  iVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_00485168 + 0x47c);
  do {
    iVar3 = 0;
    do {
      if (param_1[iVar4 * 4 + iVar3 + 0x24] != 0) {
        FUN_00348904(uVar5);
        param_1[iVar4 * 4 + iVar3 + 0x24] = 0;
      }
      puVar1 = DAT_0048516c;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      if (param_1[iVar4 * 4 + iVar3 + 0xc] != 0) {
        uVar5 = FUN_003488e4();
        (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,uVar5);
        param_1[iVar4 * 4 + iVar3 + 0xc] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00485150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*DAT_00485170 + 0x10))((int *)*DAT_00485170,*param_1);
    return;
  }
  return;
}
