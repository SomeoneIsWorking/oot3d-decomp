// OoT3D decomp @ 004a1f74  name=FUN_004a1f74  size=284

undefined4 FUN_004a1f74(undefined4 *param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  puVar3 = (undefined4 *)*param_1;
  iVar4 = 6;
  iVar2 = 0;
  do {
    iVar1 = param_1[3] - iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar1 + param_1[2];
    }
    iVar4 = iVar4 + -1;
    puVar3[iVar2 + 3] = *(undefined4 *)(param_1[1] + iVar1 * 4);
    puVar3[iVar2 + 9] = param_1[6] * puVar3[2] + *(int *)(param_1[1] + iVar1 * 4);
    iVar2 = iVar2 + 1;
  } while (iVar4 != 0);
  iVar2 = param_1[3];
  param_1[3] = iVar2 + 1;
  if (iVar2 + 1 == param_1[2]) {
    param_1[3] = 0;
  }
  param_1[4] = (uint)(*param_2 >> 0xf);
  *puVar3 = param_2;
  if (param_1[6] == 0x100) {
    iVar2 = param_1[7];
    bVar5 = iVar2 != 1;
    if (!bVar5) {
      iVar2 = param_1[5];
    }
    if (bVar5 || iVar2 != 0) goto LAB_004a2088;
    (*(code *)*DAT_004a2090)(puVar3);
  }
  if (param_1[6] == 0x200) {
    iVar2 = param_1[7];
    bVar5 = iVar2 != 1;
    if (!bVar5) {
      iVar2 = param_1[5];
    }
    if (bVar5 || iVar2 != 0) goto LAB_004a2088;
    (*(code *)*DAT_004a2094)(puVar3);
  }
  iVar2 = param_1[6];
  bVar5 = iVar2 == 0x400;
  if (bVar5) {
    iVar2 = param_1[7];
  }
  bVar6 = bVar5 && iVar2 == 1;
  if (bVar5 && iVar2 == 1) {
    bVar6 = param_1[5] == 0;
  }
  if (bVar6) {
    (*(code *)*DAT_004a2098)(puVar3);
  }
LAB_004a2088:
  return puVar3[3];
}
