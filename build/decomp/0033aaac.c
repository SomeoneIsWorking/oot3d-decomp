// OoT3D decomp @ 0033aaac  name=FUN_0033aaac  size=176

undefined4 FUN_0033aaac(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = param_1[3];
  }
  if (*param_1 != 0 && param_2 < uVar1) {
    if (*(int *)(param_1[2] + param_2 * 4) == 0) {
      uVar1 = FUN_00363c10(param_1[4] + 0x3a58,(int)(short)*(undefined4 *)(param_1[1] + param_2 * 8)
                          );
      if (((uVar1 & 0xff) < 0x13) &&
         (iVar2 = param_1[4] + (uVar1 & 0xff) * 0x80, *(int *)(DAT_0033ab5c + iVar2) != 0)) {
        iVar2 = iVar2 + 0x3a5c;
      }
      else {
        iVar2 = 0;
      }
      uVar3 = ObjectBankArchive_00372c90(iVar2 + 0x10,*(undefined4 *)(param_1[1] + param_2 * 8 + 4))
      ;
      *(undefined4 *)(param_1[2] + param_2 * 4) = uVar3;
    }
    return *(undefined4 *)(param_1[2] + param_2 * 4);
  }
  return 0;
}
