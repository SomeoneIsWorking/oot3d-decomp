// OoT3D decomp @ 003f5598  name=FUN_003f5598  size=248

void FUN_003f5598(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float fVar5;

  fVar5 = DAT_003f5694;
  if (*(int *)(DAT_003f5690 + 0x10) != 0) {
    fVar5 = DAT_003f5698;
  }
  if (*(float *)(param_1 + 0x98) <= fVar5 * DAT_003f569c) {
    if ((int)*(float *)(param_1 + 0x98) < DAT_003f56a0) {
      cVar3 = '\x02';
      goto LAB_003f5604;
    }
    iVar4 = FUN_0036cd8c();
    if (iVar4 != 0) {
      cVar3 = '\x01';
      goto LAB_003f5604;
    }
  }
  cVar3 = '\0';
LAB_003f5604:
  uVar2 = DAT_003f56a8;
  uVar1 = DAT_003f56a4;
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003f56a4;
    FUN_00369674(param_1,2);
    *(undefined1 *)(param_1 + 0x989) = 0x96;
    *(undefined2 *)(param_1 + 0x97c) = *(undefined2 *)(param_1 + 0x92);
    *(char *)(param_1 + 0x98a) = cVar3;
    return;
  }
  if (*(ushort *)(param_1 + 0x984) <= *(ushort *)(param_1 + 0x986)) {
    *(undefined2 *)(param_1 + 0x986) = 0;
    *(short *)(param_1 + 0x97a) = *(short *)(param_1 + 0x97a) + -0x8000;
    FUN_00369674(param_1,1);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return;
  }
  *(ushort *)(param_1 + 0x986) = *(ushort *)(param_1 + 0x986) + 1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  return;
}
