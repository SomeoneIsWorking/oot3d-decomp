// OoT3D decomp @ 004c2b14  name=FUN_004c2b14  size=236

void FUN_004c2b14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float local_20;
  float local_1c;
  float local_18;

  if ((*(short *)(param_1 + 0x1c) < 3) || (*(short *)(param_1 + 0x1c) == 0x14)) {
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x280;
  }
  uVar1 = DAT_004c2c00;
  local_20 = (float)FUN_003738a8(DAT_004c2c00);
  local_20 = local_20 + *(float *)(param_1 + 0x28);
  local_1c = (float)FUN_003738a8(uVar1);
  local_1c = local_1c + *(float *)(param_1 + 0x2c);
  local_18 = (float)FUN_003738a8(uVar1);
  local_18 = local_18 + *(float *)(param_1 + 0x30);
  FUN_00374280(param_2,&local_20,DAT_004c2c08 + -0xc,DAT_004c2c08,DAT_004c2c04 + -4,DAT_004c2c04);
  uVar1 = DAT_004c2c10;
  if ((*(ushort *)(param_1 + 0x90) & 3) != 0) {
    if (0xbfffffff < (uint)*(float *)(param_1 + 100)) {
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_004c2c14;
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
      return;
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_004c2c0c;
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  return;
}
