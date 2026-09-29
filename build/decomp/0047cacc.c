// OoT3D decomp @ 0047cacc  name=FUN_0047cacc  size=288

void FUN_0047cacc(undefined4 param_1,short *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;

  piVar2 = DAT_0047cbf0;
  local_58 = *DAT_0047cbec;
  uStack_54 = DAT_0047cbec[1];
  uStack_50 = DAT_0047cbec[2];
  uStack_4c = DAT_0047cbec[3];
  uStack_48 = DAT_0047cbec[4];
  uStack_44 = DAT_0047cbec[5];
  uStack_40 = DAT_0047cbec[6];
  local_3c = DAT_0047cbec[7];
  uStack_38 = DAT_0047cbec[8];
  uStack_34 = DAT_0047cbec[9];
  iStack_30 = DAT_0047cbec[10];
  uStack_2c = DAT_0047cbec[0xb];
  uStack_28 = DAT_0047cbec[0xc];
  uStack_24 = DAT_0047cbec[0xd];
  local_20 = DAT_0047cbec[0xe];
  uStack_1c = DAT_0047cbec[0xf];
  if (*(short *)(*DAT_0047cbf0 + 0xe72) != 0) {
    bVar5 = *(short *)(*DAT_0047cbf0 + 0xe82) != 0;
    iVar3 = 0;
    iVar4 = iStack_30;
    if (bVar5) {
      iVar3 = *(int *)(param_2 + 0xe0);
      iVar4 = 0;
    }
    if (bVar5 && 0 < iVar3) {
      do {
        if ((*(byte *)(*(int *)(param_2 + iVar4 * 2 + 0xe2) + 0x12) & 1) != 0) {
          FUN_002cf390(param_1,*(int *)(param_2 + iVar4 * 2 + 0xe2),&uStack_38);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 0xe0));
    }
    bVar5 = *(short *)(*piVar2 + 0xe80) != 0;
    iVar3 = 0;
    if (bVar5) {
      iVar3 = *(int *)(param_2 + 0x66);
      iVar4 = 0;
    }
    if (bVar5 && 0 < iVar3) {
      do {
        FUN_002cf390(param_1,*(undefined4 *)(param_2 + iVar4 * 2 + 0x68),&uStack_48);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 0x66));
    }
    bVar5 = *(short *)(*piVar2 + 0xe7e) != 0;
    sVar1 = 0;
    if (bVar5) {
      sVar1 = *param_2;
      iVar4 = 0;
    }
    if (bVar5 && 0 < sVar1) {
      do {
        FUN_002cf390(param_1,*(undefined4 *)(param_2 + iVar4 * 2 + 2),&local_58);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *param_2);
    }
  }
  return;
}
