// OoT3D decomp @ 00174cb0  name=FUN_00174cb0  size=204

void FUN_00174cb0(int param_1,int param_2)

{
  undefined1 uVar1;
  short *psVar2;
  undefined4 uVar3;

  uVar3 = DAT_00174d8c;
  psVar2 = DAT_00174d7c;
  if (*(short *)(param_2 + 0xa64) == *DAT_00174d7c) {
    if (*DAT_00174d7c == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = uVar3;
      *psVar2 = -1;
      return;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x1e);
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1c0);
    *(undefined1 *)(param_1 + 0x1c0) = uVar1;
    uVar3 = DAT_00174d80;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) ^ 1;
    *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) ^ 1;
    *psVar2 = 0;
    FUN_00372244(param_2 + 0x5fcc,0x1e,uVar3);
  }
  if ((0 < *psVar2) &&
     ((int)(*(float *)(*(int *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54) + 0x94) -
           *(float *)(param_1 + 0x30)) < DAT_00174d84)) {
    FUN_0035ae08(param_1,DAT_00174d88);
    return;
  }
  return;
}
