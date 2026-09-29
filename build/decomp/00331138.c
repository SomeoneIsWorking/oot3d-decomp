// OoT3D decomp @ 00331138  name=FUN_00331138  size=328

void FUN_00331138(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  bVar5 = *(char *)(param_1 + 0x500c) != -1;
  if (bVar5) {
    param_3 = (uint)*(byte *)(param_1 + 0x4c36);
  }
  bVar6 = param_3 != 0;
  if (bVar5 && bVar6) {
    param_3 = (uint)*(byte *)(param_1 + 0x5012);
  }
  if ((bVar5 && bVar6) && param_3 != 0) {
    iVar4 = *(int *)(param_2 + *(char *)(param_1 + 0x500c) * 4);
    iVar3 = *(int *)(param_2 + *(char *)(param_1 + 0x4c30) * 4);
    if (iVar3 != -1 && iVar4 != -1) {
      iVar2 = 0;
      if (*(short *)(param_1 + 0x4c44) != 0) {
        do {
          iVar1 = FUN_0032d604(*(undefined4 *)(*(int *)(param_1 + 0x4c48) + iVar2 * 0x98 + 4),iVar3)
          ;
          if (iVar1 != 0) goto LAB_003311d8;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x4c44));
      }
      iVar2 = -1;
LAB_003311d8:
      iVar3 = 0;
      if (*(short *)(param_1 + 0x5020) != 0) {
        do {
          iVar1 = FUN_0032d604(*(undefined4 *)(*(int *)(param_1 + 0x5024) + iVar3 * 0x98 + 4),iVar4)
          ;
          if (iVar1 != 0) goto LAB_00331228;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x5020));
      }
      iVar3 = -1;
LAB_00331228:
      if (iVar2 != -1 && iVar3 != -1) {
        if (*DAT_00331280 == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x4c48) + iVar2 * 0x98 + 8) =
               *(undefined4 *)(*(int *)(param_1 + 0x5024) + iVar3 * 0x98 + 8);
          FUN_003586ec();
          return;
        }
      }
    }
  }
  return;
}
