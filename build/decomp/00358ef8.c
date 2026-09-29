// OoT3D decomp @ 00358ef8  name=ObjectBankArchive_00358ef8  size=268

undefined4 ObjectBankArchive_00358ef8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if (param_1[7] == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1[3] + param_1[7] * 0x10);
  }
  if (param_2 < uVar3) {
    if (*(int *)(param_1[0x13] + param_2 * 4) == 0) {
      iVar2 = (**(code **)(*(int *)*DAT_00359008 + 0xc))
                        ((int *)*DAT_00359008,0x48,DAT_00359004,0x1bc);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = FUN_00320458(iVar2,*param_1 +
                                   *(int *)(param_1[5] +
                                           *(int *)(*(int *)(param_1[3] + param_1[7] * 0x10 + 4) +
                                                    *param_1 + param_2 * 4) * 4));
      }
      *(undefined4 *)(param_1[0x13] + param_2 * 4) = uVar1;
      if (((*DAT_0035900c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0035900c), iVar2 != 0)) {
        FUN_0036788c(DAT_00359010);
      }
      *(undefined4 *)(*(int *)(param_1[0x13] + param_2 * 4) + 0x38) = DAT_0035901c;
      CmbRes_0031ff64(*(undefined4 *)(param_1[0x13] + param_2 * 4),1);
    }
    uVar1 = *(undefined4 *)(param_1[0x13] + param_2 * 4);
  }
  return uVar1;
}
