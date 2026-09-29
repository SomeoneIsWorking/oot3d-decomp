// OoT3D decomp @ 003a0304  name=FUN_003a0304  size=128

undefined4
FUN_003a0304(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;

  puVar1 = DAT_003a0384;
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0x18)) {
    puVar6 = DAT_003a0384 + 3;
    do {
      iVar2 = *(int *)(param_3 + 0x1c) + iVar5 * 0x50;
      if ((*(byte *)(iVar2 + 0x17) & 1) != 0) {
        uVar3 = param_4[1];
        uVar4 = param_4[2];
        *puVar1 = *param_4;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        uVar3 = param_5[1];
        uVar4 = param_5[2];
        *puVar6 = *param_5;
        puVar1[4] = uVar3;
        puVar1[5] = uVar4;
        iVar2 = FUN_003188a8(iVar2 + 0x38,DAT_003a0384);
        if (iVar2 == 1) {
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_3 + 0x18));
  }
  return 0;
}
