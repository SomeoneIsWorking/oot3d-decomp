// OoT3D decomp @ 00452ee4  name=FUN_00452ee4  size=240

void FUN_00452ee4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;

  bVar8 = *(char *)(param_1 + 0x14) != '\0';
  cVar1 = '\0';
  if (bVar8) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 0x1b8);
  }
  if (bVar8 && cVar1 != '\0') {
    iVar6 = 0;
    iVar5 = 0;
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc);
    if (0 < *(int *)(*piVar7 + 8)) {
      do {
        piVar2 = (int *)(piVar7[4] + iVar5 * 0xc);
        iVar4 = *(int *)(*(int *)(piVar2[2] + 0xc) + (short)(ushort)*(byte *)(*piVar2 + 2) * 0x1cc);
        iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x1bc);
        if (iVar3 < *(int *)(iVar4 + 8)) {
          if (iVar3 < *(int *)(iVar4 + 0xc)) {
            iVar4 = iVar3 * 0x18 + 0x58 + iVar4;
          }
          else {
            iVar4 = 0;
          }
          if (*(char *)(iVar4 + 2) == '\x04') {
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x5c) + iVar5 * 0x18;
            FUN_002dd4c0(param_1 + 0x60,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1bc),
                         *(int *)(param_1 + 0x10) + 0x200,
                         *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar6 * 4));
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar5 < *(int *)(*piVar7 + 8));
    }
  }
  return;
}
