// OoT3D decomp @ 00372c90  name=ObjectBankArchive_00372c90  size=180

undefined4 ObjectBankArchive_00372c90(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if (param_1[10] == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1[3] + param_1[10] * 0x10);
  }
  if (param_2 < uVar3) {
    if (*(int *)(param_1[0x15] + param_2 * 4) == 0) {
      iVar2 = (**(code **)(*(int *)*DAT_00372d48 + 0xc))
                        ((int *)*DAT_00372d48,0x54,DAT_00372d44,0x224);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = FUN_003012b4(iVar2,*param_1 +
                                   *(int *)(param_1[5] +
                                           *(int *)(*(int *)(param_1[3] + param_1[10] * 0x10 + 4) +
                                                    *param_1 + param_2 * 4) * 4),0);
      }
      *(undefined4 *)(param_1[0x15] + param_2 * 4) = uVar1;
    }
    uVar1 = *(undefined4 *)(param_1[0x15] + param_2 * 4);
  }
  return uVar1;
}
