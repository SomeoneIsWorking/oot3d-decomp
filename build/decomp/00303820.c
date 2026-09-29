// OoT3D decomp @ 00303820  name=FUN_00303820  size=136

void FUN_00303820(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  puVar1 = DAT_003038ac;
  if (param_1 == 0) {
    return;
  }
  piVar4 = (int *)*DAT_003038a8;
  for (iVar5 = *piVar4; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x24)) {
    iVar3 = 0;
    do {
      puVar2 = (undefined4 *)(iVar5 + iVar3 * 0x10);
      if (puVar2[3] == param_1) {
        if (piVar4[2] == iVar5) {
          *(uint *)*puVar1 = *(uint *)*puVar1 | 1;
        }
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return;
}
