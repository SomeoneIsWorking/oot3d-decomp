// OoT3D decomp @ 001135a0  name=FUN_001135a0  size=220

void FUN_001135a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  uVar1 = DAT_00113684;
  uVar3 = DAT_00113680;
  if (*DAT_0011367c == '\f') {
    *(short *)(param_1 + 0x36) =
         (short)(int)(*(float *)(DAT_00113688 + *(short *)(param_1 + 0x1c) * 0xc + 4) * DAT_0011368c
                     );
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,uVar3,uVar2,uVar3,param_1 + 0x1a4,0,2);
    uVar3 = DAT_00113690;
    *(undefined1 *)(param_1 + 0xc41) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xc35) == '\0') {
      return;
    }
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,uVar3,uVar2,uVar3,param_1 + 0x1a4,0,2);
    uVar3 = DAT_00113694;
    *(undefined1 *)(param_1 + 0xc41) = 0;
  }
  *(undefined4 *)(param_1 + 0xc04) = uVar3;
  return;
}
