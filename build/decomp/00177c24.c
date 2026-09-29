// OoT3D decomp @ 00177c24  name=FUN_00177c24  size=116

void FUN_00177c24(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    if (*(short *)(DAT_00177c98 + param_1) == 0) {
      *(undefined1 *)(param_1 + 0x956) = 0;
      FUN_003725e0(param_2);
      uVar2 = DAT_00177c9c;
    }
    else {
      FUN_00370778(param_2);
      uVar2 = DAT_00177ca0;
    }
    *(undefined4 *)(param_1 + 0x8a8) = uVar2;
  }
  return;
}
