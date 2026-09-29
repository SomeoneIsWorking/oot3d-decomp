// OoT3D decomp @ 00298de4  name=FUN_00298de4  size=256

void FUN_00298de4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float local_20;
  float local_1c;
  float local_18;

  uVar1 = DAT_00298eec;
  if (*DAT_00298ee4 == '\x0f') {
    local_20 = *(float *)(param_1 + 0x28) - DAT_00298ee8;
    local_1c = (float)FUN_003738a8(DAT_00298eec);
    local_1c = local_1c + *(float *)(param_1 + 0x2c);
    local_18 = (float)FUN_003738a8(uVar1);
    local_18 = local_18 + *(float *)(param_1 + 0x30);
    FUN_003642f4(param_2,&local_20,DAT_00298ef0,DAT_00298ef0,0xaa,0,200,0xff,100,0xaa,0,0xff,0,1,0xb
                 ,1);
    return;
  }
  if (*DAT_00298ee4 != ' ') {
    if (*(short *)(param_1 + 0x1c4) != 0) {
      *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + -1;
    }
    return;
  }
  FUN_00374428(param_1);
  return;
}
