// OoT3D decomp @ 0011c4c8  name=FUN_0011c4c8  size=196

void FUN_0011c4c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  if ((int)*(float *)(param_1 + 0x1e0) == 3) {
    FUN_00375bcc(param_1,DAT_0011c58c);
    *(undefined1 *)(param_1 + 0xdf1) = 1;
  }
  else if ((int)*(float *)(param_1 + 0x1e0) == 6) {
    *(undefined1 *)(param_1 + 0xdf1) = 0;
  }
  if ((*(byte *)(param_1 + 0xe20) & 4) == 0) {
    iVar2 = FUN_003731e0(param_1 + 0x1a4);
    if (iVar2 != 0) {
      FUN_00366318(param_1);
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0xe20) = *(byte *)(param_1 + 0xe20) & 0xf9;
    FUN_00375c08(DAT_0011c598,*(float *)(param_1 + 0x1e0) - DAT_0011c590,DAT_0011c594,DAT_0011c594,
                 param_1 + 0x1a4,0,3);
    *(byte *)(param_1 + 0xe20) = *(byte *)(param_1 + 0xe20) & 0xfb;
    *(undefined1 *)(param_1 + 0xdf0) = 5;
    uVar1 = DAT_0011c59c;
    *(undefined1 *)(param_1 + 0xdf1) = 0;
    *(undefined4 *)(param_1 + 0xdf4) = uVar1;
  }
  return;
}
