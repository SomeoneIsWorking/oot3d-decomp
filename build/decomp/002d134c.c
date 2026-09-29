// OoT3D decomp @ 002d134c  name=FUN_002d134c  size=100

void FUN_002d134c(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;

  puVar1 = DAT_002d13b0;
  puVar3 = (undefined4 *)*DAT_002d13b0;
  if (puVar3 + param_2 + 2 < (undefined4 *)DAT_002d13b0[1]) {
    if (param_2 != 0) {
      uVar2 = param_2 - 1;
      *puVar3 = 0;
      puVar3[1] = param_1 | uVar2 * 0x100000;
      if ((uVar2 & 1) != 0) {
        uVar2 = param_2;
      }
      *puVar1 = puVar3 + 2;
      *puVar1 = puVar3 + 2 + uVar2;
      return;
    }
  }
  else {
    *DAT_002d13b0 = (undefined4 *)DAT_002d13b0[1];
  }
  return;
}
