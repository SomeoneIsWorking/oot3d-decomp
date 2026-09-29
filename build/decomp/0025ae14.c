// OoT3D decomp @ 0025ae14  name=FUN_0025ae14  size=80

void FUN_0025ae14(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  if (*(short *)(param_1 + 0x104) == 3) {
    puVar2 = (undefined4 *)FUN_0035010c(0xc);
    uVar1 = DAT_0025ae64;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[2] = (int)*param_2;
      *puVar2 = uVar1;
      puVar2[1] = param_1;
    }
    *(undefined4 **)(param_2 + 0x10) = puVar2;
  }
  FUN_00347774(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  return;
}
